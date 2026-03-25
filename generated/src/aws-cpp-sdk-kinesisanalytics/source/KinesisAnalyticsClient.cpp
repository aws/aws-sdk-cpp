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
#include <aws/kinesisanalytics/KinesisAnalyticsClient.h>
#include <aws/kinesisanalytics/KinesisAnalyticsEndpointProvider.h>
#include <aws/kinesisanalytics/KinesisAnalyticsErrorMarshaller.h>
#include <aws/kinesisanalytics/model/AddApplicationCloudWatchLoggingOptionRequest.h>
#include <aws/kinesisanalytics/model/AddApplicationInputProcessingConfigurationRequest.h>
#include <aws/kinesisanalytics/model/AddApplicationInputRequest.h>
#include <aws/kinesisanalytics/model/AddApplicationOutputRequest.h>
#include <aws/kinesisanalytics/model/AddApplicationReferenceDataSourceRequest.h>
#include <aws/kinesisanalytics/model/CreateApplicationRequest.h>
#include <aws/kinesisanalytics/model/DeleteApplicationCloudWatchLoggingOptionRequest.h>
#include <aws/kinesisanalytics/model/DeleteApplicationInputProcessingConfigurationRequest.h>
#include <aws/kinesisanalytics/model/DeleteApplicationOutputRequest.h>
#include <aws/kinesisanalytics/model/DeleteApplicationReferenceDataSourceRequest.h>
#include <aws/kinesisanalytics/model/DeleteApplicationRequest.h>
#include <aws/kinesisanalytics/model/DescribeApplicationRequest.h>
#include <aws/kinesisanalytics/model/DiscoverInputSchemaRequest.h>
#include <aws/kinesisanalytics/model/ListApplicationsRequest.h>
#include <aws/kinesisanalytics/model/ListTagsForResourceRequest.h>
#include <aws/kinesisanalytics/model/StartApplicationRequest.h>
#include <aws/kinesisanalytics/model/StopApplicationRequest.h>
#include <aws/kinesisanalytics/model/TagResourceRequest.h>
#include <aws/kinesisanalytics/model/UntagResourceRequest.h>
#include <aws/kinesisanalytics/model/UpdateApplicationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::KinesisAnalytics;
using namespace Aws::KinesisAnalytics::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace KinesisAnalytics {
const char SERVICE_NAME[] = "kinesisanalytics";
const char ALLOCATION_TAG[] = "KinesisAnalyticsClient";
}  // namespace KinesisAnalytics
}  // namespace Aws
const char* KinesisAnalyticsClient::GetServiceName() { return SERVICE_NAME; }
const char* KinesisAnalyticsClient::GetAllocationTag() { return ALLOCATION_TAG; }

KinesisAnalyticsClient::KinesisAnalyticsClient(const KinesisAnalytics::KinesisAnalyticsClientConfiguration& clientConfiguration,
                                               std::shared_ptr<KinesisAnalyticsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<KinesisAnalyticsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KinesisAnalyticsClient::KinesisAnalyticsClient(const AWSCredentials& credentials,
                                               std::shared_ptr<KinesisAnalyticsEndpointProviderBase> endpointProvider,
                                               const KinesisAnalytics::KinesisAnalyticsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<KinesisAnalyticsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KinesisAnalyticsClient::KinesisAnalyticsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<KinesisAnalyticsEndpointProviderBase> endpointProvider,
                                               const KinesisAnalytics::KinesisAnalyticsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<KinesisAnalyticsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
KinesisAnalyticsClient::KinesisAnalyticsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KinesisAnalyticsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KinesisAnalyticsClient::KinesisAnalyticsClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KinesisAnalyticsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KinesisAnalyticsClient::KinesisAnalyticsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KinesisAnalyticsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
KinesisAnalyticsClient::~KinesisAnalyticsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<KinesisAnalyticsEndpointProviderBase>& KinesisAnalyticsClient::accessEndpointProvider() { return m_endpointProvider; }

void KinesisAnalyticsClient::init(const KinesisAnalytics::KinesisAnalyticsClientConfiguration& config) {
  AWSClient::SetServiceClientName("Kinesis Analytics");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "kinesisanalytics");
}

void KinesisAnalyticsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
KinesisAnalyticsClient::InvokeOperationOutcome KinesisAnalyticsClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AddApplicationCloudWatchLoggingOptionOutcome KinesisAnalyticsClient::AddApplicationCloudWatchLoggingOption(
    const AddApplicationCloudWatchLoggingOptionRequest& request) const {
  return AddApplicationCloudWatchLoggingOptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddApplicationInputOutcome KinesisAnalyticsClient::AddApplicationInput(const AddApplicationInputRequest& request) const {
  return AddApplicationInputOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddApplicationInputProcessingConfigurationOutcome KinesisAnalyticsClient::AddApplicationInputProcessingConfiguration(
    const AddApplicationInputProcessingConfigurationRequest& request) const {
  return AddApplicationInputProcessingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddApplicationOutputOutcome KinesisAnalyticsClient::AddApplicationOutput(const AddApplicationOutputRequest& request) const {
  return AddApplicationOutputOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddApplicationReferenceDataSourceOutcome KinesisAnalyticsClient::AddApplicationReferenceDataSource(
    const AddApplicationReferenceDataSourceRequest& request) const {
  return AddApplicationReferenceDataSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApplicationOutcome KinesisAnalyticsClient::CreateApplication(const CreateApplicationRequest& request) const {
  return CreateApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationOutcome KinesisAnalyticsClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  return DeleteApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationCloudWatchLoggingOptionOutcome KinesisAnalyticsClient::DeleteApplicationCloudWatchLoggingOption(
    const DeleteApplicationCloudWatchLoggingOptionRequest& request) const {
  return DeleteApplicationCloudWatchLoggingOptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationInputProcessingConfigurationOutcome KinesisAnalyticsClient::DeleteApplicationInputProcessingConfiguration(
    const DeleteApplicationInputProcessingConfigurationRequest& request) const {
  return DeleteApplicationInputProcessingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationOutputOutcome KinesisAnalyticsClient::DeleteApplicationOutput(const DeleteApplicationOutputRequest& request) const {
  return DeleteApplicationOutputOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationReferenceDataSourceOutcome KinesisAnalyticsClient::DeleteApplicationReferenceDataSource(
    const DeleteApplicationReferenceDataSourceRequest& request) const {
  return DeleteApplicationReferenceDataSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeApplicationOutcome KinesisAnalyticsClient::DescribeApplication(const DescribeApplicationRequest& request) const {
  return DescribeApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DiscoverInputSchemaOutcome KinesisAnalyticsClient::DiscoverInputSchema(const DiscoverInputSchemaRequest& request) const {
  return DiscoverInputSchemaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApplicationsOutcome KinesisAnalyticsClient::ListApplications(const ListApplicationsRequest& request) const {
  return ListApplicationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome KinesisAnalyticsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartApplicationOutcome KinesisAnalyticsClient::StartApplication(const StartApplicationRequest& request) const {
  return StartApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopApplicationOutcome KinesisAnalyticsClient::StopApplication(const StopApplicationRequest& request) const {
  return StopApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome KinesisAnalyticsClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome KinesisAnalyticsClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateApplicationOutcome KinesisAnalyticsClient::UpdateApplication(const UpdateApplicationRequest& request) const {
  return UpdateApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
