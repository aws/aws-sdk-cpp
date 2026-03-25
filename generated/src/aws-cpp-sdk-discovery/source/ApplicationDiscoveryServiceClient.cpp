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
#include <aws/discovery/ApplicationDiscoveryServiceClient.h>
#include <aws/discovery/ApplicationDiscoveryServiceEndpointProvider.h>
#include <aws/discovery/ApplicationDiscoveryServiceErrorMarshaller.h>
#include <aws/discovery/model/AssociateConfigurationItemsToApplicationRequest.h>
#include <aws/discovery/model/BatchDeleteAgentsRequest.h>
#include <aws/discovery/model/BatchDeleteImportDataRequest.h>
#include <aws/discovery/model/CreateApplicationRequest.h>
#include <aws/discovery/model/CreateTagsRequest.h>
#include <aws/discovery/model/DeleteApplicationsRequest.h>
#include <aws/discovery/model/DeleteTagsRequest.h>
#include <aws/discovery/model/DescribeAgentsRequest.h>
#include <aws/discovery/model/DescribeBatchDeleteConfigurationTaskRequest.h>
#include <aws/discovery/model/DescribeConfigurationsRequest.h>
#include <aws/discovery/model/DescribeContinuousExportsRequest.h>
#include <aws/discovery/model/DescribeExportTasksRequest.h>
#include <aws/discovery/model/DescribeImportTasksRequest.h>
#include <aws/discovery/model/DescribeTagsRequest.h>
#include <aws/discovery/model/DisassociateConfigurationItemsFromApplicationRequest.h>
#include <aws/discovery/model/GetDiscoverySummaryRequest.h>
#include <aws/discovery/model/ListConfigurationsRequest.h>
#include <aws/discovery/model/ListServerNeighborsRequest.h>
#include <aws/discovery/model/StartBatchDeleteConfigurationTaskRequest.h>
#include <aws/discovery/model/StartContinuousExportRequest.h>
#include <aws/discovery/model/StartDataCollectionByAgentIdsRequest.h>
#include <aws/discovery/model/StartExportTaskRequest.h>
#include <aws/discovery/model/StartImportTaskRequest.h>
#include <aws/discovery/model/StopContinuousExportRequest.h>
#include <aws/discovery/model/StopDataCollectionByAgentIdsRequest.h>
#include <aws/discovery/model/UpdateApplicationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ApplicationDiscoveryService;
using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ApplicationDiscoveryService {
const char SERVICE_NAME[] = "discovery";
const char ALLOCATION_TAG[] = "ApplicationDiscoveryServiceClient";
}  // namespace ApplicationDiscoveryService
}  // namespace Aws
const char* ApplicationDiscoveryServiceClient::GetServiceName() { return SERVICE_NAME; }
const char* ApplicationDiscoveryServiceClient::GetAllocationTag() { return ALLOCATION_TAG; }

ApplicationDiscoveryServiceClient::ApplicationDiscoveryServiceClient(
    const ApplicationDiscoveryService::ApplicationDiscoveryServiceClientConfiguration& clientConfiguration,
    std::shared_ptr<ApplicationDiscoveryServiceEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationDiscoveryServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ApplicationDiscoveryServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApplicationDiscoveryServiceClient::ApplicationDiscoveryServiceClient(
    const AWSCredentials& credentials, std::shared_ptr<ApplicationDiscoveryServiceEndpointProviderBase> endpointProvider,
    const ApplicationDiscoveryService::ApplicationDiscoveryServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationDiscoveryServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ApplicationDiscoveryServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApplicationDiscoveryServiceClient::ApplicationDiscoveryServiceClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<ApplicationDiscoveryServiceEndpointProviderBase> endpointProvider,
    const ApplicationDiscoveryService::ApplicationDiscoveryServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationDiscoveryServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ApplicationDiscoveryServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ApplicationDiscoveryServiceClient::ApplicationDiscoveryServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationDiscoveryServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ApplicationDiscoveryServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApplicationDiscoveryServiceClient::ApplicationDiscoveryServiceClient(const AWSCredentials& credentials,
                                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationDiscoveryServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ApplicationDiscoveryServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApplicationDiscoveryServiceClient::ApplicationDiscoveryServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationDiscoveryServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ApplicationDiscoveryServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ApplicationDiscoveryServiceClient::~ApplicationDiscoveryServiceClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ApplicationDiscoveryServiceEndpointProviderBase>& ApplicationDiscoveryServiceClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void ApplicationDiscoveryServiceClient::init(const ApplicationDiscoveryService::ApplicationDiscoveryServiceClientConfiguration& config) {
  AWSClient::SetServiceClientName("Application Discovery Service");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "discovery");
}

void ApplicationDiscoveryServiceClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ApplicationDiscoveryServiceClient::InvokeOperationOutcome ApplicationDiscoveryServiceClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const {
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

AssociateConfigurationItemsToApplicationOutcome ApplicationDiscoveryServiceClient::AssociateConfigurationItemsToApplication(
    const AssociateConfigurationItemsToApplicationRequest& request) const {
  return AssociateConfigurationItemsToApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteAgentsOutcome ApplicationDiscoveryServiceClient::BatchDeleteAgents(const BatchDeleteAgentsRequest& request) const {
  return BatchDeleteAgentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteImportDataOutcome ApplicationDiscoveryServiceClient::BatchDeleteImportData(const BatchDeleteImportDataRequest& request) const {
  return BatchDeleteImportDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApplicationOutcome ApplicationDiscoveryServiceClient::CreateApplication(const CreateApplicationRequest& request) const {
  return CreateApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTagsOutcome ApplicationDiscoveryServiceClient::CreateTags(const CreateTagsRequest& request) const {
  return CreateTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationsOutcome ApplicationDiscoveryServiceClient::DeleteApplications(const DeleteApplicationsRequest& request) const {
  return DeleteApplicationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTagsOutcome ApplicationDiscoveryServiceClient::DeleteTags(const DeleteTagsRequest& request) const {
  return DeleteTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAgentsOutcome ApplicationDiscoveryServiceClient::DescribeAgents(const DescribeAgentsRequest& request) const {
  return DescribeAgentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeBatchDeleteConfigurationTaskOutcome ApplicationDiscoveryServiceClient::DescribeBatchDeleteConfigurationTask(
    const DescribeBatchDeleteConfigurationTaskRequest& request) const {
  return DescribeBatchDeleteConfigurationTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConfigurationsOutcome ApplicationDiscoveryServiceClient::DescribeConfigurations(
    const DescribeConfigurationsRequest& request) const {
  return DescribeConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeContinuousExportsOutcome ApplicationDiscoveryServiceClient::DescribeContinuousExports(
    const DescribeContinuousExportsRequest& request) const {
  return DescribeContinuousExportsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeExportTasksOutcome ApplicationDiscoveryServiceClient::DescribeExportTasks(const DescribeExportTasksRequest& request) const {
  return DescribeExportTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImportTasksOutcome ApplicationDiscoveryServiceClient::DescribeImportTasks(const DescribeImportTasksRequest& request) const {
  return DescribeImportTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTagsOutcome ApplicationDiscoveryServiceClient::DescribeTags(const DescribeTagsRequest& request) const {
  return DescribeTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateConfigurationItemsFromApplicationOutcome ApplicationDiscoveryServiceClient::DisassociateConfigurationItemsFromApplication(
    const DisassociateConfigurationItemsFromApplicationRequest& request) const {
  return DisassociateConfigurationItemsFromApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDiscoverySummaryOutcome ApplicationDiscoveryServiceClient::GetDiscoverySummary(const GetDiscoverySummaryRequest& request) const {
  return GetDiscoverySummaryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListConfigurationsOutcome ApplicationDiscoveryServiceClient::ListConfigurations(const ListConfigurationsRequest& request) const {
  return ListConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListServerNeighborsOutcome ApplicationDiscoveryServiceClient::ListServerNeighbors(const ListServerNeighborsRequest& request) const {
  return ListServerNeighborsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartBatchDeleteConfigurationTaskOutcome ApplicationDiscoveryServiceClient::StartBatchDeleteConfigurationTask(
    const StartBatchDeleteConfigurationTaskRequest& request) const {
  return StartBatchDeleteConfigurationTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartContinuousExportOutcome ApplicationDiscoveryServiceClient::StartContinuousExport(const StartContinuousExportRequest& request) const {
  return StartContinuousExportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDataCollectionByAgentIdsOutcome ApplicationDiscoveryServiceClient::StartDataCollectionByAgentIds(
    const StartDataCollectionByAgentIdsRequest& request) const {
  return StartDataCollectionByAgentIdsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartExportTaskOutcome ApplicationDiscoveryServiceClient::StartExportTask(const StartExportTaskRequest& request) const {
  return StartExportTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartImportTaskOutcome ApplicationDiscoveryServiceClient::StartImportTask(const StartImportTaskRequest& request) const {
  return StartImportTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopContinuousExportOutcome ApplicationDiscoveryServiceClient::StopContinuousExport(const StopContinuousExportRequest& request) const {
  return StopContinuousExportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopDataCollectionByAgentIdsOutcome ApplicationDiscoveryServiceClient::StopDataCollectionByAgentIds(
    const StopDataCollectionByAgentIdsRequest& request) const {
  return StopDataCollectionByAgentIdsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateApplicationOutcome ApplicationDiscoveryServiceClient::UpdateApplication(const UpdateApplicationRequest& request) const {
  return UpdateApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
