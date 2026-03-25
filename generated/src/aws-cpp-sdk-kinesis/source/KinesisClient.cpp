/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/kinesis/KinesisClient.h>
#include <aws/kinesis/KinesisEndpointProvider.h>
#include <aws/kinesis/KinesisErrorMarshaller.h>
#include <aws/kinesis/model/AddTagsToStreamRequest.h>
#include <aws/kinesis/model/CreateStreamRequest.h>
#include <aws/kinesis/model/DecreaseStreamRetentionPeriodRequest.h>
#include <aws/kinesis/model/DeleteResourcePolicyRequest.h>
#include <aws/kinesis/model/DeleteStreamRequest.h>
#include <aws/kinesis/model/DeregisterStreamConsumerRequest.h>
#include <aws/kinesis/model/DescribeAccountSettingsRequest.h>
#include <aws/kinesis/model/DescribeLimitsRequest.h>
#include <aws/kinesis/model/DescribeStreamConsumerRequest.h>
#include <aws/kinesis/model/DescribeStreamRequest.h>
#include <aws/kinesis/model/DescribeStreamSummaryRequest.h>
#include <aws/kinesis/model/DisableEnhancedMonitoringRequest.h>
#include <aws/kinesis/model/EnableEnhancedMonitoringRequest.h>
#include <aws/kinesis/model/GetRecordsRequest.h>
#include <aws/kinesis/model/GetResourcePolicyRequest.h>
#include <aws/kinesis/model/GetShardIteratorRequest.h>
#include <aws/kinesis/model/IncreaseStreamRetentionPeriodRequest.h>
#include <aws/kinesis/model/ListShardsRequest.h>
#include <aws/kinesis/model/ListStreamConsumersRequest.h>
#include <aws/kinesis/model/ListStreamsRequest.h>
#include <aws/kinesis/model/ListTagsForResourceRequest.h>
#include <aws/kinesis/model/ListTagsForStreamRequest.h>
#include <aws/kinesis/model/MergeShardsRequest.h>
#include <aws/kinesis/model/PutRecordRequest.h>
#include <aws/kinesis/model/PutRecordsRequest.h>
#include <aws/kinesis/model/PutResourcePolicyRequest.h>
#include <aws/kinesis/model/RegisterStreamConsumerRequest.h>
#include <aws/kinesis/model/RemoveTagsFromStreamRequest.h>
#include <aws/kinesis/model/SplitShardRequest.h>
#include <aws/kinesis/model/StartStreamEncryptionRequest.h>
#include <aws/kinesis/model/StopStreamEncryptionRequest.h>
#include <aws/kinesis/model/SubscribeToShardRequest.h>
#include <aws/kinesis/model/TagResourceRequest.h>
#include <aws/kinesis/model/UntagResourceRequest.h>
#include <aws/kinesis/model/UpdateAccountSettingsRequest.h>
#include <aws/kinesis/model/UpdateMaxRecordSizeRequest.h>
#include <aws/kinesis/model/UpdateShardCountRequest.h>
#include <aws/kinesis/model/UpdateStreamModeRequest.h>
#include <aws/kinesis/model/UpdateStreamWarmThroughputRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Kinesis;
using namespace Aws::Kinesis::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Kinesis {
const char SERVICE_NAME[] = "kinesis";
const char ALLOCATION_TAG[] = "KinesisClient";
}  // namespace Kinesis
}  // namespace Aws
const char* KinesisClient::GetServiceName() { return SERVICE_NAME; }
const char* KinesisClient::GetAllocationTag() { return ALLOCATION_TAG; }

KinesisClient::KinesisClient(const Kinesis::KinesisClientConfiguration& clientConfiguration,
                             std::shared_ptr<KinesisEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KinesisEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KinesisClient::KinesisClient(const AWSCredentials& credentials, std::shared_ptr<KinesisEndpointProviderBase> endpointProvider,
                             const Kinesis::KinesisClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KinesisEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KinesisClient::KinesisClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<KinesisEndpointProviderBase> endpointProvider,
                             const Kinesis::KinesisClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KinesisEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
KinesisClient::KinesisClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KinesisEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KinesisClient::KinesisClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KinesisEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KinesisClient::KinesisClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KinesisEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
KinesisClient::~KinesisClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<KinesisEndpointProviderBase>& KinesisClient::accessEndpointProvider() { return m_endpointProvider; }

void KinesisClient::init(const Kinesis::KinesisClientConfiguration& config) {
  AWSClient::SetServiceClientName("Kinesis");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "kinesis");
}

void KinesisClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
KinesisClient::InvokeOperationOutcome KinesisClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                            Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AddTagsToStreamOutcome KinesisClient::AddTagsToStream(const AddTagsToStreamRequest& request) const {
  return AddTagsToStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStreamOutcome KinesisClient::CreateStream(const CreateStreamRequest& request) const {
  return CreateStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DecreaseStreamRetentionPeriodOutcome KinesisClient::DecreaseStreamRetentionPeriod(
    const DecreaseStreamRetentionPeriodRequest& request) const {
  return DecreaseStreamRetentionPeriodOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourcePolicyOutcome KinesisClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteStreamOutcome KinesisClient::DeleteStream(const DeleteStreamRequest& request) const {
  return DeleteStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterStreamConsumerOutcome KinesisClient::DeregisterStreamConsumer(const DeregisterStreamConsumerRequest& request) const {
  return DeregisterStreamConsumerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAccountSettingsOutcome KinesisClient::DescribeAccountSettings(const DescribeAccountSettingsRequest& request) const {
  return DescribeAccountSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLimitsOutcome KinesisClient::DescribeLimits(const DescribeLimitsRequest& request) const {
  return DescribeLimitsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStreamOutcome KinesisClient::DescribeStream(const DescribeStreamRequest& request) const {
  return DescribeStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStreamConsumerOutcome KinesisClient::DescribeStreamConsumer(const DescribeStreamConsumerRequest& request) const {
  return DescribeStreamConsumerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStreamSummaryOutcome KinesisClient::DescribeStreamSummary(const DescribeStreamSummaryRequest& request) const {
  return DescribeStreamSummaryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableEnhancedMonitoringOutcome KinesisClient::DisableEnhancedMonitoring(const DisableEnhancedMonitoringRequest& request) const {
  return DisableEnhancedMonitoringOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableEnhancedMonitoringOutcome KinesisClient::EnableEnhancedMonitoring(const EnableEnhancedMonitoringRequest& request) const {
  return EnableEnhancedMonitoringOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRecordsOutcome KinesisClient::GetRecords(const GetRecordsRequest& request) const {
  return GetRecordsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourcePolicyOutcome KinesisClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  return GetResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetShardIteratorOutcome KinesisClient::GetShardIterator(const GetShardIteratorRequest& request) const {
  return GetShardIteratorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

IncreaseStreamRetentionPeriodOutcome KinesisClient::IncreaseStreamRetentionPeriod(
    const IncreaseStreamRetentionPeriodRequest& request) const {
  return IncreaseStreamRetentionPeriodOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListShardsOutcome KinesisClient::ListShards(const ListShardsRequest& request) const {
  return ListShardsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStreamConsumersOutcome KinesisClient::ListStreamConsumers(const ListStreamConsumersRequest& request) const {
  return ListStreamConsumersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStreamsOutcome KinesisClient::ListStreams(const ListStreamsRequest& request) const {
  return ListStreamsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome KinesisClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForStreamOutcome KinesisClient::ListTagsForStream(const ListTagsForStreamRequest& request) const {
  return ListTagsForStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

MergeShardsOutcome KinesisClient::MergeShards(const MergeShardsRequest& request) const {
  return MergeShardsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRecordOutcome KinesisClient::PutRecord(const PutRecordRequest& request) const {
  return PutRecordOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRecordsOutcome KinesisClient::PutRecords(const PutRecordsRequest& request) const {
  return PutRecordsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourcePolicyOutcome KinesisClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  return PutResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterStreamConsumerOutcome KinesisClient::RegisterStreamConsumer(const RegisterStreamConsumerRequest& request) const {
  return RegisterStreamConsumerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveTagsFromStreamOutcome KinesisClient::RemoveTagsFromStream(const RemoveTagsFromStreamRequest& request) const {
  return RemoveTagsFromStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SplitShardOutcome KinesisClient::SplitShard(const SplitShardRequest& request) const {
  return SplitShardOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartStreamEncryptionOutcome KinesisClient::StartStreamEncryption(const StartStreamEncryptionRequest& request) const {
  return StartStreamEncryptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopStreamEncryptionOutcome KinesisClient::StopStreamEncryption(const StopStreamEncryptionRequest& request) const {
  return StopStreamEncryptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SubscribeToShardOutcome KinesisClient::SubscribeToShard(SubscribeToShardRequest& request) const {
  AWS_OPERATION_GUARD(SubscribeToShard);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SubscribeToShard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SubscribeToShard, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SubscribeToShard, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SubscribeToShard",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SubscribeToShardOutcome>(
      [&]() -> SubscribeToShardOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SubscribeToShard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        request.SetResponseStreamFactory([&] {
          request.GetEventStreamDecoder().Reset();
          return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder());
        });
        if (!request.GetHeadersReceivedEventHandler()) {
          request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
            AWS_CHECK_PTR("SubscribeToShard", response);
            if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
              initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
            }
          });
        }
        return SubscribeToShardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome KinesisClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome KinesisClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAccountSettingsOutcome KinesisClient::UpdateAccountSettings(const UpdateAccountSettingsRequest& request) const {
  return UpdateAccountSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMaxRecordSizeOutcome KinesisClient::UpdateMaxRecordSize(const UpdateMaxRecordSizeRequest& request) const {
  return UpdateMaxRecordSizeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateShardCountOutcome KinesisClient::UpdateShardCount(const UpdateShardCountRequest& request) const {
  return UpdateShardCountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateStreamModeOutcome KinesisClient::UpdateStreamMode(const UpdateStreamModeRequest& request) const {
  return UpdateStreamModeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateStreamWarmThroughputOutcome KinesisClient::UpdateStreamWarmThroughput(const UpdateStreamWarmThroughputRequest& request) const {
  return UpdateStreamWarmThroughputOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
