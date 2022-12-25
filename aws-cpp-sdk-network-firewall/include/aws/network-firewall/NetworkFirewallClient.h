/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/NetworkFirewallServiceClientModel.h>

namespace Aws
{
namespace NetworkFirewall
{
  /**
   * <p>This is the API Reference for Network Firewall. This guide is for developers
   * who need detailed information about the Network Firewall API actions, data
   * types, and errors. </p> <ul> <li> <p>The REST API requires you to handle
   * connection details, such as calculating signatures, handling request retries,
   * and error handling. For general information about using the Amazon Web Services
   * REST APIs, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws-apis.html">Amazon Web
   * Services APIs</a>. </p> <p>To access Network Firewall using the REST API
   * endpoint: <code>https://network-firewall.&lt;region&gt;.amazonaws.com </code>
   * </p> </li> <li> <p>Alternatively, you can use one of the Amazon Web Services
   * SDKs to access an API that's tailored to the programming language or platform
   * that you're using. For more information, see <a
   * href="http://aws.amazon.com/tools/#SDKs">Amazon Web Services SDKs</a>.</p> </li>
   * <li> <p>For descriptions of Network Firewall features, including and
   * step-by-step instructions on how to use them through the Network Firewall
   * console, see the <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/">Network
   * Firewall Developer Guide</a>.</p> </li> </ul> <p>Network Firewall is a stateful,
   * managed, network firewall and intrusion detection and prevention service for
   * Amazon Virtual Private Cloud (Amazon VPC). With Network Firewall, you can filter
   * traffic at the perimeter of your VPC. This includes filtering traffic going to
   * and coming from an internet gateway, NAT gateway, or over VPN or Direct Connect.
   * Network Firewall uses rules that are compatible with Suricata, a free, open
   * source network analysis and threat detection engine. Network Firewall supports
   * Suricata version 5.0.2. For information about Suricata, see the <a
   * href="https://suricata.io/">Suricata website</a>.</p> <p>You can use Network
   * Firewall to monitor and protect your VPC traffic in a number of ways. The
   * following are just a few examples: </p> <ul> <li> <p>Allow domains or IP
   * addresses for known Amazon Web Services service endpoints, such as Amazon S3,
   * and block all other forms of traffic.</p> </li> <li> <p>Use custom lists of
   * known bad domains to limit the types of domain names that your applications can
   * access.</p> </li> <li> <p>Perform deep packet inspection on traffic entering or
   * leaving your VPC.</p> </li> <li> <p>Use stateful protocol detection to filter
   * protocols like HTTPS, regardless of the port used.</p> </li> </ul> <p>To enable
   * Network Firewall for your VPCs, you perform steps in both Amazon VPC and in
   * Network Firewall. For information about using Amazon VPC, see <a
   * href="https://docs.aws.amazon.com/vpc/latest/userguide/">Amazon VPC User
   * Guide</a>.</p> <p>To start using Network Firewall, do the following: </p> <ol>
   * <li> <p>(Optional) If you don't already have a VPC that you want to protect,
   * create it in Amazon VPC. </p> </li> <li> <p>In Amazon VPC, in each Availability
   * Zone where you want to have a firewall endpoint, create a subnet for the sole
   * use of Network Firewall. </p> </li> <li> <p>In Network Firewall, create
   * stateless and stateful rule groups, to define the components of the network
   * traffic filtering behavior that you want your firewall to have. </p> </li> <li>
   * <p>In Network Firewall, create a firewall policy that uses your rule groups and
   * specifies additional default traffic filtering behavior. </p> </li> <li> <p>In
   * Network Firewall, create a firewall and specify your new firewall policy and VPC
   * subnets. Network Firewall creates a firewall endpoint in each subnet that you
   * specify, with the behavior that's defined in the firewall policy.</p> </li> <li>
   * <p>In Amazon VPC, use ingress routing enhancements to route traffic through the
   * new firewall endpoints.</p> </li> </ol>
   */
  class AWS_NETWORKFIREWALL_API NetworkFirewallClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<NetworkFirewallClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkFirewallClient(const Aws::NetworkFirewall::NetworkFirewallClientConfiguration& clientConfiguration = Aws::NetworkFirewall::NetworkFirewallClientConfiguration(),
                              std::shared_ptr<NetworkFirewallEndpointProviderBase> endpointProvider = Aws::MakeShared<NetworkFirewallEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkFirewallClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<NetworkFirewallEndpointProviderBase> endpointProvider = Aws::MakeShared<NetworkFirewallEndpointProvider>(ALLOCATION_TAG),
                              const Aws::NetworkFirewall::NetworkFirewallClientConfiguration& clientConfiguration = Aws::NetworkFirewall::NetworkFirewallClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NetworkFirewallClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<NetworkFirewallEndpointProviderBase> endpointProvider = Aws::MakeShared<NetworkFirewallEndpointProvider>(ALLOCATION_TAG),
                              const Aws::NetworkFirewall::NetworkFirewallClientConfiguration& clientConfiguration = Aws::NetworkFirewall::NetworkFirewallClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkFirewallClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkFirewallClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NetworkFirewallClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~NetworkFirewallClient();

        /**
         * <p>Associates a <a>FirewallPolicy</a> to a <a>Firewall</a>. </p> <p>A firewall
         * policy defines how to monitor and manage your VPC network traffic, using a
         * collection of inspection rule groups and other settings. Each firewall requires
         * one firewall policy association, and you can use the same firewall policy for
         * multiple firewalls. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/AssociateFirewallPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateFirewallPolicyOutcome AssociateFirewallPolicy(const Model::AssociateFirewallPolicyRequest& request) const;

        /**
         * A Callable wrapper for AssociateFirewallPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateFirewallPolicyOutcomeCallable AssociateFirewallPolicyCallable(const Model::AssociateFirewallPolicyRequest& request) const;

        /**
         * An Async wrapper for AssociateFirewallPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateFirewallPolicyAsync(const Model::AssociateFirewallPolicyRequest& request, const AssociateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified subnets in the Amazon VPC to the firewall. You can
         * specify one subnet for each of the Availability Zones that the VPC spans. </p>
         * <p>This request creates an Network Firewall firewall endpoint in each of the
         * subnets. To enable the firewall's protections, you must also modify the VPC's
         * route tables for each subnet's Availability Zone, to redirect the traffic that's
         * coming into and going out of the zone through the firewall endpoint.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/AssociateSubnets">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSubnetsOutcome AssociateSubnets(const Model::AssociateSubnetsRequest& request) const;

        /**
         * A Callable wrapper for AssociateSubnets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateSubnetsOutcomeCallable AssociateSubnetsCallable(const Model::AssociateSubnetsRequest& request) const;

        /**
         * An Async wrapper for AssociateSubnets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateSubnetsAsync(const Model::AssociateSubnetsRequest& request, const AssociateSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Network Firewall <a>Firewall</a> and accompanying
         * <a>FirewallStatus</a> for a VPC. </p> <p>The firewall defines the configuration
         * settings for an Network Firewall firewall. The settings that you can define at
         * creation include the firewall policy, the subnets in your VPC to use for the
         * firewall endpoints, and any tags that are attached to the firewall Amazon Web
         * Services resource. </p> <p>After you create a firewall, you can provide
         * additional settings, like the logging configuration. </p> <p>To update the
         * settings for a firewall, you use the operations that apply to the settings
         * themselves, for example <a>UpdateLoggingConfiguration</a>,
         * <a>AssociateSubnets</a>, and <a>UpdateFirewallDeleteProtection</a>. </p> <p>To
         * manage a firewall's tags, use the standard Amazon Web Services resource tagging
         * operations, <a>ListTagsForResource</a>, <a>TagResource</a>, and
         * <a>UntagResource</a>.</p> <p>To retrieve information about firewalls, use
         * <a>ListFirewalls</a> and <a>DescribeFirewall</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CreateFirewall">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFirewallOutcome CreateFirewall(const Model::CreateFirewallRequest& request) const;

        /**
         * A Callable wrapper for CreateFirewall that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFirewallOutcomeCallable CreateFirewallCallable(const Model::CreateFirewallRequest& request) const;

        /**
         * An Async wrapper for CreateFirewall that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFirewallAsync(const Model::CreateFirewallRequest& request, const CreateFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the firewall policy for the firewall according to the specifications.
         * </p> <p>An Network Firewall firewall policy defines the behavior of a firewall,
         * in a collection of stateless and stateful rule groups and other settings. You
         * can use one firewall policy for multiple firewalls. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CreateFirewallPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFirewallPolicyOutcome CreateFirewallPolicy(const Model::CreateFirewallPolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateFirewallPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFirewallPolicyOutcomeCallable CreateFirewallPolicyCallable(const Model::CreateFirewallPolicyRequest& request) const;

        /**
         * An Async wrapper for CreateFirewallPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFirewallPolicyAsync(const Model::CreateFirewallPolicyRequest& request, const CreateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the specified stateless or stateful rule group, which includes the
         * rules for network traffic inspection, a capacity setting, and tags. </p> <p>You
         * provide your rule group specification in your request using either
         * <code>RuleGroup</code> or <code>Rules</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CreateRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRuleGroupOutcome CreateRuleGroup(const Model::CreateRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRuleGroupOutcomeCallable CreateRuleGroupCallable(const Model::CreateRuleGroupRequest& request) const;

        /**
         * An Async wrapper for CreateRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRuleGroupAsync(const Model::CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified <a>Firewall</a> and its <a>FirewallStatus</a>. This
         * operation requires the firewall's <code>DeleteProtection</code> flag to be
         * <code>FALSE</code>. You can't revert this operation. </p> <p>You can check
         * whether a firewall is in use by reviewing the route tables for the Availability
         * Zones where you have firewall subnet mappings. Retrieve the subnet mappings by
         * calling <a>DescribeFirewall</a>. You define and update the route tables through
         * Amazon VPC. As needed, update the route tables for the zones to remove the
         * firewall endpoints. When the route tables no longer use the firewall endpoints,
         * you can remove the firewall safely.</p> <p>To delete a firewall, remove the
         * delete protection if you need to using <a>UpdateFirewallDeleteProtection</a>,
         * then delete the firewall by calling <a>DeleteFirewall</a>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DeleteFirewall">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFirewallOutcome DeleteFirewall(const Model::DeleteFirewallRequest& request) const;

        /**
         * A Callable wrapper for DeleteFirewall that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFirewallOutcomeCallable DeleteFirewallCallable(const Model::DeleteFirewallRequest& request) const;

        /**
         * An Async wrapper for DeleteFirewall that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFirewallAsync(const Model::DeleteFirewallRequest& request, const DeleteFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified <a>FirewallPolicy</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DeleteFirewallPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFirewallPolicyOutcome DeleteFirewallPolicy(const Model::DeleteFirewallPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteFirewallPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFirewallPolicyOutcomeCallable DeleteFirewallPolicyCallable(const Model::DeleteFirewallPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteFirewallPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFirewallPolicyAsync(const Model::DeleteFirewallPolicyRequest& request, const DeleteFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a resource policy that you created in a <a>PutResourcePolicy</a>
         * request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourcePolicyAsync(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified <a>RuleGroup</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DeleteRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleGroupOutcome DeleteRuleGroup(const Model::DeleteRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRuleGroupOutcomeCallable DeleteRuleGroupCallable(const Model::DeleteRuleGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRuleGroupAsync(const Model::DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the data objects for the specified firewall. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeFirewall">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFirewallOutcome DescribeFirewall(const Model::DescribeFirewallRequest& request) const;

        /**
         * A Callable wrapper for DescribeFirewall that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFirewallOutcomeCallable DescribeFirewallCallable(const Model::DescribeFirewallRequest& request) const;

        /**
         * An Async wrapper for DescribeFirewall that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFirewallAsync(const Model::DescribeFirewallRequest& request, const DescribeFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the data objects for the specified firewall policy. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeFirewallPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFirewallPolicyOutcome DescribeFirewallPolicy(const Model::DescribeFirewallPolicyRequest& request) const;

        /**
         * A Callable wrapper for DescribeFirewallPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFirewallPolicyOutcomeCallable DescribeFirewallPolicyCallable(const Model::DescribeFirewallPolicyRequest& request) const;

        /**
         * An Async wrapper for DescribeFirewallPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFirewallPolicyAsync(const Model::DescribeFirewallPolicyRequest& request, const DescribeFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the logging configuration for the specified firewall. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoggingConfigurationOutcome DescribeLoggingConfiguration(const Model::DescribeLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoggingConfigurationOutcomeCallable DescribeLoggingConfigurationCallable(const Model::DescribeLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoggingConfigurationAsync(const Model::DescribeLoggingConfigurationRequest& request, const DescribeLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a resource policy that you created in a <a>PutResourcePolicy</a>
         * request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourcePolicyOutcome DescribeResourcePolicy(const Model::DescribeResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DescribeResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResourcePolicyOutcomeCallable DescribeResourcePolicyCallable(const Model::DescribeResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for DescribeResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeResourcePolicyAsync(const Model::DescribeResourcePolicyRequest& request, const DescribeResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the data objects for the specified rule group. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRuleGroupOutcome DescribeRuleGroup(const Model::DescribeRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRuleGroupOutcomeCallable DescribeRuleGroupCallable(const Model::DescribeRuleGroupRequest& request) const;

        /**
         * An Async wrapper for DescribeRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRuleGroupAsync(const Model::DescribeRuleGroupRequest& request, const DescribeRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>High-level information about a rule group, returned by operations like create
         * and describe. You can use the information provided in the metadata to retrieve
         * and manage a rule group. You can retrieve all objects for a rule group by
         * calling <a>DescribeRuleGroup</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeRuleGroupMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRuleGroupMetadataOutcome DescribeRuleGroupMetadata(const Model::DescribeRuleGroupMetadataRequest& request) const;

        /**
         * A Callable wrapper for DescribeRuleGroupMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRuleGroupMetadataOutcomeCallable DescribeRuleGroupMetadataCallable(const Model::DescribeRuleGroupMetadataRequest& request) const;

        /**
         * An Async wrapper for DescribeRuleGroupMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRuleGroupMetadataAsync(const Model::DescribeRuleGroupMetadataRequest& request, const DescribeRuleGroupMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified subnet associations from the firewall. This removes the
         * firewall endpoints from the subnets and removes any network filtering
         * protections that the endpoints were providing. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DisassociateSubnets">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSubnetsOutcome DisassociateSubnets(const Model::DisassociateSubnetsRequest& request) const;

        /**
         * A Callable wrapper for DisassociateSubnets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateSubnetsOutcomeCallable DisassociateSubnetsCallable(const Model::DisassociateSubnetsRequest& request) const;

        /**
         * An Async wrapper for DisassociateSubnets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateSubnetsAsync(const Model::DisassociateSubnetsRequest& request, const DisassociateSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the metadata for the firewall policies that you have defined.
         * Depending on your setting for max results and the number of firewall policies, a
         * single call might not return the full list. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListFirewallPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFirewallPoliciesOutcome ListFirewallPolicies(const Model::ListFirewallPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListFirewallPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFirewallPoliciesOutcomeCallable ListFirewallPoliciesCallable(const Model::ListFirewallPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListFirewallPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFirewallPoliciesAsync(const Model::ListFirewallPoliciesRequest& request, const ListFirewallPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the metadata for the firewalls that you have defined. If you
         * provide VPC identifiers in your request, this returns only the firewalls for
         * those VPCs.</p> <p>Depending on your setting for max results and the number of
         * firewalls, a single call might not return the full list. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListFirewalls">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFirewallsOutcome ListFirewalls(const Model::ListFirewallsRequest& request) const;

        /**
         * A Callable wrapper for ListFirewalls that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFirewallsOutcomeCallable ListFirewallsCallable(const Model::ListFirewallsRequest& request) const;

        /**
         * An Async wrapper for ListFirewalls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFirewallsAsync(const Model::ListFirewallsRequest& request, const ListFirewallsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the metadata for the rule groups that you have defined. Depending
         * on your setting for max results and the number of rule groups, a single call
         * might not return the full list. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListRuleGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRuleGroupsOutcome ListRuleGroups(const Model::ListRuleGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListRuleGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRuleGroupsOutcomeCallable ListRuleGroupsCallable(const Model::ListRuleGroupsRequest& request) const;

        /**
         * An Async wrapper for ListRuleGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRuleGroupsAsync(const Model::ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the tags associated with the specified resource. Tags are key:value
         * pairs that you can use to categorize and manage your resources, for purposes
         * like billing. For example, you might set the tag key to "customer" and the value
         * to the customer name or ID. You can specify one or more tags to add to each
         * Amazon Web Services resource, up to 50 tags for a resource.</p> <p>You can tag
         * the Amazon Web Services resources that you manage through Network Firewall:
         * firewalls, firewall policies, and rule groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListTagsForResource">AWS
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
         * <p>Creates or updates an IAM policy for your rule group or firewall policy. Use
         * this to share rule groups and firewall policies between accounts. This operation
         * works in conjunction with the Amazon Web Services Resource Access Manager (RAM)
         * service to manage resource sharing for Network Firewall. </p> <p>Use this
         * operation to create or update a resource policy for your rule group or firewall
         * policy. In the policy, you specify the accounts that you want to share the
         * resource with and the operations that you want the accounts to be able to
         * perform. </p> <p>When you add an account in the resource policy, you then run
         * the following Resource Access Manager (RAM) operations to access and accept the
         * shared rule group or firewall policy. </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_GetResourceShareInvitations.html">GetResourceShareInvitations</a>
         * - Returns the Amazon Resource Names (ARNs) of the resource share invitations.
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_AcceptResourceShareInvitation.html">AcceptResourceShareInvitation</a>
         * - Accepts the share invitation for a specified resource share. </p> </li> </ul>
         * <p>For additional information about resource sharing using RAM, see <a
         * href="https://docs.aws.amazon.com/ram/latest/userguide/what-is.html">Resource
         * Access Manager User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const Model::PutResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResourcePolicyAsync(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified tags to the specified resource. Tags are key:value pairs
         * that you can use to categorize and manage your resources, for purposes like
         * billing. For example, you might set the tag key to "customer" and the value to
         * the customer name or ID. You can specify one or more tags to add to each Amazon
         * Web Services resource, up to 50 tags for a resource.</p> <p>You can tag the
         * Amazon Web Services resources that you manage through Network Firewall:
         * firewalls, firewall policies, and rule groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/TagResource">AWS
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
         * <p>Removes the tags with the specified keys from the specified resource. Tags
         * are key:value pairs that you can use to categorize and manage your resources,
         * for purposes like billing. For example, you might set the tag key to "customer"
         * and the value to the customer name or ID. You can specify one or more tags to
         * add to each Amazon Web Services resource, up to 50 tags for a resource.</p>
         * <p>You can manage tags for the Amazon Web Services resources that you manage
         * through Network Firewall: firewalls, firewall policies, and rule groups.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UntagResource">AWS
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
         * <p>Modifies the flag, <code>DeleteProtection</code>, which indicates whether it
         * is possible to delete the firewall. If the flag is set to <code>TRUE</code>, the
         * firewall is protected against deletion. This setting helps protect against
         * accidentally deleting a firewall that's in use. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallDeleteProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallDeleteProtectionOutcome UpdateFirewallDeleteProtection(const Model::UpdateFirewallDeleteProtectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateFirewallDeleteProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFirewallDeleteProtectionOutcomeCallable UpdateFirewallDeleteProtectionCallable(const Model::UpdateFirewallDeleteProtectionRequest& request) const;

        /**
         * An Async wrapper for UpdateFirewallDeleteProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFirewallDeleteProtectionAsync(const Model::UpdateFirewallDeleteProtectionRequest& request, const UpdateFirewallDeleteProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the description for the specified firewall. Use the description to
         * help you identify the firewall when you're working with it. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallDescription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallDescriptionOutcome UpdateFirewallDescription(const Model::UpdateFirewallDescriptionRequest& request) const;

        /**
         * A Callable wrapper for UpdateFirewallDescription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFirewallDescriptionOutcomeCallable UpdateFirewallDescriptionCallable(const Model::UpdateFirewallDescriptionRequest& request) const;

        /**
         * An Async wrapper for UpdateFirewallDescription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFirewallDescriptionAsync(const Model::UpdateFirewallDescriptionRequest& request, const UpdateFirewallDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A complex type that contains settings for encryption of your firewall
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallEncryptionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallEncryptionConfigurationOutcome UpdateFirewallEncryptionConfiguration(const Model::UpdateFirewallEncryptionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateFirewallEncryptionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFirewallEncryptionConfigurationOutcomeCallable UpdateFirewallEncryptionConfigurationCallable(const Model::UpdateFirewallEncryptionConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateFirewallEncryptionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFirewallEncryptionConfigurationAsync(const Model::UpdateFirewallEncryptionConfigurationRequest& request, const UpdateFirewallEncryptionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the properties of the specified firewall policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallPolicyOutcome UpdateFirewallPolicy(const Model::UpdateFirewallPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateFirewallPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFirewallPolicyOutcomeCallable UpdateFirewallPolicyCallable(const Model::UpdateFirewallPolicyRequest& request) const;

        /**
         * An Async wrapper for UpdateFirewallPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFirewallPolicyAsync(const Model::UpdateFirewallPolicyRequest& request, const UpdateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the flag, <code>ChangeProtection</code>, which indicates whether it
         * is possible to change the firewall. If the flag is set to <code>TRUE</code>, the
         * firewall is protected from changes. This setting helps protect against
         * accidentally changing a firewall that's in use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallPolicyChangeProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallPolicyChangeProtectionOutcome UpdateFirewallPolicyChangeProtection(const Model::UpdateFirewallPolicyChangeProtectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateFirewallPolicyChangeProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFirewallPolicyChangeProtectionOutcomeCallable UpdateFirewallPolicyChangeProtectionCallable(const Model::UpdateFirewallPolicyChangeProtectionRequest& request) const;

        /**
         * An Async wrapper for UpdateFirewallPolicyChangeProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFirewallPolicyChangeProtectionAsync(const Model::UpdateFirewallPolicyChangeProtectionRequest& request, const UpdateFirewallPolicyChangeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the logging configuration for the specified firewall. </p> <p>To change
         * the logging configuration, retrieve the <a>LoggingConfiguration</a> by calling
         * <a>DescribeLoggingConfiguration</a>, then change it and provide the modified
         * object to this update call. You must change the logging configuration one
         * <a>LogDestinationConfig</a> at a time inside the retrieved
         * <a>LoggingConfiguration</a> object. </p> <p>You can perform only one of the
         * following actions in any call to <code>UpdateLoggingConfiguration</code>: </p>
         * <ul> <li> <p>Create a new log destination object by adding a single
         * <code>LogDestinationConfig</code> array element to
         * <code>LogDestinationConfigs</code>.</p> </li> <li> <p>Delete a log destination
         * object by removing a single <code>LogDestinationConfig</code> array element from
         * <code>LogDestinationConfigs</code>.</p> </li> <li> <p>Change the
         * <code>LogDestination</code> setting in a single
         * <code>LogDestinationConfig</code> array element.</p> </li> </ul> <p>You can't
         * change the <code>LogDestinationType</code> or <code>LogType</code> in a
         * <code>LogDestinationConfig</code>. To change these settings, delete the existing
         * <code>LogDestinationConfig</code> object and create a new one, using two
         * separate calls to this update operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLoggingConfigurationOutcome UpdateLoggingConfiguration(const Model::UpdateLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLoggingConfigurationOutcomeCallable UpdateLoggingConfigurationCallable(const Model::UpdateLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLoggingConfigurationAsync(const Model::UpdateLoggingConfigurationRequest& request, const UpdateLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the rule settings for the specified rule group. You use a rule group
         * by reference in one or more firewall policies. When you modify a rule group, you
         * modify all firewall policies that use the rule group. </p> <p>To update a rule
         * group, first call <a>DescribeRuleGroup</a> to retrieve the current
         * <a>RuleGroup</a> object, update the object as needed, and then provide the
         * updated object to this call. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRuleGroupOutcome UpdateRuleGroup(const Model::UpdateRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRuleGroupOutcomeCallable UpdateRuleGroupCallable(const Model::UpdateRuleGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRuleGroupAsync(const Model::UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateSubnetChangeProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubnetChangeProtectionOutcome UpdateSubnetChangeProtection(const Model::UpdateSubnetChangeProtectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateSubnetChangeProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSubnetChangeProtectionOutcomeCallable UpdateSubnetChangeProtectionCallable(const Model::UpdateSubnetChangeProtectionRequest& request) const;

        /**
         * An Async wrapper for UpdateSubnetChangeProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSubnetChangeProtectionAsync(const Model::UpdateSubnetChangeProtectionRequest& request, const UpdateSubnetChangeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<NetworkFirewallEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<NetworkFirewallClient>;
      void init(const NetworkFirewallClientConfiguration& clientConfiguration);

      NetworkFirewallClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<NetworkFirewallEndpointProviderBase> m_endpointProvider;
  };

} // namespace NetworkFirewall
} // namespace Aws
