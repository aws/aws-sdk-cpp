/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/CloudWatchOmniClient.h>
#include <aws/cloudwatchomni/CloudWatchOmniEndpointProvider.h>
#include <aws/cloudwatchomni/CloudWatchOmniErrorMarshaller.h>
#include <aws/cloudwatchomni/model/CreateAccessGrantRequest.h>
#include <aws/cloudwatchomni/model/CreateAccessProfileRequest.h>
#include <aws/cloudwatchomni/model/CreateAlertRequest.h>
#include <aws/cloudwatchomni/model/CreateDomainAccessGrantForOrganizationRequest.h>
#include <aws/cloudwatchomni/model/CreateDomainForOrganizationRequest.h>
#include <aws/cloudwatchomni/model/CreateDomainRequest.h>
#include <aws/cloudwatchomni/model/CreateIntegrationRequest.h>
#include <aws/cloudwatchomni/model/CreateOmniDashboardRequest.h>
#include <aws/cloudwatchomni/model/CreateOneTimeDeepLinkCodeRequest.h>
#include <aws/cloudwatchomni/model/CreateSpaceRequest.h>
#include <aws/cloudwatchomni/model/CreateViewRequest.h>
#include <aws/cloudwatchomni/model/DeleteAccessGrantRequest.h>
#include <aws/cloudwatchomni/model/DeleteAccessProfileRequest.h>
#include <aws/cloudwatchomni/model/DeleteAlertRequest.h>
#include <aws/cloudwatchomni/model/DeleteDomainAccessGrantForOrganizationRequest.h>
#include <aws/cloudwatchomni/model/DeleteDomainForOrganizationRequest.h>
#include <aws/cloudwatchomni/model/DeleteDomainRequest.h>
#include <aws/cloudwatchomni/model/DeleteIntegrationRequest.h>
#include <aws/cloudwatchomni/model/DeleteOmniDashboardRequest.h>
#include <aws/cloudwatchomni/model/DeleteSpaceRequest.h>
#include <aws/cloudwatchomni/model/DeleteViewRequest.h>
#include <aws/cloudwatchomni/model/GetAccessGrantRequest.h>
#include <aws/cloudwatchomni/model/GetAccessProfileRequest.h>
#include <aws/cloudwatchomni/model/GetAlertRequest.h>
#include <aws/cloudwatchomni/model/GetContextGraphRequest.h>
#include <aws/cloudwatchomni/model/GetDomainAccessGrantForOrganizationRequest.h>
#include <aws/cloudwatchomni/model/GetDomainForOrganizationRequest.h>
#include <aws/cloudwatchomni/model/GetDomainRequest.h>
#include <aws/cloudwatchomni/model/GetIntegrationRequest.h>
#include <aws/cloudwatchomni/model/GetIntelligenceConfigurationRequest.h>
#include <aws/cloudwatchomni/model/GetOmniDashboardRequest.h>
#include <aws/cloudwatchomni/model/GetSpaceCredentialsForOrganizationRequest.h>
#include <aws/cloudwatchomni/model/GetSpaceRequest.h>
#include <aws/cloudwatchomni/model/GetTelemetryQueryResultsRequest.h>
#include <aws/cloudwatchomni/model/GetViewRequest.h>
#include <aws/cloudwatchomni/model/ListAccessGrantsRequest.h>
#include <aws/cloudwatchomni/model/ListAccessProfilesRequest.h>
#include <aws/cloudwatchomni/model/ListAlertsRequest.h>
#include <aws/cloudwatchomni/model/ListDomainAccessGrantsForOrganizationRequest.h>
#include <aws/cloudwatchomni/model/ListDomainsRequest.h>
#include <aws/cloudwatchomni/model/ListIntegrationsRequest.h>
#include <aws/cloudwatchomni/model/ListOmniDashboardsRequest.h>
#include <aws/cloudwatchomni/model/ListSpacesForOrganizationRequest.h>
#include <aws/cloudwatchomni/model/ListSpacesRequest.h>
#include <aws/cloudwatchomni/model/ListTelemetryFieldsRequest.h>
#include <aws/cloudwatchomni/model/ListTelemetryQuerySessionsRequest.h>
#include <aws/cloudwatchomni/model/ListViewsRequest.h>
#include <aws/cloudwatchomni/model/PutIntelligenceConfigurationRequest.h>
#include <aws/cloudwatchomni/model/SearchPrincipalsRequest.h>
#include <aws/cloudwatchomni/model/StartTelemetryQueryRequest.h>
#include <aws/cloudwatchomni/model/StartTelemetryQuerySessionRequest.h>
#include <aws/cloudwatchomni/model/StopTelemetryQueryRequest.h>
#include <aws/cloudwatchomni/model/StopTelemetryQuerySessionRequest.h>
#include <aws/cloudwatchomni/model/UpdateAccessProfileRequest.h>
#include <aws/cloudwatchomni/model/UpdateAlertRequest.h>
#include <aws/cloudwatchomni/model/UpdateDomainForOrganizationRequest.h>
#include <aws/cloudwatchomni/model/UpdateDomainRequest.h>
#include <aws/cloudwatchomni/model/UpdateIntegrationRequest.h>
#include <aws/cloudwatchomni/model/UpdateOmniDashboardRequest.h>
#include <aws/cloudwatchomni/model/UpdateSpaceRequest.h>
#include <aws/cloudwatchomni/model/UpdateViewRequest.h>
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
using namespace Aws::CloudWatchOmni;
using namespace Aws::CloudWatchOmni::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CloudWatchOmni {
const char SERVICE_NAME[] = "cloudwatch";
const char ALLOCATION_TAG[] = "CloudWatchOmniClient";
}  // namespace CloudWatchOmni
}  // namespace Aws
const char* CloudWatchOmniClient::GetServiceName() { return SERVICE_NAME; }
const char* CloudWatchOmniClient::GetAllocationTag() { return ALLOCATION_TAG; }

CloudWatchOmniClient::CloudWatchOmniClient(const CloudWatchOmni::CloudWatchOmniClientConfiguration& clientConfiguration,
                                           std::shared_ptr<CloudWatchOmniEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchOmniErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudWatchOmniEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchOmniClient::CloudWatchOmniClient(const AWSCredentials& credentials,
                                           std::shared_ptr<CloudWatchOmniEndpointProviderBase> endpointProvider,
                                           const CloudWatchOmni::CloudWatchOmniClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchOmniErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudWatchOmniEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchOmniClient::CloudWatchOmniClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<CloudWatchOmniEndpointProviderBase> endpointProvider,
                                           const CloudWatchOmni::CloudWatchOmniClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchOmniErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudWatchOmniEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CloudWatchOmniClient::CloudWatchOmniClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchOmniErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudWatchOmniEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchOmniClient::CloudWatchOmniClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchOmniErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudWatchOmniEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchOmniClient::CloudWatchOmniClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchOmniErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudWatchOmniEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CloudWatchOmniClient::~CloudWatchOmniClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CloudWatchOmniEndpointProviderBase>& CloudWatchOmniClient::accessEndpointProvider() { return m_endpointProvider; }

void CloudWatchOmniClient::init(const CloudWatchOmni::CloudWatchOmniClientConfiguration& config) {
  AWSClient::SetServiceClientName("CloudWatchOmni");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "cloudwatch");
}

void CloudWatchOmniClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CloudWatchOmniClient::InvokeOperationOutcome CloudWatchOmniClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        endpointResolutionOutcome.GetResult().AddPathSegments("/service/CloudWatchOmniFrontend/operation/");
        endpointResolutionOutcome.GetResult().AddPathSegment(operationName);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateAccessGrantOutcome CloudWatchOmniClient::CreateAccessGrant(const CreateAccessGrantRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAccessGrantOutcome(result.GetResultWithOwnership())
                            : CreateAccessGrantOutcome(std::move(result.GetError()));
}

CreateAccessProfileOutcome CloudWatchOmniClient::CreateAccessProfile(const CreateAccessProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAccessProfileOutcome(result.GetResultWithOwnership())
                            : CreateAccessProfileOutcome(std::move(result.GetError()));
}

CreateAlertOutcome CloudWatchOmniClient::CreateAlert(const CreateAlertRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAlertOutcome(result.GetResultWithOwnership()) : CreateAlertOutcome(std::move(result.GetError()));
}

CreateDomainOutcome CloudWatchOmniClient::CreateDomain(const CreateDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDomainOutcome(result.GetResultWithOwnership()) : CreateDomainOutcome(std::move(result.GetError()));
}

CreateDomainAccessGrantForOrganizationOutcome CloudWatchOmniClient::CreateDomainAccessGrantForOrganization(
    const CreateDomainAccessGrantForOrganizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDomainAccessGrantForOrganizationOutcome(result.GetResultWithOwnership())
                            : CreateDomainAccessGrantForOrganizationOutcome(std::move(result.GetError()));
}

CreateDomainForOrganizationOutcome CloudWatchOmniClient::CreateDomainForOrganization(
    const CreateDomainForOrganizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDomainForOrganizationOutcome(result.GetResultWithOwnership())
                            : CreateDomainForOrganizationOutcome(std::move(result.GetError()));
}

CreateIntegrationOutcome CloudWatchOmniClient::CreateIntegration(const CreateIntegrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIntegrationOutcome(result.GetResultWithOwnership())
                            : CreateIntegrationOutcome(std::move(result.GetError()));
}

CreateOmniDashboardOutcome CloudWatchOmniClient::CreateOmniDashboard(const CreateOmniDashboardRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOmniDashboardOutcome(result.GetResultWithOwnership())
                            : CreateOmniDashboardOutcome(std::move(result.GetError()));
}

CreateOneTimeDeepLinkCodeOutcome CloudWatchOmniClient::CreateOneTimeDeepLinkCode(const CreateOneTimeDeepLinkCodeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOneTimeDeepLinkCodeOutcome(result.GetResultWithOwnership())
                            : CreateOneTimeDeepLinkCodeOutcome(std::move(result.GetError()));
}

CreateSpaceOutcome CloudWatchOmniClient::CreateSpace(const CreateSpaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSpaceOutcome(result.GetResultWithOwnership()) : CreateSpaceOutcome(std::move(result.GetError()));
}

CreateViewOutcome CloudWatchOmniClient::CreateView(const CreateViewRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateViewOutcome(result.GetResultWithOwnership()) : CreateViewOutcome(std::move(result.GetError()));
}

DeleteAccessGrantOutcome CloudWatchOmniClient::DeleteAccessGrant(const DeleteAccessGrantRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAccessGrantOutcome(result.GetResultWithOwnership())
                            : DeleteAccessGrantOutcome(std::move(result.GetError()));
}

DeleteAccessProfileOutcome CloudWatchOmniClient::DeleteAccessProfile(const DeleteAccessProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAccessProfileOutcome(result.GetResultWithOwnership())
                            : DeleteAccessProfileOutcome(std::move(result.GetError()));
}

DeleteAlertOutcome CloudWatchOmniClient::DeleteAlert(const DeleteAlertRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAlertOutcome(result.GetResultWithOwnership()) : DeleteAlertOutcome(std::move(result.GetError()));
}

DeleteDomainOutcome CloudWatchOmniClient::DeleteDomain(const DeleteDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDomainOutcome(result.GetResultWithOwnership()) : DeleteDomainOutcome(std::move(result.GetError()));
}

DeleteDomainAccessGrantForOrganizationOutcome CloudWatchOmniClient::DeleteDomainAccessGrantForOrganization(
    const DeleteDomainAccessGrantForOrganizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDomainAccessGrantForOrganizationOutcome(result.GetResultWithOwnership())
                            : DeleteDomainAccessGrantForOrganizationOutcome(std::move(result.GetError()));
}

DeleteDomainForOrganizationOutcome CloudWatchOmniClient::DeleteDomainForOrganization(
    const DeleteDomainForOrganizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDomainForOrganizationOutcome(result.GetResultWithOwnership())
                            : DeleteDomainForOrganizationOutcome(std::move(result.GetError()));
}

DeleteIntegrationOutcome CloudWatchOmniClient::DeleteIntegration(const DeleteIntegrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIntegrationOutcome(result.GetResultWithOwnership())
                            : DeleteIntegrationOutcome(std::move(result.GetError()));
}

DeleteOmniDashboardOutcome CloudWatchOmniClient::DeleteOmniDashboard(const DeleteOmniDashboardRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteOmniDashboardOutcome(result.GetResultWithOwnership())
                            : DeleteOmniDashboardOutcome(std::move(result.GetError()));
}

DeleteSpaceOutcome CloudWatchOmniClient::DeleteSpace(const DeleteSpaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSpaceOutcome(result.GetResultWithOwnership()) : DeleteSpaceOutcome(std::move(result.GetError()));
}

DeleteViewOutcome CloudWatchOmniClient::DeleteView(const DeleteViewRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteViewOutcome(result.GetResultWithOwnership()) : DeleteViewOutcome(std::move(result.GetError()));
}

GetAccessGrantOutcome CloudWatchOmniClient::GetAccessGrant(const GetAccessGrantRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAccessGrantOutcome(result.GetResultWithOwnership()) : GetAccessGrantOutcome(std::move(result.GetError()));
}

GetAccessProfileOutcome CloudWatchOmniClient::GetAccessProfile(const GetAccessProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAccessProfileOutcome(result.GetResultWithOwnership())
                            : GetAccessProfileOutcome(std::move(result.GetError()));
}

GetAlertOutcome CloudWatchOmniClient::GetAlert(const GetAlertRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAlertOutcome(result.GetResultWithOwnership()) : GetAlertOutcome(std::move(result.GetError()));
}

GetContextGraphOutcome CloudWatchOmniClient::GetContextGraph(const GetContextGraphRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetContextGraphOutcome(result.GetResultWithOwnership())
                            : GetContextGraphOutcome(std::move(result.GetError()));
}

GetDomainOutcome CloudWatchOmniClient::GetDomain(const GetDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDomainOutcome(result.GetResultWithOwnership()) : GetDomainOutcome(std::move(result.GetError()));
}

GetDomainAccessGrantForOrganizationOutcome CloudWatchOmniClient::GetDomainAccessGrantForOrganization(
    const GetDomainAccessGrantForOrganizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDomainAccessGrantForOrganizationOutcome(result.GetResultWithOwnership())
                            : GetDomainAccessGrantForOrganizationOutcome(std::move(result.GetError()));
}

GetDomainForOrganizationOutcome CloudWatchOmniClient::GetDomainForOrganization(const GetDomainForOrganizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDomainForOrganizationOutcome(result.GetResultWithOwnership())
                            : GetDomainForOrganizationOutcome(std::move(result.GetError()));
}

GetIntegrationOutcome CloudWatchOmniClient::GetIntegration(const GetIntegrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIntegrationOutcome(result.GetResultWithOwnership()) : GetIntegrationOutcome(std::move(result.GetError()));
}

GetIntelligenceConfigurationOutcome CloudWatchOmniClient::GetIntelligenceConfiguration(
    const GetIntelligenceConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIntelligenceConfigurationOutcome(result.GetResultWithOwnership())
                            : GetIntelligenceConfigurationOutcome(std::move(result.GetError()));
}

GetOmniDashboardOutcome CloudWatchOmniClient::GetOmniDashboard(const GetOmniDashboardRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOmniDashboardOutcome(result.GetResultWithOwnership())
                            : GetOmniDashboardOutcome(std::move(result.GetError()));
}

GetSpaceOutcome CloudWatchOmniClient::GetSpace(const GetSpaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSpaceOutcome(result.GetResultWithOwnership()) : GetSpaceOutcome(std::move(result.GetError()));
}

GetSpaceCredentialsForOrganizationOutcome CloudWatchOmniClient::GetSpaceCredentialsForOrganization(
    const GetSpaceCredentialsForOrganizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSpaceCredentialsForOrganizationOutcome(result.GetResultWithOwnership())
                            : GetSpaceCredentialsForOrganizationOutcome(std::move(result.GetError()));
}

GetTelemetryQueryResultsOutcome CloudWatchOmniClient::GetTelemetryQueryResults(const GetTelemetryQueryResultsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTelemetryQueryResultsOutcome(result.GetResultWithOwnership())
                            : GetTelemetryQueryResultsOutcome(std::move(result.GetError()));
}

GetViewOutcome CloudWatchOmniClient::GetView(const GetViewRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetViewOutcome(result.GetResultWithOwnership()) : GetViewOutcome(std::move(result.GetError()));
}

ListAccessGrantsOutcome CloudWatchOmniClient::ListAccessGrants(const ListAccessGrantsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAccessGrantsOutcome(result.GetResultWithOwnership())
                            : ListAccessGrantsOutcome(std::move(result.GetError()));
}

ListAccessProfilesOutcome CloudWatchOmniClient::ListAccessProfiles(const ListAccessProfilesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAccessProfilesOutcome(result.GetResultWithOwnership())
                            : ListAccessProfilesOutcome(std::move(result.GetError()));
}

ListAlertsOutcome CloudWatchOmniClient::ListAlerts(const ListAlertsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAlertsOutcome(result.GetResultWithOwnership()) : ListAlertsOutcome(std::move(result.GetError()));
}

ListDomainAccessGrantsForOrganizationOutcome CloudWatchOmniClient::ListDomainAccessGrantsForOrganization(
    const ListDomainAccessGrantsForOrganizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDomainAccessGrantsForOrganizationOutcome(result.GetResultWithOwnership())
                            : ListDomainAccessGrantsForOrganizationOutcome(std::move(result.GetError()));
}

ListDomainsOutcome CloudWatchOmniClient::ListDomains(const ListDomainsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDomainsOutcome(result.GetResultWithOwnership()) : ListDomainsOutcome(std::move(result.GetError()));
}

ListIntegrationsOutcome CloudWatchOmniClient::ListIntegrations(const ListIntegrationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListIntegrationsOutcome(result.GetResultWithOwnership())
                            : ListIntegrationsOutcome(std::move(result.GetError()));
}

ListOmniDashboardsOutcome CloudWatchOmniClient::ListOmniDashboards(const ListOmniDashboardsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListOmniDashboardsOutcome(result.GetResultWithOwnership())
                            : ListOmniDashboardsOutcome(std::move(result.GetError()));
}

ListSpacesOutcome CloudWatchOmniClient::ListSpaces(const ListSpacesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSpacesOutcome(result.GetResultWithOwnership()) : ListSpacesOutcome(std::move(result.GetError()));
}

ListSpacesForOrganizationOutcome CloudWatchOmniClient::ListSpacesForOrganization(const ListSpacesForOrganizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSpacesForOrganizationOutcome(result.GetResultWithOwnership())
                            : ListSpacesForOrganizationOutcome(std::move(result.GetError()));
}

ListTelemetryFieldsOutcome CloudWatchOmniClient::ListTelemetryFields(const ListTelemetryFieldsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTelemetryFieldsOutcome(result.GetResultWithOwnership())
                            : ListTelemetryFieldsOutcome(std::move(result.GetError()));
}

ListTelemetryQuerySessionsOutcome CloudWatchOmniClient::ListTelemetryQuerySessions(const ListTelemetryQuerySessionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTelemetryQuerySessionsOutcome(result.GetResultWithOwnership())
                            : ListTelemetryQuerySessionsOutcome(std::move(result.GetError()));
}

ListViewsOutcome CloudWatchOmniClient::ListViews(const ListViewsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListViewsOutcome(result.GetResultWithOwnership()) : ListViewsOutcome(std::move(result.GetError()));
}

PutIntelligenceConfigurationOutcome CloudWatchOmniClient::PutIntelligenceConfiguration(
    const PutIntelligenceConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutIntelligenceConfigurationOutcome(result.GetResultWithOwnership())
                            : PutIntelligenceConfigurationOutcome(std::move(result.GetError()));
}

SearchPrincipalsOutcome CloudWatchOmniClient::SearchPrincipals(const SearchPrincipalsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchPrincipalsOutcome(result.GetResultWithOwnership())
                            : SearchPrincipalsOutcome(std::move(result.GetError()));
}

StartTelemetryQueryOutcome CloudWatchOmniClient::StartTelemetryQuery(const StartTelemetryQueryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartTelemetryQueryOutcome(result.GetResultWithOwnership())
                            : StartTelemetryQueryOutcome(std::move(result.GetError()));
}

StartTelemetryQuerySessionOutcome CloudWatchOmniClient::StartTelemetryQuerySession(const StartTelemetryQuerySessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartTelemetryQuerySessionOutcome(result.GetResultWithOwnership())
                            : StartTelemetryQuerySessionOutcome(std::move(result.GetError()));
}

StopTelemetryQueryOutcome CloudWatchOmniClient::StopTelemetryQuery(const StopTelemetryQueryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopTelemetryQueryOutcome(result.GetResultWithOwnership())
                            : StopTelemetryQueryOutcome(std::move(result.GetError()));
}

StopTelemetryQuerySessionOutcome CloudWatchOmniClient::StopTelemetryQuerySession(const StopTelemetryQuerySessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopTelemetryQuerySessionOutcome(result.GetResultWithOwnership())
                            : StopTelemetryQuerySessionOutcome(std::move(result.GetError()));
}

UpdateAccessProfileOutcome CloudWatchOmniClient::UpdateAccessProfile(const UpdateAccessProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAccessProfileOutcome(result.GetResultWithOwnership())
                            : UpdateAccessProfileOutcome(std::move(result.GetError()));
}

UpdateAlertOutcome CloudWatchOmniClient::UpdateAlert(const UpdateAlertRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAlertOutcome(result.GetResultWithOwnership()) : UpdateAlertOutcome(std::move(result.GetError()));
}

UpdateDomainOutcome CloudWatchOmniClient::UpdateDomain(const UpdateDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDomainOutcome(result.GetResultWithOwnership()) : UpdateDomainOutcome(std::move(result.GetError()));
}

UpdateDomainForOrganizationOutcome CloudWatchOmniClient::UpdateDomainForOrganization(
    const UpdateDomainForOrganizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDomainForOrganizationOutcome(result.GetResultWithOwnership())
                            : UpdateDomainForOrganizationOutcome(std::move(result.GetError()));
}

UpdateIntegrationOutcome CloudWatchOmniClient::UpdateIntegration(const UpdateIntegrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateIntegrationOutcome(result.GetResultWithOwnership())
                            : UpdateIntegrationOutcome(std::move(result.GetError()));
}

UpdateOmniDashboardOutcome CloudWatchOmniClient::UpdateOmniDashboard(const UpdateOmniDashboardRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateOmniDashboardOutcome(result.GetResultWithOwnership())
                            : UpdateOmniDashboardOutcome(std::move(result.GetError()));
}

UpdateSpaceOutcome CloudWatchOmniClient::UpdateSpace(const UpdateSpaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSpaceOutcome(result.GetResultWithOwnership()) : UpdateSpaceOutcome(std::move(result.GetError()));
}

UpdateViewOutcome CloudWatchOmniClient::UpdateView(const UpdateViewRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateViewOutcome(result.GetResultWithOwnership()) : UpdateViewOutcome(std::move(result.GetError()));
}
