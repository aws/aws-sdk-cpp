/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53resolver/Route53ResolverServiceClientModel.h>

namespace Aws
{
namespace Route53Resolver
{
  /**
   * <p>When you create a VPC using Amazon VPC, you automatically get DNS resolution
   * within the VPC from Route 53 Resolver. By default, Resolver answers DNS queries
   * for VPC domain names such as domain names for EC2 instances or Elastic Load
   * Balancing load balancers. Resolver performs recursive lookups against public
   * name servers for all other domain names.</p> <p>You can also configure DNS
   * resolution between your VPC and your network over a Direct Connect or VPN
   * connection:</p> <p> <b>Forward DNS queries from resolvers on your network to
   * Route 53 Resolver</b> </p> <p>DNS resolvers on your network can forward DNS
   * queries to Resolver in a specified VPC. This allows your DNS resolvers to easily
   * resolve domain names for Amazon Web Services resources such as EC2 instances or
   * records in a Route 53 private hosted zone. For more information, see <a
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
   * Regional. In each Region where you have VPCs, you can choose whether to forward
   * queries from your VPCs to your network (outbound queries), from your network to
   * your VPCs (inbound queries), or both.</p>
   */
  class AWS_ROUTE53RESOLVER_API Route53ResolverClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<Route53ResolverClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53ResolverClient(const Aws::Route53Resolver::Route53ResolverClientConfiguration& clientConfiguration = Aws::Route53Resolver::Route53ResolverClientConfiguration(),
                              std::shared_ptr<Route53ResolverEndpointProviderBase> endpointProvider = Aws::MakeShared<Route53ResolverEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53ResolverClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<Route53ResolverEndpointProviderBase> endpointProvider = Aws::MakeShared<Route53ResolverEndpointProvider>(ALLOCATION_TAG),
                              const Aws::Route53Resolver::Route53ResolverClientConfiguration& clientConfiguration = Aws::Route53Resolver::Route53ResolverClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53ResolverClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<Route53ResolverEndpointProviderBase> endpointProvider = Aws::MakeShared<Route53ResolverEndpointProvider>(ALLOCATION_TAG),
                              const Aws::Route53Resolver::Route53ResolverClientConfiguration& clientConfiguration = Aws::Route53Resolver::Route53ResolverClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53ResolverClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53ResolverClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53ResolverClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~Route53ResolverClient();

        /**
         * <p>Associates a <a>FirewallRuleGroup</a> with a VPC, to provide DNS filtering
         * for the VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateFirewallRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateFirewallRuleGroupOutcome AssociateFirewallRuleGroup(const Model::AssociateFirewallRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for AssociateFirewallRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateFirewallRuleGroupOutcomeCallable AssociateFirewallRuleGroupCallable(const Model::AssociateFirewallRuleGroupRequest& request) const;

        /**
         * An Async wrapper for AssociateFirewallRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for AssociateResolverEndpointIpAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateResolverEndpointIpAddressOutcomeCallable AssociateResolverEndpointIpAddressCallable(const Model::AssociateResolverEndpointIpAddressRequest& request) const;

        /**
         * An Async wrapper for AssociateResolverEndpointIpAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for AssociateResolverQueryLogConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateResolverQueryLogConfigOutcomeCallable AssociateResolverQueryLogConfigCallable(const Model::AssociateResolverQueryLogConfigRequest& request) const;

        /**
         * An Async wrapper for AssociateResolverQueryLogConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for AssociateResolverRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateResolverRuleOutcomeCallable AssociateResolverRuleCallable(const Model::AssociateResolverRuleRequest& request) const;

        /**
         * An Async wrapper for AssociateResolverRule that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateFirewallDomainList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFirewallDomainListOutcomeCallable CreateFirewallDomainListCallable(const Model::CreateFirewallDomainListRequest& request) const;

        /**
         * An Async wrapper for CreateFirewallDomainList that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateFirewallRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFirewallRuleOutcomeCallable CreateFirewallRuleCallable(const Model::CreateFirewallRuleRequest& request) const;

        /**
         * An Async wrapper for CreateFirewallRule that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateFirewallRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFirewallRuleGroupOutcomeCallable CreateFirewallRuleGroupCallable(const Model::CreateFirewallRuleGroupRequest& request) const;

        /**
         * An Async wrapper for CreateFirewallRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateResolverEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResolverEndpointOutcomeCallable CreateResolverEndpointCallable(const Model::CreateResolverEndpointRequest& request) const;

        /**
         * An Async wrapper for CreateResolverEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResolverEndpointAsync(const Model::CreateResolverEndpointRequest& request, const CreateResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Resolver query logging configuration, which defines where you want
         * Resolver to save DNS query logs that originate in your VPCs. Resolver can log
         * queries only for VPCs that are in the same Region as the query logging
         * configuration.</p> <p>To specify which VPCs you want to log queries for, you use
         * <code>AssociateResolverQueryLogConfig</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_AssociateResolverQueryLogConfig.html">AssociateResolverQueryLogConfig</a>.
         * </p> <p>You can optionally use Resource Access Manager (RAM) to share a query
         * logging configuration with other Amazon Web Services accounts. The other
         * accounts can then associate VPCs with the configuration. The query logs that
         * Resolver creates for a configuration include all DNS queries that originate in
         * all VPCs that are associated with the configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateResolverQueryLogConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResolverQueryLogConfigOutcome CreateResolverQueryLogConfig(const Model::CreateResolverQueryLogConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateResolverQueryLogConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResolverQueryLogConfigOutcomeCallable CreateResolverQueryLogConfigCallable(const Model::CreateResolverQueryLogConfigRequest& request) const;

        /**
         * An Async wrapper for CreateResolverQueryLogConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateResolverRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResolverRuleOutcomeCallable CreateResolverRuleCallable(const Model::CreateResolverRuleRequest& request) const;

        /**
         * An Async wrapper for CreateResolverRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResolverRuleAsync(const Model::CreateResolverRuleRequest& request, const CreateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified domain list. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteFirewallDomainList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFirewallDomainListOutcome DeleteFirewallDomainList(const Model::DeleteFirewallDomainListRequest& request) const;

        /**
         * A Callable wrapper for DeleteFirewallDomainList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFirewallDomainListOutcomeCallable DeleteFirewallDomainListCallable(const Model::DeleteFirewallDomainListRequest& request) const;

        /**
         * An Async wrapper for DeleteFirewallDomainList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFirewallDomainListAsync(const Model::DeleteFirewallDomainListRequest& request, const DeleteFirewallDomainListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified firewall rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteFirewallRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFirewallRuleOutcome DeleteFirewallRule(const Model::DeleteFirewallRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteFirewallRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFirewallRuleOutcomeCallable DeleteFirewallRuleCallable(const Model::DeleteFirewallRuleRequest& request) const;

        /**
         * An Async wrapper for DeleteFirewallRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFirewallRuleAsync(const Model::DeleteFirewallRuleRequest& request, const DeleteFirewallRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified firewall rule group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteFirewallRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFirewallRuleGroupOutcome DeleteFirewallRuleGroup(const Model::DeleteFirewallRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteFirewallRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFirewallRuleGroupOutcomeCallable DeleteFirewallRuleGroupCallable(const Model::DeleteFirewallRuleGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteFirewallRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteResolverEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResolverEndpointOutcomeCallable DeleteResolverEndpointCallable(const Model::DeleteResolverEndpointRequest& request) const;

        /**
         * An Async wrapper for DeleteResolverEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResolverEndpointAsync(const Model::DeleteResolverEndpointRequest& request, const DeleteResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a query logging configuration. When you delete a configuration,
         * Resolver stops logging DNS queries for all of the Amazon VPCs that are
         * associated with the configuration. This also applies if the query logging
         * configuration is shared with other Amazon Web Services accounts, and the other
         * accounts have associated VPCs with the shared configuration.</p> <p>Before you
         * can delete a query logging configuration, you must first disassociate all VPCs
         * from the configuration. See <a
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
         * A Callable wrapper for DeleteResolverQueryLogConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResolverQueryLogConfigOutcomeCallable DeleteResolverQueryLogConfigCallable(const Model::DeleteResolverQueryLogConfigRequest& request) const;

        /**
         * An Async wrapper for DeleteResolverQueryLogConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteResolverRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResolverRuleOutcomeCallable DeleteResolverRuleCallable(const Model::DeleteResolverRuleRequest& request) const;

        /**
         * An Async wrapper for DeleteResolverRule that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DisassociateFirewallRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateFirewallRuleGroupOutcomeCallable DisassociateFirewallRuleGroupCallable(const Model::DisassociateFirewallRuleGroupRequest& request) const;

        /**
         * An Async wrapper for DisassociateFirewallRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DisassociateResolverEndpointIpAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateResolverEndpointIpAddressOutcomeCallable DisassociateResolverEndpointIpAddressCallable(const Model::DisassociateResolverEndpointIpAddressRequest& request) const;

        /**
         * An Async wrapper for DisassociateResolverEndpointIpAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DisassociateResolverQueryLogConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateResolverQueryLogConfigOutcomeCallable DisassociateResolverQueryLogConfigCallable(const Model::DisassociateResolverQueryLogConfigRequest& request) const;

        /**
         * An Async wrapper for DisassociateResolverQueryLogConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DisassociateResolverRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateResolverRuleOutcomeCallable DisassociateResolverRuleCallable(const Model::DisassociateResolverRuleRequest& request) const;

        /**
         * An Async wrapper for DisassociateResolverRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateResolverRuleAsync(const Model::DisassociateResolverRuleRequest& request, const DisassociateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the configuration of the firewall behavior provided by DNS Firewall
         * for a single VPC from Amazon Virtual Private Cloud (Amazon VPC). </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFirewallConfigOutcome GetFirewallConfig(const Model::GetFirewallConfigRequest& request) const;

        /**
         * A Callable wrapper for GetFirewallConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFirewallConfigOutcomeCallable GetFirewallConfigCallable(const Model::GetFirewallConfigRequest& request) const;

        /**
         * An Async wrapper for GetFirewallConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFirewallConfigAsync(const Model::GetFirewallConfigRequest& request, const GetFirewallConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified firewall domain list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallDomainList">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFirewallDomainListOutcome GetFirewallDomainList(const Model::GetFirewallDomainListRequest& request) const;

        /**
         * A Callable wrapper for GetFirewallDomainList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFirewallDomainListOutcomeCallable GetFirewallDomainListCallable(const Model::GetFirewallDomainListRequest& request) const;

        /**
         * An Async wrapper for GetFirewallDomainList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFirewallDomainListAsync(const Model::GetFirewallDomainListRequest& request, const GetFirewallDomainListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified firewall rule group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFirewallRuleGroupOutcome GetFirewallRuleGroup(const Model::GetFirewallRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for GetFirewallRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFirewallRuleGroupOutcomeCallable GetFirewallRuleGroupCallable(const Model::GetFirewallRuleGroupRequest& request) const;

        /**
         * An Async wrapper for GetFirewallRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetFirewallRuleGroupAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFirewallRuleGroupAssociationOutcomeCallable GetFirewallRuleGroupAssociationCallable(const Model::GetFirewallRuleGroupAssociationRequest& request) const;

        /**
         * An Async wrapper for GetFirewallRuleGroupAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFirewallRuleGroupAssociationAsync(const Model::GetFirewallRuleGroupAssociationRequest& request, const GetFirewallRuleGroupAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the Identity and Access Management (Amazon Web Services IAM) policy
         * for sharing the specified rule group. You can use the policy to share the rule
         * group using Resource Access Manager (RAM). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallRuleGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFirewallRuleGroupPolicyOutcome GetFirewallRuleGroupPolicy(const Model::GetFirewallRuleGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetFirewallRuleGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFirewallRuleGroupPolicyOutcomeCallable GetFirewallRuleGroupPolicyCallable(const Model::GetFirewallRuleGroupPolicyRequest& request) const;

        /**
         * An Async wrapper for GetFirewallRuleGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFirewallRuleGroupPolicyAsync(const Model::GetFirewallRuleGroupPolicyRequest& request, const GetFirewallRuleGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the behavior configuration of Route 53 Resolver behavior for a
         * single VPC from Amazon Virtual Private Cloud.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverConfigOutcome GetResolverConfig(const Model::GetResolverConfigRequest& request) const;

        /**
         * A Callable wrapper for GetResolverConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverConfigOutcomeCallable GetResolverConfigCallable(const Model::GetResolverConfigRequest& request) const;

        /**
         * An Async wrapper for GetResolverConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResolverConfigAsync(const Model::GetResolverConfigRequest& request, const GetResolverConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets DNSSEC validation information for a specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverDnssecConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverDnssecConfigOutcome GetResolverDnssecConfig(const Model::GetResolverDnssecConfigRequest& request) const;

        /**
         * A Callable wrapper for GetResolverDnssecConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverDnssecConfigOutcomeCallable GetResolverDnssecConfigCallable(const Model::GetResolverDnssecConfigRequest& request) const;

        /**
         * An Async wrapper for GetResolverDnssecConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetResolverEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverEndpointOutcomeCallable GetResolverEndpointCallable(const Model::GetResolverEndpointRequest& request) const;

        /**
         * An Async wrapper for GetResolverEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetResolverQueryLogConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverQueryLogConfigOutcomeCallable GetResolverQueryLogConfigCallable(const Model::GetResolverQueryLogConfigRequest& request) const;

        /**
         * An Async wrapper for GetResolverQueryLogConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetResolverQueryLogConfigAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverQueryLogConfigAssociationOutcomeCallable GetResolverQueryLogConfigAssociationCallable(const Model::GetResolverQueryLogConfigAssociationRequest& request) const;

        /**
         * An Async wrapper for GetResolverQueryLogConfigAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResolverQueryLogConfigAssociationAsync(const Model::GetResolverQueryLogConfigAssociationRequest& request, const GetResolverQueryLogConfigAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a query logging policy. A query logging policy
         * specifies the Resolver query logging operations and resources that you want to
         * allow another Amazon Web Services account to be able to use.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverQueryLogConfigPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverQueryLogConfigPolicyOutcome GetResolverQueryLogConfigPolicy(const Model::GetResolverQueryLogConfigPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetResolverQueryLogConfigPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverQueryLogConfigPolicyOutcomeCallable GetResolverQueryLogConfigPolicyCallable(const Model::GetResolverQueryLogConfigPolicyRequest& request) const;

        /**
         * An Async wrapper for GetResolverQueryLogConfigPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetResolverRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverRuleOutcomeCallable GetResolverRuleCallable(const Model::GetResolverRuleRequest& request) const;

        /**
         * An Async wrapper for GetResolverRule that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetResolverRuleAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverRuleAssociationOutcomeCallable GetResolverRuleAssociationCallable(const Model::GetResolverRuleAssociationRequest& request) const;

        /**
         * An Async wrapper for GetResolverRuleAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetResolverRulePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResolverRulePolicyOutcomeCallable GetResolverRulePolicyCallable(const Model::GetResolverRulePolicyRequest& request) const;

        /**
         * An Async wrapper for GetResolverRulePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ImportFirewallDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportFirewallDomainsOutcomeCallable ImportFirewallDomainsCallable(const Model::ImportFirewallDomainsRequest& request) const;

        /**
         * An Async wrapper for ImportFirewallDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListFirewallConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFirewallConfigsOutcomeCallable ListFirewallConfigsCallable(const Model::ListFirewallConfigsRequest& request) const;

        /**
         * An Async wrapper for ListFirewallConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListFirewallDomainLists that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFirewallDomainListsOutcomeCallable ListFirewallDomainListsCallable(const Model::ListFirewallDomainListsRequest& request) const;

        /**
         * An Async wrapper for ListFirewallDomainLists that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListFirewallDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFirewallDomainsOutcomeCallable ListFirewallDomainsCallable(const Model::ListFirewallDomainsRequest& request) const;

        /**
         * An Async wrapper for ListFirewallDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListFirewallRuleGroupAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFirewallRuleGroupAssociationsOutcomeCallable ListFirewallRuleGroupAssociationsCallable(const Model::ListFirewallRuleGroupAssociationsRequest& request) const;

        /**
         * An Async wrapper for ListFirewallRuleGroupAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListFirewallRuleGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFirewallRuleGroupsOutcomeCallable ListFirewallRuleGroupsCallable(const Model::ListFirewallRuleGroupsRequest& request) const;

        /**
         * An Async wrapper for ListFirewallRuleGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListFirewallRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFirewallRulesOutcomeCallable ListFirewallRulesCallable(const Model::ListFirewallRulesRequest& request) const;

        /**
         * An Async wrapper for ListFirewallRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFirewallRulesAsync(const Model::ListFirewallRulesRequest& request, const ListFirewallRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the Resolver configurations that you have defined. Route 53
         * Resolver uses the configurations to manage DNS resolution behavior for your
         * VPCs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverConfigsOutcome ListResolverConfigs(const Model::ListResolverConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListResolverConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolverConfigsOutcomeCallable ListResolverConfigsCallable(const Model::ListResolverConfigsRequest& request) const;

        /**
         * An Async wrapper for ListResolverConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResolverConfigsAsync(const Model::ListResolverConfigsRequest& request, const ListResolverConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the configurations for DNSSEC validation that are associated with the
         * current Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverDnssecConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverDnssecConfigsOutcome ListResolverDnssecConfigs(const Model::ListResolverDnssecConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListResolverDnssecConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolverDnssecConfigsOutcomeCallable ListResolverDnssecConfigsCallable(const Model::ListResolverDnssecConfigsRequest& request) const;

        /**
         * An Async wrapper for ListResolverDnssecConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListResolverEndpointIpAddresses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolverEndpointIpAddressesOutcomeCallable ListResolverEndpointIpAddressesCallable(const Model::ListResolverEndpointIpAddressesRequest& request) const;

        /**
         * An Async wrapper for ListResolverEndpointIpAddresses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResolverEndpointIpAddressesAsync(const Model::ListResolverEndpointIpAddressesRequest& request, const ListResolverEndpointIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the Resolver endpoints that were created using the current Amazon
         * Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverEndpointsOutcome ListResolverEndpoints(const Model::ListResolverEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListResolverEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolverEndpointsOutcomeCallable ListResolverEndpointsCallable(const Model::ListResolverEndpointsRequest& request) const;

        /**
         * An Async wrapper for ListResolverEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListResolverQueryLogConfigAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolverQueryLogConfigAssociationsOutcomeCallable ListResolverQueryLogConfigAssociationsCallable(const Model::ListResolverQueryLogConfigAssociationsRequest& request) const;

        /**
         * An Async wrapper for ListResolverQueryLogConfigAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListResolverQueryLogConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolverQueryLogConfigsOutcomeCallable ListResolverQueryLogConfigsCallable(const Model::ListResolverQueryLogConfigsRequest& request) const;

        /**
         * An Async wrapper for ListResolverQueryLogConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResolverQueryLogConfigsAsync(const Model::ListResolverQueryLogConfigsRequest& request, const ListResolverQueryLogConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the associations that were created between Resolver rules and VPCs
         * using the current Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverRuleAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverRuleAssociationsOutcome ListResolverRuleAssociations(const Model::ListResolverRuleAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListResolverRuleAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolverRuleAssociationsOutcomeCallable ListResolverRuleAssociationsCallable(const Model::ListResolverRuleAssociationsRequest& request) const;

        /**
         * An Async wrapper for ListResolverRuleAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResolverRuleAssociationsAsync(const Model::ListResolverRuleAssociationsRequest& request, const ListResolverRuleAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Resolver rules that were created using the current Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverRulesOutcome ListResolverRules(const Model::ListResolverRulesRequest& request) const;

        /**
         * A Callable wrapper for ListResolverRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResolverRulesOutcomeCallable ListResolverRulesCallable(const Model::ListResolverRulesRequest& request) const;

        /**
         * An Async wrapper for ListResolverRules that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches an Identity and Access Management (Amazon Web Services IAM) policy
         * for sharing the rule group. You can use the policy to share the rule group using
         * Resource Access Manager (RAM). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutFirewallRuleGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFirewallRuleGroupPolicyOutcome PutFirewallRuleGroupPolicy(const Model::PutFirewallRuleGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutFirewallRuleGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutFirewallRuleGroupPolicyOutcomeCallable PutFirewallRuleGroupPolicyCallable(const Model::PutFirewallRuleGroupPolicyRequest& request) const;

        /**
         * An Async wrapper for PutFirewallRuleGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutFirewallRuleGroupPolicyAsync(const Model::PutFirewallRuleGroupPolicyRequest& request, const PutFirewallRuleGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specifies an Amazon Web Services account that you want to share a query
         * logging configuration with, the query logging configuration that you want to
         * share, and the operations that you want the account to be able to perform on the
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutResolverQueryLogConfigPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResolverQueryLogConfigPolicyOutcome PutResolverQueryLogConfigPolicy(const Model::PutResolverQueryLogConfigPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResolverQueryLogConfigPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResolverQueryLogConfigPolicyOutcomeCallable PutResolverQueryLogConfigPolicyCallable(const Model::PutResolverQueryLogConfigPolicyRequest& request) const;

        /**
         * An Async wrapper for PutResolverQueryLogConfigPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResolverQueryLogConfigPolicyAsync(const Model::PutResolverQueryLogConfigPolicyRequest& request, const PutResolverQueryLogConfigPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specifies an Amazon Web Services rule that you want to share with another
         * account, the account that you want to share the rule with, and the operations
         * that you want the account to be able to perform on the rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutResolverRulePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResolverRulePolicyOutcome PutResolverRulePolicy(const Model::PutResolverRulePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResolverRulePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResolverRulePolicyOutcomeCallable PutResolverRulePolicyCallable(const Model::PutResolverRulePolicyRequest& request) const;

        /**
         * An Async wrapper for PutResolverRulePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResolverRulePolicyAsync(const Model::PutResolverRulePolicyRequest& request, const PutResolverRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration of the firewall behavior provided by DNS Firewall
         * for a single VPC from Amazon Virtual Private Cloud (Amazon VPC). </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallConfigOutcome UpdateFirewallConfig(const Model::UpdateFirewallConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateFirewallConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFirewallConfigOutcomeCallable UpdateFirewallConfigCallable(const Model::UpdateFirewallConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateFirewallConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateFirewallDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFirewallDomainsOutcomeCallable UpdateFirewallDomainsCallable(const Model::UpdateFirewallDomainsRequest& request) const;

        /**
         * An Async wrapper for UpdateFirewallDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFirewallDomainsAsync(const Model::UpdateFirewallDomainsRequest& request, const UpdateFirewallDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified firewall rule. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallRuleOutcome UpdateFirewallRule(const Model::UpdateFirewallRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateFirewallRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFirewallRuleOutcomeCallable UpdateFirewallRuleCallable(const Model::UpdateFirewallRuleRequest& request) const;

        /**
         * An Async wrapper for UpdateFirewallRule that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateFirewallRuleGroupAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFirewallRuleGroupAssociationOutcomeCallable UpdateFirewallRuleGroupAssociationCallable(const Model::UpdateFirewallRuleGroupAssociationRequest& request) const;

        /**
         * An Async wrapper for UpdateFirewallRuleGroupAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFirewallRuleGroupAssociationAsync(const Model::UpdateFirewallRuleGroupAssociationRequest& request, const UpdateFirewallRuleGroupAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the behavior configuration of Route 53 Resolver behavior for a single
         * VPC from Amazon Virtual Private Cloud.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverConfigOutcome UpdateResolverConfig(const Model::UpdateResolverConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateResolverConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResolverConfigOutcomeCallable UpdateResolverConfigCallable(const Model::UpdateResolverConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateResolverConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResolverConfigAsync(const Model::UpdateResolverConfigRequest& request, const UpdateResolverConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing DNSSEC validation configuration. If there is no existing
         * DNSSEC validation configuration, one is created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverDnssecConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverDnssecConfigOutcome UpdateResolverDnssecConfig(const Model::UpdateResolverDnssecConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateResolverDnssecConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResolverDnssecConfigOutcomeCallable UpdateResolverDnssecConfigCallable(const Model::UpdateResolverDnssecConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateResolverDnssecConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateResolverEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResolverEndpointOutcomeCallable UpdateResolverEndpointCallable(const Model::UpdateResolverEndpointRequest& request) const;

        /**
         * An Async wrapper for UpdateResolverEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateResolverRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResolverRuleOutcomeCallable UpdateResolverRuleCallable(const Model::UpdateResolverRuleRequest& request) const;

        /**
         * An Async wrapper for UpdateResolverRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResolverRuleAsync(const Model::UpdateResolverRuleRequest& request, const UpdateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<Route53ResolverEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<Route53ResolverClient>;
      void init(const Route53ResolverClientConfiguration& clientConfiguration);

      Route53ResolverClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<Route53ResolverEndpointProviderBase> m_endpointProvider;
  };

} // namespace Route53Resolver
} // namespace Aws
