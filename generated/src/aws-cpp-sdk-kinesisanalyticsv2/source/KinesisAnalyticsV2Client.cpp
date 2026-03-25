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
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Client.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2EndpointProvider.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2ErrorMarshaller.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationCloudWatchLoggingOptionRequest.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationInputProcessingConfigurationRequest.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationInputRequest.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationOutputRequest.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationReferenceDataSourceRequest.h>
#include <aws/kinesisanalyticsv2/model/AddApplicationVpcConfigurationRequest.h>
#include <aws/kinesisanalyticsv2/model/CreateApplicationPresignedUrlRequest.h>
#include <aws/kinesisanalyticsv2/model/CreateApplicationRequest.h>
#include <aws/kinesisanalyticsv2/model/CreateApplicationSnapshotRequest.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationCloudWatchLoggingOptionRequest.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationInputProcessingConfigurationRequest.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationOutputRequest.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationReferenceDataSourceRequest.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationRequest.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationSnapshotRequest.h>
#include <aws/kinesisanalyticsv2/model/DeleteApplicationVpcConfigurationRequest.h>
#include <aws/kinesisanalyticsv2/model/DescribeApplicationOperationRequest.h>
#include <aws/kinesisanalyticsv2/model/DescribeApplicationRequest.h>
#include <aws/kinesisanalyticsv2/model/DescribeApplicationSnapshotRequest.h>
#include <aws/kinesisanalyticsv2/model/DescribeApplicationVersionRequest.h>
#include <aws/kinesisanalyticsv2/model/DiscoverInputSchemaRequest.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationOperationsRequest.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationSnapshotsRequest.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationVersionsRequest.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationsRequest.h>
#include <aws/kinesisanalyticsv2/model/ListTagsForResourceRequest.h>
#include <aws/kinesisanalyticsv2/model/RollbackApplicationRequest.h>
#include <aws/kinesisanalyticsv2/model/StartApplicationRequest.h>
#include <aws/kinesisanalyticsv2/model/StopApplicationRequest.h>
#include <aws/kinesisanalyticsv2/model/TagResourceRequest.h>
#include <aws/kinesisanalyticsv2/model/UntagResourceRequest.h>
#include <aws/kinesisanalyticsv2/model/UpdateApplicationMaintenanceConfigurationRequest.h>
#include <aws/kinesisanalyticsv2/model/UpdateApplicationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::KinesisAnalyticsV2;
using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace KinesisAnalyticsV2 {
const char SERVICE_NAME[] = "kinesisanalytics";
const char ALLOCATION_TAG[] = "KinesisAnalyticsV2Client";
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
const char* KinesisAnalyticsV2Client::GetServiceName() { return SERVICE_NAME; }
const char* KinesisAnalyticsV2Client::GetAllocationTag() { return ALLOCATION_TAG; }

KinesisAnalyticsV2Client::KinesisAnalyticsV2Client(const KinesisAnalyticsV2::KinesisAnalyticsV2ClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<KinesisAnalyticsV2EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisAnalyticsV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<KinesisAnalyticsV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KinesisAnalyticsV2Client::KinesisAnalyticsV2Client(const AWSCredentials& credentials,
                                                   std::shared_ptr<KinesisAnalyticsV2EndpointProviderBase> endpointProvider,
                                                   const KinesisAnalyticsV2::KinesisAnalyticsV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisAnalyticsV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<KinesisAnalyticsV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KinesisAnalyticsV2Client::KinesisAnalyticsV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<KinesisAnalyticsV2EndpointProviderBase> endpointProvider,
                                                   const KinesisAnalyticsV2::KinesisAnalyticsV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisAnalyticsV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<KinesisAnalyticsV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
KinesisAnalyticsV2Client::KinesisAnalyticsV2Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisAnalyticsV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KinesisAnalyticsV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KinesisAnalyticsV2Client::KinesisAnalyticsV2Client(const AWSCredentials& credentials,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisAnalyticsV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KinesisAnalyticsV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KinesisAnalyticsV2Client::KinesisAnalyticsV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisAnalyticsV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KinesisAnalyticsV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
KinesisAnalyticsV2Client::~KinesisAnalyticsV2Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<KinesisAnalyticsV2EndpointProviderBase>& KinesisAnalyticsV2Client::accessEndpointProvider() { return m_endpointProvider; }

void KinesisAnalyticsV2Client::init(const KinesisAnalyticsV2::KinesisAnalyticsV2ClientConfiguration& config) {
  AWSClient::SetServiceClientName("Kinesis Analytics V2");
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

void KinesisAnalyticsV2Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
KinesisAnalyticsV2Client::InvokeOperationOutcome KinesisAnalyticsV2Client::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AddApplicationCloudWatchLoggingOptionOutcome KinesisAnalyticsV2Client::AddApplicationCloudWatchLoggingOption(
    const AddApplicationCloudWatchLoggingOptionRequest& request) const {
  return AddApplicationCloudWatchLoggingOptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddApplicationInputOutcome KinesisAnalyticsV2Client::AddApplicationInput(const AddApplicationInputRequest& request) const {
  return AddApplicationInputOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddApplicationInputProcessingConfigurationOutcome KinesisAnalyticsV2Client::AddApplicationInputProcessingConfiguration(
    const AddApplicationInputProcessingConfigurationRequest& request) const {
  return AddApplicationInputProcessingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddApplicationOutputOutcome KinesisAnalyticsV2Client::AddApplicationOutput(const AddApplicationOutputRequest& request) const {
  return AddApplicationOutputOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddApplicationReferenceDataSourceOutcome KinesisAnalyticsV2Client::AddApplicationReferenceDataSource(
    const AddApplicationReferenceDataSourceRequest& request) const {
  return AddApplicationReferenceDataSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddApplicationVpcConfigurationOutcome KinesisAnalyticsV2Client::AddApplicationVpcConfiguration(
    const AddApplicationVpcConfigurationRequest& request) const {
  return AddApplicationVpcConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApplicationOutcome KinesisAnalyticsV2Client::CreateApplication(const CreateApplicationRequest& request) const {
  return CreateApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApplicationPresignedUrlOutcome KinesisAnalyticsV2Client::CreateApplicationPresignedUrl(
    const CreateApplicationPresignedUrlRequest& request) const {
  return CreateApplicationPresignedUrlOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApplicationSnapshotOutcome KinesisAnalyticsV2Client::CreateApplicationSnapshot(
    const CreateApplicationSnapshotRequest& request) const {
  return CreateApplicationSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationOutcome KinesisAnalyticsV2Client::DeleteApplication(const DeleteApplicationRequest& request) const {
  return DeleteApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationCloudWatchLoggingOptionOutcome KinesisAnalyticsV2Client::DeleteApplicationCloudWatchLoggingOption(
    const DeleteApplicationCloudWatchLoggingOptionRequest& request) const {
  return DeleteApplicationCloudWatchLoggingOptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationInputProcessingConfigurationOutcome KinesisAnalyticsV2Client::DeleteApplicationInputProcessingConfiguration(
    const DeleteApplicationInputProcessingConfigurationRequest& request) const {
  return DeleteApplicationInputProcessingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationOutputOutcome KinesisAnalyticsV2Client::DeleteApplicationOutput(const DeleteApplicationOutputRequest& request) const {
  return DeleteApplicationOutputOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationReferenceDataSourceOutcome KinesisAnalyticsV2Client::DeleteApplicationReferenceDataSource(
    const DeleteApplicationReferenceDataSourceRequest& request) const {
  return DeleteApplicationReferenceDataSourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationSnapshotOutcome KinesisAnalyticsV2Client::DeleteApplicationSnapshot(
    const DeleteApplicationSnapshotRequest& request) const {
  return DeleteApplicationSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationVpcConfigurationOutcome KinesisAnalyticsV2Client::DeleteApplicationVpcConfiguration(
    const DeleteApplicationVpcConfigurationRequest& request) const {
  return DeleteApplicationVpcConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeApplicationOutcome KinesisAnalyticsV2Client::DescribeApplication(const DescribeApplicationRequest& request) const {
  return DescribeApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeApplicationOperationOutcome KinesisAnalyticsV2Client::DescribeApplicationOperation(
    const DescribeApplicationOperationRequest& request) const {
  return DescribeApplicationOperationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeApplicationSnapshotOutcome KinesisAnalyticsV2Client::DescribeApplicationSnapshot(
    const DescribeApplicationSnapshotRequest& request) const {
  return DescribeApplicationSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeApplicationVersionOutcome KinesisAnalyticsV2Client::DescribeApplicationVersion(
    const DescribeApplicationVersionRequest& request) const {
  return DescribeApplicationVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DiscoverInputSchemaOutcome KinesisAnalyticsV2Client::DiscoverInputSchema(const DiscoverInputSchemaRequest& request) const {
  return DiscoverInputSchemaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApplicationOperationsOutcome KinesisAnalyticsV2Client::ListApplicationOperations(
    const ListApplicationOperationsRequest& request) const {
  return ListApplicationOperationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApplicationSnapshotsOutcome KinesisAnalyticsV2Client::ListApplicationSnapshots(const ListApplicationSnapshotsRequest& request) const {
  return ListApplicationSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApplicationVersionsOutcome KinesisAnalyticsV2Client::ListApplicationVersions(const ListApplicationVersionsRequest& request) const {
  return ListApplicationVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApplicationsOutcome KinesisAnalyticsV2Client::ListApplications(const ListApplicationsRequest& request) const {
  return ListApplicationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome KinesisAnalyticsV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RollbackApplicationOutcome KinesisAnalyticsV2Client::RollbackApplication(const RollbackApplicationRequest& request) const {
  return RollbackApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartApplicationOutcome KinesisAnalyticsV2Client::StartApplication(const StartApplicationRequest& request) const {
  return StartApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopApplicationOutcome KinesisAnalyticsV2Client::StopApplication(const StopApplicationRequest& request) const {
  return StopApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome KinesisAnalyticsV2Client::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome KinesisAnalyticsV2Client::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateApplicationOutcome KinesisAnalyticsV2Client::UpdateApplication(const UpdateApplicationRequest& request) const {
  return UpdateApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateApplicationMaintenanceConfigurationOutcome KinesisAnalyticsV2Client::UpdateApplicationMaintenanceConfiguration(
    const UpdateApplicationMaintenanceConfigurationRequest& request) const {
  return UpdateApplicationMaintenanceConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
