/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53resolver/Route53ResolverServiceClientModel.h>
#include <aws/route53resolver/Route53ResolverLegacyAsyncMacros.h>

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
  class AWS_ROUTE53RESOLVER_API Route53ResolverClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Associates a <a>FirewallRuleGroup</a> with a VPC, to provide DNS filtering
         * for the VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateFirewallRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateFirewallRuleGroupOutcome AssociateFirewallRuleGroup(const Model::AssociateFirewallRuleGroupRequest& request) const;


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
         * <p>Creates an empty firewall domain list for use in DNS Firewall rules. You can
         * populate the domains for the new list with a file, using
         * <a>ImportFirewallDomains</a>, or with domain strings, using
         * <a>UpdateFirewallDomains</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateFirewallDomainList">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFirewallDomainListOutcome CreateFirewallDomainList(const Model::CreateFirewallDomainListRequest& request) const;


        /**
         * <p>Creates a single DNS Firewall rule in the specified rule group, using the
         * specified domain list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateFirewallRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFirewallRuleOutcome CreateFirewallRule(const Model::CreateFirewallRuleRequest& request) const;


        /**
         * <p>Creates an empty DNS Firewall rule group for filtering DNS network traffic in
         * a VPC. You can add rules to the new rule group by calling
         * <a>CreateFirewallRule</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateFirewallRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFirewallRuleGroupOutcome CreateFirewallRuleGroup(const Model::CreateFirewallRuleGroupRequest& request) const;


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
         * <p>For DNS queries that originate in your VPCs, specifies which Resolver
         * endpoint the queries pass through, one domain name that you want to forward to
         * your network, and the IP addresses of the DNS resolvers in your
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResolverRuleOutcome CreateResolverRule(const Model::CreateResolverRuleRequest& request) const;


        /**
         * <p>Deletes the specified domain list. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteFirewallDomainList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFirewallDomainListOutcome DeleteFirewallDomainList(const Model::DeleteFirewallDomainListRequest& request) const;


        /**
         * <p>Deletes the specified firewall rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteFirewallRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFirewallRuleOutcome DeleteFirewallRule(const Model::DeleteFirewallRuleRequest& request) const;


        /**
         * <p>Deletes the specified firewall rule group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteFirewallRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFirewallRuleGroupOutcome DeleteFirewallRuleGroup(const Model::DeleteFirewallRuleGroupRequest& request) const;


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
         * <p>Disassociates a <a>FirewallRuleGroup</a> from a VPC, to remove DNS filtering
         * from the VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateFirewallRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFirewallRuleGroupOutcome DisassociateFirewallRuleGroup(const Model::DisassociateFirewallRuleGroupRequest& request) const;


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
         * <p>Removes the association between a specified Resolver rule and a specified
         * VPC.</p>  <p>If you disassociate a Resolver rule from a VPC, Resolver
         * stops forwarding DNS queries for the domain name that you specified in the
         * Resolver rule. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateResolverRuleOutcome DisassociateResolverRule(const Model::DisassociateResolverRuleRequest& request) const;


        /**
         * <p>Retrieves the configuration of the firewall behavior provided by DNS Firewall
         * for a single VPC from Amazon Virtual Private Cloud (Amazon VPC). </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFirewallConfigOutcome GetFirewallConfig(const Model::GetFirewallConfigRequest& request) const;


        /**
         * <p>Retrieves the specified firewall domain list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallDomainList">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFirewallDomainListOutcome GetFirewallDomainList(const Model::GetFirewallDomainListRequest& request) const;


        /**
         * <p>Retrieves the specified firewall rule group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFirewallRuleGroupOutcome GetFirewallRuleGroup(const Model::GetFirewallRuleGroupRequest& request) const;


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
         * <p>Returns the Identity and Access Management (Amazon Web Services IAM) policy
         * for sharing the specified rule group. You can use the policy to share the rule
         * group using Resource Access Manager (RAM). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallRuleGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFirewallRuleGroupPolicyOutcome GetFirewallRuleGroupPolicy(const Model::GetFirewallRuleGroupPolicyRequest& request) const;


        /**
         * <p>Retrieves the behavior configuration of Route 53 Resolver behavior for a
         * single VPC from Amazon Virtual Private Cloud.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverConfigOutcome GetResolverConfig(const Model::GetResolverConfigRequest& request) const;


        /**
         * <p>Gets DNSSEC validation information for a specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverDnssecConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverDnssecConfigOutcome GetResolverDnssecConfig(const Model::GetResolverDnssecConfigRequest& request) const;


        /**
         * <p>Gets information about a specified Resolver endpoint, such as whether it's an
         * inbound or an outbound Resolver endpoint, and the current status of the
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverEndpointOutcome GetResolverEndpoint(const Model::GetResolverEndpointRequest& request) const;


        /**
         * <p>Gets information about a specified Resolver query logging configuration, such
         * as the number of VPCs that the configuration is logging queries for and the
         * location that logs are sent to. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverQueryLogConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverQueryLogConfigOutcome GetResolverQueryLogConfig(const Model::GetResolverQueryLogConfigRequest& request) const;


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
         * <p>Gets information about a query logging policy. A query logging policy
         * specifies the Resolver query logging operations and resources that you want to
         * allow another Amazon Web Services account to be able to use.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverQueryLogConfigPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverQueryLogConfigPolicyOutcome GetResolverQueryLogConfigPolicy(const Model::GetResolverQueryLogConfigPolicyRequest& request) const;


        /**
         * <p>Gets information about a specified Resolver rule, such as the domain name
         * that the rule forwards DNS queries for and the ID of the outbound Resolver
         * endpoint that the rule is associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverRuleOutcome GetResolverRule(const Model::GetResolverRuleRequest& request) const;


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
         * <p>Retrieves the firewall configurations that you have defined. DNS Firewall
         * uses the configurations to manage firewall behavior for your VPCs. </p> <p>A
         * single call might return only a partial list of the configurations. For
         * information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFirewallConfigsOutcome ListFirewallConfigs(const Model::ListFirewallConfigsRequest& request) const;


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
         * <p>Retrieves the domains that you have defined for the specified firewall domain
         * list. </p> <p>A single call might return only a partial list of the domains. For
         * information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFirewallDomainsOutcome ListFirewallDomains(const Model::ListFirewallDomainsRequest& request) const;


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
         * <p>Retrieves the minimal high-level information for the rule groups that you
         * have defined. </p> <p>A single call might return only a partial list of the rule
         * groups. For information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallRuleGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFirewallRuleGroupsOutcome ListFirewallRuleGroups(const Model::ListFirewallRuleGroupsRequest& request) const;


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
         * <p>Retrieves the Resolver configurations that you have defined. Route 53
         * Resolver uses the configurations to manage DNS resolution behavior for your
         * VPCs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverConfigsOutcome ListResolverConfigs(const Model::ListResolverConfigsRequest& request) const;


        /**
         * <p>Lists the configurations for DNSSEC validation that are associated with the
         * current Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverDnssecConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverDnssecConfigsOutcome ListResolverDnssecConfigs(const Model::ListResolverDnssecConfigsRequest& request) const;


        /**
         * <p>Gets the IP addresses for a specified Resolver endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverEndpointIpAddresses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverEndpointIpAddressesOutcome ListResolverEndpointIpAddresses(const Model::ListResolverEndpointIpAddressesRequest& request) const;


        /**
         * <p>Lists all the Resolver endpoints that were created using the current Amazon
         * Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverEndpointsOutcome ListResolverEndpoints(const Model::ListResolverEndpointsRequest& request) const;


        /**
         * <p>Lists information about associations between Amazon VPCs and query logging
         * configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverQueryLogConfigAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverQueryLogConfigAssociationsOutcome ListResolverQueryLogConfigAssociations(const Model::ListResolverQueryLogConfigAssociationsRequest& request) const;


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
         * <p>Lists the associations that were created between Resolver rules and VPCs
         * using the current Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverRuleAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverRuleAssociationsOutcome ListResolverRuleAssociations(const Model::ListResolverRuleAssociationsRequest& request) const;


        /**
         * <p>Lists the Resolver rules that were created using the current Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverRulesOutcome ListResolverRules(const Model::ListResolverRulesRequest& request) const;


        /**
         * <p>Lists the tags that you associated with the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Attaches an Identity and Access Management (Amazon Web Services IAM) policy
         * for sharing the rule group. You can use the policy to share the rule group using
         * Resource Access Manager (RAM). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutFirewallRuleGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFirewallRuleGroupPolicyOutcome PutFirewallRuleGroupPolicy(const Model::PutFirewallRuleGroupPolicyRequest& request) const;


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
         * <p>Specifies an Amazon Web Services rule that you want to share with another
         * account, the account that you want to share the rule with, and the operations
         * that you want the account to be able to perform on the rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutResolverRulePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResolverRulePolicyOutcome PutResolverRulePolicy(const Model::PutResolverRulePolicyRequest& request) const;


        /**
         * <p>Adds one or more tags to a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes one or more tags from a specified resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the configuration of the firewall behavior provided by DNS Firewall
         * for a single VPC from Amazon Virtual Private Cloud (Amazon VPC). </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallConfigOutcome UpdateFirewallConfig(const Model::UpdateFirewallConfigRequest& request) const;


        /**
         * <p>Updates the firewall domain list from an array of domain specifications.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallDomainsOutcome UpdateFirewallDomains(const Model::UpdateFirewallDomainsRequest& request) const;


        /**
         * <p>Updates the specified firewall rule. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallRuleOutcome UpdateFirewallRule(const Model::UpdateFirewallRuleRequest& request) const;


        /**
         * <p>Changes the association of a <a>FirewallRuleGroup</a> with a VPC. The
         * association enables DNS filtering for the VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallRuleGroupAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallRuleGroupAssociationOutcome UpdateFirewallRuleGroupAssociation(const Model::UpdateFirewallRuleGroupAssociationRequest& request) const;


        /**
         * <p>Updates the behavior configuration of Route 53 Resolver behavior for a single
         * VPC from Amazon Virtual Private Cloud.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverConfigOutcome UpdateResolverConfig(const Model::UpdateResolverConfigRequest& request) const;


        /**
         * <p>Updates an existing DNSSEC validation configuration. If there is no existing
         * DNSSEC validation configuration, one is created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverDnssecConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverDnssecConfigOutcome UpdateResolverDnssecConfig(const Model::UpdateResolverDnssecConfigRequest& request) const;


        /**
         * <p>Updates the name of an inbound or an outbound Resolver endpoint.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverEndpointOutcome UpdateResolverEndpoint(const Model::UpdateResolverEndpointRequest& request) const;


        /**
         * <p>Updates settings for a specified Resolver rule. <code>ResolverRuleId</code>
         * is required, and all other parameters are optional. If you don't specify a
         * parameter, it retains its current value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverRuleOutcome UpdateResolverRule(const Model::UpdateResolverRuleRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<Route53ResolverEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const Route53ResolverClientConfiguration& clientConfiguration);

      Route53ResolverClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<Route53ResolverEndpointProviderBase> m_endpointProvider;
  };

} // namespace Route53Resolver
} // namespace Aws
