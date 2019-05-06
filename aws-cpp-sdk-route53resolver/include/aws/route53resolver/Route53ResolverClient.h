/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/route53resolver/model/AssociateResolverRuleResult.h>
#include <aws/route53resolver/model/CreateResolverEndpointResult.h>
#include <aws/route53resolver/model/CreateResolverRuleResult.h>
#include <aws/route53resolver/model/DeleteResolverEndpointResult.h>
#include <aws/route53resolver/model/DeleteResolverRuleResult.h>
#include <aws/route53resolver/model/DisassociateResolverEndpointIpAddressResult.h>
#include <aws/route53resolver/model/DisassociateResolverRuleResult.h>
#include <aws/route53resolver/model/GetResolverEndpointResult.h>
#include <aws/route53resolver/model/GetResolverRuleResult.h>
#include <aws/route53resolver/model/GetResolverRuleAssociationResult.h>
#include <aws/route53resolver/model/GetResolverRulePolicyResult.h>
#include <aws/route53resolver/model/ListResolverEndpointIpAddressesResult.h>
#include <aws/route53resolver/model/ListResolverEndpointsResult.h>
#include <aws/route53resolver/model/ListResolverRuleAssociationsResult.h>
#include <aws/route53resolver/model/ListResolverRulesResult.h>
#include <aws/route53resolver/model/ListTagsForResourceResult.h>
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
        class AssociateResolverRuleRequest;
        class CreateResolverEndpointRequest;
        class CreateResolverRuleRequest;
        class DeleteResolverEndpointRequest;
        class DeleteResolverRuleRequest;
        class DisassociateResolverEndpointIpAddressRequest;
        class DisassociateResolverRuleRequest;
        class GetResolverEndpointRequest;
        class GetResolverRuleRequest;
        class GetResolverRuleAssociationRequest;
        class GetResolverRulePolicyRequest;
        class ListResolverEndpointIpAddressesRequest;
        class ListResolverEndpointsRequest;
        class ListResolverRuleAssociationsRequest;
        class ListResolverRulesRequest;
        class ListTagsForResourceRequest;
        class PutResolverRulePolicyRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateResolverEndpointRequest;
        class UpdateResolverRuleRequest;

        typedef Aws::Utils::Outcome<AssociateResolverEndpointIpAddressResult, Aws::Client::AWSError<Route53ResolverErrors>> AssociateResolverEndpointIpAddressOutcome;
        typedef Aws::Utils::Outcome<AssociateResolverRuleResult, Aws::Client::AWSError<Route53ResolverErrors>> AssociateResolverRuleOutcome;
        typedef Aws::Utils::Outcome<CreateResolverEndpointResult, Aws::Client::AWSError<Route53ResolverErrors>> CreateResolverEndpointOutcome;
        typedef Aws::Utils::Outcome<CreateResolverRuleResult, Aws::Client::AWSError<Route53ResolverErrors>> CreateResolverRuleOutcome;
        typedef Aws::Utils::Outcome<DeleteResolverEndpointResult, Aws::Client::AWSError<Route53ResolverErrors>> DeleteResolverEndpointOutcome;
        typedef Aws::Utils::Outcome<DeleteResolverRuleResult, Aws::Client::AWSError<Route53ResolverErrors>> DeleteResolverRuleOutcome;
        typedef Aws::Utils::Outcome<DisassociateResolverEndpointIpAddressResult, Aws::Client::AWSError<Route53ResolverErrors>> DisassociateResolverEndpointIpAddressOutcome;
        typedef Aws::Utils::Outcome<DisassociateResolverRuleResult, Aws::Client::AWSError<Route53ResolverErrors>> DisassociateResolverRuleOutcome;
        typedef Aws::Utils::Outcome<GetResolverEndpointResult, Aws::Client::AWSError<Route53ResolverErrors>> GetResolverEndpointOutcome;
        typedef Aws::Utils::Outcome<GetResolverRuleResult, Aws::Client::AWSError<Route53ResolverErrors>> GetResolverRuleOutcome;
        typedef Aws::Utils::Outcome<GetResolverRuleAssociationResult, Aws::Client::AWSError<Route53ResolverErrors>> GetResolverRuleAssociationOutcome;
        typedef Aws::Utils::Outcome<GetResolverRulePolicyResult, Aws::Client::AWSError<Route53ResolverErrors>> GetResolverRulePolicyOutcome;
        typedef Aws::Utils::Outcome<ListResolverEndpointIpAddressesResult, Aws::Client::AWSError<Route53ResolverErrors>> ListResolverEndpointIpAddressesOutcome;
        typedef Aws::Utils::Outcome<ListResolverEndpointsResult, Aws::Client::AWSError<Route53ResolverErrors>> ListResolverEndpointsOutcome;
        typedef Aws::Utils::Outcome<ListResolverRuleAssociationsResult, Aws::Client::AWSError<Route53ResolverErrors>> ListResolverRuleAssociationsOutcome;
        typedef Aws::Utils::Outcome<ListResolverRulesResult, Aws::Client::AWSError<Route53ResolverErrors>> ListResolverRulesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<Route53ResolverErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutResolverRulePolicyResult, Aws::Client::AWSError<Route53ResolverErrors>> PutResolverRulePolicyOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<Route53ResolverErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<Route53ResolverErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateResolverEndpointResult, Aws::Client::AWSError<Route53ResolverErrors>> UpdateResolverEndpointOutcome;
        typedef Aws::Utils::Outcome<UpdateResolverRuleResult, Aws::Client::AWSError<Route53ResolverErrors>> UpdateResolverRuleOutcome;

        typedef std::future<AssociateResolverEndpointIpAddressOutcome> AssociateResolverEndpointIpAddressOutcomeCallable;
        typedef std::future<AssociateResolverRuleOutcome> AssociateResolverRuleOutcomeCallable;
        typedef std::future<CreateResolverEndpointOutcome> CreateResolverEndpointOutcomeCallable;
        typedef std::future<CreateResolverRuleOutcome> CreateResolverRuleOutcomeCallable;
        typedef std::future<DeleteResolverEndpointOutcome> DeleteResolverEndpointOutcomeCallable;
        typedef std::future<DeleteResolverRuleOutcome> DeleteResolverRuleOutcomeCallable;
        typedef std::future<DisassociateResolverEndpointIpAddressOutcome> DisassociateResolverEndpointIpAddressOutcomeCallable;
        typedef std::future<DisassociateResolverRuleOutcome> DisassociateResolverRuleOutcomeCallable;
        typedef std::future<GetResolverEndpointOutcome> GetResolverEndpointOutcomeCallable;
        typedef std::future<GetResolverRuleOutcome> GetResolverRuleOutcomeCallable;
        typedef std::future<GetResolverRuleAssociationOutcome> GetResolverRuleAssociationOutcomeCallable;
        typedef std::future<GetResolverRulePolicyOutcome> GetResolverRulePolicyOutcomeCallable;
        typedef std::future<ListResolverEndpointIpAddressesOutcome> ListResolverEndpointIpAddressesOutcomeCallable;
        typedef std::future<ListResolverEndpointsOutcome> ListResolverEndpointsOutcomeCallable;
        typedef std::future<ListResolverRuleAssociationsOutcome> ListResolverRuleAssociationsOutcomeCallable;
        typedef std::future<ListResolverRulesOutcome> ListResolverRulesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutResolverRulePolicyOutcome> PutResolverRulePolicyOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateResolverEndpointOutcome> UpdateResolverEndpointOutcomeCallable;
        typedef std::future<UpdateResolverRuleOutcome> UpdateResolverRuleOutcomeCallable;
} // namespace Model

  class Route53ResolverClient;

    typedef std::function<void(const Route53ResolverClient*, const Model::AssociateResolverEndpointIpAddressRequest&, const Model::AssociateResolverEndpointIpAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateResolverEndpointIpAddressResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::AssociateResolverRuleRequest&, const Model::AssociateResolverRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateResolverRuleResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::CreateResolverEndpointRequest&, const Model::CreateResolverEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResolverEndpointResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::CreateResolverRuleRequest&, const Model::CreateResolverRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResolverRuleResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DeleteResolverEndpointRequest&, const Model::DeleteResolverEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResolverEndpointResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DeleteResolverRuleRequest&, const Model::DeleteResolverRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResolverRuleResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DisassociateResolverEndpointIpAddressRequest&, const Model::DisassociateResolverEndpointIpAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateResolverEndpointIpAddressResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::DisassociateResolverRuleRequest&, const Model::DisassociateResolverRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateResolverRuleResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverEndpointRequest&, const Model::GetResolverEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverEndpointResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverRuleRequest&, const Model::GetResolverRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverRuleResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverRuleAssociationRequest&, const Model::GetResolverRuleAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverRuleAssociationResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::GetResolverRulePolicyRequest&, const Model::GetResolverRulePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResolverRulePolicyResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListResolverEndpointIpAddressesRequest&, const Model::ListResolverEndpointIpAddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolverEndpointIpAddressesResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListResolverEndpointsRequest&, const Model::ListResolverEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolverEndpointsResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListResolverRuleAssociationsRequest&, const Model::ListResolverRuleAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolverRuleAssociationsResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListResolverRulesRequest&, const Model::ListResolverRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResolverRulesResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::PutResolverRulePolicyRequest&, const Model::PutResolverRulePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResolverRulePolicyResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::UpdateResolverEndpointRequest&, const Model::UpdateResolverEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResolverEndpointResponseReceivedHandler;
    typedef std::function<void(const Route53ResolverClient*, const Model::UpdateResolverRuleRequest&, const Model::UpdateResolverRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResolverRuleResponseReceivedHandler;

  /**
   * <p>Here's how you set up to query an Amazon Route 53 private hosted zone from
   * your network:</p> <ol> <li> <p>Connect your network to a VPC using AWS Direct
   * Connect or a VPN.</p> </li> <li> <p>Run the following AWS CLI command to create
   * a Resolver endpoint:</p> <p> <code>create-resolver-endpoint --name
   * [endpoint_name] --direction INBOUND --creator-request-id [unique_string]
   * --security-group-ids [security_group_with_inbound_rules] --ip-addresses
   * SubnetId=[subnet_id] SubnetId=[subnet_id_in_different_AZ]</code> </p> <p>Note
   * the resolver endpoint ID that appears in the response. You'll use it in step
   * 3.</p> </li> <li> <p>Get the IP addresses for the Resolver endpoints:</p> <p>
   * <code>get-resolver-endpoint --resolver-endpoint-id [resolver_endpoint_id]</code>
   * </p> </li> <li> <p>In your network configuration, define the IP addresses that
   * you got in step 3 as DNS servers.</p> <p>You can now query instance names in
   * your VPCs and the names of records in your private hosted zone.</p> </li> </ol>
   * <p>You can also perform the following operations using the AWS CLI:</p> <ul>
   * <li> <p> <code>list-resolver-endpoints</code>: List all endpoints. The syntax
   * includes options for pagination and filtering.</p> </li> <li> <p>
   * <code>update-resolver-endpoints</code>: Add IP addresses to an endpoint or
   * remove IP addresses from an endpoint. </p> </li> </ul> <p>To delete an endpoint,
   * use the following AWS CLI command:</p> <p> <code>delete-resolver-endpoint
   * --resolver-endpoint-id [resolver_endpoint_id]</code> </p>
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

        inline virtual const char* GetServiceClientName() const override { return "Route53Resolver"; }


        /**
         * <p>Adds IP addresses to an inbound or an outbound resolver endpoint. If you want
         * to adding more than one IP address, submit one
         * <code>AssociateResolverEndpointIpAddress</code> request for each IP address.</p>
         * <p>To remove an IP address from an endpoint, see
         * <a>DisassociateResolverEndpointIpAddress</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateResolverEndpointIpAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateResolverEndpointIpAddressOutcome AssociateResolverEndpointIpAddress(const Model::AssociateResolverEndpointIpAddressRequest& request) const;

        /**
         * <p>Adds IP addresses to an inbound or an outbound resolver endpoint. If you want
         * to adding more than one IP address, submit one
         * <code>AssociateResolverEndpointIpAddress</code> request for each IP address.</p>
         * <p>To remove an IP address from an endpoint, see
         * <a>DisassociateResolverEndpointIpAddress</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateResolverEndpointIpAddress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateResolverEndpointIpAddressOutcomeCallable AssociateResolverEndpointIpAddressCallable(const Model::AssociateResolverEndpointIpAddressRequest& request) const;

        /**
         * <p>Adds IP addresses to an inbound or an outbound resolver endpoint. If you want
         * to adding more than one IP address, submit one
         * <code>AssociateResolverEndpointIpAddress</code> request for each IP address.</p>
         * <p>To remove an IP address from an endpoint, see
         * <a>DisassociateResolverEndpointIpAddress</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateResolverEndpointIpAddress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateResolverEndpointIpAddressAsync(const Model::AssociateResolverEndpointIpAddressRequest& request, const AssociateResolverEndpointIpAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a resolver rule with a VPC. When you associate a rule with a VPC,
         * Resolver forwards all DNS queries for the domain name that is specified in the
         * rule and that originate in the VPC. The queries are forwarded to the IP
         * addresses for the DNS resolvers that are specified in the rule. For more
         * information about rules, see <a>CreateResolverRule</a>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateResolverRuleOutcome AssociateResolverRule(const Model::AssociateResolverRuleRequest& request) const;

        /**
         * <p>Associates a resolver rule with a VPC. When you associate a rule with a VPC,
         * Resolver forwards all DNS queries for the domain name that is specified in the
         * rule and that originate in the VPC. The queries are forwarded to the IP
         * addresses for the DNS resolvers that are specified in the rule. For more
         * information about rules, see <a>CreateResolverRule</a>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateResolverRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateResolverRuleOutcomeCallable AssociateResolverRuleCallable(const Model::AssociateResolverRuleRequest& request) const;

        /**
         * <p>Associates a resolver rule with a VPC. When you associate a rule with a VPC,
         * Resolver forwards all DNS queries for the domain name that is specified in the
         * rule and that originate in the VPC. The queries are forwarded to the IP
         * addresses for the DNS resolvers that are specified in the rule. For more
         * information about rules, see <a>CreateResolverRule</a>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateResolverRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateResolverRuleAsync(const Model::AssociateResolverRuleRequest& request, const AssociateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a resolver endpoint. There are two types of resolver endpoints,
         * inbound and outbound:</p> <ul> <li> <p>An <i>inbound resolver endpoint</i>
         * forwards DNS queries to the DNS service for a VPC from your network or another
         * VPC.</p> </li> <li> <p>An <i>outbound resolver endpoint</i> forwards DNS queries
         * from the DNS service for a VPC to your network or another VPC.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateResolverEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResolverEndpointOutcome CreateResolverEndpoint(const Model::CreateResolverEndpointRequest& request) const;

        /**
         * <p>Creates a resolver endpoint. There are two types of resolver endpoints,
         * inbound and outbound:</p> <ul> <li> <p>An <i>inbound resolver endpoint</i>
         * forwards DNS queries to the DNS service for a VPC from your network or another
         * VPC.</p> </li> <li> <p>An <i>outbound resolver endpoint</i> forwards DNS queries
         * from the DNS service for a VPC to your network or another VPC.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateResolverEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResolverEndpointOutcomeCallable CreateResolverEndpointCallable(const Model::CreateResolverEndpointRequest& request) const;

        /**
         * <p>Creates a resolver endpoint. There are two types of resolver endpoints,
         * inbound and outbound:</p> <ul> <li> <p>An <i>inbound resolver endpoint</i>
         * forwards DNS queries to the DNS service for a VPC from your network or another
         * VPC.</p> </li> <li> <p>An <i>outbound resolver endpoint</i> forwards DNS queries
         * from the DNS service for a VPC to your network or another VPC.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateResolverEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResolverEndpointAsync(const Model::CreateResolverEndpointRequest& request, const CreateResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For DNS queries that originate in your VPCs, specifies which resolver
         * endpoint the queries pass through, one domain name that you want to forward to
         * your network, and the IP addresses of the DNS resolvers in your
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResolverRuleOutcome CreateResolverRule(const Model::CreateResolverRuleRequest& request) const;

        /**
         * <p>For DNS queries that originate in your VPCs, specifies which resolver
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
         * <p>For DNS queries that originate in your VPCs, specifies which resolver
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
         * <p>Deletes a resolver endpoint. The effect of deleting a resolver endpoint
         * depends on whether it's an inbound or an outbound resolver endpoint:</p> <ul>
         * <li> <p> <b>Inbound</b>: DNS queries from your network or another VPC are no
         * longer routed to the DNS service for the specified VPC.</p> </li> <li> <p>
         * <b>Outbound</b>: DNS queries from a VPC are no longer routed to your network or
         * to another VPC.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteResolverEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResolverEndpointOutcome DeleteResolverEndpoint(const Model::DeleteResolverEndpointRequest& request) const;

        /**
         * <p>Deletes a resolver endpoint. The effect of deleting a resolver endpoint
         * depends on whether it's an inbound or an outbound resolver endpoint:</p> <ul>
         * <li> <p> <b>Inbound</b>: DNS queries from your network or another VPC are no
         * longer routed to the DNS service for the specified VPC.</p> </li> <li> <p>
         * <b>Outbound</b>: DNS queries from a VPC are no longer routed to your network or
         * to another VPC.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteResolverEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResolverEndpointOutcomeCallable DeleteResolverEndpointCallable(const Model::DeleteResolverEndpointRequest& request) const;

        /**
         * <p>Deletes a resolver endpoint. The effect of deleting a resolver endpoint
         * depends on whether it's an inbound or an outbound resolver endpoint:</p> <ul>
         * <li> <p> <b>Inbound</b>: DNS queries from your network or another VPC are no
         * longer routed to the DNS service for the specified VPC.</p> </li> <li> <p>
         * <b>Outbound</b>: DNS queries from a VPC are no longer routed to your network or
         * to another VPC.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteResolverEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResolverEndpointAsync(const Model::DeleteResolverEndpointRequest& request, const DeleteResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a resolver rule. Before you can delete a resolver rule, you must
         * disassociate it from all the VPCs that you associated the resolver rule with.
         * For more infomation, see <a>DisassociateResolverRule</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResolverRuleOutcome DeleteResolverRule(const Model::DeleteResolverRuleRequest& request) const;

        /**
         * <p>Deletes a resolver rule. Before you can delete a resolver rule, you must
         * disassociate it from all the VPCs that you associated the resolver rule with.
         * For more infomation, see <a>DisassociateResolverRule</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteResolverRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResolverRuleOutcomeCallable DeleteResolverRuleCallable(const Model::DeleteResolverRuleRequest& request) const;

        /**
         * <p>Deletes a resolver rule. Before you can delete a resolver rule, you must
         * disassociate it from all the VPCs that you associated the resolver rule with.
         * For more infomation, see <a>DisassociateResolverRule</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteResolverRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResolverRuleAsync(const Model::DeleteResolverRuleRequest& request, const DeleteResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes IP addresses from an inbound or an outbound resolver endpoint. If you
         * want to remove more than one IP address, submit one
         * <code>DisassociateResolverEndpointIpAddress</code> request for each IP
         * address.</p> <p>To add an IP address to an endpoint, see
         * <a>AssociateResolverEndpointIpAddress</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateResolverEndpointIpAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateResolverEndpointIpAddressOutcome DisassociateResolverEndpointIpAddress(const Model::DisassociateResolverEndpointIpAddressRequest& request) const;

        /**
         * <p>Removes IP addresses from an inbound or an outbound resolver endpoint. If you
         * want to remove more than one IP address, submit one
         * <code>DisassociateResolverEndpointIpAddress</code> request for each IP
         * address.</p> <p>To add an IP address to an endpoint, see
         * <a>AssociateResolverEndpointIpAddress</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateResolverEndpointIpAddress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateResolverEndpointIpAddressOutcomeCallable DisassociateResolverEndpointIpAddressCallable(const Model::DisassociateResolverEndpointIpAddressRequest& request) const;

        /**
         * <p>Removes IP addresses from an inbound or an outbound resolver endpoint. If you
         * want to remove more than one IP address, submit one
         * <code>DisassociateResolverEndpointIpAddress</code> request for each IP
         * address.</p> <p>To add an IP address to an endpoint, see
         * <a>AssociateResolverEndpointIpAddress</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateResolverEndpointIpAddress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateResolverEndpointIpAddressAsync(const Model::DisassociateResolverEndpointIpAddressRequest& request, const DisassociateResolverEndpointIpAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the association between a specified resolver rule and a specified
         * VPC.</p> <important> <p>If you disassociate a resolver rule from a VPC, Resolver
         * stops forwarding DNS queries for the domain name that you specified in the
         * resolver rule. </p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateResolverRuleOutcome DisassociateResolverRule(const Model::DisassociateResolverRuleRequest& request) const;

        /**
         * <p>Removes the association between a specified resolver rule and a specified
         * VPC.</p> <important> <p>If you disassociate a resolver rule from a VPC, Resolver
         * stops forwarding DNS queries for the domain name that you specified in the
         * resolver rule. </p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateResolverRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateResolverRuleOutcomeCallable DisassociateResolverRuleCallable(const Model::DisassociateResolverRuleRequest& request) const;

        /**
         * <p>Removes the association between a specified resolver rule and a specified
         * VPC.</p> <important> <p>If you disassociate a resolver rule from a VPC, Resolver
         * stops forwarding DNS queries for the domain name that you specified in the
         * resolver rule. </p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateResolverRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateResolverRuleAsync(const Model::DisassociateResolverRuleRequest& request, const DisassociateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specified resolver endpoint, such as whether it's an
         * inbound or an outbound resolver endpoint, and the current status of the
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverEndpointOutcome GetResolverEndpoint(const Model::GetResolverEndpointRequest& request) const;

        /**
         * <p>Gets information about a specified resolver endpoint, such as whether it's an
         * inbound or an outbound resolver endpoint, and the current status of the
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverEndpointOutcomeCallable GetResolverEndpointCallable(const Model::GetResolverEndpointRequest& request) const;

        /**
         * <p>Gets information about a specified resolver endpoint, such as whether it's an
         * inbound or an outbound resolver endpoint, and the current status of the
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResolverEndpointAsync(const Model::GetResolverEndpointRequest& request, const GetResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specified resolver rule, such as the domain name
         * that the rule forwards DNS queries for and the ID of the outbound resolver
         * endpoint that the rule is associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverRuleOutcome GetResolverRule(const Model::GetResolverRuleRequest& request) const;

        /**
         * <p>Gets information about a specified resolver rule, such as the domain name
         * that the rule forwards DNS queries for and the ID of the outbound resolver
         * endpoint that the rule is associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverRuleOutcomeCallable GetResolverRuleCallable(const Model::GetResolverRuleRequest& request) const;

        /**
         * <p>Gets information about a specified resolver rule, such as the domain name
         * that the rule forwards DNS queries for and the ID of the outbound resolver
         * endpoint that the rule is associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResolverRuleAsync(const Model::GetResolverRuleRequest& request, const GetResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an association between a specified resolver rule and a
         * VPC. You associate a resolver rule and a VPC using <a>AssociateResolverRule</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRuleAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverRuleAssociationOutcome GetResolverRuleAssociation(const Model::GetResolverRuleAssociationRequest& request) const;

        /**
         * <p>Gets information about an association between a specified resolver rule and a
         * VPC. You associate a resolver rule and a VPC using <a>AssociateResolverRule</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRuleAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverRuleAssociationOutcomeCallable GetResolverRuleAssociationCallable(const Model::GetResolverRuleAssociationRequest& request) const;

        /**
         * <p>Gets information about an association between a specified resolver rule and a
         * VPC. You associate a resolver rule and a VPC using <a>AssociateResolverRule</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRuleAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResolverRuleAssociationAsync(const Model::GetResolverRuleAssociationRequest& request, const GetResolverRuleAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a resolver rule policy. A resolver rule policy
         * specifies the Resolver operations and resources that you want to allow another
         * AWS account to be able to use. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRulePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverRulePolicyOutcome GetResolverRulePolicy(const Model::GetResolverRulePolicyRequest& request) const;

        /**
         * <p>Gets information about a resolver rule policy. A resolver rule policy
         * specifies the Resolver operations and resources that you want to allow another
         * AWS account to be able to use. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRulePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverRulePolicyOutcomeCallable GetResolverRulePolicyCallable(const Model::GetResolverRulePolicyRequest& request) const;

        /**
         * <p>Gets information about a resolver rule policy. A resolver rule policy
         * specifies the Resolver operations and resources that you want to allow another
         * AWS account to be able to use. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRulePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResolverRulePolicyAsync(const Model::GetResolverRulePolicyRequest& request, const GetResolverRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the IP addresses for a specified resolver endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverEndpointIpAddresses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverEndpointIpAddressesOutcome ListResolverEndpointIpAddresses(const Model::ListResolverEndpointIpAddressesRequest& request) const;

        /**
         * <p>Gets the IP addresses for a specified resolver endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverEndpointIpAddresses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolverEndpointIpAddressesOutcomeCallable ListResolverEndpointIpAddressesCallable(const Model::ListResolverEndpointIpAddressesRequest& request) const;

        /**
         * <p>Gets the IP addresses for a specified resolver endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverEndpointIpAddresses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResolverEndpointIpAddressesAsync(const Model::ListResolverEndpointIpAddressesRequest& request, const ListResolverEndpointIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the resolver endpoints that were created using the current AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverEndpointsOutcome ListResolverEndpoints(const Model::ListResolverEndpointsRequest& request) const;

        /**
         * <p>Lists all the resolver endpoints that were created using the current AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolverEndpointsOutcomeCallable ListResolverEndpointsCallable(const Model::ListResolverEndpointsRequest& request) const;

        /**
         * <p>Lists all the resolver endpoints that were created using the current AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResolverEndpointsAsync(const Model::ListResolverEndpointsRequest& request, const ListResolverEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the associations that were created between resolver rules and VPCs
         * using the current AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverRuleAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverRuleAssociationsOutcome ListResolverRuleAssociations(const Model::ListResolverRuleAssociationsRequest& request) const;

        /**
         * <p>Lists the associations that were created between resolver rules and VPCs
         * using the current AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverRuleAssociations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolverRuleAssociationsOutcomeCallable ListResolverRuleAssociationsCallable(const Model::ListResolverRuleAssociationsRequest& request) const;

        /**
         * <p>Lists the associations that were created between resolver rules and VPCs
         * using the current AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverRuleAssociations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResolverRuleAssociationsAsync(const Model::ListResolverRuleAssociationsRequest& request, const ListResolverRuleAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the resolver rules that were created using the current AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverRulesOutcome ListResolverRules(const Model::ListResolverRulesRequest& request) const;

        /**
         * <p>Lists the resolver rules that were created using the current AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolverRulesOutcomeCallable ListResolverRulesCallable(const Model::ListResolverRulesRequest& request) const;

        /**
         * <p>Lists the resolver rules that were created using the current AWS
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
         * <p>Specifies the Resolver operations and resources that you want to allow
         * another AWS account to be able to use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutResolverRulePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResolverRulePolicyOutcome PutResolverRulePolicy(const Model::PutResolverRulePolicyRequest& request) const;

        /**
         * <p>Specifies the Resolver operations and resources that you want to allow
         * another AWS account to be able to use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutResolverRulePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResolverRulePolicyOutcomeCallable PutResolverRulePolicyCallable(const Model::PutResolverRulePolicyRequest& request) const;

        /**
         * <p>Specifies the Resolver operations and resources that you want to allow
         * another AWS account to be able to use.</p><p><h3>See Also:</h3>   <a
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
         * <p>Updates the name of an inbound or an outbound resolver endpoint.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverEndpointOutcome UpdateResolverEndpoint(const Model::UpdateResolverEndpointRequest& request) const;

        /**
         * <p>Updates the name of an inbound or an outbound resolver endpoint.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResolverEndpointOutcomeCallable UpdateResolverEndpointCallable(const Model::UpdateResolverEndpointRequest& request) const;

        /**
         * <p>Updates the name of an inbound or an outbound resolver endpoint.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResolverEndpointAsync(const Model::UpdateResolverEndpointRequest& request, const UpdateResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates settings for a specified resolver rule. <code>ResolverRuleId</code>
         * is required, and all other parameters are optional. If you don't specify a
         * parameter, it retains its current value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverRuleOutcome UpdateResolverRule(const Model::UpdateResolverRuleRequest& request) const;

        /**
         * <p>Updates settings for a specified resolver rule. <code>ResolverRuleId</code>
         * is required, and all other parameters are optional. If you don't specify a
         * parameter, it retains its current value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResolverRuleOutcomeCallable UpdateResolverRuleCallable(const Model::UpdateResolverRuleRequest& request) const;

        /**
         * <p>Updates settings for a specified resolver rule. <code>ResolverRuleId</code>
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
        void AssociateResolverRuleAsyncHelper(const Model::AssociateResolverRuleRequest& request, const AssociateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResolverEndpointAsyncHelper(const Model::CreateResolverEndpointRequest& request, const CreateResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResolverRuleAsyncHelper(const Model::CreateResolverRuleRequest& request, const CreateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResolverEndpointAsyncHelper(const Model::DeleteResolverEndpointRequest& request, const DeleteResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResolverRuleAsyncHelper(const Model::DeleteResolverRuleRequest& request, const DeleteResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateResolverEndpointIpAddressAsyncHelper(const Model::DisassociateResolverEndpointIpAddressRequest& request, const DisassociateResolverEndpointIpAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateResolverRuleAsyncHelper(const Model::DisassociateResolverRuleRequest& request, const DisassociateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverEndpointAsyncHelper(const Model::GetResolverEndpointRequest& request, const GetResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverRuleAsyncHelper(const Model::GetResolverRuleRequest& request, const GetResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverRuleAssociationAsyncHelper(const Model::GetResolverRuleAssociationRequest& request, const GetResolverRuleAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResolverRulePolicyAsyncHelper(const Model::GetResolverRulePolicyRequest& request, const GetResolverRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResolverEndpointIpAddressesAsyncHelper(const Model::ListResolverEndpointIpAddressesRequest& request, const ListResolverEndpointIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResolverEndpointsAsyncHelper(const Model::ListResolverEndpointsRequest& request, const ListResolverEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResolverRuleAssociationsAsyncHelper(const Model::ListResolverRuleAssociationsRequest& request, const ListResolverRuleAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResolverRulesAsyncHelper(const Model::ListResolverRulesRequest& request, const ListResolverRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
