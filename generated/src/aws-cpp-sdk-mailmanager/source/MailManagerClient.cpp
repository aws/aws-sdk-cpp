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
#include <aws/mailmanager/MailManagerClient.h>
#include <aws/mailmanager/MailManagerEndpointProvider.h>
#include <aws/mailmanager/MailManagerErrorMarshaller.h>
#include <aws/mailmanager/model/CreateAddonInstanceRequest.h>
#include <aws/mailmanager/model/CreateAddonSubscriptionRequest.h>
#include <aws/mailmanager/model/CreateAddressListImportJobRequest.h>
#include <aws/mailmanager/model/CreateAddressListRequest.h>
#include <aws/mailmanager/model/CreateArchiveRequest.h>
#include <aws/mailmanager/model/CreateIngressPointRequest.h>
#include <aws/mailmanager/model/CreateRelayRequest.h>
#include <aws/mailmanager/model/CreateRuleSetRequest.h>
#include <aws/mailmanager/model/CreateTrafficPolicyRequest.h>
#include <aws/mailmanager/model/DeleteAddonInstanceRequest.h>
#include <aws/mailmanager/model/DeleteAddonSubscriptionRequest.h>
#include <aws/mailmanager/model/DeleteAddressListRequest.h>
#include <aws/mailmanager/model/DeleteArchiveRequest.h>
#include <aws/mailmanager/model/DeleteIngressPointRequest.h>
#include <aws/mailmanager/model/DeleteRelayRequest.h>
#include <aws/mailmanager/model/DeleteRuleSetRequest.h>
#include <aws/mailmanager/model/DeleteTrafficPolicyRequest.h>
#include <aws/mailmanager/model/DeregisterMemberFromAddressListRequest.h>
#include <aws/mailmanager/model/GetAddonInstanceRequest.h>
#include <aws/mailmanager/model/GetAddonSubscriptionRequest.h>
#include <aws/mailmanager/model/GetAddressListImportJobRequest.h>
#include <aws/mailmanager/model/GetAddressListRequest.h>
#include <aws/mailmanager/model/GetArchiveExportRequest.h>
#include <aws/mailmanager/model/GetArchiveMessageContentRequest.h>
#include <aws/mailmanager/model/GetArchiveMessageRequest.h>
#include <aws/mailmanager/model/GetArchiveRequest.h>
#include <aws/mailmanager/model/GetArchiveSearchRequest.h>
#include <aws/mailmanager/model/GetArchiveSearchResultsRequest.h>
#include <aws/mailmanager/model/GetIngressPointRequest.h>
#include <aws/mailmanager/model/GetMemberOfAddressListRequest.h>
#include <aws/mailmanager/model/GetRelayRequest.h>
#include <aws/mailmanager/model/GetRuleSetRequest.h>
#include <aws/mailmanager/model/GetTrafficPolicyRequest.h>
#include <aws/mailmanager/model/ListAddonInstancesRequest.h>
#include <aws/mailmanager/model/ListAddonSubscriptionsRequest.h>
#include <aws/mailmanager/model/ListAddressListImportJobsRequest.h>
#include <aws/mailmanager/model/ListAddressListsRequest.h>
#include <aws/mailmanager/model/ListArchiveExportsRequest.h>
#include <aws/mailmanager/model/ListArchiveSearchesRequest.h>
#include <aws/mailmanager/model/ListArchivesRequest.h>
#include <aws/mailmanager/model/ListIngressPointsRequest.h>
#include <aws/mailmanager/model/ListMembersOfAddressListRequest.h>
#include <aws/mailmanager/model/ListRelaysRequest.h>
#include <aws/mailmanager/model/ListRuleSetsRequest.h>
#include <aws/mailmanager/model/ListTagsForResourceRequest.h>
#include <aws/mailmanager/model/ListTrafficPoliciesRequest.h>
#include <aws/mailmanager/model/RegisterMemberToAddressListRequest.h>
#include <aws/mailmanager/model/StartAddressListImportJobRequest.h>
#include <aws/mailmanager/model/StartArchiveExportRequest.h>
#include <aws/mailmanager/model/StartArchiveSearchRequest.h>
#include <aws/mailmanager/model/StopAddressListImportJobRequest.h>
#include <aws/mailmanager/model/StopArchiveExportRequest.h>
#include <aws/mailmanager/model/StopArchiveSearchRequest.h>
#include <aws/mailmanager/model/TagResourceRequest.h>
#include <aws/mailmanager/model/UntagResourceRequest.h>
#include <aws/mailmanager/model/UpdateArchiveRequest.h>
#include <aws/mailmanager/model/UpdateIngressPointRequest.h>
#include <aws/mailmanager/model/UpdateRelayRequest.h>
#include <aws/mailmanager/model/UpdateRuleSetRequest.h>
#include <aws/mailmanager/model/UpdateTrafficPolicyRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MailManager;
using namespace Aws::MailManager::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MailManager {
const char SERVICE_NAME[] = "ses";
const char ALLOCATION_TAG[] = "MailManagerClient";
}  // namespace MailManager
}  // namespace Aws
const char* MailManagerClient::GetServiceName() { return SERVICE_NAME; }
const char* MailManagerClient::GetAllocationTag() { return ALLOCATION_TAG; }

MailManagerClient::MailManagerClient(const MailManager::MailManagerClientConfiguration& clientConfiguration,
                                     std::shared_ptr<MailManagerEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MailManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MailManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MailManagerClient::MailManagerClient(const AWSCredentials& credentials, std::shared_ptr<MailManagerEndpointProviderBase> endpointProvider,
                                     const MailManager::MailManagerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MailManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MailManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MailManagerClient::MailManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<MailManagerEndpointProviderBase> endpointProvider,
                                     const MailManager::MailManagerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MailManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MailManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MailManagerClient::MailManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MailManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MailManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MailManagerClient::MailManagerClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MailManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MailManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MailManagerClient::MailManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MailManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MailManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MailManagerClient::~MailManagerClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MailManagerEndpointProviderBase>& MailManagerClient::accessEndpointProvider() { return m_endpointProvider; }

void MailManagerClient::init(const MailManager::MailManagerClientConfiguration& config) {
  AWSClient::SetServiceClientName("MailManager");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "ses");
}

void MailManagerClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MailManagerClient::InvokeOperationOutcome MailManagerClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateAddonInstanceOutcome MailManagerClient::CreateAddonInstance(const CreateAddonInstanceRequest& request) const {
  return CreateAddonInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAddonSubscriptionOutcome MailManagerClient::CreateAddonSubscription(const CreateAddonSubscriptionRequest& request) const {
  return CreateAddonSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAddressListOutcome MailManagerClient::CreateAddressList(const CreateAddressListRequest& request) const {
  return CreateAddressListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAddressListImportJobOutcome MailManagerClient::CreateAddressListImportJob(const CreateAddressListImportJobRequest& request) const {
  return CreateAddressListImportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateArchiveOutcome MailManagerClient::CreateArchive(const CreateArchiveRequest& request) const {
  return CreateArchiveOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIngressPointOutcome MailManagerClient::CreateIngressPoint(const CreateIngressPointRequest& request) const {
  return CreateIngressPointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRelayOutcome MailManagerClient::CreateRelay(const CreateRelayRequest& request) const {
  return CreateRelayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRuleSetOutcome MailManagerClient::CreateRuleSet(const CreateRuleSetRequest& request) const {
  return CreateRuleSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTrafficPolicyOutcome MailManagerClient::CreateTrafficPolicy(const CreateTrafficPolicyRequest& request) const {
  return CreateTrafficPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAddonInstanceOutcome MailManagerClient::DeleteAddonInstance(const DeleteAddonInstanceRequest& request) const {
  return DeleteAddonInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAddonSubscriptionOutcome MailManagerClient::DeleteAddonSubscription(const DeleteAddonSubscriptionRequest& request) const {
  return DeleteAddonSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAddressListOutcome MailManagerClient::DeleteAddressList(const DeleteAddressListRequest& request) const {
  return DeleteAddressListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteArchiveOutcome MailManagerClient::DeleteArchive(const DeleteArchiveRequest& request) const {
  return DeleteArchiveOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIngressPointOutcome MailManagerClient::DeleteIngressPoint(const DeleteIngressPointRequest& request) const {
  return DeleteIngressPointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRelayOutcome MailManagerClient::DeleteRelay(const DeleteRelayRequest& request) const {
  return DeleteRelayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRuleSetOutcome MailManagerClient::DeleteRuleSet(const DeleteRuleSetRequest& request) const {
  return DeleteRuleSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTrafficPolicyOutcome MailManagerClient::DeleteTrafficPolicy(const DeleteTrafficPolicyRequest& request) const {
  return DeleteTrafficPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterMemberFromAddressListOutcome MailManagerClient::DeregisterMemberFromAddressList(
    const DeregisterMemberFromAddressListRequest& request) const {
  return DeregisterMemberFromAddressListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAddonInstanceOutcome MailManagerClient::GetAddonInstance(const GetAddonInstanceRequest& request) const {
  return GetAddonInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAddonSubscriptionOutcome MailManagerClient::GetAddonSubscription(const GetAddonSubscriptionRequest& request) const {
  return GetAddonSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAddressListOutcome MailManagerClient::GetAddressList(const GetAddressListRequest& request) const {
  return GetAddressListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAddressListImportJobOutcome MailManagerClient::GetAddressListImportJob(const GetAddressListImportJobRequest& request) const {
  return GetAddressListImportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetArchiveOutcome MailManagerClient::GetArchive(const GetArchiveRequest& request) const {
  return GetArchiveOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetArchiveExportOutcome MailManagerClient::GetArchiveExport(const GetArchiveExportRequest& request) const {
  return GetArchiveExportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetArchiveMessageOutcome MailManagerClient::GetArchiveMessage(const GetArchiveMessageRequest& request) const {
  return GetArchiveMessageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetArchiveMessageContentOutcome MailManagerClient::GetArchiveMessageContent(const GetArchiveMessageContentRequest& request) const {
  return GetArchiveMessageContentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetArchiveSearchOutcome MailManagerClient::GetArchiveSearch(const GetArchiveSearchRequest& request) const {
  return GetArchiveSearchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetArchiveSearchResultsOutcome MailManagerClient::GetArchiveSearchResults(const GetArchiveSearchResultsRequest& request) const {
  return GetArchiveSearchResultsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIngressPointOutcome MailManagerClient::GetIngressPoint(const GetIngressPointRequest& request) const {
  return GetIngressPointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMemberOfAddressListOutcome MailManagerClient::GetMemberOfAddressList(const GetMemberOfAddressListRequest& request) const {
  return GetMemberOfAddressListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRelayOutcome MailManagerClient::GetRelay(const GetRelayRequest& request) const {
  return GetRelayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRuleSetOutcome MailManagerClient::GetRuleSet(const GetRuleSetRequest& request) const {
  return GetRuleSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTrafficPolicyOutcome MailManagerClient::GetTrafficPolicy(const GetTrafficPolicyRequest& request) const {
  return GetTrafficPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAddonInstancesOutcome MailManagerClient::ListAddonInstances(const ListAddonInstancesRequest& request) const {
  return ListAddonInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAddonSubscriptionsOutcome MailManagerClient::ListAddonSubscriptions(const ListAddonSubscriptionsRequest& request) const {
  return ListAddonSubscriptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAddressListImportJobsOutcome MailManagerClient::ListAddressListImportJobs(const ListAddressListImportJobsRequest& request) const {
  return ListAddressListImportJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAddressListsOutcome MailManagerClient::ListAddressLists(const ListAddressListsRequest& request) const {
  return ListAddressListsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListArchiveExportsOutcome MailManagerClient::ListArchiveExports(const ListArchiveExportsRequest& request) const {
  return ListArchiveExportsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListArchiveSearchesOutcome MailManagerClient::ListArchiveSearches(const ListArchiveSearchesRequest& request) const {
  return ListArchiveSearchesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListArchivesOutcome MailManagerClient::ListArchives(const ListArchivesRequest& request) const {
  return ListArchivesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListIngressPointsOutcome MailManagerClient::ListIngressPoints(const ListIngressPointsRequest& request) const {
  return ListIngressPointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMembersOfAddressListOutcome MailManagerClient::ListMembersOfAddressList(const ListMembersOfAddressListRequest& request) const {
  return ListMembersOfAddressListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRelaysOutcome MailManagerClient::ListRelays(const ListRelaysRequest& request) const {
  return ListRelaysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRuleSetsOutcome MailManagerClient::ListRuleSets(const ListRuleSetsRequest& request) const {
  return ListRuleSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome MailManagerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTrafficPoliciesOutcome MailManagerClient::ListTrafficPolicies(const ListTrafficPoliciesRequest& request) const {
  return ListTrafficPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterMemberToAddressListOutcome MailManagerClient::RegisterMemberToAddressList(const RegisterMemberToAddressListRequest& request) const {
  return RegisterMemberToAddressListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartAddressListImportJobOutcome MailManagerClient::StartAddressListImportJob(const StartAddressListImportJobRequest& request) const {
  return StartAddressListImportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartArchiveExportOutcome MailManagerClient::StartArchiveExport(const StartArchiveExportRequest& request) const {
  return StartArchiveExportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartArchiveSearchOutcome MailManagerClient::StartArchiveSearch(const StartArchiveSearchRequest& request) const {
  return StartArchiveSearchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopAddressListImportJobOutcome MailManagerClient::StopAddressListImportJob(const StopAddressListImportJobRequest& request) const {
  return StopAddressListImportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopArchiveExportOutcome MailManagerClient::StopArchiveExport(const StopArchiveExportRequest& request) const {
  return StopArchiveExportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopArchiveSearchOutcome MailManagerClient::StopArchiveSearch(const StopArchiveSearchRequest& request) const {
  return StopArchiveSearchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome MailManagerClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome MailManagerClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateArchiveOutcome MailManagerClient::UpdateArchive(const UpdateArchiveRequest& request) const {
  return UpdateArchiveOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateIngressPointOutcome MailManagerClient::UpdateIngressPoint(const UpdateIngressPointRequest& request) const {
  return UpdateIngressPointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRelayOutcome MailManagerClient::UpdateRelay(const UpdateRelayRequest& request) const {
  return UpdateRelayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRuleSetOutcome MailManagerClient::UpdateRuleSet(const UpdateRuleSetRequest& request) const {
  return UpdateRuleSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTrafficPolicyOutcome MailManagerClient::UpdateTrafficPolicy(const UpdateTrafficPolicyRequest& request) const {
  return UpdateTrafficPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
