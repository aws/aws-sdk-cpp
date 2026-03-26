/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/PrometheusServiceClient.h>
#include <aws/amp/PrometheusServiceEndpointProvider.h>
#include <aws/amp/PrometheusServiceErrorMarshaller.h>
#include <aws/amp/model/CreateAlertManagerDefinitionRequest.h>
#include <aws/amp/model/CreateAnomalyDetectorRequest.h>
#include <aws/amp/model/CreateLoggingConfigurationRequest.h>
#include <aws/amp/model/CreateQueryLoggingConfigurationRequest.h>
#include <aws/amp/model/CreateRuleGroupsNamespaceRequest.h>
#include <aws/amp/model/CreateScraperRequest.h>
#include <aws/amp/model/CreateWorkspaceRequest.h>
#include <aws/amp/model/DeleteAlertManagerDefinitionRequest.h>
#include <aws/amp/model/DeleteAnomalyDetectorRequest.h>
#include <aws/amp/model/DeleteLoggingConfigurationRequest.h>
#include <aws/amp/model/DeleteQueryLoggingConfigurationRequest.h>
#include <aws/amp/model/DeleteResourcePolicyRequest.h>
#include <aws/amp/model/DeleteRuleGroupsNamespaceRequest.h>
#include <aws/amp/model/DeleteScraperLoggingConfigurationRequest.h>
#include <aws/amp/model/DeleteScraperRequest.h>
#include <aws/amp/model/DeleteWorkspaceRequest.h>
#include <aws/amp/model/DescribeAlertManagerDefinitionRequest.h>
#include <aws/amp/model/DescribeAnomalyDetectorRequest.h>
#include <aws/amp/model/DescribeLoggingConfigurationRequest.h>
#include <aws/amp/model/DescribeQueryLoggingConfigurationRequest.h>
#include <aws/amp/model/DescribeResourcePolicyRequest.h>
#include <aws/amp/model/DescribeRuleGroupsNamespaceRequest.h>
#include <aws/amp/model/DescribeScraperLoggingConfigurationRequest.h>
#include <aws/amp/model/DescribeScraperRequest.h>
#include <aws/amp/model/DescribeWorkspaceConfigurationRequest.h>
#include <aws/amp/model/DescribeWorkspaceRequest.h>
#include <aws/amp/model/GetDefaultScraperConfigurationRequest.h>
#include <aws/amp/model/ListAnomalyDetectorsRequest.h>
#include <aws/amp/model/ListRuleGroupsNamespacesRequest.h>
#include <aws/amp/model/ListScrapersRequest.h>
#include <aws/amp/model/ListTagsForResourceRequest.h>
#include <aws/amp/model/ListWorkspacesRequest.h>
#include <aws/amp/model/PutAlertManagerDefinitionRequest.h>
#include <aws/amp/model/PutAnomalyDetectorRequest.h>
#include <aws/amp/model/PutResourcePolicyRequest.h>
#include <aws/amp/model/PutRuleGroupsNamespaceRequest.h>
#include <aws/amp/model/TagResourceRequest.h>
#include <aws/amp/model/UntagResourceRequest.h>
#include <aws/amp/model/UpdateLoggingConfigurationRequest.h>
#include <aws/amp/model/UpdateQueryLoggingConfigurationRequest.h>
#include <aws/amp/model/UpdateScraperLoggingConfigurationRequest.h>
#include <aws/amp/model/UpdateScraperRequest.h>
#include <aws/amp/model/UpdateWorkspaceAliasRequest.h>
#include <aws/amp/model/UpdateWorkspaceConfigurationRequest.h>
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
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PrometheusService;
using namespace Aws::PrometheusService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace PrometheusService {
const char SERVICE_NAME[] = "aps";
const char ALLOCATION_TAG[] = "PrometheusServiceClient";
}  // namespace PrometheusService
}  // namespace Aws
const char* PrometheusServiceClient::GetServiceName() { return SERVICE_NAME; }
const char* PrometheusServiceClient::GetAllocationTag() { return ALLOCATION_TAG; }

PrometheusServiceClient::PrometheusServiceClient(const PrometheusService::PrometheusServiceClientConfiguration& clientConfiguration,
                                                 std::shared_ptr<PrometheusServiceEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PrometheusServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PrometheusServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PrometheusServiceClient::PrometheusServiceClient(const AWSCredentials& credentials,
                                                 std::shared_ptr<PrometheusServiceEndpointProviderBase> endpointProvider,
                                                 const PrometheusService::PrometheusServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PrometheusServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PrometheusServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PrometheusServiceClient::PrometheusServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 std::shared_ptr<PrometheusServiceEndpointProviderBase> endpointProvider,
                                                 const PrometheusService::PrometheusServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PrometheusServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PrometheusServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PrometheusServiceClient::PrometheusServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PrometheusServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PrometheusServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PrometheusServiceClient::PrometheusServiceClient(const AWSCredentials& credentials,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PrometheusServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PrometheusServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PrometheusServiceClient::PrometheusServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PrometheusServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PrometheusServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PrometheusServiceClient::~PrometheusServiceClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PrometheusServiceEndpointProviderBase>& PrometheusServiceClient::accessEndpointProvider() { return m_endpointProvider; }

void PrometheusServiceClient::init(const PrometheusService::PrometheusServiceClientConfiguration& config) {
  AWSClient::SetServiceClientName("amp");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "aps");
}

void PrometheusServiceClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PrometheusServiceClient::InvokeOperationOutcome PrometheusServiceClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
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

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateAlertManagerDefinitionOutcome PrometheusServiceClient::CreateAlertManagerDefinition(
    const CreateAlertManagerDefinitionRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAlertManagerDefinition", "Required field: WorkspaceId, is not set");
    return CreateAlertManagerDefinitionOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/alertmanager/definition");
  };

  return CreateAlertManagerDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAnomalyDetectorOutcome PrometheusServiceClient::CreateAnomalyDetector(const CreateAnomalyDetectorRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAnomalyDetector", "Required field: WorkspaceId, is not set");
    return CreateAnomalyDetectorOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/anomalydetectors");
  };

  return CreateAnomalyDetectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLoggingConfigurationOutcome PrometheusServiceClient::CreateLoggingConfiguration(
    const CreateLoggingConfigurationRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateLoggingConfiguration", "Required field: WorkspaceId, is not set");
    return CreateLoggingConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/logging");
  };

  return CreateLoggingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateQueryLoggingConfigurationOutcome PrometheusServiceClient::CreateQueryLoggingConfiguration(
    const CreateQueryLoggingConfigurationRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateQueryLoggingConfiguration", "Required field: WorkspaceId, is not set");
    return CreateQueryLoggingConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/logging/query");
  };

  return CreateQueryLoggingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRuleGroupsNamespaceOutcome PrometheusServiceClient::CreateRuleGroupsNamespace(const CreateRuleGroupsNamespaceRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRuleGroupsNamespace", "Required field: WorkspaceId, is not set");
    return CreateRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rulegroupsnamespaces");
  };

  return CreateRuleGroupsNamespaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateScraperOutcome PrometheusServiceClient::CreateScraper(const CreateScraperRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scrapers");
  };

  return CreateScraperOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkspaceOutcome PrometheusServiceClient::CreateWorkspace(const CreateWorkspaceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces");
  };

  return CreateWorkspaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAlertManagerDefinitionOutcome PrometheusServiceClient::DeleteAlertManagerDefinition(
    const DeleteAlertManagerDefinitionRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAlertManagerDefinition", "Required field: WorkspaceId, is not set");
    return DeleteAlertManagerDefinitionOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/alertmanager/definition");
  };

  return DeleteAlertManagerDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAnomalyDetectorOutcome PrometheusServiceClient::DeleteAnomalyDetector(const DeleteAnomalyDetectorRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAnomalyDetector", "Required field: WorkspaceId, is not set");
    return DeleteAnomalyDetectorOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.AnomalyDetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAnomalyDetector", "Required field: AnomalyDetectorId, is not set");
    return DeleteAnomalyDetectorOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnomalyDetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/anomalydetectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnomalyDetectorId());
  };

  return DeleteAnomalyDetectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteLoggingConfigurationOutcome PrometheusServiceClient::DeleteLoggingConfiguration(
    const DeleteLoggingConfigurationRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLoggingConfiguration", "Required field: WorkspaceId, is not set");
    return DeleteLoggingConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/logging");
  };

  return DeleteLoggingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteQueryLoggingConfigurationOutcome PrometheusServiceClient::DeleteQueryLoggingConfiguration(
    const DeleteQueryLoggingConfigurationRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQueryLoggingConfiguration", "Required field: WorkspaceId, is not set");
    return DeleteQueryLoggingConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/logging/query");
  };

  return DeleteQueryLoggingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteResourcePolicyOutcome PrometheusServiceClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicy", "Required field: WorkspaceId, is not set");
    return DeleteResourcePolicyOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRuleGroupsNamespaceOutcome PrometheusServiceClient::DeleteRuleGroupsNamespace(const DeleteRuleGroupsNamespaceRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRuleGroupsNamespace", "Required field: WorkspaceId, is not set");
    return DeleteRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRuleGroupsNamespace", "Required field: Name, is not set");
    return DeleteRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rulegroupsnamespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteRuleGroupsNamespaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteScraperOutcome PrometheusServiceClient::DeleteScraper(const DeleteScraperRequest& request) const {
  if (!request.ScraperIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteScraper", "Required field: ScraperId, is not set");
    return DeleteScraperOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScraperId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scrapers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScraperId());
  };

  return DeleteScraperOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteScraperLoggingConfigurationOutcome PrometheusServiceClient::DeleteScraperLoggingConfiguration(
    const DeleteScraperLoggingConfigurationRequest& request) const {
  if (!request.ScraperIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteScraperLoggingConfiguration", "Required field: ScraperId, is not set");
    return DeleteScraperLoggingConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScraperId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scrapers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScraperId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/logging-configuration");
  };

  return DeleteScraperLoggingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWorkspaceOutcome PrometheusServiceClient::DeleteWorkspace(const DeleteWorkspaceRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkspace", "Required field: WorkspaceId, is not set");
    return DeleteWorkspaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  };

  return DeleteWorkspaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeAlertManagerDefinitionOutcome PrometheusServiceClient::DescribeAlertManagerDefinition(
    const DescribeAlertManagerDefinitionRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAlertManagerDefinition", "Required field: WorkspaceId, is not set");
    return DescribeAlertManagerDefinitionOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/alertmanager/definition");
  };

  return DescribeAlertManagerDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAnomalyDetectorOutcome PrometheusServiceClient::DescribeAnomalyDetector(const DescribeAnomalyDetectorRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAnomalyDetector", "Required field: WorkspaceId, is not set");
    return DescribeAnomalyDetectorOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.AnomalyDetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAnomalyDetector", "Required field: AnomalyDetectorId, is not set");
    return DescribeAnomalyDetectorOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnomalyDetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/anomalydetectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnomalyDetectorId());
  };

  return DescribeAnomalyDetectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeLoggingConfigurationOutcome PrometheusServiceClient::DescribeLoggingConfiguration(
    const DescribeLoggingConfigurationRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeLoggingConfiguration", "Required field: WorkspaceId, is not set");
    return DescribeLoggingConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/logging");
  };

  return DescribeLoggingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeQueryLoggingConfigurationOutcome PrometheusServiceClient::DescribeQueryLoggingConfiguration(
    const DescribeQueryLoggingConfigurationRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeQueryLoggingConfiguration", "Required field: WorkspaceId, is not set");
    return DescribeQueryLoggingConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/logging/query");
  };

  return DescribeQueryLoggingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeResourcePolicyOutcome PrometheusServiceClient::DescribeResourcePolicy(const DescribeResourcePolicyRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeResourcePolicy", "Required field: WorkspaceId, is not set");
    return DescribeResourcePolicyOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  return DescribeResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeRuleGroupsNamespaceOutcome PrometheusServiceClient::DescribeRuleGroupsNamespace(
    const DescribeRuleGroupsNamespaceRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRuleGroupsNamespace", "Required field: WorkspaceId, is not set");
    return DescribeRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRuleGroupsNamespace", "Required field: Name, is not set");
    return DescribeRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rulegroupsnamespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DescribeRuleGroupsNamespaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeScraperOutcome PrometheusServiceClient::DescribeScraper(const DescribeScraperRequest& request) const {
  if (!request.ScraperIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeScraper", "Required field: ScraperId, is not set");
    return DescribeScraperOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScraperId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scrapers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScraperId());
  };

  return DescribeScraperOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeScraperLoggingConfigurationOutcome PrometheusServiceClient::DescribeScraperLoggingConfiguration(
    const DescribeScraperLoggingConfigurationRequest& request) const {
  if (!request.ScraperIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeScraperLoggingConfiguration", "Required field: ScraperId, is not set");
    return DescribeScraperLoggingConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScraperId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scrapers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScraperId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/logging-configuration");
  };

  return DescribeScraperLoggingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeWorkspaceOutcome PrometheusServiceClient::DescribeWorkspace(const DescribeWorkspaceRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeWorkspace", "Required field: WorkspaceId, is not set");
    return DescribeWorkspaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  };

  return DescribeWorkspaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeWorkspaceConfigurationOutcome PrometheusServiceClient::DescribeWorkspaceConfiguration(
    const DescribeWorkspaceConfigurationRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeWorkspaceConfiguration", "Required field: WorkspaceId, is not set");
    return DescribeWorkspaceConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  };

  return DescribeWorkspaceConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDefaultScraperConfigurationOutcome PrometheusServiceClient::GetDefaultScraperConfiguration(
    const GetDefaultScraperConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scraperconfiguration");
  };

  return GetDefaultScraperConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAnomalyDetectorsOutcome PrometheusServiceClient::ListAnomalyDetectors(const ListAnomalyDetectorsRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAnomalyDetectors", "Required field: WorkspaceId, is not set");
    return ListAnomalyDetectorsOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/anomalydetectors");
  };

  return ListAnomalyDetectorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRuleGroupsNamespacesOutcome PrometheusServiceClient::ListRuleGroupsNamespaces(const ListRuleGroupsNamespacesRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRuleGroupsNamespaces", "Required field: WorkspaceId, is not set");
    return ListRuleGroupsNamespacesOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rulegroupsnamespaces");
  };

  return ListRuleGroupsNamespacesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListScrapersOutcome PrometheusServiceClient::ListScrapers(const ListScrapersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scrapers");
  };

  return ListScrapersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome PrometheusServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListWorkspacesOutcome PrometheusServiceClient::ListWorkspaces(const ListWorkspacesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces");
  };

  return ListWorkspacesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutAlertManagerDefinitionOutcome PrometheusServiceClient::PutAlertManagerDefinition(const PutAlertManagerDefinitionRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutAlertManagerDefinition", "Required field: WorkspaceId, is not set");
    return PutAlertManagerDefinitionOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/alertmanager/definition");
  };

  return PutAlertManagerDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutAnomalyDetectorOutcome PrometheusServiceClient::PutAnomalyDetector(const PutAnomalyDetectorRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutAnomalyDetector", "Required field: WorkspaceId, is not set");
    return PutAnomalyDetectorOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.AnomalyDetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutAnomalyDetector", "Required field: AnomalyDetectorId, is not set");
    return PutAnomalyDetectorOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnomalyDetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/anomalydetectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnomalyDetectorId());
  };

  return PutAnomalyDetectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutResourcePolicyOutcome PrometheusServiceClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutResourcePolicy", "Required field: WorkspaceId, is not set");
    return PutResourcePolicyOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  return PutResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutRuleGroupsNamespaceOutcome PrometheusServiceClient::PutRuleGroupsNamespace(const PutRuleGroupsNamespaceRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutRuleGroupsNamespace", "Required field: WorkspaceId, is not set");
    return PutRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutRuleGroupsNamespace", "Required field: Name, is not set");
    return PutRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rulegroupsnamespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return PutRuleGroupsNamespaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

TagResourceOutcome PrometheusServiceClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome PrometheusServiceClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateLoggingConfigurationOutcome PrometheusServiceClient::UpdateLoggingConfiguration(
    const UpdateLoggingConfigurationRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLoggingConfiguration", "Required field: WorkspaceId, is not set");
    return UpdateLoggingConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/logging");
  };

  return UpdateLoggingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateQueryLoggingConfigurationOutcome PrometheusServiceClient::UpdateQueryLoggingConfiguration(
    const UpdateQueryLoggingConfigurationRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQueryLoggingConfiguration", "Required field: WorkspaceId, is not set");
    return UpdateQueryLoggingConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/logging/query");
  };

  return UpdateQueryLoggingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateScraperOutcome PrometheusServiceClient::UpdateScraper(const UpdateScraperRequest& request) const {
  if (!request.ScraperIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateScraper", "Required field: ScraperId, is not set");
    return UpdateScraperOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScraperId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scrapers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScraperId());
  };

  return UpdateScraperOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateScraperLoggingConfigurationOutcome PrometheusServiceClient::UpdateScraperLoggingConfiguration(
    const UpdateScraperLoggingConfigurationRequest& request) const {
  if (!request.ScraperIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateScraperLoggingConfiguration", "Required field: ScraperId, is not set");
    return UpdateScraperLoggingConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScraperId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scrapers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScraperId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/logging-configuration");
  };

  return UpdateScraperLoggingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateWorkspaceAliasOutcome PrometheusServiceClient::UpdateWorkspaceAlias(const UpdateWorkspaceAliasRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkspaceAlias", "Required field: WorkspaceId, is not set");
    return UpdateWorkspaceAliasOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/alias");
  };

  return UpdateWorkspaceAliasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWorkspaceConfigurationOutcome PrometheusServiceClient::UpdateWorkspaceConfiguration(
    const UpdateWorkspaceConfigurationRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkspaceConfiguration", "Required field: WorkspaceId, is not set");
    return UpdateWorkspaceConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(
        PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  };

  return UpdateWorkspaceConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
