/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/detective/DetectiveErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/detective/DetectiveEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DetectiveClient header */
#include <aws/detective/model/BatchGetGraphMemberDatasourcesResult.h>
#include <aws/detective/model/BatchGetMembershipDatasourcesResult.h>
#include <aws/detective/model/CreateGraphResult.h>
#include <aws/detective/model/CreateMembersResult.h>
#include <aws/detective/model/DeleteMembersResult.h>
#include <aws/detective/model/DescribeOrganizationConfigurationResult.h>
#include <aws/detective/model/GetMembersResult.h>
#include <aws/detective/model/ListDatasourcePackagesResult.h>
#include <aws/detective/model/ListGraphsResult.h>
#include <aws/detective/model/ListInvitationsResult.h>
#include <aws/detective/model/ListMembersResult.h>
#include <aws/detective/model/ListOrganizationAdminAccountsResult.h>
#include <aws/detective/model/ListTagsForResourceResult.h>
#include <aws/detective/model/TagResourceResult.h>
#include <aws/detective/model/UntagResourceResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in DetectiveClient header */

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

  namespace Detective
  {
    using DetectiveClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using DetectiveEndpointProviderBase = Aws::Detective::Endpoint::DetectiveEndpointProviderBase;
    using DetectiveEndpointProvider = Aws::Detective::Endpoint::DetectiveEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DetectiveClient header */
      class AcceptInvitationRequest;
      class BatchGetGraphMemberDatasourcesRequest;
      class BatchGetMembershipDatasourcesRequest;
      class CreateGraphRequest;
      class CreateMembersRequest;
      class DeleteGraphRequest;
      class DeleteMembersRequest;
      class DescribeOrganizationConfigurationRequest;
      class DisassociateMembershipRequest;
      class EnableOrganizationAdminAccountRequest;
      class GetMembersRequest;
      class ListDatasourcePackagesRequest;
      class ListGraphsRequest;
      class ListInvitationsRequest;
      class ListMembersRequest;
      class ListOrganizationAdminAccountsRequest;
      class ListTagsForResourceRequest;
      class RejectInvitationRequest;
      class StartMonitoringMemberRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDatasourcePackagesRequest;
      class UpdateOrganizationConfigurationRequest;
      /* End of service model forward declarations required in DetectiveClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> AcceptInvitationOutcome;
      typedef Aws::Utils::Outcome<BatchGetGraphMemberDatasourcesResult, DetectiveError> BatchGetGraphMemberDatasourcesOutcome;
      typedef Aws::Utils::Outcome<BatchGetMembershipDatasourcesResult, DetectiveError> BatchGetMembershipDatasourcesOutcome;
      typedef Aws::Utils::Outcome<CreateGraphResult, DetectiveError> CreateGraphOutcome;
      typedef Aws::Utils::Outcome<CreateMembersResult, DetectiveError> CreateMembersOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> DeleteGraphOutcome;
      typedef Aws::Utils::Outcome<DeleteMembersResult, DetectiveError> DeleteMembersOutcome;
      typedef Aws::Utils::Outcome<DescribeOrganizationConfigurationResult, DetectiveError> DescribeOrganizationConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> DisableOrganizationAdminAccountOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> DisassociateMembershipOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> EnableOrganizationAdminAccountOutcome;
      typedef Aws::Utils::Outcome<GetMembersResult, DetectiveError> GetMembersOutcome;
      typedef Aws::Utils::Outcome<ListDatasourcePackagesResult, DetectiveError> ListDatasourcePackagesOutcome;
      typedef Aws::Utils::Outcome<ListGraphsResult, DetectiveError> ListGraphsOutcome;
      typedef Aws::Utils::Outcome<ListInvitationsResult, DetectiveError> ListInvitationsOutcome;
      typedef Aws::Utils::Outcome<ListMembersResult, DetectiveError> ListMembersOutcome;
      typedef Aws::Utils::Outcome<ListOrganizationAdminAccountsResult, DetectiveError> ListOrganizationAdminAccountsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, DetectiveError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> RejectInvitationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> StartMonitoringMemberOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, DetectiveError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, DetectiveError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> UpdateDatasourcePackagesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DetectiveError> UpdateOrganizationConfigurationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptInvitationOutcome> AcceptInvitationOutcomeCallable;
      typedef std::future<BatchGetGraphMemberDatasourcesOutcome> BatchGetGraphMemberDatasourcesOutcomeCallable;
      typedef std::future<BatchGetMembershipDatasourcesOutcome> BatchGetMembershipDatasourcesOutcomeCallable;
      typedef std::future<CreateGraphOutcome> CreateGraphOutcomeCallable;
      typedef std::future<CreateMembersOutcome> CreateMembersOutcomeCallable;
      typedef std::future<DeleteGraphOutcome> DeleteGraphOutcomeCallable;
      typedef std::future<DeleteMembersOutcome> DeleteMembersOutcomeCallable;
      typedef std::future<DescribeOrganizationConfigurationOutcome> DescribeOrganizationConfigurationOutcomeCallable;
      typedef std::future<DisableOrganizationAdminAccountOutcome> DisableOrganizationAdminAccountOutcomeCallable;
      typedef std::future<DisassociateMembershipOutcome> DisassociateMembershipOutcomeCallable;
      typedef std::future<EnableOrganizationAdminAccountOutcome> EnableOrganizationAdminAccountOutcomeCallable;
      typedef std::future<GetMembersOutcome> GetMembersOutcomeCallable;
      typedef std::future<ListDatasourcePackagesOutcome> ListDatasourcePackagesOutcomeCallable;
      typedef std::future<ListGraphsOutcome> ListGraphsOutcomeCallable;
      typedef std::future<ListInvitationsOutcome> ListInvitationsOutcomeCallable;
      typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
      typedef std::future<ListOrganizationAdminAccountsOutcome> ListOrganizationAdminAccountsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RejectInvitationOutcome> RejectInvitationOutcomeCallable;
      typedef std::future<StartMonitoringMemberOutcome> StartMonitoringMemberOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDatasourcePackagesOutcome> UpdateDatasourcePackagesOutcomeCallable;
      typedef std::future<UpdateOrganizationConfigurationOutcome> UpdateOrganizationConfigurationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DetectiveClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const DetectiveClient*, const Model::AcceptInvitationRequest&, const Model::AcceptInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptInvitationResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::BatchGetGraphMemberDatasourcesRequest&, const Model::BatchGetGraphMemberDatasourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetGraphMemberDatasourcesResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::BatchGetMembershipDatasourcesRequest&, const Model::BatchGetMembershipDatasourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetMembershipDatasourcesResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::CreateGraphRequest&, const Model::CreateGraphOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGraphResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::CreateMembersRequest&, const Model::CreateMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMembersResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::DeleteGraphRequest&, const Model::DeleteGraphOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGraphResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::DeleteMembersRequest&, const Model::DeleteMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMembersResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::DescribeOrganizationConfigurationRequest&, const Model::DescribeOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::DisableOrganizationAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableOrganizationAdminAccountResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::DisassociateMembershipRequest&, const Model::DisassociateMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMembershipResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::EnableOrganizationAdminAccountRequest&, const Model::EnableOrganizationAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableOrganizationAdminAccountResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::GetMembersRequest&, const Model::GetMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMembersResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::ListDatasourcePackagesRequest&, const Model::ListDatasourcePackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasourcePackagesResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::ListGraphsRequest&, const Model::ListGraphsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGraphsResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::ListInvitationsRequest&, const Model::ListInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvitationsResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::ListMembersRequest&, const Model::ListMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembersResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::ListOrganizationAdminAccountsRequest&, const Model::ListOrganizationAdminAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrganizationAdminAccountsResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::RejectInvitationRequest&, const Model::RejectInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectInvitationResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::StartMonitoringMemberRequest&, const Model::StartMonitoringMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMonitoringMemberResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::UpdateDatasourcePackagesRequest&, const Model::UpdateDatasourcePackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDatasourcePackagesResponseReceivedHandler;
    typedef std::function<void(const DetectiveClient*, const Model::UpdateOrganizationConfigurationRequest&, const Model::UpdateOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOrganizationConfigurationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Detective
} // namespace Aws
