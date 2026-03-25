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
#include <aws/fms/FMSClient.h>
#include <aws/fms/FMSEndpointProvider.h>
#include <aws/fms/FMSErrorMarshaller.h>
#include <aws/fms/model/AssociateAdminAccountRequest.h>
#include <aws/fms/model/AssociateThirdPartyFirewallRequest.h>
#include <aws/fms/model/BatchAssociateResourceRequest.h>
#include <aws/fms/model/BatchDisassociateResourceRequest.h>
#include <aws/fms/model/DeleteAppsListRequest.h>
#include <aws/fms/model/DeleteNotificationChannelRequest.h>
#include <aws/fms/model/DeletePolicyRequest.h>
#include <aws/fms/model/DeleteProtocolsListRequest.h>
#include <aws/fms/model/DeleteResourceSetRequest.h>
#include <aws/fms/model/DisassociateAdminAccountRequest.h>
#include <aws/fms/model/DisassociateThirdPartyFirewallRequest.h>
#include <aws/fms/model/GetAdminAccountRequest.h>
#include <aws/fms/model/GetAdminScopeRequest.h>
#include <aws/fms/model/GetAppsListRequest.h>
#include <aws/fms/model/GetComplianceDetailRequest.h>
#include <aws/fms/model/GetNotificationChannelRequest.h>
#include <aws/fms/model/GetPolicyRequest.h>
#include <aws/fms/model/GetProtectionStatusRequest.h>
#include <aws/fms/model/GetProtocolsListRequest.h>
#include <aws/fms/model/GetResourceSetRequest.h>
#include <aws/fms/model/GetThirdPartyFirewallAssociationStatusRequest.h>
#include <aws/fms/model/GetViolationDetailsRequest.h>
#include <aws/fms/model/ListAdminAccountsForOrganizationRequest.h>
#include <aws/fms/model/ListAdminsManagingAccountRequest.h>
#include <aws/fms/model/ListAppsListsRequest.h>
#include <aws/fms/model/ListComplianceStatusRequest.h>
#include <aws/fms/model/ListDiscoveredResourcesRequest.h>
#include <aws/fms/model/ListMemberAccountsRequest.h>
#include <aws/fms/model/ListPoliciesRequest.h>
#include <aws/fms/model/ListProtocolsListsRequest.h>
#include <aws/fms/model/ListResourceSetResourcesRequest.h>
#include <aws/fms/model/ListResourceSetsRequest.h>
#include <aws/fms/model/ListTagsForResourceRequest.h>
#include <aws/fms/model/ListThirdPartyFirewallFirewallPoliciesRequest.h>
#include <aws/fms/model/PutAdminAccountRequest.h>
#include <aws/fms/model/PutAppsListRequest.h>
#include <aws/fms/model/PutNotificationChannelRequest.h>
#include <aws/fms/model/PutPolicyRequest.h>
#include <aws/fms/model/PutProtocolsListRequest.h>
#include <aws/fms/model/PutResourceSetRequest.h>
#include <aws/fms/model/TagResourceRequest.h>
#include <aws/fms/model/UntagResourceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::FMS;
using namespace Aws::FMS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace FMS {
const char SERVICE_NAME[] = "fms";
const char ALLOCATION_TAG[] = "FMSClient";
}  // namespace FMS
}  // namespace Aws
const char* FMSClient::GetServiceName() { return SERVICE_NAME; }
const char* FMSClient::GetAllocationTag() { return ALLOCATION_TAG; }

FMSClient::FMSClient(const FMS::FMSClientConfiguration& clientConfiguration, std::shared_ptr<FMSEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FMSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<FMSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FMSClient::FMSClient(const AWSCredentials& credentials, std::shared_ptr<FMSEndpointProviderBase> endpointProvider,
                     const FMS::FMSClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FMSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<FMSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FMSClient::FMSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<FMSEndpointProviderBase> endpointProvider, const FMS::FMSClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FMSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<FMSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
FMSClient::FMSClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FMSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<FMSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FMSClient::FMSClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FMSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<FMSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FMSClient::FMSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FMSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<FMSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
FMSClient::~FMSClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<FMSEndpointProviderBase>& FMSClient::accessEndpointProvider() { return m_endpointProvider; }

void FMSClient::init(const FMS::FMSClientConfiguration& config) {
  AWSClient::SetServiceClientName("FMS");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "fms");
}

void FMSClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
FMSClient::InvokeOperationOutcome FMSClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AssociateAdminAccountOutcome FMSClient::AssociateAdminAccount(const AssociateAdminAccountRequest& request) const {
  return AssociateAdminAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateThirdPartyFirewallOutcome FMSClient::AssociateThirdPartyFirewall(const AssociateThirdPartyFirewallRequest& request) const {
  return AssociateThirdPartyFirewallOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchAssociateResourceOutcome FMSClient::BatchAssociateResource(const BatchAssociateResourceRequest& request) const {
  return BatchAssociateResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDisassociateResourceOutcome FMSClient::BatchDisassociateResource(const BatchDisassociateResourceRequest& request) const {
  return BatchDisassociateResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAppsListOutcome FMSClient::DeleteAppsList(const DeleteAppsListRequest& request) const {
  return DeleteAppsListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteNotificationChannelOutcome FMSClient::DeleteNotificationChannel(const DeleteNotificationChannelRequest& request) const {
  return DeleteNotificationChannelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePolicyOutcome FMSClient::DeletePolicy(const DeletePolicyRequest& request) const {
  return DeletePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProtocolsListOutcome FMSClient::DeleteProtocolsList(const DeleteProtocolsListRequest& request) const {
  return DeleteProtocolsListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourceSetOutcome FMSClient::DeleteResourceSet(const DeleteResourceSetRequest& request) const {
  return DeleteResourceSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateAdminAccountOutcome FMSClient::DisassociateAdminAccount(const DisassociateAdminAccountRequest& request) const {
  return DisassociateAdminAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateThirdPartyFirewallOutcome FMSClient::DisassociateThirdPartyFirewall(
    const DisassociateThirdPartyFirewallRequest& request) const {
  return DisassociateThirdPartyFirewallOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAdminAccountOutcome FMSClient::GetAdminAccount(const GetAdminAccountRequest& request) const {
  return GetAdminAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAdminScopeOutcome FMSClient::GetAdminScope(const GetAdminScopeRequest& request) const {
  return GetAdminScopeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAppsListOutcome FMSClient::GetAppsList(const GetAppsListRequest& request) const {
  return GetAppsListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetComplianceDetailOutcome FMSClient::GetComplianceDetail(const GetComplianceDetailRequest& request) const {
  return GetComplianceDetailOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetNotificationChannelOutcome FMSClient::GetNotificationChannel(const GetNotificationChannelRequest& request) const {
  return GetNotificationChannelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPolicyOutcome FMSClient::GetPolicy(const GetPolicyRequest& request) const {
  return GetPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetProtectionStatusOutcome FMSClient::GetProtectionStatus(const GetProtectionStatusRequest& request) const {
  return GetProtectionStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetProtocolsListOutcome FMSClient::GetProtocolsList(const GetProtocolsListRequest& request) const {
  return GetProtocolsListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourceSetOutcome FMSClient::GetResourceSet(const GetResourceSetRequest& request) const {
  return GetResourceSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetThirdPartyFirewallAssociationStatusOutcome FMSClient::GetThirdPartyFirewallAssociationStatus(
    const GetThirdPartyFirewallAssociationStatusRequest& request) const {
  return GetThirdPartyFirewallAssociationStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetViolationDetailsOutcome FMSClient::GetViolationDetails(const GetViolationDetailsRequest& request) const {
  return GetViolationDetailsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAdminAccountsForOrganizationOutcome FMSClient::ListAdminAccountsForOrganization(
    const ListAdminAccountsForOrganizationRequest& request) const {
  return ListAdminAccountsForOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAdminsManagingAccountOutcome FMSClient::ListAdminsManagingAccount(const ListAdminsManagingAccountRequest& request) const {
  return ListAdminsManagingAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAppsListsOutcome FMSClient::ListAppsLists(const ListAppsListsRequest& request) const {
  return ListAppsListsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListComplianceStatusOutcome FMSClient::ListComplianceStatus(const ListComplianceStatusRequest& request) const {
  return ListComplianceStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDiscoveredResourcesOutcome FMSClient::ListDiscoveredResources(const ListDiscoveredResourcesRequest& request) const {
  return ListDiscoveredResourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMemberAccountsOutcome FMSClient::ListMemberAccounts(const ListMemberAccountsRequest& request) const {
  return ListMemberAccountsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPoliciesOutcome FMSClient::ListPolicies(const ListPoliciesRequest& request) const {
  return ListPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProtocolsListsOutcome FMSClient::ListProtocolsLists(const ListProtocolsListsRequest& request) const {
  return ListProtocolsListsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourceSetResourcesOutcome FMSClient::ListResourceSetResources(const ListResourceSetResourcesRequest& request) const {
  return ListResourceSetResourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourceSetsOutcome FMSClient::ListResourceSets(const ListResourceSetsRequest& request) const {
  return ListResourceSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome FMSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListThirdPartyFirewallFirewallPoliciesOutcome FMSClient::ListThirdPartyFirewallFirewallPolicies(
    const ListThirdPartyFirewallFirewallPoliciesRequest& request) const {
  return ListThirdPartyFirewallFirewallPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutAdminAccountOutcome FMSClient::PutAdminAccount(const PutAdminAccountRequest& request) const {
  return PutAdminAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutAppsListOutcome FMSClient::PutAppsList(const PutAppsListRequest& request) const {
  return PutAppsListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutNotificationChannelOutcome FMSClient::PutNotificationChannel(const PutNotificationChannelRequest& request) const {
  return PutNotificationChannelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutPolicyOutcome FMSClient::PutPolicy(const PutPolicyRequest& request) const {
  return PutPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutProtocolsListOutcome FMSClient::PutProtocolsList(const PutProtocolsListRequest& request) const {
  return PutProtocolsListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourceSetOutcome FMSClient::PutResourceSet(const PutResourceSetRequest& request) const {
  return PutResourceSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome FMSClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome FMSClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
