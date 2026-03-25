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
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/firehose/FirehoseClient.h>
#include <aws/firehose/FirehoseEndpointProvider.h>
#include <aws/firehose/FirehoseErrorMarshaller.h>
#include <aws/firehose/model/CreateDeliveryStreamRequest.h>
#include <aws/firehose/model/DeleteDeliveryStreamRequest.h>
#include <aws/firehose/model/DescribeDeliveryStreamRequest.h>
#include <aws/firehose/model/ListDeliveryStreamsRequest.h>
#include <aws/firehose/model/ListTagsForDeliveryStreamRequest.h>
#include <aws/firehose/model/PutRecordBatchRequest.h>
#include <aws/firehose/model/PutRecordRequest.h>
#include <aws/firehose/model/StartDeliveryStreamEncryptionRequest.h>
#include <aws/firehose/model/StopDeliveryStreamEncryptionRequest.h>
#include <aws/firehose/model/TagDeliveryStreamRequest.h>
#include <aws/firehose/model/UntagDeliveryStreamRequest.h>
#include <aws/firehose/model/UpdateDestinationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Firehose;
using namespace Aws::Firehose::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Firehose {
const char SERVICE_NAME[] = "firehose";
const char ALLOCATION_TAG[] = "FirehoseClient";
}  // namespace Firehose
}  // namespace Aws
const char* FirehoseClient::GetServiceName() { return SERVICE_NAME; }
const char* FirehoseClient::GetAllocationTag() { return ALLOCATION_TAG; }

FirehoseClient::FirehoseClient(const Firehose::FirehoseClientConfiguration& clientConfiguration,
                               std::shared_ptr<FirehoseEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FirehoseErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<FirehoseEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FirehoseClient::FirehoseClient(const AWSCredentials& credentials, std::shared_ptr<FirehoseEndpointProviderBase> endpointProvider,
                               const Firehose::FirehoseClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FirehoseErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<FirehoseEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FirehoseClient::FirehoseClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<FirehoseEndpointProviderBase> endpointProvider,
                               const Firehose::FirehoseClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FirehoseErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<FirehoseEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
FirehoseClient::FirehoseClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FirehoseErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<FirehoseEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FirehoseClient::FirehoseClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FirehoseErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<FirehoseEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FirehoseClient::FirehoseClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FirehoseErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<FirehoseEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
FirehoseClient::~FirehoseClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<FirehoseEndpointProviderBase>& FirehoseClient::accessEndpointProvider() { return m_endpointProvider; }

void FirehoseClient::init(const Firehose::FirehoseClientConfiguration& config) {
  AWSClient::SetServiceClientName("Firehose");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "firehose");
}

void FirehoseClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
FirehoseClient::InvokeOperationOutcome FirehoseClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateDeliveryStreamOutcome FirehoseClient::CreateDeliveryStream(const CreateDeliveryStreamRequest& request) const {
  return CreateDeliveryStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDeliveryStreamOutcome FirehoseClient::DeleteDeliveryStream(const DeleteDeliveryStreamRequest& request) const {
  return DeleteDeliveryStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDeliveryStreamOutcome FirehoseClient::DescribeDeliveryStream(const DescribeDeliveryStreamRequest& request) const {
  return DescribeDeliveryStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDeliveryStreamsOutcome FirehoseClient::ListDeliveryStreams(const ListDeliveryStreamsRequest& request) const {
  return ListDeliveryStreamsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForDeliveryStreamOutcome FirehoseClient::ListTagsForDeliveryStream(const ListTagsForDeliveryStreamRequest& request) const {
  return ListTagsForDeliveryStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRecordOutcome FirehoseClient::PutRecord(const PutRecordRequest& request) const {
  return PutRecordOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRecordBatchOutcome FirehoseClient::PutRecordBatch(const PutRecordBatchRequest& request) const {
  return PutRecordBatchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDeliveryStreamEncryptionOutcome FirehoseClient::StartDeliveryStreamEncryption(
    const StartDeliveryStreamEncryptionRequest& request) const {
  return StartDeliveryStreamEncryptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopDeliveryStreamEncryptionOutcome FirehoseClient::StopDeliveryStreamEncryption(const StopDeliveryStreamEncryptionRequest& request) const {
  return StopDeliveryStreamEncryptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagDeliveryStreamOutcome FirehoseClient::TagDeliveryStream(const TagDeliveryStreamRequest& request) const {
  return TagDeliveryStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagDeliveryStreamOutcome FirehoseClient::UntagDeliveryStream(const UntagDeliveryStreamRequest& request) const {
  return UntagDeliveryStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDestinationOutcome FirehoseClient::UpdateDestination(const UpdateDestinationRequest& request) const {
  return UpdateDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
