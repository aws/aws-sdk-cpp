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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAddonInstanceOutcome(result.GetResultWithOwnership())
                            : CreateAddonInstanceOutcome(std::move(result.GetError()));
}

CreateAddonSubscriptionOutcome MailManagerClient::CreateAddonSubscription(const CreateAddonSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAddonSubscriptionOutcome(result.GetResultWithOwnership())
                            : CreateAddonSubscriptionOutcome(std::move(result.GetError()));
}

CreateAddressListOutcome MailManagerClient::CreateAddressList(const CreateAddressListRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAddressListOutcome(result.GetResultWithOwnership())
                            : CreateAddressListOutcome(std::move(result.GetError()));
}

CreateAddressListImportJobOutcome MailManagerClient::CreateAddressListImportJob(const CreateAddressListImportJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAddressListImportJobOutcome(result.GetResultWithOwnership())
                            : CreateAddressListImportJobOutcome(std::move(result.GetError()));
}

CreateArchiveOutcome MailManagerClient::CreateArchive(const CreateArchiveRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateArchiveOutcome(result.GetResultWithOwnership()) : CreateArchiveOutcome(std::move(result.GetError()));
}

CreateIngressPointOutcome MailManagerClient::CreateIngressPoint(const CreateIngressPointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIngressPointOutcome(result.GetResultWithOwnership())
                            : CreateIngressPointOutcome(std::move(result.GetError()));
}

CreateRelayOutcome MailManagerClient::CreateRelay(const CreateRelayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRelayOutcome(result.GetResultWithOwnership()) : CreateRelayOutcome(std::move(result.GetError()));
}

CreateRuleSetOutcome MailManagerClient::CreateRuleSet(const CreateRuleSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRuleSetOutcome(result.GetResultWithOwnership()) : CreateRuleSetOutcome(std::move(result.GetError()));
}

CreateTrafficPolicyOutcome MailManagerClient::CreateTrafficPolicy(const CreateTrafficPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTrafficPolicyOutcome(result.GetResultWithOwnership())
                            : CreateTrafficPolicyOutcome(std::move(result.GetError()));
}

DeleteAddonInstanceOutcome MailManagerClient::DeleteAddonInstance(const DeleteAddonInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAddonInstanceOutcome(result.GetResultWithOwnership())
                            : DeleteAddonInstanceOutcome(std::move(result.GetError()));
}

DeleteAddonSubscriptionOutcome MailManagerClient::DeleteAddonSubscription(const DeleteAddonSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAddonSubscriptionOutcome(result.GetResultWithOwnership())
                            : DeleteAddonSubscriptionOutcome(std::move(result.GetError()));
}

DeleteAddressListOutcome MailManagerClient::DeleteAddressList(const DeleteAddressListRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAddressListOutcome(result.GetResultWithOwnership())
                            : DeleteAddressListOutcome(std::move(result.GetError()));
}

DeleteArchiveOutcome MailManagerClient::DeleteArchive(const DeleteArchiveRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteArchiveOutcome(result.GetResultWithOwnership()) : DeleteArchiveOutcome(std::move(result.GetError()));
}

DeleteIngressPointOutcome MailManagerClient::DeleteIngressPoint(const DeleteIngressPointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIngressPointOutcome(result.GetResultWithOwnership())
                            : DeleteIngressPointOutcome(std::move(result.GetError()));
}

DeleteRelayOutcome MailManagerClient::DeleteRelay(const DeleteRelayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRelayOutcome(result.GetResultWithOwnership()) : DeleteRelayOutcome(std::move(result.GetError()));
}

DeleteRuleSetOutcome MailManagerClient::DeleteRuleSet(const DeleteRuleSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRuleSetOutcome(result.GetResultWithOwnership()) : DeleteRuleSetOutcome(std::move(result.GetError()));
}

DeleteTrafficPolicyOutcome MailManagerClient::DeleteTrafficPolicy(const DeleteTrafficPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTrafficPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteTrafficPolicyOutcome(std::move(result.GetError()));
}

DeregisterMemberFromAddressListOutcome MailManagerClient::DeregisterMemberFromAddressList(
    const DeregisterMemberFromAddressListRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterMemberFromAddressListOutcome(result.GetResultWithOwnership())
                            : DeregisterMemberFromAddressListOutcome(std::move(result.GetError()));
}

GetAddonInstanceOutcome MailManagerClient::GetAddonInstance(const GetAddonInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAddonInstanceOutcome(result.GetResultWithOwnership())
                            : GetAddonInstanceOutcome(std::move(result.GetError()));
}

GetAddonSubscriptionOutcome MailManagerClient::GetAddonSubscription(const GetAddonSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAddonSubscriptionOutcome(result.GetResultWithOwnership())
                            : GetAddonSubscriptionOutcome(std::move(result.GetError()));
}

GetAddressListOutcome MailManagerClient::GetAddressList(const GetAddressListRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAddressListOutcome(result.GetResultWithOwnership()) : GetAddressListOutcome(std::move(result.GetError()));
}

GetAddressListImportJobOutcome MailManagerClient::GetAddressListImportJob(const GetAddressListImportJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAddressListImportJobOutcome(result.GetResultWithOwnership())
                            : GetAddressListImportJobOutcome(std::move(result.GetError()));
}

GetArchiveOutcome MailManagerClient::GetArchive(const GetArchiveRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetArchiveOutcome(result.GetResultWithOwnership()) : GetArchiveOutcome(std::move(result.GetError()));
}

GetArchiveExportOutcome MailManagerClient::GetArchiveExport(const GetArchiveExportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetArchiveExportOutcome(result.GetResultWithOwnership())
                            : GetArchiveExportOutcome(std::move(result.GetError()));
}

GetArchiveMessageOutcome MailManagerClient::GetArchiveMessage(const GetArchiveMessageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetArchiveMessageOutcome(result.GetResultWithOwnership())
                            : GetArchiveMessageOutcome(std::move(result.GetError()));
}

GetArchiveMessageContentOutcome MailManagerClient::GetArchiveMessageContent(const GetArchiveMessageContentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetArchiveMessageContentOutcome(result.GetResultWithOwnership())
                            : GetArchiveMessageContentOutcome(std::move(result.GetError()));
}

GetArchiveSearchOutcome MailManagerClient::GetArchiveSearch(const GetArchiveSearchRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetArchiveSearchOutcome(result.GetResultWithOwnership())
                            : GetArchiveSearchOutcome(std::move(result.GetError()));
}

GetArchiveSearchResultsOutcome MailManagerClient::GetArchiveSearchResults(const GetArchiveSearchResultsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetArchiveSearchResultsOutcome(result.GetResultWithOwnership())
                            : GetArchiveSearchResultsOutcome(std::move(result.GetError()));
}

GetIngressPointOutcome MailManagerClient::GetIngressPoint(const GetIngressPointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIngressPointOutcome(result.GetResultWithOwnership())
                            : GetIngressPointOutcome(std::move(result.GetError()));
}

GetMemberOfAddressListOutcome MailManagerClient::GetMemberOfAddressList(const GetMemberOfAddressListRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMemberOfAddressListOutcome(result.GetResultWithOwnership())
                            : GetMemberOfAddressListOutcome(std::move(result.GetError()));
}

GetRelayOutcome MailManagerClient::GetRelay(const GetRelayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRelayOutcome(result.GetResultWithOwnership()) : GetRelayOutcome(std::move(result.GetError()));
}

GetRuleSetOutcome MailManagerClient::GetRuleSet(const GetRuleSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRuleSetOutcome(result.GetResultWithOwnership()) : GetRuleSetOutcome(std::move(result.GetError()));
}

GetTrafficPolicyOutcome MailManagerClient::GetTrafficPolicy(const GetTrafficPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTrafficPolicyOutcome(result.GetResultWithOwnership())
                            : GetTrafficPolicyOutcome(std::move(result.GetError()));
}

ListAddonInstancesOutcome MailManagerClient::ListAddonInstances(const ListAddonInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAddonInstancesOutcome(result.GetResultWithOwnership())
                            : ListAddonInstancesOutcome(std::move(result.GetError()));
}

ListAddonSubscriptionsOutcome MailManagerClient::ListAddonSubscriptions(const ListAddonSubscriptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAddonSubscriptionsOutcome(result.GetResultWithOwnership())
                            : ListAddonSubscriptionsOutcome(std::move(result.GetError()));
}

ListAddressListImportJobsOutcome MailManagerClient::ListAddressListImportJobs(const ListAddressListImportJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAddressListImportJobsOutcome(result.GetResultWithOwnership())
                            : ListAddressListImportJobsOutcome(std::move(result.GetError()));
}

ListAddressListsOutcome MailManagerClient::ListAddressLists(const ListAddressListsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAddressListsOutcome(result.GetResultWithOwnership())
                            : ListAddressListsOutcome(std::move(result.GetError()));
}

ListArchiveExportsOutcome MailManagerClient::ListArchiveExports(const ListArchiveExportsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListArchiveExportsOutcome(result.GetResultWithOwnership())
                            : ListArchiveExportsOutcome(std::move(result.GetError()));
}

ListArchiveSearchesOutcome MailManagerClient::ListArchiveSearches(const ListArchiveSearchesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListArchiveSearchesOutcome(result.GetResultWithOwnership())
                            : ListArchiveSearchesOutcome(std::move(result.GetError()));
}

ListArchivesOutcome MailManagerClient::ListArchives(const ListArchivesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListArchivesOutcome(result.GetResultWithOwnership()) : ListArchivesOutcome(std::move(result.GetError()));
}

ListIngressPointsOutcome MailManagerClient::ListIngressPoints(const ListIngressPointsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListIngressPointsOutcome(result.GetResultWithOwnership())
                            : ListIngressPointsOutcome(std::move(result.GetError()));
}

ListMembersOfAddressListOutcome MailManagerClient::ListMembersOfAddressList(const ListMembersOfAddressListRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMembersOfAddressListOutcome(result.GetResultWithOwnership())
                            : ListMembersOfAddressListOutcome(std::move(result.GetError()));
}

ListRelaysOutcome MailManagerClient::ListRelays(const ListRelaysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRelaysOutcome(result.GetResultWithOwnership()) : ListRelaysOutcome(std::move(result.GetError()));
}

ListRuleSetsOutcome MailManagerClient::ListRuleSets(const ListRuleSetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRuleSetsOutcome(result.GetResultWithOwnership()) : ListRuleSetsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome MailManagerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListTrafficPoliciesOutcome MailManagerClient::ListTrafficPolicies(const ListTrafficPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTrafficPoliciesOutcome(result.GetResultWithOwnership())
                            : ListTrafficPoliciesOutcome(std::move(result.GetError()));
}

RegisterMemberToAddressListOutcome MailManagerClient::RegisterMemberToAddressList(const RegisterMemberToAddressListRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterMemberToAddressListOutcome(result.GetResultWithOwnership())
                            : RegisterMemberToAddressListOutcome(std::move(result.GetError()));
}

StartAddressListImportJobOutcome MailManagerClient::StartAddressListImportJob(const StartAddressListImportJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartAddressListImportJobOutcome(result.GetResultWithOwnership())
                            : StartAddressListImportJobOutcome(std::move(result.GetError()));
}

StartArchiveExportOutcome MailManagerClient::StartArchiveExport(const StartArchiveExportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartArchiveExportOutcome(result.GetResultWithOwnership())
                            : StartArchiveExportOutcome(std::move(result.GetError()));
}

StartArchiveSearchOutcome MailManagerClient::StartArchiveSearch(const StartArchiveSearchRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartArchiveSearchOutcome(result.GetResultWithOwnership())
                            : StartArchiveSearchOutcome(std::move(result.GetError()));
}

StopAddressListImportJobOutcome MailManagerClient::StopAddressListImportJob(const StopAddressListImportJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopAddressListImportJobOutcome(result.GetResultWithOwnership())
                            : StopAddressListImportJobOutcome(std::move(result.GetError()));
}

StopArchiveExportOutcome MailManagerClient::StopArchiveExport(const StopArchiveExportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopArchiveExportOutcome(result.GetResultWithOwnership())
                            : StopArchiveExportOutcome(std::move(result.GetError()));
}

StopArchiveSearchOutcome MailManagerClient::StopArchiveSearch(const StopArchiveSearchRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopArchiveSearchOutcome(result.GetResultWithOwnership())
                            : StopArchiveSearchOutcome(std::move(result.GetError()));
}

TagResourceOutcome MailManagerClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome MailManagerClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateArchiveOutcome MailManagerClient::UpdateArchive(const UpdateArchiveRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateArchiveOutcome(result.GetResultWithOwnership()) : UpdateArchiveOutcome(std::move(result.GetError()));
}

UpdateIngressPointOutcome MailManagerClient::UpdateIngressPoint(const UpdateIngressPointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateIngressPointOutcome(result.GetResultWithOwnership())
                            : UpdateIngressPointOutcome(std::move(result.GetError()));
}

UpdateRelayOutcome MailManagerClient::UpdateRelay(const UpdateRelayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRelayOutcome(result.GetResultWithOwnership()) : UpdateRelayOutcome(std::move(result.GetError()));
}

UpdateRuleSetOutcome MailManagerClient::UpdateRuleSet(const UpdateRuleSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRuleSetOutcome(result.GetResultWithOwnership()) : UpdateRuleSetOutcome(std::move(result.GetError()));
}

UpdateTrafficPolicyOutcome MailManagerClient::UpdateTrafficPolicy(const UpdateTrafficPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTrafficPolicyOutcome(result.GetResultWithOwnership())
                            : UpdateTrafficPolicyOutcome(std::move(result.GetError()));
}
