/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/fms/FMSErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/fms/FMSEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in FMSClient header */
#include <aws/fms/model/AssociateThirdPartyFirewallResult.h>
#include <aws/fms/model/BatchAssociateResourceResult.h>
#include <aws/fms/model/BatchDisassociateResourceResult.h>
#include <aws/fms/model/DisassociateThirdPartyFirewallResult.h>
#include <aws/fms/model/GetAdminAccountResult.h>
#include <aws/fms/model/GetAppsListResult.h>
#include <aws/fms/model/GetComplianceDetailResult.h>
#include <aws/fms/model/GetNotificationChannelResult.h>
#include <aws/fms/model/GetPolicyResult.h>
#include <aws/fms/model/GetProtectionStatusResult.h>
#include <aws/fms/model/GetProtocolsListResult.h>
#include <aws/fms/model/GetResourceSetResult.h>
#include <aws/fms/model/GetThirdPartyFirewallAssociationStatusResult.h>
#include <aws/fms/model/GetViolationDetailsResult.h>
#include <aws/fms/model/ListAppsListsResult.h>
#include <aws/fms/model/ListComplianceStatusResult.h>
#include <aws/fms/model/ListDiscoveredResourcesResult.h>
#include <aws/fms/model/ListMemberAccountsResult.h>
#include <aws/fms/model/ListPoliciesResult.h>
#include <aws/fms/model/ListProtocolsListsResult.h>
#include <aws/fms/model/ListResourceSetResourcesResult.h>
#include <aws/fms/model/ListResourceSetsResult.h>
#include <aws/fms/model/ListTagsForResourceResult.h>
#include <aws/fms/model/ListThirdPartyFirewallFirewallPoliciesResult.h>
#include <aws/fms/model/PutAppsListResult.h>
#include <aws/fms/model/PutPolicyResult.h>
#include <aws/fms/model/PutProtocolsListResult.h>
#include <aws/fms/model/PutResourceSetResult.h>
#include <aws/fms/model/TagResourceResult.h>
#include <aws/fms/model/UntagResourceResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in FMSClient header */

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

  namespace FMS
  {
    using FMSClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using FMSEndpointProviderBase = Aws::FMS::Endpoint::FMSEndpointProviderBase;
    using FMSEndpointProvider = Aws::FMS::Endpoint::FMSEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in FMSClient header */
      class AssociateAdminAccountRequest;
      class AssociateThirdPartyFirewallRequest;
      class BatchAssociateResourceRequest;
      class BatchDisassociateResourceRequest;
      class DeleteAppsListRequest;
      class DeleteNotificationChannelRequest;
      class DeletePolicyRequest;
      class DeleteProtocolsListRequest;
      class DeleteResourceSetRequest;
      class DisassociateAdminAccountRequest;
      class DisassociateThirdPartyFirewallRequest;
      class GetAdminAccountRequest;
      class GetAppsListRequest;
      class GetComplianceDetailRequest;
      class GetNotificationChannelRequest;
      class GetPolicyRequest;
      class GetProtectionStatusRequest;
      class GetProtocolsListRequest;
      class GetResourceSetRequest;
      class GetThirdPartyFirewallAssociationStatusRequest;
      class GetViolationDetailsRequest;
      class ListAppsListsRequest;
      class ListComplianceStatusRequest;
      class ListDiscoveredResourcesRequest;
      class ListMemberAccountsRequest;
      class ListPoliciesRequest;
      class ListProtocolsListsRequest;
      class ListResourceSetResourcesRequest;
      class ListResourceSetsRequest;
      class ListTagsForResourceRequest;
      class ListThirdPartyFirewallFirewallPoliciesRequest;
      class PutAppsListRequest;
      class PutNotificationChannelRequest;
      class PutPolicyRequest;
      class PutProtocolsListRequest;
      class PutResourceSetRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in FMSClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, FMSError> AssociateAdminAccountOutcome;
      typedef Aws::Utils::Outcome<AssociateThirdPartyFirewallResult, FMSError> AssociateThirdPartyFirewallOutcome;
      typedef Aws::Utils::Outcome<BatchAssociateResourceResult, FMSError> BatchAssociateResourceOutcome;
      typedef Aws::Utils::Outcome<BatchDisassociateResourceResult, FMSError> BatchDisassociateResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, FMSError> DeleteAppsListOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, FMSError> DeleteNotificationChannelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, FMSError> DeletePolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, FMSError> DeleteProtocolsListOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, FMSError> DeleteResourceSetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, FMSError> DisassociateAdminAccountOutcome;
      typedef Aws::Utils::Outcome<DisassociateThirdPartyFirewallResult, FMSError> DisassociateThirdPartyFirewallOutcome;
      typedef Aws::Utils::Outcome<GetAdminAccountResult, FMSError> GetAdminAccountOutcome;
      typedef Aws::Utils::Outcome<GetAppsListResult, FMSError> GetAppsListOutcome;
      typedef Aws::Utils::Outcome<GetComplianceDetailResult, FMSError> GetComplianceDetailOutcome;
      typedef Aws::Utils::Outcome<GetNotificationChannelResult, FMSError> GetNotificationChannelOutcome;
      typedef Aws::Utils::Outcome<GetPolicyResult, FMSError> GetPolicyOutcome;
      typedef Aws::Utils::Outcome<GetProtectionStatusResult, FMSError> GetProtectionStatusOutcome;
      typedef Aws::Utils::Outcome<GetProtocolsListResult, FMSError> GetProtocolsListOutcome;
      typedef Aws::Utils::Outcome<GetResourceSetResult, FMSError> GetResourceSetOutcome;
      typedef Aws::Utils::Outcome<GetThirdPartyFirewallAssociationStatusResult, FMSError> GetThirdPartyFirewallAssociationStatusOutcome;
      typedef Aws::Utils::Outcome<GetViolationDetailsResult, FMSError> GetViolationDetailsOutcome;
      typedef Aws::Utils::Outcome<ListAppsListsResult, FMSError> ListAppsListsOutcome;
      typedef Aws::Utils::Outcome<ListComplianceStatusResult, FMSError> ListComplianceStatusOutcome;
      typedef Aws::Utils::Outcome<ListDiscoveredResourcesResult, FMSError> ListDiscoveredResourcesOutcome;
      typedef Aws::Utils::Outcome<ListMemberAccountsResult, FMSError> ListMemberAccountsOutcome;
      typedef Aws::Utils::Outcome<ListPoliciesResult, FMSError> ListPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListProtocolsListsResult, FMSError> ListProtocolsListsOutcome;
      typedef Aws::Utils::Outcome<ListResourceSetResourcesResult, FMSError> ListResourceSetResourcesOutcome;
      typedef Aws::Utils::Outcome<ListResourceSetsResult, FMSError> ListResourceSetsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, FMSError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListThirdPartyFirewallFirewallPoliciesResult, FMSError> ListThirdPartyFirewallFirewallPoliciesOutcome;
      typedef Aws::Utils::Outcome<PutAppsListResult, FMSError> PutAppsListOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, FMSError> PutNotificationChannelOutcome;
      typedef Aws::Utils::Outcome<PutPolicyResult, FMSError> PutPolicyOutcome;
      typedef Aws::Utils::Outcome<PutProtocolsListResult, FMSError> PutProtocolsListOutcome;
      typedef Aws::Utils::Outcome<PutResourceSetResult, FMSError> PutResourceSetOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, FMSError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, FMSError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateAdminAccountOutcome> AssociateAdminAccountOutcomeCallable;
      typedef std::future<AssociateThirdPartyFirewallOutcome> AssociateThirdPartyFirewallOutcomeCallable;
      typedef std::future<BatchAssociateResourceOutcome> BatchAssociateResourceOutcomeCallable;
      typedef std::future<BatchDisassociateResourceOutcome> BatchDisassociateResourceOutcomeCallable;
      typedef std::future<DeleteAppsListOutcome> DeleteAppsListOutcomeCallable;
      typedef std::future<DeleteNotificationChannelOutcome> DeleteNotificationChannelOutcomeCallable;
      typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
      typedef std::future<DeleteProtocolsListOutcome> DeleteProtocolsListOutcomeCallable;
      typedef std::future<DeleteResourceSetOutcome> DeleteResourceSetOutcomeCallable;
      typedef std::future<DisassociateAdminAccountOutcome> DisassociateAdminAccountOutcomeCallable;
      typedef std::future<DisassociateThirdPartyFirewallOutcome> DisassociateThirdPartyFirewallOutcomeCallable;
      typedef std::future<GetAdminAccountOutcome> GetAdminAccountOutcomeCallable;
      typedef std::future<GetAppsListOutcome> GetAppsListOutcomeCallable;
      typedef std::future<GetComplianceDetailOutcome> GetComplianceDetailOutcomeCallable;
      typedef std::future<GetNotificationChannelOutcome> GetNotificationChannelOutcomeCallable;
      typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
      typedef std::future<GetProtectionStatusOutcome> GetProtectionStatusOutcomeCallable;
      typedef std::future<GetProtocolsListOutcome> GetProtocolsListOutcomeCallable;
      typedef std::future<GetResourceSetOutcome> GetResourceSetOutcomeCallable;
      typedef std::future<GetThirdPartyFirewallAssociationStatusOutcome> GetThirdPartyFirewallAssociationStatusOutcomeCallable;
      typedef std::future<GetViolationDetailsOutcome> GetViolationDetailsOutcomeCallable;
      typedef std::future<ListAppsListsOutcome> ListAppsListsOutcomeCallable;
      typedef std::future<ListComplianceStatusOutcome> ListComplianceStatusOutcomeCallable;
      typedef std::future<ListDiscoveredResourcesOutcome> ListDiscoveredResourcesOutcomeCallable;
      typedef std::future<ListMemberAccountsOutcome> ListMemberAccountsOutcomeCallable;
      typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
      typedef std::future<ListProtocolsListsOutcome> ListProtocolsListsOutcomeCallable;
      typedef std::future<ListResourceSetResourcesOutcome> ListResourceSetResourcesOutcomeCallable;
      typedef std::future<ListResourceSetsOutcome> ListResourceSetsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListThirdPartyFirewallFirewallPoliciesOutcome> ListThirdPartyFirewallFirewallPoliciesOutcomeCallable;
      typedef std::future<PutAppsListOutcome> PutAppsListOutcomeCallable;
      typedef std::future<PutNotificationChannelOutcome> PutNotificationChannelOutcomeCallable;
      typedef std::future<PutPolicyOutcome> PutPolicyOutcomeCallable;
      typedef std::future<PutProtocolsListOutcome> PutProtocolsListOutcomeCallable;
      typedef std::future<PutResourceSetOutcome> PutResourceSetOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class FMSClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const FMSClient*, const Model::AssociateAdminAccountRequest&, const Model::AssociateAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateAdminAccountResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::AssociateThirdPartyFirewallRequest&, const Model::AssociateThirdPartyFirewallOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateThirdPartyFirewallResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::BatchAssociateResourceRequest&, const Model::BatchAssociateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchAssociateResourceResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::BatchDisassociateResourceRequest&, const Model::BatchDisassociateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDisassociateResourceResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::DeleteAppsListRequest&, const Model::DeleteAppsListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppsListResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::DeleteNotificationChannelRequest&, const Model::DeleteNotificationChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotificationChannelResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::DeletePolicyRequest&, const Model::DeletePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::DeleteProtocolsListRequest&, const Model::DeleteProtocolsListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProtocolsListResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::DeleteResourceSetRequest&, const Model::DeleteResourceSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceSetResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::DisassociateAdminAccountRequest&, const Model::DisassociateAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateAdminAccountResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::DisassociateThirdPartyFirewallRequest&, const Model::DisassociateThirdPartyFirewallOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateThirdPartyFirewallResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetAdminAccountRequest&, const Model::GetAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAdminAccountResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetAppsListRequest&, const Model::GetAppsListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppsListResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetComplianceDetailRequest&, const Model::GetComplianceDetailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComplianceDetailResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetNotificationChannelRequest&, const Model::GetNotificationChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNotificationChannelResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetProtectionStatusRequest&, const Model::GetProtectionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProtectionStatusResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetProtocolsListRequest&, const Model::GetProtocolsListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProtocolsListResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetResourceSetRequest&, const Model::GetResourceSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceSetResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetThirdPartyFirewallAssociationStatusRequest&, const Model::GetThirdPartyFirewallAssociationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetThirdPartyFirewallAssociationStatusResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::GetViolationDetailsRequest&, const Model::GetViolationDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetViolationDetailsResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListAppsListsRequest&, const Model::ListAppsListsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppsListsResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListComplianceStatusRequest&, const Model::ListComplianceStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComplianceStatusResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListDiscoveredResourcesRequest&, const Model::ListDiscoveredResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDiscoveredResourcesResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListMemberAccountsRequest&, const Model::ListMemberAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMemberAccountsResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListPoliciesRequest&, const Model::ListPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPoliciesResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListProtocolsListsRequest&, const Model::ListProtocolsListsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProtocolsListsResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListResourceSetResourcesRequest&, const Model::ListResourceSetResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceSetResourcesResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListResourceSetsRequest&, const Model::ListResourceSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceSetsResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::ListThirdPartyFirewallFirewallPoliciesRequest&, const Model::ListThirdPartyFirewallFirewallPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThirdPartyFirewallFirewallPoliciesResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::PutAppsListRequest&, const Model::PutAppsListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAppsListResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::PutNotificationChannelRequest&, const Model::PutNotificationChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutNotificationChannelResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::PutPolicyRequest&, const Model::PutPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPolicyResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::PutProtocolsListRequest&, const Model::PutProtocolsListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutProtocolsListResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::PutResourceSetRequest&, const Model::PutResourceSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourceSetResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const FMSClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace FMS
} // namespace Aws
