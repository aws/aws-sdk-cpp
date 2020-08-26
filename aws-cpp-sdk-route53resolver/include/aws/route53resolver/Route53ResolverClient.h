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
#include <aws/route53resolver/model/AssociateResolverEndpointIpAddressResult.h>
#include <aws/route53resolver/model/AssociateResolverQueryLogConfigResult.h>
#include <aws/route53resolver/model/AssociateResolverRuleResult.h>
#include <aws/route53resolver/model/CreateResolverEndpointResult.h>
#include <aws/route53resolver/model/CreateResolverQueryLogConfigResult.h>
#include <aws/route53resolver/model/CreateResolverRuleResult.h>
#include <aws/route53resolver/model/DeleteResolverEndpointResult.h>
#include <aws/route53resolver/model/DeleteResolverQueryLogConfigResult.h>
#include <aws/route53resolver/model/DeleteResolverRuleResult.h>
#include <aws/route53resolver/model/DisassociateResolverEndpointIpAddressResult.h>
#include <aws/route53resolver/model/DisassociateResolverQueryLogConfigResult.h>
#include <aws/route53resolver/model/DisassociateResolverRuleResult.h>
#include <aws/route53resolver/model/GetResolverEndpointResult.h>
#include <aws/route53resolver/model/GetResolverQueryLogConfigResult.h>
#include <aws/route53resolver/model/GetResolverQueryLogConfigAssociationResult.h>
#include <aws/route53resolver/model/GetResolverQueryLogConfigPolicyResult.h>
#include <aws/route53resolver/model/GetResolverRuleResult.h>
#include <aws/route53resolver/model/GetResolverRuleAssociationResult.h>
#include <aws/route53resolver/model/GetResolverRulePolicyResult.h>
#include <aws/route53resolver/model/ListResolverEndpointIpAddressesResult.h>
#include <aws/route53resolver/model/ListResolverEndpointsResult.h>
#include <aws/route53resolver/model/ListResolverQueryLogConfigAssociationsResult.h>
#include <aws/route53resolver/model/ListResolverQueryLogConfigsResult.h>
#include <aws/route53resolver/model/ListResolverRuleAssociationsResult.h>
#include <aws/route53resolver/model/ListResolverRulesResult.h>
#include <aws/route53resolver/model/ListTagsForResourceResult.h>
#include <aws/route53resolver/model/PutResolverQueryLogConfigPolicyResult.h>
#include <aws/route53resolver/model/PutResolverRulePolicyResult.h>
#include <aws/route53resolver/model/TagResourceResult.h>
#include <aws/route53resolver/model/UntagResourceResult.h>
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
        class AssociateResolverEndpointIpAddressRequest;
        class AssociateResolverQueryLogConfigRequest;
        class AssociateResolverRuleRequest;
        class CreateResolverEndpointRequest;
        class CreateResolverQueryLogConfigRequest;
        class CreateResolverRuleRequest;
        class DeleteResolverEndpointRequest;
        class DeleteResolverQueryLogConfigRequest;
        class DeleteResolverRuleRequest;
        class DisassociateResolverEndpointIpAddressRequest;
        class DisassociateResolverQueryLogConfigRequest;
        class DisassociateResolverRuleRequest;
        class GetResolverEndpointRequest;
        class GetResolverQueryLogConfigRequest;
        class GetResolverQueryLogConfigAssociationRequest;
        class GetResolverQueryLogConfigPolicyRequest;
        class GetResolverRuleRequest;
        class GetResolverRuleAssociationRequest;
        class GetResolverRulePolicyRequest;
        class ListResolverEndpointIpAddressesRequest;
        class ListResolverEndpointsRequest;
        class ListResolverQueryLogConfigAssociationsRequest;
        class ListResolverQueryLogConfigsRequest;
        class ListResolverRuleAssociationsRequest;
        class ListResolverRulesRequest;
        class ListTagsForResourceRequest;
        class PutResolverQueryLogConfigPolicyRequest;
        class PutResolverRulePolicyRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateResolverEndpointRequest;
        class UpdateResolverRuleRequest;

        typedef Aws::Utils::Outcome<AssociateResolverEndpointIpAddressResult, Route53ResolverError> AssociateResolverEndpointIpAddressOutcome;
        typedef Aws::Utils::Outcome<AssociateResolverQueryLogConfigResult, Route53ResolverError> AssociateResolverQueryLogConfigOutcome;
        typedef Aws::Utils::Outcome<AssociateResolverRuleResult, Route53ResolverError> AssociateResolverRuleOutcome;
        typedef Aws::Utils::Outcome<CreateResolverEndpointResult, Route53ResolverError> CreateResolverEndpointOutcome;
        typedef Aws::Utils::Outcome<CreateResolverQueryLogConfigResult, Route53ResolverError> CreateResolverQueryLogConfigOutcome;
        typedef Aws::Utils::Outcome<CreateResolverRuleResult, Route53ResolverError> CreateResolverRuleOutcome;
        typedef Aws::Utils::Outcome<DeleteResolverEndpointResult, Route53ResolverError> DeleteResolverEndpointOutcome;
        typedef Aws::Utils::Outcome<DeleteResolverQueryLogConfigResult, Route53ResolverError> DeleteResolverQueryLogConfigOutcome;
        typedef Aws::Utils::Outcome<DeleteResolverRuleResult, Route53ResolverError> DeleteResolverRuleOutcome;
        typedef Aws::Utils::Outcome<DisassociateResolverEndpointIpAddressResult, Route53ResolverError> DisassociateResolverEndpointIpAddressOutcome;
        typedef Aws::Utils::Outcome<DisassociateResolverQueryLogConfigResult, Route53ResolverError> DisassociateResolverQueryLogConfigOutcome;
        typedef Aws::Utils::Outcome<DisassociateResolverRuleResult, Route53ResolverError> DisassociateResolverRuleOutcome;
        typedef Aws::Utils::Outcome<GetResolverEndpointResult, Route53ResolverError> GetResolverEndpointOutcome;
        typedef Aws::Utils::Outcome<GetResolverQueryLogConfigResult, Route53ResolverError> GetResolverQueryLogConfigOutcome;
        typedef Aws::Utils::Outcome<GetResolverQueryLogConfigAssociationResult, Route53ResolverError> GetResolverQueryLogConfigAssociationOutcome;
        typedef Aws::Utils::Outcome<GetResolverQueryLogConfigPolicyResult, Route53ResolverError> GetResolverQueryLogConfigPolicyOutcome;
        typedef Aws::Utils::Outcome<GetResolverRuleResult, Route53ResolverError> GetResolverRuleOutcome;
        typedef Aws::Utils::Outcome<GetResolverRuleAssociationResult, Route53ResolverError> GetResolverRuleAssociationOutcome;
        typedef Aws::Utils::Outcome<GetResolverRulePolicyResult, Route53ResolverError> GetResolverRulePolicyOutcome;
        typedef Aws::Utils::Outcome<ListResolverEndpointIpAddressesResult, Route53ResolverError> ListResolverEndpointIpAddressesOutcome;
        typedef Aws::Utils::Outcome<ListResolverEndpointsResult, Route53ResolverError> ListResolverEndpointsOutcome;
        typedef Aws::Utils::Outcome<ListResolverQueryLogConfigAssociationsResult, Route53ResolverError> ListResolverQueryLogConfigAssociationsOutcome;
        typedef Aws::Utils::Outcome<ListResolverQueryLogConfigsResult, Route53ResolverError> ListResolverQueryLogConfigsOutcome;
        typedef Aws::Utils::Outcome<ListResolverRuleAssociationsResult, Route53ResolverError> ListResolverRuleAssociationsOutcome;
        typedef Aws::Utils::Outcome<ListResolverRulesResult, Route53ResolverError> ListResolverRulesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Route53ResolverError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutResolverQueryLogConfigPolicyResult, Route53ResolverError> PutResolverQueryLogConfigPolicyOutcome;
        typedef Aws::Utils::Outcome<PutResolverRulePolicyResult, Route53ResolverError> PutResolverRulePolicyOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Route53ResolverError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Route53ResolverError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateResolverEndpointResult, Route53ResolverError> UpdateResolverEndpointOutcome;
        typedef Aws::Utils::Outcome<UpdateResolverRuleResult, Route53ResolverError> UpdateResolverRuleOutcome;

        typedef std::future<AssociateResolverEndpointIpAddressOutcome> AssociateResolverEndpointIpAddressOutcomeCallable;
        typedef std::future<AssociateResolverQueryLogConfigOutcome> AssociateResolverQueryLogConfigOutcomeCallable;
        typedef std::future<AssociateResolverRuleOutcome> AssociateResolverRuleOutcomeCallable;
        typedef std::future<CreateResolverEndpointOutcome> CreateResolverEndpointOutcomeCallable;
        typedef std::future<CreateResolverQueryLogConfigOutcome> CreateResolverQueryLogConfigOutcomeCallable;
        typedef std::future<CreateResolverRuleOutcome> CreateResolverRuleOutcomeCallable;
        typedef std::future<DeleteResolverEndpointOutcome> DeleteResolverEndpointOutcomeCallable;
        typedef std::future<DeleteResolverQueryLogConfigOutcome> DeleteResolverQueryLogConfigOutcomeCallable;
        typedef std::future<DeleteResolverRuleOutcome> DeleteResolverRuleOutcomeCallable;
        typedef std::future<DisassociateResolverEndpointIpAddressOutcome> DisassociateResolverEndpointIpAddressOutcomeCallable;
        typedef std::future<DisassociateResolverQueryLogConfigOutcome> DisassociateResolverQueryLogConfigOutcomeCallable;
        typedef std::future<DisassociateResolverRuleOutcome> DisassociateResolverRuleOutcomeCallable;
        typedef std::future<GetResolverEndpointOutcome> GetResolverEndpointOutcomeCallable;
        typedef std::future<GetResolverQueryLogConfigOutcome> GetResolverQueryLogConfigOutcomeCallable;
        typedef std::future<GetResolverQueryLogConfigAssociationOutcome> GetResolverQueryLogConfigAssociationOutcomeCallable;
        typedef std::future<GetResolverQueryLogConfigPolicyOutcome> GetResolverQueryLogConfigPolicyOutcomeCallable;
        typedef std::future<GetResolverRuleOutcome> GetResolverRuleOutcomeCallable;
        typedef std::future<GetResolverRuleAssociationOutcome> GetResolverRuleAssociationOutcomeCallable;
        typedef std::future<GetResolverRulePolicyOutcome> GetResolverRulePolicyOutcomeCallable;
        typedef std::future<ListResolverEndpointIpAddressesOutcome> ListResolverEndpointIpAddressesOutcomeCallable;
        typedef std::future<ListResolverEndpointsOutcome> ListResolverEndpointsOutcomeCallable;
        typedef std::future<ListResolverQueryLogConfigAssociationsOutcome> ListResolverQueryLogConfigAssociationsOutcomeCallable;
        typedef std::future<ListResolverQueryLogConfigsOutcome> ListResolverQueryLogConfigsOutcomeCallable;
        typedef std::future<ListResolverRuleAssociationsOutcome> ListResolverRuleAssociationsOutcomeCallable;
        typedef std::future<ListResolverRulesOutcome> ListResolverRulesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutResolverQueryLogConfigPolicyOutcome> PutResolverQueryLogConfigPolicyOutcomeCallable;
        typedef std::future<PutResolverRulePolicyOutcome> PutResolverRulePolicyOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateResolverEndpointOutcome> UpdateResolverEndpointOutcomeCallable;
        typedef std::future<UpdateResolverRuleOutcome> UpdateResolverRuleOutcomeCallable;
} // namespace Model

  class Route53ResolverClient;

    typedef std::function<void(const Route53ResolverClient*, const Model::AssociateResolverEndpointIpAddressRequest&, const Model::AssociateResolverEndpointIpAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateResolverEndpointIpAddressResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::AssociateResolverQueryLogConfigRequest&, const Model::AssociateResolverQueryLogConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateResolverQueryLogConfigResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::AssociateResolverRuleRequest&, const Model::AssociateResolverRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateResolverRuleResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::CreateResolverEndpointRequest&, const Model::CreateResolverEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResolverEndpointResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::CreateResolverQueryLogConfigRequest&, const Model::CreateResolverQueryLogConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResolverQueryLogConfigResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::CreateResolverRuleRequest&, const Model::CreateResolverRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResolverRuleResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DeleteResolverEndpointRequest&, const Model::DeleteResolverEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResolverEndpointResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DeleteResolverQueryLogConfigRequest&, const Model::DeleteResolverQueryLogConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResolverQueryLogConfigResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DeleteResolverRuleRequest&, const Model::DeleteResolverRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResolverRuleResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DisassociateResolverEndpointIpAddressRequest&, const Model::DisassociateResolverEndpointIpAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateResolverEndpointIpAddressResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DisassociateResolverQueryLogConfigRequest&, const Model::DisassociateResolverQueryLogConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateResolverQueryLogConfigResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DisassociateResolverRuleRequest&, const Model::DisassociateResolverRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateResolverRuleResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverEndpointRequest&, const Model::GetResolverEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverEndpointResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverQueryLogConfigRequest&, const Model::GetResolverQueryLogConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverQueryLogConfigResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverQueryLogConfigAssociationRequest&, const Model::GetResolverQueryLogConfigAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverQueryLogConfigAssociationResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverQueryLogConfigPolicyRequest&, const Model::GetResolverQueryLogConfigPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverQueryLogConfigPolicyResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverRuleRequest&, const Model::GetResolverRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverRuleResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverRuleAssociationRequest&, const Model::GetResolverRuleAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverRuleAssociationResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverRulePolicyRequest&, const Model::GetResolverRulePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverRulePolicyResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListResolverEndpointIpAddressesRequest&, const Model::ListResolverEndpointIpAddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolverEndpointIpAddressesResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListResolverEndpointsRequest&, const Model::ListResolverEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolverEndpointsResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListResolverQueryLogConfigAssociationsRequest&, const Model::ListResolverQueryLogConfigAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolverQueryLogConfigAssociationsResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListResolverQueryLogConfigsRequest&, const Model::ListResolverQueryLogConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolverQueryLogConfigsResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListResolverRuleAssociationsRequest&, const Model::ListResolverRuleAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolverRuleAssociationsResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListResolverRulesRequest&, const Model::ListResolverRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolverRulesResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::PutResolverQueryLogConfigPolicyRequest&, const Model::PutResolverQueryLogConfigPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResolverQueryLogConfigPolicyResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::PutResolverRulePolicyRequest&, const Model::PutResolverRulePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResolverRulePolicyResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
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
         * <p>Gets information about a Resolver rule policy. A Resolver rule policy
         * specifies the Resolver operations and resources that you want to allow another
         * AWS account to be able to use. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRulePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverRulePolicyOutcome GetResolverRulePolicy(const Model::GetResolverRulePolicyRequest& request) const;

        /**
         * <p>Gets information about a Resolver rule policy. A Resolver rule policy
         * specifies the Resolver operations and resources that you want to allow another
         * AWS account to be able to use. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRulePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverRulePolicyOutcomeCallable GetResolverRulePolicyCallable(const Model::GetResolverRulePolicyRequest& request) const;

        /**
         * <p>Gets information about a Resolver rule policy. A Resolver rule policy
         * specifies the Resolver operations and resources that you want to allow another
         * AWS account to be able to use. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRulePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResolverRulePolicyAsync(const Model::GetResolverRulePolicyRequest& request, const GetResolverRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Specifies an AWS account that you want to share rules with, the Resolver
         * rules that you want to share, and the operations that you want the account to be
         * able to perform on those rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutResolverRulePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResolverRulePolicyOutcome PutResolverRulePolicy(const Model::PutResolverRulePolicyRequest& request) const;

        /**
         * <p>Specifies an AWS account that you want to share rules with, the Resolver
         * rules that you want to share, and the operations that you want the account to be
         * able to perform on those rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutResolverRulePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResolverRulePolicyOutcomeCallable PutResolverRulePolicyCallable(const Model::PutResolverRulePolicyRequest& request) const;

        /**
         * <p>Specifies an AWS account that you want to share rules with, the Resolver
         * rules that you want to share, and the operations that you want the account to be
         * able to perform on those rules.</p><p><h3>See Also:</h3>   <a
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
        void AssociateResolverEndpointIpAddressAsyncHelper(const Model::AssociateResolverEndpointIpAddressRequest& request, const AssociateResolverEndpointIpAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateResolverQueryLogConfigAsyncHelper(const Model::AssociateResolverQueryLogConfigRequest& request, const AssociateResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateResolverRuleAsyncHelper(const Model::AssociateResolverRuleRequest& request, const AssociateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResolverEndpointAsyncHelper(const Model::CreateResolverEndpointRequest& request, const CreateResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResolverQueryLogConfigAsyncHelper(const Model::CreateResolverQueryLogConfigRequest& request, const CreateResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResolverRuleAsyncHelper(const Model::CreateResolverRuleRequest& request, const CreateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResolverEndpointAsyncHelper(const Model::DeleteResolverEndpointRequest& request, const DeleteResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResolverQueryLogConfigAsyncHelper(const Model::DeleteResolverQueryLogConfigRequest& request, const DeleteResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResolverRuleAsyncHelper(const Model::DeleteResolverRuleRequest& request, const DeleteResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateResolverEndpointIpAddressAsyncHelper(const Model::DisassociateResolverEndpointIpAddressRequest& request, const DisassociateResolverEndpointIpAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateResolverQueryLogConfigAsyncHelper(const Model::DisassociateResolverQueryLogConfigRequest& request, const DisassociateResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateResolverRuleAsyncHelper(const Model::DisassociateResolverRuleRequest& request, const DisassociateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverEndpointAsyncHelper(const Model::GetResolverEndpointRequest& request, const GetResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverQueryLogConfigAsyncHelper(const Model::GetResolverQueryLogConfigRequest& request, const GetResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverQueryLogConfigAssociationAsyncHelper(const Model::GetResolverQueryLogConfigAssociationRequest& request, const GetResolverQueryLogConfigAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverQueryLogConfigPolicyAsyncHelper(const Model::GetResolverQueryLogConfigPolicyRequest& request, const GetResolverQueryLogConfigPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverRuleAsyncHelper(const Model::GetResolverRuleRequest& request, const GetResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverRuleAssociationAsyncHelper(const Model::GetResolverRuleAssociationRequest& request, const GetResolverRuleAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverRulePolicyAsyncHelper(const Model::GetResolverRulePolicyRequest& request, const GetResolverRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResolverEndpointIpAddressesAsyncHelper(const Model::ListResolverEndpointIpAddressesRequest& request, const ListResolverEndpointIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResolverEndpointsAsyncHelper(const Model::ListResolverEndpointsRequest& request, const ListResolverEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResolverQueryLogConfigAssociationsAsyncHelper(const Model::ListResolverQueryLogConfigAssociationsRequest& request, const ListResolverQueryLogConfigAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResolverQueryLogConfigsAsyncHelper(const Model::ListResolverQueryLogConfigsRequest& request, const ListResolverQueryLogConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResolverRuleAssociationsAsyncHelper(const Model::ListResolverRuleAssociationsRequest& request, const ListResolverRuleAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResolverRulesAsyncHelper(const Model::ListResolverRulesRequest& request, const ListResolverRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutResolverQueryLogConfigPolicyAsyncHelper(const Model::PutResolverQueryLogConfigPolicyRequest& request, const PutResolverQueryLogConfigPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutResolverRulePolicyAsyncHelper(const Model::PutResolverRulePolicyRequest& request, const PutResolverRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResolverEndpointAsyncHelper(const Model::UpdateResolverEndpointRequest& request, const UpdateResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResolverRuleAsyncHelper(const Model::UpdateResolverRuleRequest& request, const UpdateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Route53Resolver
} // namespace Aws
