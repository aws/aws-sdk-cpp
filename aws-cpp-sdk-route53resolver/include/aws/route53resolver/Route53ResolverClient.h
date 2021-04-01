/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
#include <aws/route53resolver/model/UpdateResolverDnssecConfigResult.h>
#include <aws/route53resolver/model/UpdateResolverEndpointResult.h>
#include <aws/route53resolver/model/UpdateResolverRuleResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
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
        class UpdateResolverDnssecConfigRequest;
        class UpdateResolverEndpointRequest;
        class UpdateResolverRuleRequest;

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
        typedef Aws::Utils::Outcome<UpdateResolverDnssecConfigResult, Route53ResolverError> UpdateResolverDnssecConfigOutcome;
        typedef Aws::Utils::Outcome<UpdateResolverEndpointResult, Route53ResolverError> UpdateResolverEndpointOutcome;
        typedef Aws::Utils::Outcome<UpdateResolverRuleResult, Route53ResolverError> UpdateResolverRuleOutcome;

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
        typedef std::future<UpdateResolverDnssecConfigOutcome> UpdateResolverDnssecConfigOutcomeCallable;
        typedef std::future<UpdateResolverEndpointOutcome> UpdateResolverEndpointOutcomeCallable;
        typedef std::future<UpdateResolverRuleOutcome> UpdateResolverRuleOutcomeCallable;
} // namespace Model

  class Route53ResolverClient;

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
    typedef std::function<void(const Route53ResolverClient*, const Model::UpdateResolverDnssecConfigRequest&, const Model::UpdateResolverDnssecConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResolverDnssecConfigResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::UpdateResolverEndpointRequest&, const Model::UpdateResolverEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResolverEndpointResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::UpdateResolverRuleRequest&, const Model::UpdateResolverRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResolverRuleResponseReceivedHandler;

  /**
   * <p>When you create a VPC using Amazon VPC, you automatically get DNS resolution
   * within the VPC from Route 53 Resolver. By default, Resolver answers DNS queries
   * for VPC domain names such as domain names for EC2 instances or ELB load
   * balancers. Resolver performs recursive lookups against public name servers for
   * all other domain names.</p> <p>You can also configure DNS resolution between
   * your VPC and your network over a Direct Connect or VPN connection:</p> <p>
   * <b>Forward DNS queries from resolvers on your network to Route 53 Resolver</b>
   * </p> <p>DNS resolvers on your network can forward DNS queries to Resolver in a
   * specified VPC. This allows your DNS resolvers to easily resolve domain names for
   * AWS resources such as EC2 instances or records in a Route 53 private hosted
   * zone. For more information, see <a
   * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/resolver.html#resolver-overview-forward-network-to-vpc">How
   * DNS Resolvers on Your Network Forward DNS Queries to Route 53 Resolver</a> in
   * the <i>Amazon Route 53 Developer Guide</i>.</p> <p> <b>Conditionally forward
   * queries from a VPC to resolvers on your network</b> </p> <p>You can configure
   * Resolver to forward queries that it receives from EC2 instances in your VPCs to
   * DNS resolvers on your network. To forward selected queries, you create Resolver
   * rules that specify the domain names for the DNS queries that you want to forward
   * (such as example.com), and the IP addresses of the DNS resolvers on your network
   * that you want to forward the queries to. If a query matches multiple rules
   * (example.com, acme.example.com), Resolver chooses the rule with the most
   * specific match (acme.example.com) and forwards the query to the IP addresses
   * that you specified in that rule. For more information, see <a
   * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/resolver.html#resolver-overview-forward-vpc-to-network">How
   * Route 53 Resolver Forwards DNS Queries from Your VPCs to Your Network</a> in the
   * <i>Amazon Route 53 Developer Guide</i>.</p> <p>Like Amazon VPC, Resolver is
   * regional. In each region where you have VPCs, you can choose whether to forward
   * queries from your VPCs to your network (outbound queries), from your network to
   * your VPCs (inbound queries), or both.</p>
   */
  class AWS_ROUTE53RESOLVER_API Route53ResolverClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53ResolverClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53ResolverClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53ResolverClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~Route53ResolverClient();


        /**
         * <p>Associates a <a>FirewallRuleGroup</a> with a VPC, to provide DNS filtering
         * for the VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateFirewallRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateFirewallRuleGroupOutcome AssociateFirewallRuleGroup(const Model::AssociateFirewallRuleGroupRequest& request) const;

        /**
         * <p>Associates a <a>FirewallRuleGroup</a> with a VPC, to provide DNS filtering
         * for the VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateFirewallRuleGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateFirewallRuleGroupOutcomeCallable AssociateFirewallRuleGroupCallable(const Model::AssociateFirewallRuleGroupRequest& request) const;

        /**
         * <p>Associates a <a>FirewallRuleGroup</a> with a VPC, to provide DNS filtering
         * for the VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateFirewallRuleGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateFirewallRuleGroupAsync(const Model::AssociateFirewallRuleGroupRequest& request, const AssociateFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds IP addresses to an inbound or an outbound Resolver endpoint. If you want
         * to add more than one IP address, submit one
         * <code>AssociateResolverEndpointIpAddress</code> request for each IP address.</p>
         * <p>To remove an IP address from an endpoint, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverEndpointIpAddress.html">DisassociateResolverEndpointIpAddress</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateResolverEndpointIpAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateResolverEndpointIpAddressOutcome AssociateResolverEndpointIpAddress(const Model::AssociateResolverEndpointIpAddressRequest& request) const;

        /**
         * <p>Adds IP addresses to an inbound or an outbound Resolver endpoint. If you want
         * to add more than one IP address, submit one
         * <code>AssociateResolverEndpointIpAddress</code> request for each IP address.</p>
         * <p>To remove an IP address from an endpoint, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverEndpointIpAddress.html">DisassociateResolverEndpointIpAddress</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateResolverEndpointIpAddress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateResolverEndpointIpAddressOutcomeCallable AssociateResolverEndpointIpAddressCallable(const Model::AssociateResolverEndpointIpAddressRequest& request) const;

        /**
         * <p>Adds IP addresses to an inbound or an outbound Resolver endpoint. If you want
         * to add more than one IP address, submit one
         * <code>AssociateResolverEndpointIpAddress</code> request for each IP address.</p>
         * <p>To remove an IP address from an endpoint, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverEndpointIpAddress.html">DisassociateResolverEndpointIpAddress</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateResolverEndpointIpAddress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateResolverEndpointIpAddressAsync(const Model::AssociateResolverEndpointIpAddressRequest& request, const AssociateResolverEndpointIpAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an Amazon VPC with a specified query logging configuration. Route
         * 53 Resolver logs DNS queries that originate in all of the Amazon VPCs that are
         * associated with a specified query logging configuration. To associate more than
         * one VPC with a configuration, submit one
         * <code>AssociateResolverQueryLogConfig</code> request for each VPC.</p> 
         * <p>The VPCs that you associate with a query logging configuration must be in the
         * same Region as the configuration.</p>  <p>To remove a VPC from a query
         * logging configuration, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverQueryLogConfig.html">DisassociateResolverQueryLogConfig</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateResolverQueryLogConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateResolverQueryLogConfigOutcome AssociateResolverQueryLogConfig(const Model::AssociateResolverQueryLogConfigRequest& request) const;

        /**
         * <p>Associates an Amazon VPC with a specified query logging configuration. Route
         * 53 Resolver logs DNS queries that originate in all of the Amazon VPCs that are
         * associated with a specified query logging configuration. To associate more than
         * one VPC with a configuration, submit one
         * <code>AssociateResolverQueryLogConfig</code> request for each VPC.</p> 
         * <p>The VPCs that you associate with a query logging configuration must be in the
         * same Region as the configuration.</p>  <p>To remove a VPC from a query
         * logging configuration, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverQueryLogConfig.html">DisassociateResolverQueryLogConfig</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateResolverQueryLogConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateResolverQueryLogConfigOutcomeCallable AssociateResolverQueryLogConfigCallable(const Model::AssociateResolverQueryLogConfigRequest& request) const;

        /**
         * <p>Associates an Amazon VPC with a specified query logging configuration. Route
         * 53 Resolver logs DNS queries that originate in all of the Amazon VPCs that are
         * associated with a specified query logging configuration. To associate more than
         * one VPC with a configuration, submit one
         * <code>AssociateResolverQueryLogConfig</code> request for each VPC.</p> 
         * <p>The VPCs that you associate with a query logging configuration must be in the
         * same Region as the configuration.</p>  <p>To remove a VPC from a query
         * logging configuration, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverQueryLogConfig.html">DisassociateResolverQueryLogConfig</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateResolverQueryLogConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateResolverQueryLogConfigAsync(const Model::AssociateResolverQueryLogConfigRequest& request, const AssociateResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a Resolver rule with a VPC. When you associate a rule with a VPC,
         * Resolver forwards all DNS queries for the domain name that is specified in the
         * rule and that originate in the VPC. The queries are forwarded to the IP
         * addresses for the DNS resolvers that are specified in the rule. For more
         * information about rules, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverRule.html">CreateResolverRule</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateResolverRuleOutcome AssociateResolverRule(const Model::AssociateResolverRuleRequest& request) const;

        /**
         * <p>Associates a Resolver rule with a VPC. When you associate a rule with a VPC,
         * Resolver forwards all DNS queries for the domain name that is specified in the
         * rule and that originate in the VPC. The queries are forwarded to the IP
         * addresses for the DNS resolvers that are specified in the rule. For more
         * information about rules, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverRule.html">CreateResolverRule</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateResolverRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateResolverRuleOutcomeCallable AssociateResolverRuleCallable(const Model::AssociateResolverRuleRequest& request) const;

        /**
         * <p>Associates a Resolver rule with a VPC. When you associate a rule with a VPC,
         * Resolver forwards all DNS queries for the domain name that is specified in the
         * rule and that originate in the VPC. The queries are forwarded to the IP
         * addresses for the DNS resolvers that are specified in the rule. For more
         * information about rules, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverRule.html">CreateResolverRule</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateResolverRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateResolverRuleAsync(const Model::AssociateResolverRuleRequest& request, const AssociateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an empty firewall domain list for use in DNS Firewall rules. You can
         * populate the domains for the new list with a file, using
         * <a>ImportFirewallDomains</a>, or with domain strings, using
         * <a>UpdateFirewallDomains</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateFirewallDomainList">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFirewallDomainListOutcome CreateFirewallDomainList(const Model::CreateFirewallDomainListRequest& request) const;

        /**
         * <p>Creates an empty firewall domain list for use in DNS Firewall rules. You can
         * populate the domains for the new list with a file, using
         * <a>ImportFirewallDomains</a>, or with domain strings, using
         * <a>UpdateFirewallDomains</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateFirewallDomainList">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFirewallDomainListOutcomeCallable CreateFirewallDomainListCallable(const Model::CreateFirewallDomainListRequest& request) const;

        /**
         * <p>Creates an empty firewall domain list for use in DNS Firewall rules. You can
         * populate the domains for the new list with a file, using
         * <a>ImportFirewallDomains</a>, or with domain strings, using
         * <a>UpdateFirewallDomains</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateFirewallDomainList">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFirewallDomainListAsync(const Model::CreateFirewallDomainListRequest& request, const CreateFirewallDomainListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a single DNS Firewall rule in the specified rule group, using the
         * specified domain list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateFirewallRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFirewallRuleOutcome CreateFirewallRule(const Model::CreateFirewallRuleRequest& request) const;

        /**
         * <p>Creates a single DNS Firewall rule in the specified rule group, using the
         * specified domain list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateFirewallRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFirewallRuleOutcomeCallable CreateFirewallRuleCallable(const Model::CreateFirewallRuleRequest& request) const;

        /**
         * <p>Creates a single DNS Firewall rule in the specified rule group, using the
         * specified domain list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateFirewallRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFirewallRuleAsync(const Model::CreateFirewallRuleRequest& request, const CreateFirewallRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an empty DNS Firewall rule group for filtering DNS network traffic in
         * a VPC. You can add rules to the new rule group by calling
         * <a>CreateFirewallRule</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateFirewallRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFirewallRuleGroupOutcome CreateFirewallRuleGroup(const Model::CreateFirewallRuleGroupRequest& request) const;

        /**
         * <p>Creates an empty DNS Firewall rule group for filtering DNS network traffic in
         * a VPC. You can add rules to the new rule group by calling
         * <a>CreateFirewallRule</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateFirewallRuleGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFirewallRuleGroupOutcomeCallable CreateFirewallRuleGroupCallable(const Model::CreateFirewallRuleGroupRequest& request) const;

        /**
         * <p>Creates an empty DNS Firewall rule group for filtering DNS network traffic in
         * a VPC. You can add rules to the new rule group by calling
         * <a>CreateFirewallRule</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateFirewallRuleGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFirewallRuleGroupAsync(const Model::CreateFirewallRuleGroupRequest& request, const CreateFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Resolver endpoint. There are two types of Resolver endpoints,
         * inbound and outbound:</p> <ul> <li> <p>An <i>inbound Resolver endpoint</i>
         * forwards DNS queries to the DNS service for a VPC from your network.</p> </li>
         * <li> <p>An <i>outbound Resolver endpoint</i> forwards DNS queries from the DNS
         * service for a VPC to your network.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateResolverEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResolverEndpointOutcome CreateResolverEndpoint(const Model::CreateResolverEndpointRequest& request) const;

        /**
         * <p>Creates a Resolver endpoint. There are two types of Resolver endpoints,
         * inbound and outbound:</p> <ul> <li> <p>An <i>inbound Resolver endpoint</i>
         * forwards DNS queries to the DNS service for a VPC from your network.</p> </li>
         * <li> <p>An <i>outbound Resolver endpoint</i> forwards DNS queries from the DNS
         * service for a VPC to your network.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateResolverEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResolverEndpointOutcomeCallable CreateResolverEndpointCallable(const Model::CreateResolverEndpointRequest& request) const;

        /**
         * <p>Creates a Resolver endpoint. There are two types of Resolver endpoints,
         * inbound and outbound:</p> <ul> <li> <p>An <i>inbound Resolver endpoint</i>
         * forwards DNS queries to the DNS service for a VPC from your network.</p> </li>
         * <li> <p>An <i>outbound Resolver endpoint</i> forwards DNS queries from the DNS
         * service for a VPC to your network.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateResolverEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResolverEndpointAsync(const Model::CreateResolverEndpointRequest& request, const CreateResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Resolver query logging configuration, which defines where you want
         * Resolver to save DNS query logs that originate in your VPCs. Resolver can log
         * queries only for VPCs that are in the same Region as the query logging
         * configuration.</p> <p>To specify which VPCs you want to log queries for, you use
         * <code>AssociateResolverQueryLogConfig</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_AssociateResolverQueryLogConfig.html">AssociateResolverQueryLogConfig</a>.
         * </p> <p>You can optionally use AWS Resource Access Manager (AWS RAM) to share a
         * query logging configuration with other AWS accounts. The other accounts can then
         * associate VPCs with the configuration. The query logs that Resolver creates for
         * a configuration include all DNS queries that originate in all VPCs that are
         * associated with the configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateResolverQueryLogConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResolverQueryLogConfigOutcome CreateResolverQueryLogConfig(const Model::CreateResolverQueryLogConfigRequest& request) const;

        /**
         * <p>Creates a Resolver query logging configuration, which defines where you want
         * Resolver to save DNS query logs that originate in your VPCs. Resolver can log
         * queries only for VPCs that are in the same Region as the query logging
         * configuration.</p> <p>To specify which VPCs you want to log queries for, you use
         * <code>AssociateResolverQueryLogConfig</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_AssociateResolverQueryLogConfig.html">AssociateResolverQueryLogConfig</a>.
         * </p> <p>You can optionally use AWS Resource Access Manager (AWS RAM) to share a
         * query logging configuration with other AWS accounts. The other accounts can then
         * associate VPCs with the configuration. The query logs that Resolver creates for
         * a configuration include all DNS queries that originate in all VPCs that are
         * associated with the configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateResolverQueryLogConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResolverQueryLogConfigOutcomeCallable CreateResolverQueryLogConfigCallable(const Model::CreateResolverQueryLogConfigRequest& request) const;

        /**
         * <p>Creates a Resolver query logging configuration, which defines where you want
         * Resolver to save DNS query logs that originate in your VPCs. Resolver can log
         * queries only for VPCs that are in the same Region as the query logging
         * configuration.</p> <p>To specify which VPCs you want to log queries for, you use
         * <code>AssociateResolverQueryLogConfig</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_AssociateResolverQueryLogConfig.html">AssociateResolverQueryLogConfig</a>.
         * </p> <p>You can optionally use AWS Resource Access Manager (AWS RAM) to share a
         * query logging configuration with other AWS accounts. The other accounts can then
         * associate VPCs with the configuration. The query logs that Resolver creates for
         * a configuration include all DNS queries that originate in all VPCs that are
         * associated with the configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateResolverQueryLogConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResolverQueryLogConfigAsync(const Model::CreateResolverQueryLogConfigRequest& request, const CreateResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For DNS queries that originate in your VPCs, specifies which Resolver
         * endpoint the queries pass through, one domain name that you want to forward to
         * your network, and the IP addresses of the DNS resolvers in your
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResolverRuleOutcome CreateResolverRule(const Model::CreateResolverRuleRequest& request) const;

        /**
         * <p>For DNS queries that originate in your VPCs, specifies which Resolver
         * endpoint the queries pass through, one domain name that you want to forward to
         * your network, and the IP addresses of the DNS resolvers in your
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateResolverRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResolverRuleOutcomeCallable CreateResolverRuleCallable(const Model::CreateResolverRuleRequest& request) const;

        /**
         * <p>For DNS queries that originate in your VPCs, specifies which Resolver
         * endpoint the queries pass through, one domain name that you want to forward to
         * your network, and the IP addresses of the DNS resolvers in your
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateResolverRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResolverRuleAsync(const Model::CreateResolverRuleRequest& request, const CreateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified domain list. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteFirewallDomainList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFirewallDomainListOutcome DeleteFirewallDomainList(const Model::DeleteFirewallDomainListRequest& request) const;

        /**
         * <p>Deletes the specified domain list. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteFirewallDomainList">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFirewallDomainListOutcomeCallable DeleteFirewallDomainListCallable(const Model::DeleteFirewallDomainListRequest& request) const;

        /**
         * <p>Deletes the specified domain list. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteFirewallDomainList">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFirewallDomainListAsync(const Model::DeleteFirewallDomainListRequest& request, const DeleteFirewallDomainListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified firewall rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteFirewallRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFirewallRuleOutcome DeleteFirewallRule(const Model::DeleteFirewallRuleRequest& request) const;

        /**
         * <p>Deletes the specified firewall rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteFirewallRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFirewallRuleOutcomeCallable DeleteFirewallRuleCallable(const Model::DeleteFirewallRuleRequest& request) const;

        /**
         * <p>Deletes the specified firewall rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteFirewallRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFirewallRuleAsync(const Model::DeleteFirewallRuleRequest& request, const DeleteFirewallRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified firewall rule group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteFirewallRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFirewallRuleGroupOutcome DeleteFirewallRuleGroup(const Model::DeleteFirewallRuleGroupRequest& request) const;

        /**
         * <p>Deletes the specified firewall rule group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteFirewallRuleGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFirewallRuleGroupOutcomeCallable DeleteFirewallRuleGroupCallable(const Model::DeleteFirewallRuleGroupRequest& request) const;

        /**
         * <p>Deletes the specified firewall rule group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteFirewallRuleGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFirewallRuleGroupAsync(const Model::DeleteFirewallRuleGroupRequest& request, const DeleteFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Resolver endpoint. The effect of deleting a Resolver endpoint
         * depends on whether it's an inbound or an outbound Resolver endpoint:</p> <ul>
         * <li> <p> <b>Inbound</b>: DNS queries from your network are no longer routed to
         * the DNS service for the specified VPC.</p> </li> <li> <p> <b>Outbound</b>: DNS
         * queries from a VPC are no longer routed to your network.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteResolverEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResolverEndpointOutcome DeleteResolverEndpoint(const Model::DeleteResolverEndpointRequest& request) const;

        /**
         * <p>Deletes a Resolver endpoint. The effect of deleting a Resolver endpoint
         * depends on whether it's an inbound or an outbound Resolver endpoint:</p> <ul>
         * <li> <p> <b>Inbound</b>: DNS queries from your network are no longer routed to
         * the DNS service for the specified VPC.</p> </li> <li> <p> <b>Outbound</b>: DNS
         * queries from a VPC are no longer routed to your network.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteResolverEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResolverEndpointOutcomeCallable DeleteResolverEndpointCallable(const Model::DeleteResolverEndpointRequest& request) const;

        /**
         * <p>Deletes a Resolver endpoint. The effect of deleting a Resolver endpoint
         * depends on whether it's an inbound or an outbound Resolver endpoint:</p> <ul>
         * <li> <p> <b>Inbound</b>: DNS queries from your network are no longer routed to
         * the DNS service for the specified VPC.</p> </li> <li> <p> <b>Outbound</b>: DNS
         * queries from a VPC are no longer routed to your network.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteResolverEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResolverEndpointAsync(const Model::DeleteResolverEndpointRequest& request, const DeleteResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a query logging configuration. When you delete a configuration,
         * Resolver stops logging DNS queries for all of the Amazon VPCs that are
         * associated with the configuration. This also applies if the query logging
         * configuration is shared with other AWS accounts, and the other accounts have
         * associated VPCs with the shared configuration.</p> <p>Before you can delete a
         * query logging configuration, you must first disassociate all VPCs from the
         * configuration. See <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverQueryLogConfig.html">DisassociateResolverQueryLogConfig</a>.</p>
         * <p>If you used Resource Access Manager (RAM) to share a query logging
         * configuration with other accounts, you must stop sharing the configuration
         * before you can delete a configuration. The accounts that you shared the
         * configuration with can first disassociate VPCs that they associated with the
         * configuration, but that's not necessary. If you stop sharing the configuration,
         * those VPCs are automatically disassociated from the configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteResolverQueryLogConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResolverQueryLogConfigOutcome DeleteResolverQueryLogConfig(const Model::DeleteResolverQueryLogConfigRequest& request) const;

        /**
         * <p>Deletes a query logging configuration. When you delete a configuration,
         * Resolver stops logging DNS queries for all of the Amazon VPCs that are
         * associated with the configuration. This also applies if the query logging
         * configuration is shared with other AWS accounts, and the other accounts have
         * associated VPCs with the shared configuration.</p> <p>Before you can delete a
         * query logging configuration, you must first disassociate all VPCs from the
         * configuration. See <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverQueryLogConfig.html">DisassociateResolverQueryLogConfig</a>.</p>
         * <p>If you used Resource Access Manager (RAM) to share a query logging
         * configuration with other accounts, you must stop sharing the configuration
         * before you can delete a configuration. The accounts that you shared the
         * configuration with can first disassociate VPCs that they associated with the
         * configuration, but that's not necessary. If you stop sharing the configuration,
         * those VPCs are automatically disassociated from the configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteResolverQueryLogConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResolverQueryLogConfigOutcomeCallable DeleteResolverQueryLogConfigCallable(const Model::DeleteResolverQueryLogConfigRequest& request) const;

        /**
         * <p>Deletes a query logging configuration. When you delete a configuration,
         * Resolver stops logging DNS queries for all of the Amazon VPCs that are
         * associated with the configuration. This also applies if the query logging
         * configuration is shared with other AWS accounts, and the other accounts have
         * associated VPCs with the shared configuration.</p> <p>Before you can delete a
         * query logging configuration, you must first disassociate all VPCs from the
         * configuration. See <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverQueryLogConfig.html">DisassociateResolverQueryLogConfig</a>.</p>
         * <p>If you used Resource Access Manager (RAM) to share a query logging
         * configuration with other accounts, you must stop sharing the configuration
         * before you can delete a configuration. The accounts that you shared the
         * configuration with can first disassociate VPCs that they associated with the
         * configuration, but that's not necessary. If you stop sharing the configuration,
         * those VPCs are automatically disassociated from the configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteResolverQueryLogConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResolverQueryLogConfigAsync(const Model::DeleteResolverQueryLogConfigRequest& request, const DeleteResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Resolver rule. Before you can delete a Resolver rule, you must
         * disassociate it from all the VPCs that you associated the Resolver rule with.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverRule.html">DisassociateResolverRule</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResolverRuleOutcome DeleteResolverRule(const Model::DeleteResolverRuleRequest& request) const;

        /**
         * <p>Deletes a Resolver rule. Before you can delete a Resolver rule, you must
         * disassociate it from all the VPCs that you associated the Resolver rule with.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverRule.html">DisassociateResolverRule</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteResolverRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResolverRuleOutcomeCallable DeleteResolverRuleCallable(const Model::DeleteResolverRuleRequest& request) const;

        /**
         * <p>Deletes a Resolver rule. Before you can delete a Resolver rule, you must
         * disassociate it from all the VPCs that you associated the Resolver rule with.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverRule.html">DisassociateResolverRule</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteResolverRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResolverRuleAsync(const Model::DeleteResolverRuleRequest& request, const DeleteResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a <a>FirewallRuleGroup</a> from a VPC, to remove DNS filtering
         * from the VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateFirewallRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFirewallRuleGroupOutcome DisassociateFirewallRuleGroup(const Model::DisassociateFirewallRuleGroupRequest& request) const;

        /**
         * <p>Disassociates a <a>FirewallRuleGroup</a> from a VPC, to remove DNS filtering
         * from the VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateFirewallRuleGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateFirewallRuleGroupOutcomeCallable DisassociateFirewallRuleGroupCallable(const Model::DisassociateFirewallRuleGroupRequest& request) const;

        /**
         * <p>Disassociates a <a>FirewallRuleGroup</a> from a VPC, to remove DNS filtering
         * from the VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateFirewallRuleGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateFirewallRuleGroupAsync(const Model::DisassociateFirewallRuleGroupRequest& request, const DisassociateFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes IP addresses from an inbound or an outbound Resolver endpoint. If you
         * want to remove more than one IP address, submit one
         * <code>DisassociateResolverEndpointIpAddress</code> request for each IP
         * address.</p> <p>To add an IP address to an endpoint, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_AssociateResolverEndpointIpAddress.html">AssociateResolverEndpointIpAddress</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateResolverEndpointIpAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateResolverEndpointIpAddressOutcome DisassociateResolverEndpointIpAddress(const Model::DisassociateResolverEndpointIpAddressRequest& request) const;

        /**
         * <p>Removes IP addresses from an inbound or an outbound Resolver endpoint. If you
         * want to remove more than one IP address, submit one
         * <code>DisassociateResolverEndpointIpAddress</code> request for each IP
         * address.</p> <p>To add an IP address to an endpoint, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_AssociateResolverEndpointIpAddress.html">AssociateResolverEndpointIpAddress</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateResolverEndpointIpAddress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateResolverEndpointIpAddressOutcomeCallable DisassociateResolverEndpointIpAddressCallable(const Model::DisassociateResolverEndpointIpAddressRequest& request) const;

        /**
         * <p>Removes IP addresses from an inbound or an outbound Resolver endpoint. If you
         * want to remove more than one IP address, submit one
         * <code>DisassociateResolverEndpointIpAddress</code> request for each IP
         * address.</p> <p>To add an IP address to an endpoint, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_AssociateResolverEndpointIpAddress.html">AssociateResolverEndpointIpAddress</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateResolverEndpointIpAddress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateResolverEndpointIpAddressAsync(const Model::DisassociateResolverEndpointIpAddressRequest& request, const DisassociateResolverEndpointIpAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a VPC from a query logging configuration.</p>  <p>Before
         * you can delete a query logging configuration, you must first disassociate all
         * VPCs from the configuration. If you used Resource Access Manager (RAM) to share
         * a query logging configuration with other accounts, VPCs can be disassociated
         * from the configuration in the following ways:</p> <ul> <li> <p>The accounts that
         * you shared the configuration with can disassociate VPCs from the
         * configuration.</p> </li> <li> <p>You can stop sharing the configuration.</p>
         * </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateResolverQueryLogConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateResolverQueryLogConfigOutcome DisassociateResolverQueryLogConfig(const Model::DisassociateResolverQueryLogConfigRequest& request) const;

        /**
         * <p>Disassociates a VPC from a query logging configuration.</p>  <p>Before
         * you can delete a query logging configuration, you must first disassociate all
         * VPCs from the configuration. If you used Resource Access Manager (RAM) to share
         * a query logging configuration with other accounts, VPCs can be disassociated
         * from the configuration in the following ways:</p> <ul> <li> <p>The accounts that
         * you shared the configuration with can disassociate VPCs from the
         * configuration.</p> </li> <li> <p>You can stop sharing the configuration.</p>
         * </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateResolverQueryLogConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateResolverQueryLogConfigOutcomeCallable DisassociateResolverQueryLogConfigCallable(const Model::DisassociateResolverQueryLogConfigRequest& request) const;

        /**
         * <p>Disassociates a VPC from a query logging configuration.</p>  <p>Before
         * you can delete a query logging configuration, you must first disassociate all
         * VPCs from the configuration. If you used Resource Access Manager (RAM) to share
         * a query logging configuration with other accounts, VPCs can be disassociated
         * from the configuration in the following ways:</p> <ul> <li> <p>The accounts that
         * you shared the configuration with can disassociate VPCs from the
         * configuration.</p> </li> <li> <p>You can stop sharing the configuration.</p>
         * </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateResolverQueryLogConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateResolverQueryLogConfigAsync(const Model::DisassociateResolverQueryLogConfigRequest& request, const DisassociateResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the association between a specified Resolver rule and a specified
         * VPC.</p>  <p>If you disassociate a Resolver rule from a VPC, Resolver
         * stops forwarding DNS queries for the domain name that you specified in the
         * Resolver rule. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateResolverRuleOutcome DisassociateResolverRule(const Model::DisassociateResolverRuleRequest& request) const;

        /**
         * <p>Removes the association between a specified Resolver rule and a specified
         * VPC.</p>  <p>If you disassociate a Resolver rule from a VPC, Resolver
         * stops forwarding DNS queries for the domain name that you specified in the
         * Resolver rule. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateResolverRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateResolverRuleOutcomeCallable DisassociateResolverRuleCallable(const Model::DisassociateResolverRuleRequest& request) const;

        /**
         * <p>Removes the association between a specified Resolver rule and a specified
         * VPC.</p>  <p>If you disassociate a Resolver rule from a VPC, Resolver
         * stops forwarding DNS queries for the domain name that you specified in the
         * Resolver rule. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateResolverRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateResolverRuleAsync(const Model::DisassociateResolverRuleRequest& request, const DisassociateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the configuration of the firewall behavior provided by DNS Firewall
         * for a single Amazon virtual private cloud (VPC). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFirewallConfigOutcome GetFirewallConfig(const Model::GetFirewallConfigRequest& request) const;

        /**
         * <p>Retrieves the configuration of the firewall behavior provided by DNS Firewall
         * for a single Amazon virtual private cloud (VPC). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFirewallConfigOutcomeCallable GetFirewallConfigCallable(const Model::GetFirewallConfigRequest& request) const;

        /**
         * <p>Retrieves the configuration of the firewall behavior provided by DNS Firewall
         * for a single Amazon virtual private cloud (VPC). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFirewallConfigAsync(const Model::GetFirewallConfigRequest& request, const GetFirewallConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified firewall domain list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallDomainList">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFirewallDomainListOutcome GetFirewallDomainList(const Model::GetFirewallDomainListRequest& request) const;

        /**
         * <p>Retrieves the specified firewall domain list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallDomainList">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFirewallDomainListOutcomeCallable GetFirewallDomainListCallable(const Model::GetFirewallDomainListRequest& request) const;

        /**
         * <p>Retrieves the specified firewall domain list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallDomainList">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFirewallDomainListAsync(const Model::GetFirewallDomainListRequest& request, const GetFirewallDomainListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified firewall rule group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFirewallRuleGroupOutcome GetFirewallRuleGroup(const Model::GetFirewallRuleGroupRequest& request) const;

        /**
         * <p>Retrieves the specified firewall rule group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallRuleGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFirewallRuleGroupOutcomeCallable GetFirewallRuleGroupCallable(const Model::GetFirewallRuleGroupRequest& request) const;

        /**
         * <p>Retrieves the specified firewall rule group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallRuleGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFirewallRuleGroupAsync(const Model::GetFirewallRuleGroupRequest& request, const GetFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a firewall rule group association, which enables DNS filtering for
         * a VPC with one rule group. A VPC can have more than one firewall rule group
         * association, and a rule group can be associated with more than one
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallRuleGroupAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFirewallRuleGroupAssociationOutcome GetFirewallRuleGroupAssociation(const Model::GetFirewallRuleGroupAssociationRequest& request) const;

        /**
         * <p>Retrieves a firewall rule group association, which enables DNS filtering for
         * a VPC with one rule group. A VPC can have more than one firewall rule group
         * association, and a rule group can be associated with more than one
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallRuleGroupAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFirewallRuleGroupAssociationOutcomeCallable GetFirewallRuleGroupAssociationCallable(const Model::GetFirewallRuleGroupAssociationRequest& request) const;

        /**
         * <p>Retrieves a firewall rule group association, which enables DNS filtering for
         * a VPC with one rule group. A VPC can have more than one firewall rule group
         * association, and a rule group can be associated with more than one
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallRuleGroupAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFirewallRuleGroupAssociationAsync(const Model::GetFirewallRuleGroupAssociationRequest& request, const GetFirewallRuleGroupAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the AWS Identity and Access Management (AWS IAM) policy for sharing
         * the specified rule group. You can use the policy to share the rule group using
         * AWS Resource Access Manager (RAM). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallRuleGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFirewallRuleGroupPolicyOutcome GetFirewallRuleGroupPolicy(const Model::GetFirewallRuleGroupPolicyRequest& request) const;

        /**
         * <p>Returns the AWS Identity and Access Management (AWS IAM) policy for sharing
         * the specified rule group. You can use the policy to share the rule group using
         * AWS Resource Access Manager (RAM). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallRuleGroupPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFirewallRuleGroupPolicyOutcomeCallable GetFirewallRuleGroupPolicyCallable(const Model::GetFirewallRuleGroupPolicyRequest& request) const;

        /**
         * <p>Returns the AWS Identity and Access Management (AWS IAM) policy for sharing
         * the specified rule group. You can use the policy to share the rule group using
         * AWS Resource Access Manager (RAM). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallRuleGroupPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFirewallRuleGroupPolicyAsync(const Model::GetFirewallRuleGroupPolicyRequest& request, const GetFirewallRuleGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets DNSSEC validation information for a specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverDnssecConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverDnssecConfigOutcome GetResolverDnssecConfig(const Model::GetResolverDnssecConfigRequest& request) const;

        /**
         * <p>Gets DNSSEC validation information for a specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverDnssecConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverDnssecConfigOutcomeCallable GetResolverDnssecConfigCallable(const Model::GetResolverDnssecConfigRequest& request) const;

        /**
         * <p>Gets DNSSEC validation information for a specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverDnssecConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResolverDnssecConfigAsync(const Model::GetResolverDnssecConfigRequest& request, const GetResolverDnssecConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specified Resolver endpoint, such as whether it's an
         * inbound or an outbound Resolver endpoint, and the current status of the
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverEndpointOutcome GetResolverEndpoint(const Model::GetResolverEndpointRequest& request) const;

        /**
         * <p>Gets information about a specified Resolver endpoint, such as whether it's an
         * inbound or an outbound Resolver endpoint, and the current status of the
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverEndpointOutcomeCallable GetResolverEndpointCallable(const Model::GetResolverEndpointRequest& request) const;

        /**
         * <p>Gets information about a specified Resolver endpoint, such as whether it's an
         * inbound or an outbound Resolver endpoint, and the current status of the
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResolverEndpointAsync(const Model::GetResolverEndpointRequest& request, const GetResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specified Resolver query logging configuration, such
         * as the number of VPCs that the configuration is logging queries for and the
         * location that logs are sent to. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverQueryLogConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverQueryLogConfigOutcome GetResolverQueryLogConfig(const Model::GetResolverQueryLogConfigRequest& request) const;

        /**
         * <p>Gets information about a specified Resolver query logging configuration, such
         * as the number of VPCs that the configuration is logging queries for and the
         * location that logs are sent to. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverQueryLogConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverQueryLogConfigOutcomeCallable GetResolverQueryLogConfigCallable(const Model::GetResolverQueryLogConfigRequest& request) const;

        /**
         * <p>Gets information about a specified Resolver query logging configuration, such
         * as the number of VPCs that the configuration is logging queries for and the
         * location that logs are sent to. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverQueryLogConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResolverQueryLogConfigAsync(const Model::GetResolverQueryLogConfigRequest& request, const GetResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specified association between a Resolver query
         * logging configuration and an Amazon VPC. When you associate a VPC with a query
         * logging configuration, Resolver logs DNS queries that originate in that
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverQueryLogConfigAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverQueryLogConfigAssociationOutcome GetResolverQueryLogConfigAssociation(const Model::GetResolverQueryLogConfigAssociationRequest& request) const;

        /**
         * <p>Gets information about a specified association between a Resolver query
         * logging configuration and an Amazon VPC. When you associate a VPC with a query
         * logging configuration, Resolver logs DNS queries that originate in that
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverQueryLogConfigAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverQueryLogConfigAssociationOutcomeCallable GetResolverQueryLogConfigAssociationCallable(const Model::GetResolverQueryLogConfigAssociationRequest& request) const;

        /**
         * <p>Gets information about a specified association between a Resolver query
         * logging configuration and an Amazon VPC. When you associate a VPC with a query
         * logging configuration, Resolver logs DNS queries that originate in that
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverQueryLogConfigAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResolverQueryLogConfigAssociationAsync(const Model::GetResolverQueryLogConfigAssociationRequest& request, const GetResolverQueryLogConfigAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a query logging policy. A query logging policy
         * specifies the Resolver query logging operations and resources that you want to
         * allow another AWS account to be able to use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverQueryLogConfigPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverQueryLogConfigPolicyOutcome GetResolverQueryLogConfigPolicy(const Model::GetResolverQueryLogConfigPolicyRequest& request) const;

        /**
         * <p>Gets information about a query logging policy. A query logging policy
         * specifies the Resolver query logging operations and resources that you want to
         * allow another AWS account to be able to use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverQueryLogConfigPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverQueryLogConfigPolicyOutcomeCallable GetResolverQueryLogConfigPolicyCallable(const Model::GetResolverQueryLogConfigPolicyRequest& request) const;

        /**
         * <p>Gets information about a query logging policy. A query logging policy
         * specifies the Resolver query logging operations and resources that you want to
         * allow another AWS account to be able to use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverQueryLogConfigPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResolverQueryLogConfigPolicyAsync(const Model::GetResolverQueryLogConfigPolicyRequest& request, const GetResolverQueryLogConfigPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specified Resolver rule, such as the domain name
         * that the rule forwards DNS queries for and the ID of the outbound Resolver
         * endpoint that the rule is associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverRuleOutcome GetResolverRule(const Model::GetResolverRuleRequest& request) const;

        /**
         * <p>Gets information about a specified Resolver rule, such as the domain name
         * that the rule forwards DNS queries for and the ID of the outbound Resolver
         * endpoint that the rule is associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverRuleOutcomeCallable GetResolverRuleCallable(const Model::GetResolverRuleRequest& request) const;

        /**
         * <p>Gets information about a specified Resolver rule, such as the domain name
         * that the rule forwards DNS queries for and the ID of the outbound Resolver
         * endpoint that the rule is associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResolverRuleAsync(const Model::GetResolverRuleRequest& request, const GetResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an association between a specified Resolver rule and a
         * VPC. You associate a Resolver rule and a VPC using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_AssociateResolverRule.html">AssociateResolverRule</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRuleAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverRuleAssociationOutcome GetResolverRuleAssociation(const Model::GetResolverRuleAssociationRequest& request) const;

        /**
         * <p>Gets information about an association between a specified Resolver rule and a
         * VPC. You associate a Resolver rule and a VPC using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_AssociateResolverRule.html">AssociateResolverRule</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRuleAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverRuleAssociationOutcomeCallable GetResolverRuleAssociationCallable(const Model::GetResolverRuleAssociationRequest& request) const;

        /**
         * <p>Gets information about an association between a specified Resolver rule and a
         * VPC. You associate a Resolver rule and a VPC using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_AssociateResolverRule.html">AssociateResolverRule</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRuleAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResolverRuleAssociationAsync(const Model::GetResolverRuleAssociationRequest& request, const GetResolverRuleAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the Resolver rule policy for a specified rule. A
         * Resolver rule policy includes the rule that you want to share with another
         * account, the account that you want to share the rule with, and the Resolver
         * operations that you want to allow the account to use. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRulePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverRulePolicyOutcome GetResolverRulePolicy(const Model::GetResolverRulePolicyRequest& request) const;

        /**
         * <p>Gets information about the Resolver rule policy for a specified rule. A
         * Resolver rule policy includes the rule that you want to share with another
         * account, the account that you want to share the rule with, and the Resolver
         * operations that you want to allow the account to use. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRulePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverRulePolicyOutcomeCallable GetResolverRulePolicyCallable(const Model::GetResolverRulePolicyRequest& request) const;

        /**
         * <p>Gets information about the Resolver rule policy for a specified rule. A
         * Resolver rule policy includes the rule that you want to share with another
         * account, the account that you want to share the rule with, and the Resolver
         * operations that you want to allow the account to use. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRulePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResolverRulePolicyAsync(const Model::GetResolverRulePolicyRequest& request, const GetResolverRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports domain names from a file into a domain list, for use in a DNS
         * firewall rule group. </p> <p>Each domain specification in your domain list must
         * satisfy the following requirements: </p> <ul> <li> <p>It can optionally start
         * with <code>*</code> (asterisk).</p> </li> <li> <p>With the exception of the
         * optional starting asterisk, it must only contain the following characters:
         * <code>A-Z</code>, <code>a-z</code>, <code>0-9</code>, <code>-</code>
         * (hyphen).</p> </li> <li> <p>It must be from 1-255 characters in length. </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ImportFirewallDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportFirewallDomainsOutcome ImportFirewallDomains(const Model::ImportFirewallDomainsRequest& request) const;

        /**
         * <p>Imports domain names from a file into a domain list, for use in a DNS
         * firewall rule group. </p> <p>Each domain specification in your domain list must
         * satisfy the following requirements: </p> <ul> <li> <p>It can optionally start
         * with <code>*</code> (asterisk).</p> </li> <li> <p>With the exception of the
         * optional starting asterisk, it must only contain the following characters:
         * <code>A-Z</code>, <code>a-z</code>, <code>0-9</code>, <code>-</code>
         * (hyphen).</p> </li> <li> <p>It must be from 1-255 characters in length. </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ImportFirewallDomains">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportFirewallDomainsOutcomeCallable ImportFirewallDomainsCallable(const Model::ImportFirewallDomainsRequest& request) const;

        /**
         * <p>Imports domain names from a file into a domain list, for use in a DNS
         * firewall rule group. </p> <p>Each domain specification in your domain list must
         * satisfy the following requirements: </p> <ul> <li> <p>It can optionally start
         * with <code>*</code> (asterisk).</p> </li> <li> <p>With the exception of the
         * optional starting asterisk, it must only contain the following characters:
         * <code>A-Z</code>, <code>a-z</code>, <code>0-9</code>, <code>-</code>
         * (hyphen).</p> </li> <li> <p>It must be from 1-255 characters in length. </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ImportFirewallDomains">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportFirewallDomainsAsync(const Model::ImportFirewallDomainsRequest& request, const ImportFirewallDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the firewall configurations that you have defined. DNS Firewall
         * uses the configurations to manage firewall behavior for your VPCs. </p> <p>A
         * single call might return only a partial list of the configurations. For
         * information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFirewallConfigsOutcome ListFirewallConfigs(const Model::ListFirewallConfigsRequest& request) const;

        /**
         * <p>Retrieves the firewall configurations that you have defined. DNS Firewall
         * uses the configurations to manage firewall behavior for your VPCs. </p> <p>A
         * single call might return only a partial list of the configurations. For
         * information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallConfigs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFirewallConfigsOutcomeCallable ListFirewallConfigsCallable(const Model::ListFirewallConfigsRequest& request) const;

        /**
         * <p>Retrieves the firewall configurations that you have defined. DNS Firewall
         * uses the configurations to manage firewall behavior for your VPCs. </p> <p>A
         * single call might return only a partial list of the configurations. For
         * information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallConfigs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFirewallConfigsAsync(const Model::ListFirewallConfigsRequest& request, const ListFirewallConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the firewall domain lists that you have defined. For each firewall
         * domain list, you can retrieve the domains that are defined for a list by calling
         * <a>ListFirewallDomains</a>. </p> <p>A single call to this list operation might
         * return only a partial list of the domain lists. For information, see
         * <code>MaxResults</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallDomainLists">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFirewallDomainListsOutcome ListFirewallDomainLists(const Model::ListFirewallDomainListsRequest& request) const;

        /**
         * <p>Retrieves the firewall domain lists that you have defined. For each firewall
         * domain list, you can retrieve the domains that are defined for a list by calling
         * <a>ListFirewallDomains</a>. </p> <p>A single call to this list operation might
         * return only a partial list of the domain lists. For information, see
         * <code>MaxResults</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallDomainLists">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFirewallDomainListsOutcomeCallable ListFirewallDomainListsCallable(const Model::ListFirewallDomainListsRequest& request) const;

        /**
         * <p>Retrieves the firewall domain lists that you have defined. For each firewall
         * domain list, you can retrieve the domains that are defined for a list by calling
         * <a>ListFirewallDomains</a>. </p> <p>A single call to this list operation might
         * return only a partial list of the domain lists. For information, see
         * <code>MaxResults</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallDomainLists">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFirewallDomainListsAsync(const Model::ListFirewallDomainListsRequest& request, const ListFirewallDomainListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the domains that you have defined for the specified firewall domain
         * list. </p> <p>A single call might return only a partial list of the domains. For
         * information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFirewallDomainsOutcome ListFirewallDomains(const Model::ListFirewallDomainsRequest& request) const;

        /**
         * <p>Retrieves the domains that you have defined for the specified firewall domain
         * list. </p> <p>A single call might return only a partial list of the domains. For
         * information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallDomains">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFirewallDomainsOutcomeCallable ListFirewallDomainsCallable(const Model::ListFirewallDomainsRequest& request) const;

        /**
         * <p>Retrieves the domains that you have defined for the specified firewall domain
         * list. </p> <p>A single call might return only a partial list of the domains. For
         * information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallDomains">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFirewallDomainsAsync(const Model::ListFirewallDomainsRequest& request, const ListFirewallDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the firewall rule group associations that you have defined. Each
         * association enables DNS filtering for a VPC with one rule group. </p> <p>A
         * single call might return only a partial list of the associations. For
         * information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallRuleGroupAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFirewallRuleGroupAssociationsOutcome ListFirewallRuleGroupAssociations(const Model::ListFirewallRuleGroupAssociationsRequest& request) const;

        /**
         * <p>Retrieves the firewall rule group associations that you have defined. Each
         * association enables DNS filtering for a VPC with one rule group. </p> <p>A
         * single call might return only a partial list of the associations. For
         * information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallRuleGroupAssociations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFirewallRuleGroupAssociationsOutcomeCallable ListFirewallRuleGroupAssociationsCallable(const Model::ListFirewallRuleGroupAssociationsRequest& request) const;

        /**
         * <p>Retrieves the firewall rule group associations that you have defined. Each
         * association enables DNS filtering for a VPC with one rule group. </p> <p>A
         * single call might return only a partial list of the associations. For
         * information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallRuleGroupAssociations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFirewallRuleGroupAssociationsAsync(const Model::ListFirewallRuleGroupAssociationsRequest& request, const ListFirewallRuleGroupAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the minimal high-level information for the rule groups that you
         * have defined. </p> <p>A single call might return only a partial list of the rule
         * groups. For information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallRuleGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFirewallRuleGroupsOutcome ListFirewallRuleGroups(const Model::ListFirewallRuleGroupsRequest& request) const;

        /**
         * <p>Retrieves the minimal high-level information for the rule groups that you
         * have defined. </p> <p>A single call might return only a partial list of the rule
         * groups. For information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallRuleGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFirewallRuleGroupsOutcomeCallable ListFirewallRuleGroupsCallable(const Model::ListFirewallRuleGroupsRequest& request) const;

        /**
         * <p>Retrieves the minimal high-level information for the rule groups that you
         * have defined. </p> <p>A single call might return only a partial list of the rule
         * groups. For information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallRuleGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFirewallRuleGroupsAsync(const Model::ListFirewallRuleGroupsRequest& request, const ListFirewallRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the firewall rules that you have defined for the specified firewall
         * rule group. DNS Firewall uses the rules in a rule group to filter DNS network
         * traffic for a VPC. </p> <p>A single call might return only a partial list of the
         * rules. For information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFirewallRulesOutcome ListFirewallRules(const Model::ListFirewallRulesRequest& request) const;

        /**
         * <p>Retrieves the firewall rules that you have defined for the specified firewall
         * rule group. DNS Firewall uses the rules in a rule group to filter DNS network
         * traffic for a VPC. </p> <p>A single call might return only a partial list of the
         * rules. For information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFirewallRulesOutcomeCallable ListFirewallRulesCallable(const Model::ListFirewallRulesRequest& request) const;

        /**
         * <p>Retrieves the firewall rules that you have defined for the specified firewall
         * rule group. DNS Firewall uses the rules in a rule group to filter DNS network
         * traffic for a VPC. </p> <p>A single call might return only a partial list of the
         * rules. For information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFirewallRulesAsync(const Model::ListFirewallRulesRequest& request, const ListFirewallRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the configurations for DNSSEC validation that are associated with the
         * current AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverDnssecConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverDnssecConfigsOutcome ListResolverDnssecConfigs(const Model::ListResolverDnssecConfigsRequest& request) const;

        /**
         * <p>Lists the configurations for DNSSEC validation that are associated with the
         * current AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverDnssecConfigs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolverDnssecConfigsOutcomeCallable ListResolverDnssecConfigsCallable(const Model::ListResolverDnssecConfigsRequest& request) const;

        /**
         * <p>Lists the configurations for DNSSEC validation that are associated with the
         * current AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverDnssecConfigs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResolverDnssecConfigsAsync(const Model::ListResolverDnssecConfigsRequest& request, const ListResolverDnssecConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the IP addresses for a specified Resolver endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverEndpointIpAddresses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverEndpointIpAddressesOutcome ListResolverEndpointIpAddresses(const Model::ListResolverEndpointIpAddressesRequest& request) const;

        /**
         * <p>Gets the IP addresses for a specified Resolver endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverEndpointIpAddresses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolverEndpointIpAddressesOutcomeCallable ListResolverEndpointIpAddressesCallable(const Model::ListResolverEndpointIpAddressesRequest& request) const;

        /**
         * <p>Gets the IP addresses for a specified Resolver endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverEndpointIpAddresses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResolverEndpointIpAddressesAsync(const Model::ListResolverEndpointIpAddressesRequest& request, const ListResolverEndpointIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the Resolver endpoints that were created using the current AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverEndpointsOutcome ListResolverEndpoints(const Model::ListResolverEndpointsRequest& request) const;

        /**
         * <p>Lists all the Resolver endpoints that were created using the current AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolverEndpointsOutcomeCallable ListResolverEndpointsCallable(const Model::ListResolverEndpointsRequest& request) const;

        /**
         * <p>Lists all the Resolver endpoints that were created using the current AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResolverEndpointsAsync(const Model::ListResolverEndpointsRequest& request, const ListResolverEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about associations between Amazon VPCs and query logging
         * configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverQueryLogConfigAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverQueryLogConfigAssociationsOutcome ListResolverQueryLogConfigAssociations(const Model::ListResolverQueryLogConfigAssociationsRequest& request) const;

        /**
         * <p>Lists information about associations between Amazon VPCs and query logging
         * configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverQueryLogConfigAssociations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolverQueryLogConfigAssociationsOutcomeCallable ListResolverQueryLogConfigAssociationsCallable(const Model::ListResolverQueryLogConfigAssociationsRequest& request) const;

        /**
         * <p>Lists information about associations between Amazon VPCs and query logging
         * configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverQueryLogConfigAssociations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResolverQueryLogConfigAssociationsAsync(const Model::ListResolverQueryLogConfigAssociationsRequest& request, const ListResolverQueryLogConfigAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about the specified query logging configurations. Each
         * configuration defines where you want Resolver to save DNS query logs and
         * specifies the VPCs that you want to log queries for.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverQueryLogConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverQueryLogConfigsOutcome ListResolverQueryLogConfigs(const Model::ListResolverQueryLogConfigsRequest& request) const;

        /**
         * <p>Lists information about the specified query logging configurations. Each
         * configuration defines where you want Resolver to save DNS query logs and
         * specifies the VPCs that you want to log queries for.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverQueryLogConfigs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolverQueryLogConfigsOutcomeCallable ListResolverQueryLogConfigsCallable(const Model::ListResolverQueryLogConfigsRequest& request) const;

        /**
         * <p>Lists information about the specified query logging configurations. Each
         * configuration defines where you want Resolver to save DNS query logs and
         * specifies the VPCs that you want to log queries for.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverQueryLogConfigs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResolverQueryLogConfigsAsync(const Model::ListResolverQueryLogConfigsRequest& request, const ListResolverQueryLogConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the associations that were created between Resolver rules and VPCs
         * using the current AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverRuleAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverRuleAssociationsOutcome ListResolverRuleAssociations(const Model::ListResolverRuleAssociationsRequest& request) const;

        /**
         * <p>Lists the associations that were created between Resolver rules and VPCs
         * using the current AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverRuleAssociations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolverRuleAssociationsOutcomeCallable ListResolverRuleAssociationsCallable(const Model::ListResolverRuleAssociationsRequest& request) const;

        /**
         * <p>Lists the associations that were created between Resolver rules and VPCs
         * using the current AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverRuleAssociations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResolverRuleAssociationsAsync(const Model::ListResolverRuleAssociationsRequest& request, const ListResolverRuleAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Resolver rules that were created using the current AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverRulesOutcome ListResolverRules(const Model::ListResolverRulesRequest& request) const;

        /**
         * <p>Lists the Resolver rules that were created using the current AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolverRulesOutcomeCallable ListResolverRulesCallable(const Model::ListResolverRulesRequest& request) const;

        /**
         * <p>Lists the Resolver rules that were created using the current AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResolverRulesAsync(const Model::ListResolverRulesRequest& request, const ListResolverRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that you associated with the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags that you associated with the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags that you associated with the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches an AWS Identity and Access Management (AWS IAM) policy for sharing
         * the rule group. You can use the policy to share the rule group using AWS
         * Resource Access Manager (RAM). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutFirewallRuleGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFirewallRuleGroupPolicyOutcome PutFirewallRuleGroupPolicy(const Model::PutFirewallRuleGroupPolicyRequest& request) const;

        /**
         * <p>Attaches an AWS Identity and Access Management (AWS IAM) policy for sharing
         * the rule group. You can use the policy to share the rule group using AWS
         * Resource Access Manager (RAM). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutFirewallRuleGroupPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutFirewallRuleGroupPolicyOutcomeCallable PutFirewallRuleGroupPolicyCallable(const Model::PutFirewallRuleGroupPolicyRequest& request) const;

        /**
         * <p>Attaches an AWS Identity and Access Management (AWS IAM) policy for sharing
         * the rule group. You can use the policy to share the rule group using AWS
         * Resource Access Manager (RAM). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutFirewallRuleGroupPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutFirewallRuleGroupPolicyAsync(const Model::PutFirewallRuleGroupPolicyRequest& request, const PutFirewallRuleGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specifies an AWS account that you want to share a query logging configuration
         * with, the query logging configuration that you want to share, and the operations
         * that you want the account to be able to perform on the
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutResolverQueryLogConfigPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResolverQueryLogConfigPolicyOutcome PutResolverQueryLogConfigPolicy(const Model::PutResolverQueryLogConfigPolicyRequest& request) const;

        /**
         * <p>Specifies an AWS account that you want to share a query logging configuration
         * with, the query logging configuration that you want to share, and the operations
         * that you want the account to be able to perform on the
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutResolverQueryLogConfigPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResolverQueryLogConfigPolicyOutcomeCallable PutResolverQueryLogConfigPolicyCallable(const Model::PutResolverQueryLogConfigPolicyRequest& request) const;

        /**
         * <p>Specifies an AWS account that you want to share a query logging configuration
         * with, the query logging configuration that you want to share, and the operations
         * that you want the account to be able to perform on the
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutResolverQueryLogConfigPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResolverQueryLogConfigPolicyAsync(const Model::PutResolverQueryLogConfigPolicyRequest& request, const PutResolverQueryLogConfigPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specifies an AWS rule that you want to share with another account, the
         * account that you want to share the rule with, and the operations that you want
         * the account to be able to perform on the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutResolverRulePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResolverRulePolicyOutcome PutResolverRulePolicy(const Model::PutResolverRulePolicyRequest& request) const;

        /**
         * <p>Specifies an AWS rule that you want to share with another account, the
         * account that you want to share the rule with, and the operations that you want
         * the account to be able to perform on the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutResolverRulePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResolverRulePolicyOutcomeCallable PutResolverRulePolicyCallable(const Model::PutResolverRulePolicyRequest& request) const;

        /**
         * <p>Specifies an AWS rule that you want to share with another account, the
         * account that you want to share the rule with, and the operations that you want
         * the account to be able to perform on the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutResolverRulePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResolverRulePolicyAsync(const Model::PutResolverRulePolicyRequest& request, const PutResolverRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from a specified resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from a specified resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from a specified resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration of the firewall behavior provided by DNS Firewall
         * for a single Amazon virtual private cloud (VPC). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallConfigOutcome UpdateFirewallConfig(const Model::UpdateFirewallConfigRequest& request) const;

        /**
         * <p>Updates the configuration of the firewall behavior provided by DNS Firewall
         * for a single Amazon virtual private cloud (VPC). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFirewallConfigOutcomeCallable UpdateFirewallConfigCallable(const Model::UpdateFirewallConfigRequest& request) const;

        /**
         * <p>Updates the configuration of the firewall behavior provided by DNS Firewall
         * for a single Amazon virtual private cloud (VPC). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFirewallConfigAsync(const Model::UpdateFirewallConfigRequest& request, const UpdateFirewallConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the firewall domain list from an array of domain specifications.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallDomainsOutcome UpdateFirewallDomains(const Model::UpdateFirewallDomainsRequest& request) const;

        /**
         * <p>Updates the firewall domain list from an array of domain specifications.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallDomains">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFirewallDomainsOutcomeCallable UpdateFirewallDomainsCallable(const Model::UpdateFirewallDomainsRequest& request) const;

        /**
         * <p>Updates the firewall domain list from an array of domain specifications.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallDomains">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFirewallDomainsAsync(const Model::UpdateFirewallDomainsRequest& request, const UpdateFirewallDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified firewall rule. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallRuleOutcome UpdateFirewallRule(const Model::UpdateFirewallRuleRequest& request) const;

        /**
         * <p>Updates the specified firewall rule. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFirewallRuleOutcomeCallable UpdateFirewallRuleCallable(const Model::UpdateFirewallRuleRequest& request) const;

        /**
         * <p>Updates the specified firewall rule. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFirewallRuleAsync(const Model::UpdateFirewallRuleRequest& request, const UpdateFirewallRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the association of a <a>FirewallRuleGroup</a> with a VPC. The
         * association enables DNS filtering for the VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallRuleGroupAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallRuleGroupAssociationOutcome UpdateFirewallRuleGroupAssociation(const Model::UpdateFirewallRuleGroupAssociationRequest& request) const;

        /**
         * <p>Changes the association of a <a>FirewallRuleGroup</a> with a VPC. The
         * association enables DNS filtering for the VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallRuleGroupAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFirewallRuleGroupAssociationOutcomeCallable UpdateFirewallRuleGroupAssociationCallable(const Model::UpdateFirewallRuleGroupAssociationRequest& request) const;

        /**
         * <p>Changes the association of a <a>FirewallRuleGroup</a> with a VPC. The
         * association enables DNS filtering for the VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallRuleGroupAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFirewallRuleGroupAssociationAsync(const Model::UpdateFirewallRuleGroupAssociationRequest& request, const UpdateFirewallRuleGroupAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing DNSSEC validation configuration. If there is no existing
         * DNSSEC validation configuration, one is created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverDnssecConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverDnssecConfigOutcome UpdateResolverDnssecConfig(const Model::UpdateResolverDnssecConfigRequest& request) const;

        /**
         * <p>Updates an existing DNSSEC validation configuration. If there is no existing
         * DNSSEC validation configuration, one is created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverDnssecConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResolverDnssecConfigOutcomeCallable UpdateResolverDnssecConfigCallable(const Model::UpdateResolverDnssecConfigRequest& request) const;

        /**
         * <p>Updates an existing DNSSEC validation configuration. If there is no existing
         * DNSSEC validation configuration, one is created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverDnssecConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResolverDnssecConfigAsync(const Model::UpdateResolverDnssecConfigRequest& request, const UpdateResolverDnssecConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name of an inbound or an outbound Resolver endpoint.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverEndpointOutcome UpdateResolverEndpoint(const Model::UpdateResolverEndpointRequest& request) const;

        /**
         * <p>Updates the name of an inbound or an outbound Resolver endpoint.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResolverEndpointOutcomeCallable UpdateResolverEndpointCallable(const Model::UpdateResolverEndpointRequest& request) const;

        /**
         * <p>Updates the name of an inbound or an outbound Resolver endpoint.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResolverEndpointAsync(const Model::UpdateResolverEndpointRequest& request, const UpdateResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates settings for a specified Resolver rule. <code>ResolverRuleId</code>
         * is required, and all other parameters are optional. If you don't specify a
         * parameter, it retains its current value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverRuleOutcome UpdateResolverRule(const Model::UpdateResolverRuleRequest& request) const;

        /**
         * <p>Updates settings for a specified Resolver rule. <code>ResolverRuleId</code>
         * is required, and all other parameters are optional. If you don't specify a
         * parameter, it retains its current value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResolverRuleOutcomeCallable UpdateResolverRuleCallable(const Model::UpdateResolverRuleRequest& request) const;

        /**
         * <p>Updates settings for a specified Resolver rule. <code>ResolverRuleId</code>
         * is required, and all other parameters are optional. If you don't specify a
         * parameter, it retains its current value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResolverRuleAsync(const Model::UpdateResolverRuleRequest& request, const UpdateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateFirewallRuleGroupAsyncHelper(const Model::AssociateFirewallRuleGroupRequest& request, const AssociateFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateResolverEndpointIpAddressAsyncHelper(const Model::AssociateResolverEndpointIpAddressRequest& request, const AssociateResolverEndpointIpAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateResolverQueryLogConfigAsyncHelper(const Model::AssociateResolverQueryLogConfigRequest& request, const AssociateResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateResolverRuleAsyncHelper(const Model::AssociateResolverRuleRequest& request, const AssociateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFirewallDomainListAsyncHelper(const Model::CreateFirewallDomainListRequest& request, const CreateFirewallDomainListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFirewallRuleAsyncHelper(const Model::CreateFirewallRuleRequest& request, const CreateFirewallRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFirewallRuleGroupAsyncHelper(const Model::CreateFirewallRuleGroupRequest& request, const CreateFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResolverEndpointAsyncHelper(const Model::CreateResolverEndpointRequest& request, const CreateResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResolverQueryLogConfigAsyncHelper(const Model::CreateResolverQueryLogConfigRequest& request, const CreateResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResolverRuleAsyncHelper(const Model::CreateResolverRuleRequest& request, const CreateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFirewallDomainListAsyncHelper(const Model::DeleteFirewallDomainListRequest& request, const DeleteFirewallDomainListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFirewallRuleAsyncHelper(const Model::DeleteFirewallRuleRequest& request, const DeleteFirewallRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFirewallRuleGroupAsyncHelper(const Model::DeleteFirewallRuleGroupRequest& request, const DeleteFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResolverEndpointAsyncHelper(const Model::DeleteResolverEndpointRequest& request, const DeleteResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResolverQueryLogConfigAsyncHelper(const Model::DeleteResolverQueryLogConfigRequest& request, const DeleteResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResolverRuleAsyncHelper(const Model::DeleteResolverRuleRequest& request, const DeleteResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateFirewallRuleGroupAsyncHelper(const Model::DisassociateFirewallRuleGroupRequest& request, const DisassociateFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateResolverEndpointIpAddressAsyncHelper(const Model::DisassociateResolverEndpointIpAddressRequest& request, const DisassociateResolverEndpointIpAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateResolverQueryLogConfigAsyncHelper(const Model::DisassociateResolverQueryLogConfigRequest& request, const DisassociateResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateResolverRuleAsyncHelper(const Model::DisassociateResolverRuleRequest& request, const DisassociateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFirewallConfigAsyncHelper(const Model::GetFirewallConfigRequest& request, const GetFirewallConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFirewallDomainListAsyncHelper(const Model::GetFirewallDomainListRequest& request, const GetFirewallDomainListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFirewallRuleGroupAsyncHelper(const Model::GetFirewallRuleGroupRequest& request, const GetFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFirewallRuleGroupAssociationAsyncHelper(const Model::GetFirewallRuleGroupAssociationRequest& request, const GetFirewallRuleGroupAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFirewallRuleGroupPolicyAsyncHelper(const Model::GetFirewallRuleGroupPolicyRequest& request, const GetFirewallRuleGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverDnssecConfigAsyncHelper(const Model::GetResolverDnssecConfigRequest& request, const GetResolverDnssecConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverEndpointAsyncHelper(const Model::GetResolverEndpointRequest& request, const GetResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverQueryLogConfigAsyncHelper(const Model::GetResolverQueryLogConfigRequest& request, const GetResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverQueryLogConfigAssociationAsyncHelper(const Model::GetResolverQueryLogConfigAssociationRequest& request, const GetResolverQueryLogConfigAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverQueryLogConfigPolicyAsyncHelper(const Model::GetResolverQueryLogConfigPolicyRequest& request, const GetResolverQueryLogConfigPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverRuleAsyncHelper(const Model::GetResolverRuleRequest& request, const GetResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverRuleAssociationAsyncHelper(const Model::GetResolverRuleAssociationRequest& request, const GetResolverRuleAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverRulePolicyAsyncHelper(const Model::GetResolverRulePolicyRequest& request, const GetResolverRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportFirewallDomainsAsyncHelper(const Model::ImportFirewallDomainsRequest& request, const ImportFirewallDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFirewallConfigsAsyncHelper(const Model::ListFirewallConfigsRequest& request, const ListFirewallConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFirewallDomainListsAsyncHelper(const Model::ListFirewallDomainListsRequest& request, const ListFirewallDomainListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFirewallDomainsAsyncHelper(const Model::ListFirewallDomainsRequest& request, const ListFirewallDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFirewallRuleGroupAssociationsAsyncHelper(const Model::ListFirewallRuleGroupAssociationsRequest& request, const ListFirewallRuleGroupAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFirewallRuleGroupsAsyncHelper(const Model::ListFirewallRuleGroupsRequest& request, const ListFirewallRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFirewallRulesAsyncHelper(const Model::ListFirewallRulesRequest& request, const ListFirewallRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResolverDnssecConfigsAsyncHelper(const Model::ListResolverDnssecConfigsRequest& request, const ListResolverDnssecConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResolverEndpointIpAddressesAsyncHelper(const Model::ListResolverEndpointIpAddressesRequest& request, const ListResolverEndpointIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResolverEndpointsAsyncHelper(const Model::ListResolverEndpointsRequest& request, const ListResolverEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResolverQueryLogConfigAssociationsAsyncHelper(const Model::ListResolverQueryLogConfigAssociationsRequest& request, const ListResolverQueryLogConfigAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResolverQueryLogConfigsAsyncHelper(const Model::ListResolverQueryLogConfigsRequest& request, const ListResolverQueryLogConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResolverRuleAssociationsAsyncHelper(const Model::ListResolverRuleAssociationsRequest& request, const ListResolverRuleAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResolverRulesAsyncHelper(const Model::ListResolverRulesRequest& request, const ListResolverRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutFirewallRuleGroupPolicyAsyncHelper(const Model::PutFirewallRuleGroupPolicyRequest& request, const PutFirewallRuleGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutResolverQueryLogConfigPolicyAsyncHelper(const Model::PutResolverQueryLogConfigPolicyRequest& request, const PutResolverQueryLogConfigPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutResolverRulePolicyAsyncHelper(const Model::PutResolverRulePolicyRequest& request, const PutResolverRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFirewallConfigAsyncHelper(const Model::UpdateFirewallConfigRequest& request, const UpdateFirewallConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFirewallDomainsAsyncHelper(const Model::UpdateFirewallDomainsRequest& request, const UpdateFirewallDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFirewallRuleAsyncHelper(const Model::UpdateFirewallRuleRequest& request, const UpdateFirewallRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFirewallRuleGroupAssociationAsyncHelper(const Model::UpdateFirewallRuleGroupAssociationRequest& request, const UpdateFirewallRuleGroupAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResolverDnssecConfigAsyncHelper(const Model::UpdateResolverDnssecConfigRequest& request, const UpdateResolverDnssecConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResolverEndpointAsyncHelper(const Model::UpdateResolverEndpointRequest& request, const UpdateResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResolverRuleAsyncHelper(const Model::UpdateResolverRuleRequest& request, const UpdateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Route53Resolver
} // namespace Aws
