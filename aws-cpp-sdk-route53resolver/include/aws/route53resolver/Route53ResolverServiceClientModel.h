/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/route53resolver/Route53ResolverErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/route53resolver/Route53ResolverEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in Route53ResolverClient header */
#include <aws/route53resolver/model/AssociateFirewallRuleGroupResult.h>
#include <aws/route53resolver/model/AssociateResolverEndpointIpAddressResult.h>
#include <aws/route53resolver/model/AssociateResolverQueryLogConfigResult.h>
#include <aws/route53resolver/model/AssociateResolverRuleResult.h>
#include <aws/route53resolver/model/CreateFirewallDomainListResult.h>
#include <aws/route53resolver/model/CreateFirewallRuleResult.h>
#include <aws/route53resolver/model/CreateFirewallRuleGroupResult.h>
#include <aws/route53resolver/model/CreateResolverEndpointResult.h>
#include <aws/route53resolver/model/CreateResolverQueryLogConfigResult.h>
#include <aws/route53resolver/model/CreateResolverRuleResult.h>
#include <aws/route53resolver/model/DeleteFirewallDomainListResult.h>
#include <aws/route53resolver/model/DeleteFirewallRuleResult.h>
#include <aws/route53resolver/model/DeleteFirewallRuleGroupResult.h>
#include <aws/route53resolver/model/DeleteResolverEndpointResult.h>
#include <aws/route53resolver/model/DeleteResolverQueryLogConfigResult.h>
#include <aws/route53resolver/model/DeleteResolverRuleResult.h>
#include <aws/route53resolver/model/DisassociateFirewallRuleGroupResult.h>
#include <aws/route53resolver/model/DisassociateResolverEndpointIpAddressResult.h>
#include <aws/route53resolver/model/DisassociateResolverQueryLogConfigResult.h>
#include <aws/route53resolver/model/DisassociateResolverRuleResult.h>
#include <aws/route53resolver/model/GetFirewallConfigResult.h>
#include <aws/route53resolver/model/GetFirewallDomainListResult.h>
#include <aws/route53resolver/model/GetFirewallRuleGroupResult.h>
#include <aws/route53resolver/model/GetFirewallRuleGroupAssociationResult.h>
#include <aws/route53resolver/model/GetFirewallRuleGroupPolicyResult.h>
#include <aws/route53resolver/model/GetResolverConfigResult.h>
#include <aws/route53resolver/model/GetResolverDnssecConfigResult.h>
#include <aws/route53resolver/model/GetResolverEndpointResult.h>
#include <aws/route53resolver/model/GetResolverQueryLogConfigResult.h>
#include <aws/route53resolver/model/GetResolverQueryLogConfigAssociationResult.h>
#include <aws/route53resolver/model/GetResolverQueryLogConfigPolicyResult.h>
#include <aws/route53resolver/model/GetResolverRuleResult.h>
#include <aws/route53resolver/model/GetResolverRuleAssociationResult.h>
#include <aws/route53resolver/model/GetResolverRulePolicyResult.h>
#include <aws/route53resolver/model/ImportFirewallDomainsResult.h>
#include <aws/route53resolver/model/ListFirewallConfigsResult.h>
#include <aws/route53resolver/model/ListFirewallDomainListsResult.h>
#include <aws/route53resolver/model/ListFirewallDomainsResult.h>
#include <aws/route53resolver/model/ListFirewallRuleGroupAssociationsResult.h>
#include <aws/route53resolver/model/ListFirewallRuleGroupsResult.h>
#include <aws/route53resolver/model/ListFirewallRulesResult.h>
#include <aws/route53resolver/model/ListResolverConfigsResult.h>
#include <aws/route53resolver/model/ListResolverDnssecConfigsResult.h>
#include <aws/route53resolver/model/ListResolverEndpointIpAddressesResult.h>
#include <aws/route53resolver/model/ListResolverEndpointsResult.h>
#include <aws/route53resolver/model/ListResolverQueryLogConfigAssociationsResult.h>
#include <aws/route53resolver/model/ListResolverQueryLogConfigsResult.h>
#include <aws/route53resolver/model/ListResolverRuleAssociationsResult.h>
#include <aws/route53resolver/model/ListResolverRulesResult.h>
#include <aws/route53resolver/model/ListTagsForResourceResult.h>
#include <aws/route53resolver/model/PutFirewallRuleGroupPolicyResult.h>
#include <aws/route53resolver/model/PutResolverQueryLogConfigPolicyResult.h>
#include <aws/route53resolver/model/PutResolverRulePolicyResult.h>
#include <aws/route53resolver/model/TagResourceResult.h>
#include <aws/route53resolver/model/UntagResourceResult.h>
#include <aws/route53resolver/model/UpdateFirewallConfigResult.h>
#include <aws/route53resolver/model/UpdateFirewallDomainsResult.h>
#include <aws/route53resolver/model/UpdateFirewallRuleResult.h>
#include <aws/route53resolver/model/UpdateFirewallRuleGroupAssociationResult.h>
#include <aws/route53resolver/model/UpdateResolverConfigResult.h>
#include <aws/route53resolver/model/UpdateResolverDnssecConfigResult.h>
#include <aws/route53resolver/model/UpdateResolverEndpointResult.h>
#include <aws/route53resolver/model/UpdateResolverRuleResult.h>
/* End of service model headers required in Route53ResolverClient header */

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

  namespace Route53Resolver
  {
    using Route53ResolverClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using Route53ResolverEndpointProviderBase = Aws::Route53Resolver::Endpoint::Route53ResolverEndpointProviderBase;
    using Route53ResolverEndpointProvider = Aws::Route53Resolver::Endpoint::Route53ResolverEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in Route53ResolverClient header */
      class AssociateFirewallRuleGroupRequest;
      class AssociateResolverEndpointIpAddressRequest;
      class AssociateResolverQueryLogConfigRequest;
      class AssociateResolverRuleRequest;
      class CreateFirewallDomainListRequest;
      class CreateFirewallRuleRequest;
      class CreateFirewallRuleGroupRequest;
      class CreateResolverEndpointRequest;
      class CreateResolverQueryLogConfigRequest;
      class CreateResolverRuleRequest;
      class DeleteFirewallDomainListRequest;
      class DeleteFirewallRuleRequest;
      class DeleteFirewallRuleGroupRequest;
      class DeleteResolverEndpointRequest;
      class DeleteResolverQueryLogConfigRequest;
      class DeleteResolverRuleRequest;
      class DisassociateFirewallRuleGroupRequest;
      class DisassociateResolverEndpointIpAddressRequest;
      class DisassociateResolverQueryLogConfigRequest;
      class DisassociateResolverRuleRequest;
      class GetFirewallConfigRequest;
      class GetFirewallDomainListRequest;
      class GetFirewallRuleGroupRequest;
      class GetFirewallRuleGroupAssociationRequest;
      class GetFirewallRuleGroupPolicyRequest;
      class GetResolverConfigRequest;
      class GetResolverDnssecConfigRequest;
      class GetResolverEndpointRequest;
      class GetResolverQueryLogConfigRequest;
      class GetResolverQueryLogConfigAssociationRequest;
      class GetResolverQueryLogConfigPolicyRequest;
      class GetResolverRuleRequest;
      class GetResolverRuleAssociationRequest;
      class GetResolverRulePolicyRequest;
      class ImportFirewallDomainsRequest;
      class ListFirewallConfigsRequest;
      class ListFirewallDomainListsRequest;
      class ListFirewallDomainsRequest;
      class ListFirewallRuleGroupAssociationsRequest;
      class ListFirewallRuleGroupsRequest;
      class ListFirewallRulesRequest;
      class ListResolverConfigsRequest;
      class ListResolverDnssecConfigsRequest;
      class ListResolverEndpointIpAddressesRequest;
      class ListResolverEndpointsRequest;
      class ListResolverQueryLogConfigAssociationsRequest;
      class ListResolverQueryLogConfigsRequest;
      class ListResolverRuleAssociationsRequest;
      class ListResolverRulesRequest;
      class ListTagsForResourceRequest;
      class PutFirewallRuleGroupPolicyRequest;
      class PutResolverQueryLogConfigPolicyRequest;
      class PutResolverRulePolicyRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateFirewallConfigRequest;
      class UpdateFirewallDomainsRequest;
      class UpdateFirewallRuleRequest;
      class UpdateFirewallRuleGroupAssociationRequest;
      class UpdateResolverConfigRequest;
      class UpdateResolverDnssecConfigRequest;
      class UpdateResolverEndpointRequest;
      class UpdateResolverRuleRequest;
      /* End of service model forward declarations required in Route53ResolverClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateFirewallRuleGroupResult, Route53ResolverError> AssociateFirewallRuleGroupOutcome;
      typedef Aws::Utils::Outcome<AssociateResolverEndpointIpAddressResult, Route53ResolverError> AssociateResolverEndpointIpAddressOutcome;
      typedef Aws::Utils::Outcome<AssociateResolverQueryLogConfigResult, Route53ResolverError> AssociateResolverQueryLogConfigOutcome;
      typedef Aws::Utils::Outcome<AssociateResolverRuleResult, Route53ResolverError> AssociateResolverRuleOutcome;
      typedef Aws::Utils::Outcome<CreateFirewallDomainListResult, Route53ResolverError> CreateFirewallDomainListOutcome;
      typedef Aws::Utils::Outcome<CreateFirewallRuleResult, Route53ResolverError> CreateFirewallRuleOutcome;
      typedef Aws::Utils::Outcome<CreateFirewallRuleGroupResult, Route53ResolverError> CreateFirewallRuleGroupOutcome;
      typedef Aws::Utils::Outcome<CreateResolverEndpointResult, Route53ResolverError> CreateResolverEndpointOutcome;
      typedef Aws::Utils::Outcome<CreateResolverQueryLogConfigResult, Route53ResolverError> CreateResolverQueryLogConfigOutcome;
      typedef Aws::Utils::Outcome<CreateResolverRuleResult, Route53ResolverError> CreateResolverRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteFirewallDomainListResult, Route53ResolverError> DeleteFirewallDomainListOutcome;
      typedef Aws::Utils::Outcome<DeleteFirewallRuleResult, Route53ResolverError> DeleteFirewallRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteFirewallRuleGroupResult, Route53ResolverError> DeleteFirewallRuleGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteResolverEndpointResult, Route53ResolverError> DeleteResolverEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteResolverQueryLogConfigResult, Route53ResolverError> DeleteResolverQueryLogConfigOutcome;
      typedef Aws::Utils::Outcome<DeleteResolverRuleResult, Route53ResolverError> DeleteResolverRuleOutcome;
      typedef Aws::Utils::Outcome<DisassociateFirewallRuleGroupResult, Route53ResolverError> DisassociateFirewallRuleGroupOutcome;
      typedef Aws::Utils::Outcome<DisassociateResolverEndpointIpAddressResult, Route53ResolverError> DisassociateResolverEndpointIpAddressOutcome;
      typedef Aws::Utils::Outcome<DisassociateResolverQueryLogConfigResult, Route53ResolverError> DisassociateResolverQueryLogConfigOutcome;
      typedef Aws::Utils::Outcome<DisassociateResolverRuleResult, Route53ResolverError> DisassociateResolverRuleOutcome;
      typedef Aws::Utils::Outcome<GetFirewallConfigResult, Route53ResolverError> GetFirewallConfigOutcome;
      typedef Aws::Utils::Outcome<GetFirewallDomainListResult, Route53ResolverError> GetFirewallDomainListOutcome;
      typedef Aws::Utils::Outcome<GetFirewallRuleGroupResult, Route53ResolverError> GetFirewallRuleGroupOutcome;
      typedef Aws::Utils::Outcome<GetFirewallRuleGroupAssociationResult, Route53ResolverError> GetFirewallRuleGroupAssociationOutcome;
      typedef Aws::Utils::Outcome<GetFirewallRuleGroupPolicyResult, Route53ResolverError> GetFirewallRuleGroupPolicyOutcome;
      typedef Aws::Utils::Outcome<GetResolverConfigResult, Route53ResolverError> GetResolverConfigOutcome;
      typedef Aws::Utils::Outcome<GetResolverDnssecConfigResult, Route53ResolverError> GetResolverDnssecConfigOutcome;
      typedef Aws::Utils::Outcome<GetResolverEndpointResult, Route53ResolverError> GetResolverEndpointOutcome;
      typedef Aws::Utils::Outcome<GetResolverQueryLogConfigResult, Route53ResolverError> GetResolverQueryLogConfigOutcome;
      typedef Aws::Utils::Outcome<GetResolverQueryLogConfigAssociationResult, Route53ResolverError> GetResolverQueryLogConfigAssociationOutcome;
      typedef Aws::Utils::Outcome<GetResolverQueryLogConfigPolicyResult, Route53ResolverError> GetResolverQueryLogConfigPolicyOutcome;
      typedef Aws::Utils::Outcome<GetResolverRuleResult, Route53ResolverError> GetResolverRuleOutcome;
      typedef Aws::Utils::Outcome<GetResolverRuleAssociationResult, Route53ResolverError> GetResolverRuleAssociationOutcome;
      typedef Aws::Utils::Outcome<GetResolverRulePolicyResult, Route53ResolverError> GetResolverRulePolicyOutcome;
      typedef Aws::Utils::Outcome<ImportFirewallDomainsResult, Route53ResolverError> ImportFirewallDomainsOutcome;
      typedef Aws::Utils::Outcome<ListFirewallConfigsResult, Route53ResolverError> ListFirewallConfigsOutcome;
      typedef Aws::Utils::Outcome<ListFirewallDomainListsResult, Route53ResolverError> ListFirewallDomainListsOutcome;
      typedef Aws::Utils::Outcome<ListFirewallDomainsResult, Route53ResolverError> ListFirewallDomainsOutcome;
      typedef Aws::Utils::Outcome<ListFirewallRuleGroupAssociationsResult, Route53ResolverError> ListFirewallRuleGroupAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListFirewallRuleGroupsResult, Route53ResolverError> ListFirewallRuleGroupsOutcome;
      typedef Aws::Utils::Outcome<ListFirewallRulesResult, Route53ResolverError> ListFirewallRulesOutcome;
      typedef Aws::Utils::Outcome<ListResolverConfigsResult, Route53ResolverError> ListResolverConfigsOutcome;
      typedef Aws::Utils::Outcome<ListResolverDnssecConfigsResult, Route53ResolverError> ListResolverDnssecConfigsOutcome;
      typedef Aws::Utils::Outcome<ListResolverEndpointIpAddressesResult, Route53ResolverError> ListResolverEndpointIpAddressesOutcome;
      typedef Aws::Utils::Outcome<ListResolverEndpointsResult, Route53ResolverError> ListResolverEndpointsOutcome;
      typedef Aws::Utils::Outcome<ListResolverQueryLogConfigAssociationsResult, Route53ResolverError> ListResolverQueryLogConfigAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListResolverQueryLogConfigsResult, Route53ResolverError> ListResolverQueryLogConfigsOutcome;
      typedef Aws::Utils::Outcome<ListResolverRuleAssociationsResult, Route53ResolverError> ListResolverRuleAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListResolverRulesResult, Route53ResolverError> ListResolverRulesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, Route53ResolverError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutFirewallRuleGroupPolicyResult, Route53ResolverError> PutFirewallRuleGroupPolicyOutcome;
      typedef Aws::Utils::Outcome<PutResolverQueryLogConfigPolicyResult, Route53ResolverError> PutResolverQueryLogConfigPolicyOutcome;
      typedef Aws::Utils::Outcome<PutResolverRulePolicyResult, Route53ResolverError> PutResolverRulePolicyOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, Route53ResolverError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, Route53ResolverError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateFirewallConfigResult, Route53ResolverError> UpdateFirewallConfigOutcome;
      typedef Aws::Utils::Outcome<UpdateFirewallDomainsResult, Route53ResolverError> UpdateFirewallDomainsOutcome;
      typedef Aws::Utils::Outcome<UpdateFirewallRuleResult, Route53ResolverError> UpdateFirewallRuleOutcome;
      typedef Aws::Utils::Outcome<UpdateFirewallRuleGroupAssociationResult, Route53ResolverError> UpdateFirewallRuleGroupAssociationOutcome;
      typedef Aws::Utils::Outcome<UpdateResolverConfigResult, Route53ResolverError> UpdateResolverConfigOutcome;
      typedef Aws::Utils::Outcome<UpdateResolverDnssecConfigResult, Route53ResolverError> UpdateResolverDnssecConfigOutcome;
      typedef Aws::Utils::Outcome<UpdateResolverEndpointResult, Route53ResolverError> UpdateResolverEndpointOutcome;
      typedef Aws::Utils::Outcome<UpdateResolverRuleResult, Route53ResolverError> UpdateResolverRuleOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateFirewallRuleGroupOutcome> AssociateFirewallRuleGroupOutcomeCallable;
      typedef std::future<AssociateResolverEndpointIpAddressOutcome> AssociateResolverEndpointIpAddressOutcomeCallable;
      typedef std::future<AssociateResolverQueryLogConfigOutcome> AssociateResolverQueryLogConfigOutcomeCallable;
      typedef std::future<AssociateResolverRuleOutcome> AssociateResolverRuleOutcomeCallable;
      typedef std::future<CreateFirewallDomainListOutcome> CreateFirewallDomainListOutcomeCallable;
      typedef std::future<CreateFirewallRuleOutcome> CreateFirewallRuleOutcomeCallable;
      typedef std::future<CreateFirewallRuleGroupOutcome> CreateFirewallRuleGroupOutcomeCallable;
      typedef std::future<CreateResolverEndpointOutcome> CreateResolverEndpointOutcomeCallable;
      typedef std::future<CreateResolverQueryLogConfigOutcome> CreateResolverQueryLogConfigOutcomeCallable;
      typedef std::future<CreateResolverRuleOutcome> CreateResolverRuleOutcomeCallable;
      typedef std::future<DeleteFirewallDomainListOutcome> DeleteFirewallDomainListOutcomeCallable;
      typedef std::future<DeleteFirewallRuleOutcome> DeleteFirewallRuleOutcomeCallable;
      typedef std::future<DeleteFirewallRuleGroupOutcome> DeleteFirewallRuleGroupOutcomeCallable;
      typedef std::future<DeleteResolverEndpointOutcome> DeleteResolverEndpointOutcomeCallable;
      typedef std::future<DeleteResolverQueryLogConfigOutcome> DeleteResolverQueryLogConfigOutcomeCallable;
      typedef std::future<DeleteResolverRuleOutcome> DeleteResolverRuleOutcomeCallable;
      typedef std::future<DisassociateFirewallRuleGroupOutcome> DisassociateFirewallRuleGroupOutcomeCallable;
      typedef std::future<DisassociateResolverEndpointIpAddressOutcome> DisassociateResolverEndpointIpAddressOutcomeCallable;
      typedef std::future<DisassociateResolverQueryLogConfigOutcome> DisassociateResolverQueryLogConfigOutcomeCallable;
      typedef std::future<DisassociateResolverRuleOutcome> DisassociateResolverRuleOutcomeCallable;
      typedef std::future<GetFirewallConfigOutcome> GetFirewallConfigOutcomeCallable;
      typedef std::future<GetFirewallDomainListOutcome> GetFirewallDomainListOutcomeCallable;
      typedef std::future<GetFirewallRuleGroupOutcome> GetFirewallRuleGroupOutcomeCallable;
      typedef std::future<GetFirewallRuleGroupAssociationOutcome> GetFirewallRuleGroupAssociationOutcomeCallable;
      typedef std::future<GetFirewallRuleGroupPolicyOutcome> GetFirewallRuleGroupPolicyOutcomeCallable;
      typedef std::future<GetResolverConfigOutcome> GetResolverConfigOutcomeCallable;
      typedef std::future<GetResolverDnssecConfigOutcome> GetResolverDnssecConfigOutcomeCallable;
      typedef std::future<GetResolverEndpointOutcome> GetResolverEndpointOutcomeCallable;
      typedef std::future<GetResolverQueryLogConfigOutcome> GetResolverQueryLogConfigOutcomeCallable;
      typedef std::future<GetResolverQueryLogConfigAssociationOutcome> GetResolverQueryLogConfigAssociationOutcomeCallable;
      typedef std::future<GetResolverQueryLogConfigPolicyOutcome> GetResolverQueryLogConfigPolicyOutcomeCallable;
      typedef std::future<GetResolverRuleOutcome> GetResolverRuleOutcomeCallable;
      typedef std::future<GetResolverRuleAssociationOutcome> GetResolverRuleAssociationOutcomeCallable;
      typedef std::future<GetResolverRulePolicyOutcome> GetResolverRulePolicyOutcomeCallable;
      typedef std::future<ImportFirewallDomainsOutcome> ImportFirewallDomainsOutcomeCallable;
      typedef std::future<ListFirewallConfigsOutcome> ListFirewallConfigsOutcomeCallable;
      typedef std::future<ListFirewallDomainListsOutcome> ListFirewallDomainListsOutcomeCallable;
      typedef std::future<ListFirewallDomainsOutcome> ListFirewallDomainsOutcomeCallable;
      typedef std::future<ListFirewallRuleGroupAssociationsOutcome> ListFirewallRuleGroupAssociationsOutcomeCallable;
      typedef std::future<ListFirewallRuleGroupsOutcome> ListFirewallRuleGroupsOutcomeCallable;
      typedef std::future<ListFirewallRulesOutcome> ListFirewallRulesOutcomeCallable;
      typedef std::future<ListResolverConfigsOutcome> ListResolverConfigsOutcomeCallable;
      typedef std::future<ListResolverDnssecConfigsOutcome> ListResolverDnssecConfigsOutcomeCallable;
      typedef std::future<ListResolverEndpointIpAddressesOutcome> ListResolverEndpointIpAddressesOutcomeCallable;
      typedef std::future<ListResolverEndpointsOutcome> ListResolverEndpointsOutcomeCallable;
      typedef std::future<ListResolverQueryLogConfigAssociationsOutcome> ListResolverQueryLogConfigAssociationsOutcomeCallable;
      typedef std::future<ListResolverQueryLogConfigsOutcome> ListResolverQueryLogConfigsOutcomeCallable;
      typedef std::future<ListResolverRuleAssociationsOutcome> ListResolverRuleAssociationsOutcomeCallable;
      typedef std::future<ListResolverRulesOutcome> ListResolverRulesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutFirewallRuleGroupPolicyOutcome> PutFirewallRuleGroupPolicyOutcomeCallable;
      typedef std::future<PutResolverQueryLogConfigPolicyOutcome> PutResolverQueryLogConfigPolicyOutcomeCallable;
      typedef std::future<PutResolverRulePolicyOutcome> PutResolverRulePolicyOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateFirewallConfigOutcome> UpdateFirewallConfigOutcomeCallable;
      typedef std::future<UpdateFirewallDomainsOutcome> UpdateFirewallDomainsOutcomeCallable;
      typedef std::future<UpdateFirewallRuleOutcome> UpdateFirewallRuleOutcomeCallable;
      typedef std::future<UpdateFirewallRuleGroupAssociationOutcome> UpdateFirewallRuleGroupAssociationOutcomeCallable;
      typedef std::future<UpdateResolverConfigOutcome> UpdateResolverConfigOutcomeCallable;
      typedef std::future<UpdateResolverDnssecConfigOutcome> UpdateResolverDnssecConfigOutcomeCallable;
      typedef std::future<UpdateResolverEndpointOutcome> UpdateResolverEndpointOutcomeCallable;
      typedef std::future<UpdateResolverRuleOutcome> UpdateResolverRuleOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class Route53ResolverClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const Route53ResolverClient*, const Model::AssociateFirewallRuleGroupRequest&, const Model::AssociateFirewallRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateFirewallRuleGroupResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::AssociateResolverEndpointIpAddressRequest&, const Model::AssociateResolverEndpointIpAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateResolverEndpointIpAddressResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::AssociateResolverQueryLogConfigRequest&, const Model::AssociateResolverQueryLogConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateResolverQueryLogConfigResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::AssociateResolverRuleRequest&, const Model::AssociateResolverRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateResolverRuleResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::CreateFirewallDomainListRequest&, const Model::CreateFirewallDomainListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFirewallDomainListResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::CreateFirewallRuleRequest&, const Model::CreateFirewallRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFirewallRuleResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::CreateFirewallRuleGroupRequest&, const Model::CreateFirewallRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFirewallRuleGroupResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::CreateResolverEndpointRequest&, const Model::CreateResolverEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResolverEndpointResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::CreateResolverQueryLogConfigRequest&, const Model::CreateResolverQueryLogConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResolverQueryLogConfigResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::CreateResolverRuleRequest&, const Model::CreateResolverRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResolverRuleResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DeleteFirewallDomainListRequest&, const Model::DeleteFirewallDomainListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFirewallDomainListResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DeleteFirewallRuleRequest&, const Model::DeleteFirewallRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFirewallRuleResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DeleteFirewallRuleGroupRequest&, const Model::DeleteFirewallRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFirewallRuleGroupResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DeleteResolverEndpointRequest&, const Model::DeleteResolverEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResolverEndpointResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DeleteResolverQueryLogConfigRequest&, const Model::DeleteResolverQueryLogConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResolverQueryLogConfigResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DeleteResolverRuleRequest&, const Model::DeleteResolverRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResolverRuleResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DisassociateFirewallRuleGroupRequest&, const Model::DisassociateFirewallRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateFirewallRuleGroupResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DisassociateResolverEndpointIpAddressRequest&, const Model::DisassociateResolverEndpointIpAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateResolverEndpointIpAddressResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DisassociateResolverQueryLogConfigRequest&, const Model::DisassociateResolverQueryLogConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateResolverQueryLogConfigResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DisassociateResolverRuleRequest&, const Model::DisassociateResolverRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateResolverRuleResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetFirewallConfigRequest&, const Model::GetFirewallConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFirewallConfigResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetFirewallDomainListRequest&, const Model::GetFirewallDomainListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFirewallDomainListResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetFirewallRuleGroupRequest&, const Model::GetFirewallRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFirewallRuleGroupResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetFirewallRuleGroupAssociationRequest&, const Model::GetFirewallRuleGroupAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFirewallRuleGroupAssociationResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetFirewallRuleGroupPolicyRequest&, const Model::GetFirewallRuleGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFirewallRuleGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverConfigRequest&, const Model::GetResolverConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverConfigResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverDnssecConfigRequest&, const Model::GetResolverDnssecConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverDnssecConfigResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverEndpointRequest&, const Model::GetResolverEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverEndpointResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverQueryLogConfigRequest&, const Model::GetResolverQueryLogConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverQueryLogConfigResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverQueryLogConfigAssociationRequest&, const Model::GetResolverQueryLogConfigAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverQueryLogConfigAssociationResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverQueryLogConfigPolicyRequest&, const Model::GetResolverQueryLogConfigPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverQueryLogConfigPolicyResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverRuleRequest&, const Model::GetResolverRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverRuleResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverRuleAssociationRequest&, const Model::GetResolverRuleAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverRuleAssociationResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverRulePolicyRequest&, const Model::GetResolverRulePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverRulePolicyResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ImportFirewallDomainsRequest&, const Model::ImportFirewallDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportFirewallDomainsResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListFirewallConfigsRequest&, const Model::ListFirewallConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFirewallConfigsResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListFirewallDomainListsRequest&, const Model::ListFirewallDomainListsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFirewallDomainListsResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListFirewallDomainsRequest&, const Model::ListFirewallDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFirewallDomainsResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListFirewallRuleGroupAssociationsRequest&, const Model::ListFirewallRuleGroupAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFirewallRuleGroupAssociationsResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListFirewallRuleGroupsRequest&, const Model::ListFirewallRuleGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFirewallRuleGroupsResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListFirewallRulesRequest&, const Model::ListFirewallRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFirewallRulesResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListResolverConfigsRequest&, const Model::ListResolverConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolverConfigsResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListResolverDnssecConfigsRequest&, const Model::ListResolverDnssecConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolverDnssecConfigsResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListResolverEndpointIpAddressesRequest&, const Model::ListResolverEndpointIpAddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolverEndpointIpAddressesResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListResolverEndpointsRequest&, const Model::ListResolverEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolverEndpointsResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListResolverQueryLogConfigAssociationsRequest&, const Model::ListResolverQueryLogConfigAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolverQueryLogConfigAssociationsResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListResolverQueryLogConfigsRequest&, const Model::ListResolverQueryLogConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolverQueryLogConfigsResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListResolverRuleAssociationsRequest&, const Model::ListResolverRuleAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolverRuleAssociationsResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListResolverRulesRequest&, const Model::ListResolverRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolverRulesResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::PutFirewallRuleGroupPolicyRequest&, const Model::PutFirewallRuleGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutFirewallRuleGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::PutResolverQueryLogConfigPolicyRequest&, const Model::PutResolverQueryLogConfigPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResolverQueryLogConfigPolicyResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::PutResolverRulePolicyRequest&, const Model::PutResolverRulePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResolverRulePolicyResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::UpdateFirewallConfigRequest&, const Model::UpdateFirewallConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFirewallConfigResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::UpdateFirewallDomainsRequest&, const Model::UpdateFirewallDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFirewallDomainsResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::UpdateFirewallRuleRequest&, const Model::UpdateFirewallRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFirewallRuleResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::UpdateFirewallRuleGroupAssociationRequest&, const Model::UpdateFirewallRuleGroupAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFirewallRuleGroupAssociationResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::UpdateResolverConfigRequest&, const Model::UpdateResolverConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResolverConfigResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::UpdateResolverDnssecConfigRequest&, const Model::UpdateResolverDnssecConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResolverDnssecConfigResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::UpdateResolverEndpointRequest&, const Model::UpdateResolverEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResolverEndpointResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::UpdateResolverRuleRequest&, const Model::UpdateResolverRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResolverRuleResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Route53Resolver
} // namespace Aws
