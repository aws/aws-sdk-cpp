/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/mailmanager/MailManagerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/mailmanager/MailManagerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MailManagerClient header */
#include <aws/mailmanager/model/CreateAddonInstanceResult.h>
#include <aws/mailmanager/model/CreateAddonSubscriptionResult.h>
#include <aws/mailmanager/model/CreateAddressListResult.h>
#include <aws/mailmanager/model/CreateAddressListImportJobResult.h>
#include <aws/mailmanager/model/CreateArchiveResult.h>
#include <aws/mailmanager/model/CreateIngressPointResult.h>
#include <aws/mailmanager/model/CreateRelayResult.h>
#include <aws/mailmanager/model/CreateRuleSetResult.h>
#include <aws/mailmanager/model/CreateTrafficPolicyResult.h>
#include <aws/mailmanager/model/DeleteAddonInstanceResult.h>
#include <aws/mailmanager/model/DeleteAddonSubscriptionResult.h>
#include <aws/mailmanager/model/DeleteAddressListResult.h>
#include <aws/mailmanager/model/DeleteArchiveResult.h>
#include <aws/mailmanager/model/DeleteIngressPointResult.h>
#include <aws/mailmanager/model/DeleteRelayResult.h>
#include <aws/mailmanager/model/DeleteRuleSetResult.h>
#include <aws/mailmanager/model/DeleteTrafficPolicyResult.h>
#include <aws/mailmanager/model/DeregisterMemberFromAddressListResult.h>
#include <aws/mailmanager/model/GetAddonInstanceResult.h>
#include <aws/mailmanager/model/GetAddonSubscriptionResult.h>
#include <aws/mailmanager/model/GetAddressListResult.h>
#include <aws/mailmanager/model/GetAddressListImportJobResult.h>
#include <aws/mailmanager/model/GetArchiveResult.h>
#include <aws/mailmanager/model/GetArchiveExportResult.h>
#include <aws/mailmanager/model/GetArchiveMessageResult.h>
#include <aws/mailmanager/model/GetArchiveMessageContentResult.h>
#include <aws/mailmanager/model/GetArchiveSearchResult.h>
#include <aws/mailmanager/model/GetArchiveSearchResultsResult.h>
#include <aws/mailmanager/model/GetIngressPointResult.h>
#include <aws/mailmanager/model/GetMemberOfAddressListResult.h>
#include <aws/mailmanager/model/GetRelayResult.h>
#include <aws/mailmanager/model/GetRuleSetResult.h>
#include <aws/mailmanager/model/GetTrafficPolicyResult.h>
#include <aws/mailmanager/model/ListAddonInstancesResult.h>
#include <aws/mailmanager/model/ListAddonSubscriptionsResult.h>
#include <aws/mailmanager/model/ListAddressListImportJobsResult.h>
#include <aws/mailmanager/model/ListAddressListsResult.h>
#include <aws/mailmanager/model/ListArchiveExportsResult.h>
#include <aws/mailmanager/model/ListArchiveSearchesResult.h>
#include <aws/mailmanager/model/ListArchivesResult.h>
#include <aws/mailmanager/model/ListIngressPointsResult.h>
#include <aws/mailmanager/model/ListMembersOfAddressListResult.h>
#include <aws/mailmanager/model/ListRelaysResult.h>
#include <aws/mailmanager/model/ListRuleSetsResult.h>
#include <aws/mailmanager/model/ListTagsForResourceResult.h>
#include <aws/mailmanager/model/ListTrafficPoliciesResult.h>
#include <aws/mailmanager/model/RegisterMemberToAddressListResult.h>
#include <aws/mailmanager/model/StartAddressListImportJobResult.h>
#include <aws/mailmanager/model/StartArchiveExportResult.h>
#include <aws/mailmanager/model/StartArchiveSearchResult.h>
#include <aws/mailmanager/model/StopAddressListImportJobResult.h>
#include <aws/mailmanager/model/StopArchiveExportResult.h>
#include <aws/mailmanager/model/StopArchiveSearchResult.h>
#include <aws/mailmanager/model/TagResourceResult.h>
#include <aws/mailmanager/model/UntagResourceResult.h>
#include <aws/mailmanager/model/UpdateArchiveResult.h>
#include <aws/mailmanager/model/UpdateIngressPointResult.h>
#include <aws/mailmanager/model/UpdateRelayResult.h>
#include <aws/mailmanager/model/UpdateRuleSetResult.h>
#include <aws/mailmanager/model/UpdateTrafficPolicyResult.h>
#include <aws/mailmanager/model/ListTrafficPoliciesRequest.h>
#include <aws/mailmanager/model/ListAddressListsRequest.h>
#include <aws/mailmanager/model/ListArchivesRequest.h>
#include <aws/mailmanager/model/ListRelaysRequest.h>
#include <aws/mailmanager/model/ListAddonInstancesRequest.h>
#include <aws/mailmanager/model/ListIngressPointsRequest.h>
#include <aws/mailmanager/model/ListRuleSetsRequest.h>
#include <aws/mailmanager/model/ListAddonSubscriptionsRequest.h>
/* End of service model headers required in MailManagerClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace MailManager
  {
    using MailManagerClientConfiguration = Aws::Client::GenericClientConfiguration;
    using MailManagerEndpointProviderBase = Aws::MailManager::Endpoint::MailManagerEndpointProviderBase;
    using MailManagerEndpointProvider = Aws::MailManager::Endpoint::MailManagerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MailManagerClient header */
      class CreateAddonInstanceRequest;
      class CreateAddonSubscriptionRequest;
      class CreateAddressListRequest;
      class CreateAddressListImportJobRequest;
      class CreateArchiveRequest;
      class CreateIngressPointRequest;
      class CreateRelayRequest;
      class CreateRuleSetRequest;
      class CreateTrafficPolicyRequest;
      class DeleteAddonInstanceRequest;
      class DeleteAddonSubscriptionRequest;
      class DeleteAddressListRequest;
      class DeleteArchiveRequest;
      class DeleteIngressPointRequest;
      class DeleteRelayRequest;
      class DeleteRuleSetRequest;
      class DeleteTrafficPolicyRequest;
      class DeregisterMemberFromAddressListRequest;
      class GetAddonInstanceRequest;
      class GetAddonSubscriptionRequest;
      class GetAddressListRequest;
      class GetAddressListImportJobRequest;
      class GetArchiveRequest;
      class GetArchiveExportRequest;
      class GetArchiveMessageRequest;
      class GetArchiveMessageContentRequest;
      class GetArchiveSearchRequest;
      class GetArchiveSearchResultsRequest;
      class GetIngressPointRequest;
      class GetMemberOfAddressListRequest;
      class GetRelayRequest;
      class GetRuleSetRequest;
      class GetTrafficPolicyRequest;
      class ListAddonInstancesRequest;
      class ListAddonSubscriptionsRequest;
      class ListAddressListImportJobsRequest;
      class ListAddressListsRequest;
      class ListArchiveExportsRequest;
      class ListArchiveSearchesRequest;
      class ListArchivesRequest;
      class ListIngressPointsRequest;
      class ListMembersOfAddressListRequest;
      class ListRelaysRequest;
      class ListRuleSetsRequest;
      class ListTagsForResourceRequest;
      class ListTrafficPoliciesRequest;
      class RegisterMemberToAddressListRequest;
      class StartAddressListImportJobRequest;
      class StartArchiveExportRequest;
      class StartArchiveSearchRequest;
      class StopAddressListImportJobRequest;
      class StopArchiveExportRequest;
      class StopArchiveSearchRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateArchiveRequest;
      class UpdateIngressPointRequest;
      class UpdateRelayRequest;
      class UpdateRuleSetRequest;
      class UpdateTrafficPolicyRequest;
      /* End of service model forward declarations required in MailManagerClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAddonInstanceResult, MailManagerError> CreateAddonInstanceOutcome;
      typedef Aws::Utils::Outcome<CreateAddonSubscriptionResult, MailManagerError> CreateAddonSubscriptionOutcome;
      typedef Aws::Utils::Outcome<CreateAddressListResult, MailManagerError> CreateAddressListOutcome;
      typedef Aws::Utils::Outcome<CreateAddressListImportJobResult, MailManagerError> CreateAddressListImportJobOutcome;
      typedef Aws::Utils::Outcome<CreateArchiveResult, MailManagerError> CreateArchiveOutcome;
      typedef Aws::Utils::Outcome<CreateIngressPointResult, MailManagerError> CreateIngressPointOutcome;
      typedef Aws::Utils::Outcome<CreateRelayResult, MailManagerError> CreateRelayOutcome;
      typedef Aws::Utils::Outcome<CreateRuleSetResult, MailManagerError> CreateRuleSetOutcome;
      typedef Aws::Utils::Outcome<CreateTrafficPolicyResult, MailManagerError> CreateTrafficPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteAddonInstanceResult, MailManagerError> DeleteAddonInstanceOutcome;
      typedef Aws::Utils::Outcome<DeleteAddonSubscriptionResult, MailManagerError> DeleteAddonSubscriptionOutcome;
      typedef Aws::Utils::Outcome<DeleteAddressListResult, MailManagerError> DeleteAddressListOutcome;
      typedef Aws::Utils::Outcome<DeleteArchiveResult, MailManagerError> DeleteArchiveOutcome;
      typedef Aws::Utils::Outcome<DeleteIngressPointResult, MailManagerError> DeleteIngressPointOutcome;
      typedef Aws::Utils::Outcome<DeleteRelayResult, MailManagerError> DeleteRelayOutcome;
      typedef Aws::Utils::Outcome<DeleteRuleSetResult, MailManagerError> DeleteRuleSetOutcome;
      typedef Aws::Utils::Outcome<DeleteTrafficPolicyResult, MailManagerError> DeleteTrafficPolicyOutcome;
      typedef Aws::Utils::Outcome<DeregisterMemberFromAddressListResult, MailManagerError> DeregisterMemberFromAddressListOutcome;
      typedef Aws::Utils::Outcome<GetAddonInstanceResult, MailManagerError> GetAddonInstanceOutcome;
      typedef Aws::Utils::Outcome<GetAddonSubscriptionResult, MailManagerError> GetAddonSubscriptionOutcome;
      typedef Aws::Utils::Outcome<GetAddressListResult, MailManagerError> GetAddressListOutcome;
      typedef Aws::Utils::Outcome<GetAddressListImportJobResult, MailManagerError> GetAddressListImportJobOutcome;
      typedef Aws::Utils::Outcome<GetArchiveResult, MailManagerError> GetArchiveOutcome;
      typedef Aws::Utils::Outcome<GetArchiveExportResult, MailManagerError> GetArchiveExportOutcome;
      typedef Aws::Utils::Outcome<GetArchiveMessageResult, MailManagerError> GetArchiveMessageOutcome;
      typedef Aws::Utils::Outcome<GetArchiveMessageContentResult, MailManagerError> GetArchiveMessageContentOutcome;
      typedef Aws::Utils::Outcome<GetArchiveSearchResult, MailManagerError> GetArchiveSearchOutcome;
      typedef Aws::Utils::Outcome<GetArchiveSearchResultsResult, MailManagerError> GetArchiveSearchResultsOutcome;
      typedef Aws::Utils::Outcome<GetIngressPointResult, MailManagerError> GetIngressPointOutcome;
      typedef Aws::Utils::Outcome<GetMemberOfAddressListResult, MailManagerError> GetMemberOfAddressListOutcome;
      typedef Aws::Utils::Outcome<GetRelayResult, MailManagerError> GetRelayOutcome;
      typedef Aws::Utils::Outcome<GetRuleSetResult, MailManagerError> GetRuleSetOutcome;
      typedef Aws::Utils::Outcome<GetTrafficPolicyResult, MailManagerError> GetTrafficPolicyOutcome;
      typedef Aws::Utils::Outcome<ListAddonInstancesResult, MailManagerError> ListAddonInstancesOutcome;
      typedef Aws::Utils::Outcome<ListAddonSubscriptionsResult, MailManagerError> ListAddonSubscriptionsOutcome;
      typedef Aws::Utils::Outcome<ListAddressListImportJobsResult, MailManagerError> ListAddressListImportJobsOutcome;
      typedef Aws::Utils::Outcome<ListAddressListsResult, MailManagerError> ListAddressListsOutcome;
      typedef Aws::Utils::Outcome<ListArchiveExportsResult, MailManagerError> ListArchiveExportsOutcome;
      typedef Aws::Utils::Outcome<ListArchiveSearchesResult, MailManagerError> ListArchiveSearchesOutcome;
      typedef Aws::Utils::Outcome<ListArchivesResult, MailManagerError> ListArchivesOutcome;
      typedef Aws::Utils::Outcome<ListIngressPointsResult, MailManagerError> ListIngressPointsOutcome;
      typedef Aws::Utils::Outcome<ListMembersOfAddressListResult, MailManagerError> ListMembersOfAddressListOutcome;
      typedef Aws::Utils::Outcome<ListRelaysResult, MailManagerError> ListRelaysOutcome;
      typedef Aws::Utils::Outcome<ListRuleSetsResult, MailManagerError> ListRuleSetsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, MailManagerError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTrafficPoliciesResult, MailManagerError> ListTrafficPoliciesOutcome;
      typedef Aws::Utils::Outcome<RegisterMemberToAddressListResult, MailManagerError> RegisterMemberToAddressListOutcome;
      typedef Aws::Utils::Outcome<StartAddressListImportJobResult, MailManagerError> StartAddressListImportJobOutcome;
      typedef Aws::Utils::Outcome<StartArchiveExportResult, MailManagerError> StartArchiveExportOutcome;
      typedef Aws::Utils::Outcome<StartArchiveSearchResult, MailManagerError> StartArchiveSearchOutcome;
      typedef Aws::Utils::Outcome<StopAddressListImportJobResult, MailManagerError> StopAddressListImportJobOutcome;
      typedef Aws::Utils::Outcome<StopArchiveExportResult, MailManagerError> StopArchiveExportOutcome;
      typedef Aws::Utils::Outcome<StopArchiveSearchResult, MailManagerError> StopArchiveSearchOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, MailManagerError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, MailManagerError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateArchiveResult, MailManagerError> UpdateArchiveOutcome;
      typedef Aws::Utils::Outcome<UpdateIngressPointResult, MailManagerError> UpdateIngressPointOutcome;
      typedef Aws::Utils::Outcome<UpdateRelayResult, MailManagerError> UpdateRelayOutcome;
      typedef Aws::Utils::Outcome<UpdateRuleSetResult, MailManagerError> UpdateRuleSetOutcome;
      typedef Aws::Utils::Outcome<UpdateTrafficPolicyResult, MailManagerError> UpdateTrafficPolicyOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateAddonInstanceOutcome> CreateAddonInstanceOutcomeCallable;
      typedef std::future<CreateAddonSubscriptionOutcome> CreateAddonSubscriptionOutcomeCallable;
      typedef std::future<CreateAddressListOutcome> CreateAddressListOutcomeCallable;
      typedef std::future<CreateAddressListImportJobOutcome> CreateAddressListImportJobOutcomeCallable;
      typedef std::future<CreateArchiveOutcome> CreateArchiveOutcomeCallable;
      typedef std::future<CreateIngressPointOutcome> CreateIngressPointOutcomeCallable;
      typedef std::future<CreateRelayOutcome> CreateRelayOutcomeCallable;
      typedef std::future<CreateRuleSetOutcome> CreateRuleSetOutcomeCallable;
      typedef std::future<CreateTrafficPolicyOutcome> CreateTrafficPolicyOutcomeCallable;
      typedef std::future<DeleteAddonInstanceOutcome> DeleteAddonInstanceOutcomeCallable;
      typedef std::future<DeleteAddonSubscriptionOutcome> DeleteAddonSubscriptionOutcomeCallable;
      typedef std::future<DeleteAddressListOutcome> DeleteAddressListOutcomeCallable;
      typedef std::future<DeleteArchiveOutcome> DeleteArchiveOutcomeCallable;
      typedef std::future<DeleteIngressPointOutcome> DeleteIngressPointOutcomeCallable;
      typedef std::future<DeleteRelayOutcome> DeleteRelayOutcomeCallable;
      typedef std::future<DeleteRuleSetOutcome> DeleteRuleSetOutcomeCallable;
      typedef std::future<DeleteTrafficPolicyOutcome> DeleteTrafficPolicyOutcomeCallable;
      typedef std::future<DeregisterMemberFromAddressListOutcome> DeregisterMemberFromAddressListOutcomeCallable;
      typedef std::future<GetAddonInstanceOutcome> GetAddonInstanceOutcomeCallable;
      typedef std::future<GetAddonSubscriptionOutcome> GetAddonSubscriptionOutcomeCallable;
      typedef std::future<GetAddressListOutcome> GetAddressListOutcomeCallable;
      typedef std::future<GetAddressListImportJobOutcome> GetAddressListImportJobOutcomeCallable;
      typedef std::future<GetArchiveOutcome> GetArchiveOutcomeCallable;
      typedef std::future<GetArchiveExportOutcome> GetArchiveExportOutcomeCallable;
      typedef std::future<GetArchiveMessageOutcome> GetArchiveMessageOutcomeCallable;
      typedef std::future<GetArchiveMessageContentOutcome> GetArchiveMessageContentOutcomeCallable;
      typedef std::future<GetArchiveSearchOutcome> GetArchiveSearchOutcomeCallable;
      typedef std::future<GetArchiveSearchResultsOutcome> GetArchiveSearchResultsOutcomeCallable;
      typedef std::future<GetIngressPointOutcome> GetIngressPointOutcomeCallable;
      typedef std::future<GetMemberOfAddressListOutcome> GetMemberOfAddressListOutcomeCallable;
      typedef std::future<GetRelayOutcome> GetRelayOutcomeCallable;
      typedef std::future<GetRuleSetOutcome> GetRuleSetOutcomeCallable;
      typedef std::future<GetTrafficPolicyOutcome> GetTrafficPolicyOutcomeCallable;
      typedef std::future<ListAddonInstancesOutcome> ListAddonInstancesOutcomeCallable;
      typedef std::future<ListAddonSubscriptionsOutcome> ListAddonSubscriptionsOutcomeCallable;
      typedef std::future<ListAddressListImportJobsOutcome> ListAddressListImportJobsOutcomeCallable;
      typedef std::future<ListAddressListsOutcome> ListAddressListsOutcomeCallable;
      typedef std::future<ListArchiveExportsOutcome> ListArchiveExportsOutcomeCallable;
      typedef std::future<ListArchiveSearchesOutcome> ListArchiveSearchesOutcomeCallable;
      typedef std::future<ListArchivesOutcome> ListArchivesOutcomeCallable;
      typedef std::future<ListIngressPointsOutcome> ListIngressPointsOutcomeCallable;
      typedef std::future<ListMembersOfAddressListOutcome> ListMembersOfAddressListOutcomeCallable;
      typedef std::future<ListRelaysOutcome> ListRelaysOutcomeCallable;
      typedef std::future<ListRuleSetsOutcome> ListRuleSetsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTrafficPoliciesOutcome> ListTrafficPoliciesOutcomeCallable;
      typedef std::future<RegisterMemberToAddressListOutcome> RegisterMemberToAddressListOutcomeCallable;
      typedef std::future<StartAddressListImportJobOutcome> StartAddressListImportJobOutcomeCallable;
      typedef std::future<StartArchiveExportOutcome> StartArchiveExportOutcomeCallable;
      typedef std::future<StartArchiveSearchOutcome> StartArchiveSearchOutcomeCallable;
      typedef std::future<StopAddressListImportJobOutcome> StopAddressListImportJobOutcomeCallable;
      typedef std::future<StopArchiveExportOutcome> StopArchiveExportOutcomeCallable;
      typedef std::future<StopArchiveSearchOutcome> StopArchiveSearchOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateArchiveOutcome> UpdateArchiveOutcomeCallable;
      typedef std::future<UpdateIngressPointOutcome> UpdateIngressPointOutcomeCallable;
      typedef std::future<UpdateRelayOutcome> UpdateRelayOutcomeCallable;
      typedef std::future<UpdateRuleSetOutcome> UpdateRuleSetOutcomeCallable;
      typedef std::future<UpdateTrafficPolicyOutcome> UpdateTrafficPolicyOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MailManagerClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MailManagerClient*, const Model::CreateAddonInstanceRequest&, const Model::CreateAddonInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAddonInstanceResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::CreateAddonSubscriptionRequest&, const Model::CreateAddonSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAddonSubscriptionResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::CreateAddressListRequest&, const Model::CreateAddressListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAddressListResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::CreateAddressListImportJobRequest&, const Model::CreateAddressListImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAddressListImportJobResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::CreateArchiveRequest&, const Model::CreateArchiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateArchiveResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::CreateIngressPointRequest&, const Model::CreateIngressPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIngressPointResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::CreateRelayRequest&, const Model::CreateRelayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRelayResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::CreateRuleSetRequest&, const Model::CreateRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRuleSetResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::CreateTrafficPolicyRequest&, const Model::CreateTrafficPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrafficPolicyResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::DeleteAddonInstanceRequest&, const Model::DeleteAddonInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAddonInstanceResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::DeleteAddonSubscriptionRequest&, const Model::DeleteAddonSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAddonSubscriptionResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::DeleteAddressListRequest&, const Model::DeleteAddressListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAddressListResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::DeleteArchiveRequest&, const Model::DeleteArchiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteArchiveResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::DeleteIngressPointRequest&, const Model::DeleteIngressPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIngressPointResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::DeleteRelayRequest&, const Model::DeleteRelayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRelayResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::DeleteRuleSetRequest&, const Model::DeleteRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleSetResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::DeleteTrafficPolicyRequest&, const Model::DeleteTrafficPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrafficPolicyResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::DeregisterMemberFromAddressListRequest&, const Model::DeregisterMemberFromAddressListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterMemberFromAddressListResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::GetAddonInstanceRequest&, const Model::GetAddonInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAddonInstanceResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::GetAddonSubscriptionRequest&, const Model::GetAddonSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAddonSubscriptionResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::GetAddressListRequest&, const Model::GetAddressListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAddressListResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::GetAddressListImportJobRequest&, const Model::GetAddressListImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAddressListImportJobResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::GetArchiveRequest&, const Model::GetArchiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetArchiveResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::GetArchiveExportRequest&, const Model::GetArchiveExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetArchiveExportResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::GetArchiveMessageRequest&, const Model::GetArchiveMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetArchiveMessageResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::GetArchiveMessageContentRequest&, const Model::GetArchiveMessageContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetArchiveMessageContentResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::GetArchiveSearchRequest&, const Model::GetArchiveSearchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetArchiveSearchResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::GetArchiveSearchResultsRequest&, const Model::GetArchiveSearchResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetArchiveSearchResultsResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::GetIngressPointRequest&, const Model::GetIngressPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIngressPointResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::GetMemberOfAddressListRequest&, const Model::GetMemberOfAddressListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMemberOfAddressListResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::GetRelayRequest&, const Model::GetRelayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRelayResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::GetRuleSetRequest&, const Model::GetRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRuleSetResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::GetTrafficPolicyRequest&, const Model::GetTrafficPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrafficPolicyResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::ListAddonInstancesRequest&, const Model::ListAddonInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAddonInstancesResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::ListAddonSubscriptionsRequest&, const Model::ListAddonSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAddonSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::ListAddressListImportJobsRequest&, const Model::ListAddressListImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAddressListImportJobsResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::ListAddressListsRequest&, const Model::ListAddressListsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAddressListsResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::ListArchiveExportsRequest&, const Model::ListArchiveExportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListArchiveExportsResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::ListArchiveSearchesRequest&, const Model::ListArchiveSearchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListArchiveSearchesResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::ListArchivesRequest&, const Model::ListArchivesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListArchivesResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::ListIngressPointsRequest&, const Model::ListIngressPointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIngressPointsResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::ListMembersOfAddressListRequest&, const Model::ListMembersOfAddressListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembersOfAddressListResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::ListRelaysRequest&, const Model::ListRelaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRelaysResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::ListRuleSetsRequest&, const Model::ListRuleSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRuleSetsResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::ListTrafficPoliciesRequest&, const Model::ListTrafficPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrafficPoliciesResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::RegisterMemberToAddressListRequest&, const Model::RegisterMemberToAddressListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterMemberToAddressListResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::StartAddressListImportJobRequest&, const Model::StartAddressListImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAddressListImportJobResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::StartArchiveExportRequest&, const Model::StartArchiveExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartArchiveExportResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::StartArchiveSearchRequest&, const Model::StartArchiveSearchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartArchiveSearchResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::StopAddressListImportJobRequest&, const Model::StopAddressListImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopAddressListImportJobResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::StopArchiveExportRequest&, const Model::StopArchiveExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopArchiveExportResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::StopArchiveSearchRequest&, const Model::StopArchiveSearchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopArchiveSearchResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::UpdateArchiveRequest&, const Model::UpdateArchiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateArchiveResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::UpdateIngressPointRequest&, const Model::UpdateIngressPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIngressPointResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::UpdateRelayRequest&, const Model::UpdateRelayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRelayResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::UpdateRuleSetRequest&, const Model::UpdateRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuleSetResponseReceivedHandler;
    typedef std::function<void(const MailManagerClient*, const Model::UpdateTrafficPolicyRequest&, const Model::UpdateTrafficPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrafficPolicyResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MailManager
} // namespace Aws
