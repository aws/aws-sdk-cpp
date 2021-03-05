/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/NetworkFirewallErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/AssociateFirewallPolicyResult.h>
#include <aws/network-firewall/model/AssociateSubnetsResult.h>
#include <aws/network-firewall/model/CreateFirewallResult.h>
#include <aws/network-firewall/model/CreateFirewallPolicyResult.h>
#include <aws/network-firewall/model/CreateRuleGroupResult.h>
#include <aws/network-firewall/model/DeleteFirewallResult.h>
#include <aws/network-firewall/model/DeleteFirewallPolicyResult.h>
#include <aws/network-firewall/model/DeleteResourcePolicyResult.h>
#include <aws/network-firewall/model/DeleteRuleGroupResult.h>
#include <aws/network-firewall/model/DescribeFirewallResult.h>
#include <aws/network-firewall/model/DescribeFirewallPolicyResult.h>
#include <aws/network-firewall/model/DescribeLoggingConfigurationResult.h>
#include <aws/network-firewall/model/DescribeResourcePolicyResult.h>
#include <aws/network-firewall/model/DescribeRuleGroupResult.h>
#include <aws/network-firewall/model/DisassociateSubnetsResult.h>
#include <aws/network-firewall/model/ListFirewallPoliciesResult.h>
#include <aws/network-firewall/model/ListFirewallsResult.h>
#include <aws/network-firewall/model/ListRuleGroupsResult.h>
#include <aws/network-firewall/model/ListTagsForResourceResult.h>
#include <aws/network-firewall/model/PutResourcePolicyResult.h>
#include <aws/network-firewall/model/TagResourceResult.h>
#include <aws/network-firewall/model/UntagResourceResult.h>
#include <aws/network-firewall/model/UpdateFirewallDeleteProtectionResult.h>
#include <aws/network-firewall/model/UpdateFirewallDescriptionResult.h>
#include <aws/network-firewall/model/UpdateFirewallPolicyResult.h>
#include <aws/network-firewall/model/UpdateFirewallPolicyChangeProtectionResult.h>
#include <aws/network-firewall/model/UpdateLoggingConfigurationResult.h>
#include <aws/network-firewall/model/UpdateRuleGroupResult.h>
#include <aws/network-firewall/model/UpdateSubnetChangeProtectionResult.h>
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

namespace NetworkFirewall
{

namespace Model
{
        class AssociateFirewallPolicyRequest;
        class AssociateSubnetsRequest;
        class CreateFirewallRequest;
        class CreateFirewallPolicyRequest;
        class CreateRuleGroupRequest;
        class DeleteFirewallRequest;
        class DeleteFirewallPolicyRequest;
        class DeleteResourcePolicyRequest;
        class DeleteRuleGroupRequest;
        class DescribeFirewallRequest;
        class DescribeFirewallPolicyRequest;
        class DescribeLoggingConfigurationRequest;
        class DescribeResourcePolicyRequest;
        class DescribeRuleGroupRequest;
        class DisassociateSubnetsRequest;
        class ListFirewallPoliciesRequest;
        class ListFirewallsRequest;
        class ListRuleGroupsRequest;
        class ListTagsForResourceRequest;
        class PutResourcePolicyRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateFirewallDeleteProtectionRequest;
        class UpdateFirewallDescriptionRequest;
        class UpdateFirewallPolicyRequest;
        class UpdateFirewallPolicyChangeProtectionRequest;
        class UpdateLoggingConfigurationRequest;
        class UpdateRuleGroupRequest;
        class UpdateSubnetChangeProtectionRequest;

        typedef Aws::Utils::Outcome<AssociateFirewallPolicyResult, NetworkFirewallError> AssociateFirewallPolicyOutcome;
        typedef Aws::Utils::Outcome<AssociateSubnetsResult, NetworkFirewallError> AssociateSubnetsOutcome;
        typedef Aws::Utils::Outcome<CreateFirewallResult, NetworkFirewallError> CreateFirewallOutcome;
        typedef Aws::Utils::Outcome<CreateFirewallPolicyResult, NetworkFirewallError> CreateFirewallPolicyOutcome;
        typedef Aws::Utils::Outcome<CreateRuleGroupResult, NetworkFirewallError> CreateRuleGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteFirewallResult, NetworkFirewallError> DeleteFirewallOutcome;
        typedef Aws::Utils::Outcome<DeleteFirewallPolicyResult, NetworkFirewallError> DeleteFirewallPolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, NetworkFirewallError> DeleteResourcePolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteRuleGroupResult, NetworkFirewallError> DeleteRuleGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeFirewallResult, NetworkFirewallError> DescribeFirewallOutcome;
        typedef Aws::Utils::Outcome<DescribeFirewallPolicyResult, NetworkFirewallError> DescribeFirewallPolicyOutcome;
        typedef Aws::Utils::Outcome<DescribeLoggingConfigurationResult, NetworkFirewallError> DescribeLoggingConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeResourcePolicyResult, NetworkFirewallError> DescribeResourcePolicyOutcome;
        typedef Aws::Utils::Outcome<DescribeRuleGroupResult, NetworkFirewallError> DescribeRuleGroupOutcome;
        typedef Aws::Utils::Outcome<DisassociateSubnetsResult, NetworkFirewallError> DisassociateSubnetsOutcome;
        typedef Aws::Utils::Outcome<ListFirewallPoliciesResult, NetworkFirewallError> ListFirewallPoliciesOutcome;
        typedef Aws::Utils::Outcome<ListFirewallsResult, NetworkFirewallError> ListFirewallsOutcome;
        typedef Aws::Utils::Outcome<ListRuleGroupsResult, NetworkFirewallError> ListRuleGroupsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, NetworkFirewallError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutResourcePolicyResult, NetworkFirewallError> PutResourcePolicyOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, NetworkFirewallError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, NetworkFirewallError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateFirewallDeleteProtectionResult, NetworkFirewallError> UpdateFirewallDeleteProtectionOutcome;
        typedef Aws::Utils::Outcome<UpdateFirewallDescriptionResult, NetworkFirewallError> UpdateFirewallDescriptionOutcome;
        typedef Aws::Utils::Outcome<UpdateFirewallPolicyResult, NetworkFirewallError> UpdateFirewallPolicyOutcome;
        typedef Aws::Utils::Outcome<UpdateFirewallPolicyChangeProtectionResult, NetworkFirewallError> UpdateFirewallPolicyChangeProtectionOutcome;
        typedef Aws::Utils::Outcome<UpdateLoggingConfigurationResult, NetworkFirewallError> UpdateLoggingConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateRuleGroupResult, NetworkFirewallError> UpdateRuleGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateSubnetChangeProtectionResult, NetworkFirewallError> UpdateSubnetChangeProtectionOutcome;

        typedef std::future<AssociateFirewallPolicyOutcome> AssociateFirewallPolicyOutcomeCallable;
        typedef std::future<AssociateSubnetsOutcome> AssociateSubnetsOutcomeCallable;
        typedef std::future<CreateFirewallOutcome> CreateFirewallOutcomeCallable;
        typedef std::future<CreateFirewallPolicyOutcome> CreateFirewallPolicyOutcomeCallable;
        typedef std::future<CreateRuleGroupOutcome> CreateRuleGroupOutcomeCallable;
        typedef std::future<DeleteFirewallOutcome> DeleteFirewallOutcomeCallable;
        typedef std::future<DeleteFirewallPolicyOutcome> DeleteFirewallPolicyOutcomeCallable;
        typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
        typedef std::future<DeleteRuleGroupOutcome> DeleteRuleGroupOutcomeCallable;
        typedef std::future<DescribeFirewallOutcome> DescribeFirewallOutcomeCallable;
        typedef std::future<DescribeFirewallPolicyOutcome> DescribeFirewallPolicyOutcomeCallable;
        typedef std::future<DescribeLoggingConfigurationOutcome> DescribeLoggingConfigurationOutcomeCallable;
        typedef std::future<DescribeResourcePolicyOutcome> DescribeResourcePolicyOutcomeCallable;
        typedef std::future<DescribeRuleGroupOutcome> DescribeRuleGroupOutcomeCallable;
        typedef std::future<DisassociateSubnetsOutcome> DisassociateSubnetsOutcomeCallable;
        typedef std::future<ListFirewallPoliciesOutcome> ListFirewallPoliciesOutcomeCallable;
        typedef std::future<ListFirewallsOutcome> ListFirewallsOutcomeCallable;
        typedef std::future<ListRuleGroupsOutcome> ListRuleGroupsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateFirewallDeleteProtectionOutcome> UpdateFirewallDeleteProtectionOutcomeCallable;
        typedef std::future<UpdateFirewallDescriptionOutcome> UpdateFirewallDescriptionOutcomeCallable;
        typedef std::future<UpdateFirewallPolicyOutcome> UpdateFirewallPolicyOutcomeCallable;
        typedef std::future<UpdateFirewallPolicyChangeProtectionOutcome> UpdateFirewallPolicyChangeProtectionOutcomeCallable;
        typedef std::future<UpdateLoggingConfigurationOutcome> UpdateLoggingConfigurationOutcomeCallable;
        typedef std::future<UpdateRuleGroupOutcome> UpdateRuleGroupOutcomeCallable;
        typedef std::future<UpdateSubnetChangeProtectionOutcome> UpdateSubnetChangeProtectionOutcomeCallable;
} // namespace Model

  class NetworkFirewallClient;

    typedef std::function<void(const NetworkFirewallClient*, const Model::AssociateFirewallPolicyRequest&, const Model::AssociateFirewallPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateFirewallPolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::AssociateSubnetsRequest&, const Model::AssociateSubnetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateSubnetsResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::CreateFirewallRequest&, const Model::CreateFirewallOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFirewallResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::CreateFirewallPolicyRequest&, const Model::CreateFirewallPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFirewallPolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::CreateRuleGroupRequest&, const Model::CreateRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRuleGroupResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DeleteFirewallRequest&, const Model::DeleteFirewallOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFirewallResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DeleteFirewallPolicyRequest&, const Model::DeleteFirewallPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFirewallPolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DeleteRuleGroupRequest&, const Model::DeleteRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleGroupResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeFirewallRequest&, const Model::DescribeFirewallOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFirewallResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeFirewallPolicyRequest&, const Model::DescribeFirewallPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFirewallPolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeLoggingConfigurationRequest&, const Model::DescribeLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeResourcePolicyRequest&, const Model::DescribeResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DescribeRuleGroupRequest&, const Model::DescribeRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuleGroupResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::DisassociateSubnetsRequest&, const Model::DisassociateSubnetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateSubnetsResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::ListFirewallPoliciesRequest&, const Model::ListFirewallPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFirewallPoliciesResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::ListFirewallsRequest&, const Model::ListFirewallsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFirewallsResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::ListRuleGroupsRequest&, const Model::ListRuleGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRuleGroupsResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateFirewallDeleteProtectionRequest&, const Model::UpdateFirewallDeleteProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFirewallDeleteProtectionResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateFirewallDescriptionRequest&, const Model::UpdateFirewallDescriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFirewallDescriptionResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateFirewallPolicyRequest&, const Model::UpdateFirewallPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFirewallPolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateFirewallPolicyChangeProtectionRequest&, const Model::UpdateFirewallPolicyChangeProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFirewallPolicyChangeProtectionResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateLoggingConfigurationRequest&, const Model::UpdateLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateRuleGroupRequest&, const Model::UpdateRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuleGroupResponseReceivedHandler;
    typedef std::function<void(const NetworkFirewallClient*, const Model::UpdateSubnetChangeProtectionRequest&, const Model::UpdateSubnetChangeProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubnetChangeProtectionResponseReceivedHandler;

  /**
   * <p>This is the API Reference for AWS Network Firewall. This guide is for
   * developers who need detailed information about the Network Firewall API actions,
   * data types, and errors. </p> <ul> <li> <p>The REST API requires you to handle
   * connection details, such as calculating signatures, handling request retries,
   * and error handling. For general information about using the AWS REST APIs, see
   * <a href="https://docs.aws.amazon.com/general/latest/gr/aws-apis.html">AWS
   * APIs</a>. </p> <p>To access Network Firewall using the REST API endpoint:
   * <code>https://network-firewall.&lt;region&gt;.amazonaws.com </code> </p> </li>
   * <li> <p>Alternatively, you can use one of the AWS SDKs to access an API that's
   * tailored to the programming language or platform that you're using. For more
   * information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS SDKs</a>.</p>
   * </li> <li> <p>For descriptions of Network Firewall features, including and
   * step-by-step instructions on how to use them through the Network Firewall
   * console, see the <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/">Network
   * Firewall Developer Guide</a>.</p> </li> </ul> <p>Network Firewall is a stateful,
   * managed, network firewall and intrusion detection and prevention service for
   * Amazon Virtual Private Cloud (Amazon VPC). With Network Firewall, you can filter
   * traffic at the perimeter of your VPC. This includes filtering traffic going to
   * and coming from an internet gateway, NAT gateway, or over VPN or AWS Direct
   * Connect. Network Firewall uses rules that are compatible with Suricata, a free,
   * open source intrusion detection system (IDS) engine. For information about
   * Suricata, see the <a href="https://suricata-ids.org/">Suricata website</a>.</p>
   * <p>You can use Network Firewall to monitor and protect your VPC traffic in a
   * number of ways. The following are just a few examples: </p> <ul> <li> <p>Allow
   * domains or IP addresses for known AWS service endpoints, such as Amazon S3, and
   * block all other forms of traffic.</p> </li> <li> <p>Use custom lists of known
   * bad domains to limit the types of domain names that your applications can
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
  class AWS_NETWORKFIREWALL_API NetworkFirewallClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkFirewallClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkFirewallClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NetworkFirewallClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
         * <p>Associates a <a>FirewallPolicy</a> to a <a>Firewall</a>. </p> <p>A firewall
         * policy defines how to monitor and manage your VPC network traffic, using a
         * collection of inspection rule groups and other settings. Each firewall requires
         * one firewall policy association, and you can use the same firewall policy for
         * multiple firewalls. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/AssociateFirewallPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateFirewallPolicyOutcomeCallable AssociateFirewallPolicyCallable(const Model::AssociateFirewallPolicyRequest& request) const;

        /**
         * <p>Associates a <a>FirewallPolicy</a> to a <a>Firewall</a>. </p> <p>A firewall
         * policy defines how to monitor and manage your VPC network traffic, using a
         * collection of inspection rule groups and other settings. Each firewall requires
         * one firewall policy association, and you can use the same firewall policy for
         * multiple firewalls. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/AssociateFirewallPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateFirewallPolicyAsync(const Model::AssociateFirewallPolicyRequest& request, const AssociateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified subnets in the Amazon VPC to the firewall. You can
         * specify one subnet for each of the Availability Zones that the VPC spans. </p>
         * <p>This request creates an AWS Network Firewall firewall endpoint in each of the
         * subnets. To enable the firewall's protections, you must also modify the VPC's
         * route tables for each subnet's Availability Zone, to redirect the traffic that's
         * coming into and going out of the zone through the firewall endpoint.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/AssociateSubnets">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSubnetsOutcome AssociateSubnets(const Model::AssociateSubnetsRequest& request) const;

        /**
         * <p>Associates the specified subnets in the Amazon VPC to the firewall. You can
         * specify one subnet for each of the Availability Zones that the VPC spans. </p>
         * <p>This request creates an AWS Network Firewall firewall endpoint in each of the
         * subnets. To enable the firewall's protections, you must also modify the VPC's
         * route tables for each subnet's Availability Zone, to redirect the traffic that's
         * coming into and going out of the zone through the firewall endpoint.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/AssociateSubnets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateSubnetsOutcomeCallable AssociateSubnetsCallable(const Model::AssociateSubnetsRequest& request) const;

        /**
         * <p>Associates the specified subnets in the Amazon VPC to the firewall. You can
         * specify one subnet for each of the Availability Zones that the VPC spans. </p>
         * <p>This request creates an AWS Network Firewall firewall endpoint in each of the
         * subnets. To enable the firewall's protections, you must also modify the VPC's
         * route tables for each subnet's Availability Zone, to redirect the traffic that's
         * coming into and going out of the zone through the firewall endpoint.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/AssociateSubnets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateSubnetsAsync(const Model::AssociateSubnetsRequest& request, const AssociateSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an AWS Network Firewall <a>Firewall</a> and accompanying
         * <a>FirewallStatus</a> for a VPC. </p> <p>The firewall defines the configuration
         * settings for an AWS Network Firewall firewall. The settings that you can define
         * at creation include the firewall policy, the subnets in your VPC to use for the
         * firewall endpoints, and any tags that are attached to the firewall AWS resource.
         * </p> <p>After you create a firewall, you can provide additional settings, like
         * the logging configuration. </p> <p>To update the settings for a firewall, you
         * use the operations that apply to the settings themselves, for example
         * <a>UpdateLoggingConfiguration</a>, <a>AssociateSubnets</a>, and
         * <a>UpdateFirewallDeleteProtection</a>. </p> <p>To manage a firewall's tags, use
         * the standard AWS resource tagging operations, <a>ListTagsForResource</a>,
         * <a>TagResource</a>, and <a>UntagResource</a>.</p> <p>To retrieve information
         * about firewalls, use <a>ListFirewalls</a> and
         * <a>DescribeFirewall</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CreateFirewall">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFirewallOutcome CreateFirewall(const Model::CreateFirewallRequest& request) const;

        /**
         * <p>Creates an AWS Network Firewall <a>Firewall</a> and accompanying
         * <a>FirewallStatus</a> for a VPC. </p> <p>The firewall defines the configuration
         * settings for an AWS Network Firewall firewall. The settings that you can define
         * at creation include the firewall policy, the subnets in your VPC to use for the
         * firewall endpoints, and any tags that are attached to the firewall AWS resource.
         * </p> <p>After you create a firewall, you can provide additional settings, like
         * the logging configuration. </p> <p>To update the settings for a firewall, you
         * use the operations that apply to the settings themselves, for example
         * <a>UpdateLoggingConfiguration</a>, <a>AssociateSubnets</a>, and
         * <a>UpdateFirewallDeleteProtection</a>. </p> <p>To manage a firewall's tags, use
         * the standard AWS resource tagging operations, <a>ListTagsForResource</a>,
         * <a>TagResource</a>, and <a>UntagResource</a>.</p> <p>To retrieve information
         * about firewalls, use <a>ListFirewalls</a> and
         * <a>DescribeFirewall</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CreateFirewall">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFirewallOutcomeCallable CreateFirewallCallable(const Model::CreateFirewallRequest& request) const;

        /**
         * <p>Creates an AWS Network Firewall <a>Firewall</a> and accompanying
         * <a>FirewallStatus</a> for a VPC. </p> <p>The firewall defines the configuration
         * settings for an AWS Network Firewall firewall. The settings that you can define
         * at creation include the firewall policy, the subnets in your VPC to use for the
         * firewall endpoints, and any tags that are attached to the firewall AWS resource.
         * </p> <p>After you create a firewall, you can provide additional settings, like
         * the logging configuration. </p> <p>To update the settings for a firewall, you
         * use the operations that apply to the settings themselves, for example
         * <a>UpdateLoggingConfiguration</a>, <a>AssociateSubnets</a>, and
         * <a>UpdateFirewallDeleteProtection</a>. </p> <p>To manage a firewall's tags, use
         * the standard AWS resource tagging operations, <a>ListTagsForResource</a>,
         * <a>TagResource</a>, and <a>UntagResource</a>.</p> <p>To retrieve information
         * about firewalls, use <a>ListFirewalls</a> and
         * <a>DescribeFirewall</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CreateFirewall">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFirewallAsync(const Model::CreateFirewallRequest& request, const CreateFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the firewall policy for the firewall according to the specifications.
         * </p> <p>An AWS Network Firewall firewall policy defines the behavior of a
         * firewall, in a collection of stateless and stateful rule groups and other
         * settings. You can use one firewall policy for multiple firewalls. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CreateFirewallPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFirewallPolicyOutcome CreateFirewallPolicy(const Model::CreateFirewallPolicyRequest& request) const;

        /**
         * <p>Creates the firewall policy for the firewall according to the specifications.
         * </p> <p>An AWS Network Firewall firewall policy defines the behavior of a
         * firewall, in a collection of stateless and stateful rule groups and other
         * settings. You can use one firewall policy for multiple firewalls. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CreateFirewallPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFirewallPolicyOutcomeCallable CreateFirewallPolicyCallable(const Model::CreateFirewallPolicyRequest& request) const;

        /**
         * <p>Creates the firewall policy for the firewall according to the specifications.
         * </p> <p>An AWS Network Firewall firewall policy defines the behavior of a
         * firewall, in a collection of stateless and stateful rule groups and other
         * settings. You can use one firewall policy for multiple firewalls. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CreateFirewallPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates the specified stateless or stateful rule group, which includes the
         * rules for network traffic inspection, a capacity setting, and tags. </p> <p>You
         * provide your rule group specification in your request using either
         * <code>RuleGroup</code> or <code>Rules</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CreateRuleGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRuleGroupOutcomeCallable CreateRuleGroupCallable(const Model::CreateRuleGroupRequest& request) const;

        /**
         * <p>Creates the specified stateless or stateful rule group, which includes the
         * rules for network traffic inspection, a capacity setting, and tags. </p> <p>You
         * provide your rule group specification in your request using either
         * <code>RuleGroup</code> or <code>Rules</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CreateRuleGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFirewallOutcomeCallable DeleteFirewallCallable(const Model::DeleteFirewallRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFirewallAsync(const Model::DeleteFirewallRequest& request, const DeleteFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified <a>FirewallPolicy</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DeleteFirewallPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFirewallPolicyOutcome DeleteFirewallPolicy(const Model::DeleteFirewallPolicyRequest& request) const;

        /**
         * <p>Deletes the specified <a>FirewallPolicy</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DeleteFirewallPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFirewallPolicyOutcomeCallable DeleteFirewallPolicyCallable(const Model::DeleteFirewallPolicyRequest& request) const;

        /**
         * <p>Deletes the specified <a>FirewallPolicy</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DeleteFirewallPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a resource policy that you created in a <a>PutResourcePolicy</a>
         * request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * <p>Deletes a resource policy that you created in a <a>PutResourcePolicy</a>
         * request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourcePolicyAsync(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified <a>RuleGroup</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DeleteRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleGroupOutcome DeleteRuleGroup(const Model::DeleteRuleGroupRequest& request) const;

        /**
         * <p>Deletes the specified <a>RuleGroup</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DeleteRuleGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRuleGroupOutcomeCallable DeleteRuleGroupCallable(const Model::DeleteRuleGroupRequest& request) const;

        /**
         * <p>Deletes the specified <a>RuleGroup</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DeleteRuleGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the data objects for the specified firewall. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeFirewall">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFirewallOutcomeCallable DescribeFirewallCallable(const Model::DescribeFirewallRequest& request) const;

        /**
         * <p>Returns the data objects for the specified firewall. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeFirewall">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the data objects for the specified firewall policy. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeFirewallPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFirewallPolicyOutcomeCallable DescribeFirewallPolicyCallable(const Model::DescribeFirewallPolicyRequest& request) const;

        /**
         * <p>Returns the data objects for the specified firewall policy. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeFirewallPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the logging configuration for the specified firewall. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoggingConfigurationOutcomeCallable DescribeLoggingConfigurationCallable(const Model::DescribeLoggingConfigurationRequest& request) const;

        /**
         * <p>Returns the logging configuration for the specified firewall. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves a resource policy that you created in a <a>PutResourcePolicy</a>
         * request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeResourcePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResourcePolicyOutcomeCallable DescribeResourcePolicyCallable(const Model::DescribeResourcePolicyRequest& request) const;

        /**
         * <p>Retrieves a resource policy that you created in a <a>PutResourcePolicy</a>
         * request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeResourcePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the data objects for the specified rule group. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeRuleGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRuleGroupOutcomeCallable DescribeRuleGroupCallable(const Model::DescribeRuleGroupRequest& request) const;

        /**
         * <p>Returns the data objects for the specified rule group. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeRuleGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRuleGroupAsync(const Model::DescribeRuleGroupRequest& request, const DescribeRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified subnet associations from the firewall. This removes the
         * firewall endpoints from the subnets and removes any network filtering
         * protections that the endpoints were providing. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DisassociateSubnets">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSubnetsOutcome DisassociateSubnets(const Model::DisassociateSubnetsRequest& request) const;

        /**
         * <p>Removes the specified subnet associations from the firewall. This removes the
         * firewall endpoints from the subnets and removes any network filtering
         * protections that the endpoints were providing. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DisassociateSubnets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateSubnetsOutcomeCallable DisassociateSubnetsCallable(const Model::DisassociateSubnetsRequest& request) const;

        /**
         * <p>Removes the specified subnet associations from the firewall. This removes the
         * firewall endpoints from the subnets and removes any network filtering
         * protections that the endpoints were providing. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DisassociateSubnets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves the metadata for the firewall policies that you have defined.
         * Depending on your setting for max results and the number of firewall policies, a
         * single call might not return the full list. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListFirewallPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFirewallPoliciesOutcomeCallable ListFirewallPoliciesCallable(const Model::ListFirewallPoliciesRequest& request) const;

        /**
         * <p>Retrieves the metadata for the firewall policies that you have defined.
         * Depending on your setting for max results and the number of firewall policies, a
         * single call might not return the full list. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListFirewallPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves the metadata for the firewalls that you have defined. If you
         * provide VPC identifiers in your request, this returns only the firewalls for
         * those VPCs.</p> <p>Depending on your setting for max results and the number of
         * firewalls, a single call might not return the full list. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListFirewalls">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFirewallsOutcomeCallable ListFirewallsCallable(const Model::ListFirewallsRequest& request) const;

        /**
         * <p>Retrieves the metadata for the firewalls that you have defined. If you
         * provide VPC identifiers in your request, this returns only the firewalls for
         * those VPCs.</p> <p>Depending on your setting for max results and the number of
         * firewalls, a single call might not return the full list. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListFirewalls">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves the metadata for the rule groups that you have defined. Depending
         * on your setting for max results and the number of rule groups, a single call
         * might not return the full list. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListRuleGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRuleGroupsOutcomeCallable ListRuleGroupsCallable(const Model::ListRuleGroupsRequest& request) const;

        /**
         * <p>Retrieves the metadata for the rule groups that you have defined. Depending
         * on your setting for max results and the number of rule groups, a single call
         * might not return the full list. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListRuleGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRuleGroupsAsync(const Model::ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the tags associated with the specified resource. Tags are key:value
         * pairs that you can use to categorize and manage your resources, for purposes
         * like billing. For example, you might set the tag key to "customer" and the value
         * to the customer name or ID. You can specify one or more tags to add to each AWS
         * resource, up to 50 tags for a resource.</p> <p>You can tag the AWS resources
         * that you manage through AWS Network Firewall: firewalls, firewall policies, and
         * rule groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves the tags associated with the specified resource. Tags are key:value
         * pairs that you can use to categorize and manage your resources, for purposes
         * like billing. For example, you might set the tag key to "customer" and the value
         * to the customer name or ID. You can specify one or more tags to add to each AWS
         * resource, up to 50 tags for a resource.</p> <p>You can tag the AWS resources
         * that you manage through AWS Network Firewall: firewalls, firewall policies, and
         * rule groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves the tags associated with the specified resource. Tags are key:value
         * pairs that you can use to categorize and manage your resources, for purposes
         * like billing. For example, you might set the tag key to "customer" and the value
         * to the customer name or ID. You can specify one or more tags to add to each AWS
         * resource, up to 50 tags for a resource.</p> <p>You can tag the AWS resources
         * that you manage through AWS Network Firewall: firewalls, firewall policies, and
         * rule groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates an AWS Identity and Access Management policy for your rule
         * group or firewall policy. Use this to share rule groups and firewall policies
         * between accounts. This operation works in conjunction with the AWS Resource
         * Access Manager (RAM) service to manage resource sharing for Network Firewall.
         * </p> <p>Use this operation to create or update a resource policy for your rule
         * group or firewall policy. In the policy, you specify the accounts that you want
         * to share the resource with and the operations that you want the accounts to be
         * able to perform. </p> <p>When you add an account in the resource policy, you
         * then run the following Resource Access Manager (RAM) operations to access and
         * accept the shared rule group or firewall policy. </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_GetResourceShareInvitations.html">GetResourceShareInvitations</a>
         * - Returns the Amazon Resource Names (ARNs) of the resource share invitations.
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_AcceptResourceShareInvitation.html">AcceptResourceShareInvitation</a>
         * - Accepts the share invitation for a specified resource share. </p> </li> </ul>
         * <p>For additional information about resource sharing using RAM, see <a
         * href="https://docs.aws.amazon.com/ram/latest/userguide/what-is.html">AWS
         * Resource Access Manager User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * <p>Creates or updates an AWS Identity and Access Management policy for your rule
         * group or firewall policy. Use this to share rule groups and firewall policies
         * between accounts. This operation works in conjunction with the AWS Resource
         * Access Manager (RAM) service to manage resource sharing for Network Firewall.
         * </p> <p>Use this operation to create or update a resource policy for your rule
         * group or firewall policy. In the policy, you specify the accounts that you want
         * to share the resource with and the operations that you want the accounts to be
         * able to perform. </p> <p>When you add an account in the resource policy, you
         * then run the following Resource Access Manager (RAM) operations to access and
         * accept the shared rule group or firewall policy. </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_GetResourceShareInvitations.html">GetResourceShareInvitations</a>
         * - Returns the Amazon Resource Names (ARNs) of the resource share invitations.
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_AcceptResourceShareInvitation.html">AcceptResourceShareInvitation</a>
         * - Accepts the share invitation for a specified resource share. </p> </li> </ul>
         * <p>For additional information about resource sharing using RAM, see <a
         * href="https://docs.aws.amazon.com/ram/latest/userguide/what-is.html">AWS
         * Resource Access Manager User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/PutResourcePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const Model::PutResourcePolicyRequest& request) const;

        /**
         * <p>Creates or updates an AWS Identity and Access Management policy for your rule
         * group or firewall policy. Use this to share rule groups and firewall policies
         * between accounts. This operation works in conjunction with the AWS Resource
         * Access Manager (RAM) service to manage resource sharing for Network Firewall.
         * </p> <p>Use this operation to create or update a resource policy for your rule
         * group or firewall policy. In the policy, you specify the accounts that you want
         * to share the resource with and the operations that you want the accounts to be
         * able to perform. </p> <p>When you add an account in the resource policy, you
         * then run the following Resource Access Manager (RAM) operations to access and
         * accept the shared rule group or firewall policy. </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_GetResourceShareInvitations.html">GetResourceShareInvitations</a>
         * - Returns the Amazon Resource Names (ARNs) of the resource share invitations.
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_AcceptResourceShareInvitation.html">AcceptResourceShareInvitation</a>
         * - Accepts the share invitation for a specified resource share. </p> </li> </ul>
         * <p>For additional information about resource sharing using RAM, see <a
         * href="https://docs.aws.amazon.com/ram/latest/userguide/what-is.html">AWS
         * Resource Access Manager User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/PutResourcePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResourcePolicyAsync(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified tags to the specified resource. Tags are key:value pairs
         * that you can use to categorize and manage your resources, for purposes like
         * billing. For example, you might set the tag key to "customer" and the value to
         * the customer name or ID. You can specify one or more tags to add to each AWS
         * resource, up to 50 tags for a resource.</p> <p>You can tag the AWS resources
         * that you manage through AWS Network Firewall: firewalls, firewall policies, and
         * rule groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified resource. Tags are key:value pairs
         * that you can use to categorize and manage your resources, for purposes like
         * billing. For example, you might set the tag key to "customer" and the value to
         * the customer name or ID. You can specify one or more tags to add to each AWS
         * resource, up to 50 tags for a resource.</p> <p>You can tag the AWS resources
         * that you manage through AWS Network Firewall: firewalls, firewall policies, and
         * rule groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified resource. Tags are key:value pairs
         * that you can use to categorize and manage your resources, for purposes like
         * billing. For example, you might set the tag key to "customer" and the value to
         * the customer name or ID. You can specify one or more tags to add to each AWS
         * resource, up to 50 tags for a resource.</p> <p>You can tag the AWS resources
         * that you manage through AWS Network Firewall: firewalls, firewall policies, and
         * rule groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the tags with the specified keys from the specified resource. Tags
         * are key:value pairs that you can use to categorize and manage your resources,
         * for purposes like billing. For example, you might set the tag key to "customer"
         * and the value to the customer name or ID. You can specify one or more tags to
         * add to each AWS resource, up to 50 tags for a resource.</p> <p>You can manage
         * tags for the AWS resources that you manage through AWS Network Firewall:
         * firewalls, firewall policies, and rule groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the tags with the specified keys from the specified resource. Tags
         * are key:value pairs that you can use to categorize and manage your resources,
         * for purposes like billing. For example, you might set the tag key to "customer"
         * and the value to the customer name or ID. You can specify one or more tags to
         * add to each AWS resource, up to 50 tags for a resource.</p> <p>You can manage
         * tags for the AWS resources that you manage through AWS Network Firewall:
         * firewalls, firewall policies, and rule groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the tags with the specified keys from the specified resource. Tags
         * are key:value pairs that you can use to categorize and manage your resources,
         * for purposes like billing. For example, you might set the tag key to "customer"
         * and the value to the customer name or ID. You can specify one or more tags to
         * add to each AWS resource, up to 50 tags for a resource.</p> <p>You can manage
         * tags for the AWS resources that you manage through AWS Network Firewall:
         * firewalls, firewall policies, and rule groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Modifies the flag, <code>DeleteProtection</code>, which indicates whether it
         * is possible to delete the firewall. If the flag is set to <code>TRUE</code>, the
         * firewall is protected against deletion. This setting helps protect against
         * accidentally deleting a firewall that's in use. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallDeleteProtection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFirewallDeleteProtectionOutcomeCallable UpdateFirewallDeleteProtectionCallable(const Model::UpdateFirewallDeleteProtectionRequest& request) const;

        /**
         * <p>Modifies the flag, <code>DeleteProtection</code>, which indicates whether it
         * is possible to delete the firewall. If the flag is set to <code>TRUE</code>, the
         * firewall is protected against deletion. This setting helps protect against
         * accidentally deleting a firewall that's in use. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallDeleteProtection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Modifies the description for the specified firewall. Use the description to
         * help you identify the firewall when you're working with it. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallDescription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFirewallDescriptionOutcomeCallable UpdateFirewallDescriptionCallable(const Model::UpdateFirewallDescriptionRequest& request) const;

        /**
         * <p>Modifies the description for the specified firewall. Use the description to
         * help you identify the firewall when you're working with it. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallDescription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFirewallDescriptionAsync(const Model::UpdateFirewallDescriptionRequest& request, const UpdateFirewallDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the properties of the specified firewall policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallPolicyOutcome UpdateFirewallPolicy(const Model::UpdateFirewallPolicyRequest& request) const;

        /**
         * <p>Updates the properties of the specified firewall policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFirewallPolicyOutcomeCallable UpdateFirewallPolicyCallable(const Model::UpdateFirewallPolicyRequest& request) const;

        /**
         * <p>Updates the properties of the specified firewall policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFirewallPolicyAsync(const Model::UpdateFirewallPolicyRequest& request, const UpdateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallPolicyChangeProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallPolicyChangeProtectionOutcome UpdateFirewallPolicyChangeProtection(const Model::UpdateFirewallPolicyChangeProtectionRequest& request) const;

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallPolicyChangeProtection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFirewallPolicyChangeProtectionOutcomeCallable UpdateFirewallPolicyChangeProtectionCallable(const Model::UpdateFirewallPolicyChangeProtectionRequest& request) const;

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallPolicyChangeProtection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLoggingConfigurationOutcomeCallable UpdateLoggingConfigurationCallable(const Model::UpdateLoggingConfigurationRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates the rule settings for the specified rule group. You use a rule group
         * by reference in one or more firewall policies. When you modify a rule group, you
         * modify all firewall policies that use the rule group. </p> <p>To update a rule
         * group, first call <a>DescribeRuleGroup</a> to retrieve the current
         * <a>RuleGroup</a> object, update the object as needed, and then provide the
         * updated object to this call. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateRuleGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRuleGroupOutcomeCallable UpdateRuleGroupCallable(const Model::UpdateRuleGroupRequest& request) const;

        /**
         * <p>Updates the rule settings for the specified rule group. You use a rule group
         * by reference in one or more firewall policies. When you modify a rule group, you
         * modify all firewall policies that use the rule group. </p> <p>To update a rule
         * group, first call <a>DescribeRuleGroup</a> to retrieve the current
         * <a>RuleGroup</a> object, update the object as needed, and then provide the
         * updated object to this call. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateRuleGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRuleGroupAsync(const Model::UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateSubnetChangeProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubnetChangeProtectionOutcome UpdateSubnetChangeProtection(const Model::UpdateSubnetChangeProtectionRequest& request) const;

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateSubnetChangeProtection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSubnetChangeProtectionOutcomeCallable UpdateSubnetChangeProtectionCallable(const Model::UpdateSubnetChangeProtectionRequest& request) const;

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateSubnetChangeProtection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSubnetChangeProtectionAsync(const Model::UpdateSubnetChangeProtectionRequest& request, const UpdateSubnetChangeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateFirewallPolicyAsyncHelper(const Model::AssociateFirewallPolicyRequest& request, const AssociateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateSubnetsAsyncHelper(const Model::AssociateSubnetsRequest& request, const AssociateSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFirewallAsyncHelper(const Model::CreateFirewallRequest& request, const CreateFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFirewallPolicyAsyncHelper(const Model::CreateFirewallPolicyRequest& request, const CreateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRuleGroupAsyncHelper(const Model::CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFirewallAsyncHelper(const Model::DeleteFirewallRequest& request, const DeleteFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFirewallPolicyAsyncHelper(const Model::DeleteFirewallPolicyRequest& request, const DeleteFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResourcePolicyAsyncHelper(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRuleGroupAsyncHelper(const Model::DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFirewallAsyncHelper(const Model::DescribeFirewallRequest& request, const DescribeFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFirewallPolicyAsyncHelper(const Model::DescribeFirewallPolicyRequest& request, const DescribeFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLoggingConfigurationAsyncHelper(const Model::DescribeLoggingConfigurationRequest& request, const DescribeLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeResourcePolicyAsyncHelper(const Model::DescribeResourcePolicyRequest& request, const DescribeResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRuleGroupAsyncHelper(const Model::DescribeRuleGroupRequest& request, const DescribeRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateSubnetsAsyncHelper(const Model::DisassociateSubnetsRequest& request, const DisassociateSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFirewallPoliciesAsyncHelper(const Model::ListFirewallPoliciesRequest& request, const ListFirewallPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFirewallsAsyncHelper(const Model::ListFirewallsRequest& request, const ListFirewallsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRuleGroupsAsyncHelper(const Model::ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutResourcePolicyAsyncHelper(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFirewallDeleteProtectionAsyncHelper(const Model::UpdateFirewallDeleteProtectionRequest& request, const UpdateFirewallDeleteProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFirewallDescriptionAsyncHelper(const Model::UpdateFirewallDescriptionRequest& request, const UpdateFirewallDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFirewallPolicyAsyncHelper(const Model::UpdateFirewallPolicyRequest& request, const UpdateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFirewallPolicyChangeProtectionAsyncHelper(const Model::UpdateFirewallPolicyChangeProtectionRequest& request, const UpdateFirewallPolicyChangeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLoggingConfigurationAsyncHelper(const Model::UpdateLoggingConfigurationRequest& request, const UpdateLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRuleGroupAsyncHelper(const Model::UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSubnetChangeProtectionAsyncHelper(const Model::UpdateSubnetChangeProtectionRequest& request, const UpdateSubnetChangeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace NetworkFirewall
} // namespace Aws
