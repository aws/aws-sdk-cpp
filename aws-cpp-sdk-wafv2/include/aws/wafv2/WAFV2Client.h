/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/WAFV2ServiceClientModel.h>

namespace Aws
{
namespace WAFV2
{
  /**
   * <fullname>WAF</fullname>  <p>This is the latest version of the <b>WAF</b>
   * API, released in November, 2019. The names of the entities that you use to
   * access this API, like endpoints and namespaces, all have the versioning
   * information added, like "V2" or "v2", to distinguish from the prior version. We
   * recommend migrating your resources to this version, because it has a number of
   * significant improvements.</p> <p>If you used WAF prior to this release, you
   * can't use this WAFV2 API to access any WAF resources that you created before.
   * You can access your old rules, web ACLs, and other WAF resources only through
   * the WAF Classic APIs. The WAF Classic APIs have retained the prior names,
   * endpoints, and namespaces. </p> <p>For information, including how to migrate
   * your WAF resources to this version, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
   * Developer Guide</a>. </p>  <p>WAF is a web application firewall that lets
   * you monitor the HTTP and HTTPS requests that are forwarded to Amazon CloudFront,
   * an Amazon API Gateway REST API, an Application Load Balancer, an AppSync GraphQL
   * API, or an Amazon Cognito user pool. WAF also lets you control access to your
   * content. Based on conditions that you specify, such as the IP addresses that
   * requests originate from or the values of query strings, the Amazon API Gateway
   * REST API, CloudFront distribution, the Application Load Balancer, the AppSync
   * GraphQL API, or the Amazon Cognito user pool responds to requests either with
   * the requested content or with an HTTP 403 status code (Forbidden). You also can
   * configure CloudFront to return a custom error page when a request is
   * blocked.</p> <p>This API guide is for developers who need detailed information
   * about WAF API actions, data types, and errors. For detailed information about
   * WAF features and an overview of how to use WAF, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/what-is-aws-waf.html">WAF
   * Developer Guide</a>.</p> <p>You can make calls using the endpoints listed in <a
   * href="https://docs.aws.amazon.com/general/latest/gr/waf.html">WAF endpoints and
   * quotas</a>. </p> <ul> <li> <p>For regional applications, you can use any of the
   * endpoints in the list. A regional application can be an Application Load
   * Balancer (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an
   * Amazon Cognito user pool. </p> </li> <li> <p>For Amazon CloudFront applications,
   * you must use the API endpoint listed for US East (N. Virginia): us-east-1.</p>
   * </li> </ul> <p>Alternatively, you can use one of the Amazon Web Services SDKs to
   * access an API that's tailored to the programming language or platform that
   * you're using. For more information, see <a
   * href="http://aws.amazon.com/tools/#SDKs">Amazon Web Services SDKs</a>.</p> <p>We
   * currently provide two versions of the WAF API: this API and the prior versions,
   * the classic WAF APIs. This new API provides the same functionality as the older
   * versions, with the following major improvements:</p> <ul> <li> <p>You use one
   * API for both global and regional applications. Where you need to distinguish the
   * scope, you specify a <code>Scope</code> parameter and set it to
   * <code>CLOUDFRONT</code> or <code>REGIONAL</code>. </p> </li> <li> <p>You can
   * define a web ACL or rule group with a single call, and update it with a single
   * call. You define all rule specifications in JSON format, and pass them to your
   * rule group or web ACL calls.</p> </li> <li> <p>The limits WAF places on the use
   * of rules more closely reflects the cost of running each type of rule. Rule
   * groups include capacity settings, so you know the maximum cost of a rule group
   * when you use it.</p> </li> </ul>
   */
  class AWS_WAFV2_API WAFV2Client : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<WAFV2Client>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WAFV2Client(const Aws::WAFV2::WAFV2ClientConfiguration& clientConfiguration = Aws::WAFV2::WAFV2ClientConfiguration(),
                    std::shared_ptr<WAFV2EndpointProviderBase> endpointProvider = Aws::MakeShared<WAFV2EndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WAFV2Client(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<WAFV2EndpointProviderBase> endpointProvider = Aws::MakeShared<WAFV2EndpointProvider>(ALLOCATION_TAG),
                    const Aws::WAFV2::WAFV2ClientConfiguration& clientConfiguration = Aws::WAFV2::WAFV2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WAFV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<WAFV2EndpointProviderBase> endpointProvider = Aws::MakeShared<WAFV2EndpointProvider>(ALLOCATION_TAG),
                    const Aws::WAFV2::WAFV2ClientConfiguration& clientConfiguration = Aws::WAFV2::WAFV2ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WAFV2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WAFV2Client(const Aws::Auth::AWSCredentials& credentials,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WAFV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~WAFV2Client();

        /**
         * <p>Associates a web ACL with a regional application resource, to protect the
         * resource. A regional application can be an Application Load Balancer (ALB), an
         * Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon Cognito user
         * pool. </p> <p>For Amazon CloudFront, don't use this call. Instead, use your
         * CloudFront distribution configuration. To associate a web ACL, in the CloudFront
         * call <code>UpdateDistribution</code>, set the web ACL ID to the Amazon Resource
         * Name (ARN) of the web ACL. For information, see <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>.</p>
         * <p>When you make changes to web ACLs or web ACL components, like rules and rule
         * groups, WAF propagates the changes everywhere that the web ACL and its
         * components are stored and used. Your changes are applied within seconds, but
         * there might be a brief period of inconsistency when the changes have arrived in
         * some places and not in others. So, for example, if you change a rule action
         * setting, the action might be the old action in one area and the new action in
         * another area. Or if you add an IP address to an IP set used in a blocking rule,
         * the new address might briefly be blocked in one area while still allowed in
         * another. This temporary inconsistency can occur when you first associate a web
         * ACL with an Amazon Web Services resource and when you change a web ACL that is
         * already associated with a resource. Generally, any inconsistencies of this type
         * last only a few seconds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AssociateWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWebACLOutcome AssociateWebACL(const Model::AssociateWebACLRequest& request) const;

        /**
         * A Callable wrapper for AssociateWebACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateWebACLOutcomeCallable AssociateWebACLCallable(const Model::AssociateWebACLRequest& request) const;

        /**
         * An Async wrapper for AssociateWebACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateWebACLAsync(const Model::AssociateWebACLRequest& request, const AssociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the web ACL capacity unit (WCU) requirements for a specified scope
         * and set of rules. You can use this to check the capacity requirements for the
         * rules you want to use in a <a>RuleGroup</a> or <a>WebACL</a>. </p> <p>WAF uses
         * WCUs to calculate and control the operating resources that are used to run your
         * rules, rule groups, and web ACLs. WAF calculates capacity differently for each
         * rule type, to reflect the relative cost of each rule. Simple rules that cost
         * little to run use fewer WCUs than more complex rules that use more processing
         * power. Rule group capacity is fixed at creation, which helps users plan their
         * web ACL WCU usage when they use a rule group. The WCU limit for web ACLs is
         * 1,500. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CheckCapacity">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckCapacityOutcome CheckCapacity(const Model::CheckCapacityRequest& request) const;

        /**
         * A Callable wrapper for CheckCapacity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CheckCapacityOutcomeCallable CheckCapacityCallable(const Model::CheckCapacityRequest& request) const;

        /**
         * An Async wrapper for CheckCapacity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CheckCapacityAsync(const Model::CheckCapacityRequest& request, const CheckCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an <a>IPSet</a>, which you use to identify web requests that
         * originate from specific IP addresses or ranges of IP addresses. For example, if
         * you're receiving a lot of requests from a ranges of IP addresses, you can
         * configure WAF to block them using an IPSet that lists those IP addresses.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CreateIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIPSetOutcome CreateIPSet(const Model::CreateIPSetRequest& request) const;

        /**
         * A Callable wrapper for CreateIPSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIPSetOutcomeCallable CreateIPSetCallable(const Model::CreateIPSetRequest& request) const;

        /**
         * An Async wrapper for CreateIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIPSetAsync(const Model::CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <a>RegexPatternSet</a>, which you reference in a
         * <a>RegexPatternSetReferenceStatement</a>, to have WAF inspect a web request
         * component for the specified patterns.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CreateRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRegexPatternSetOutcome CreateRegexPatternSet(const Model::CreateRegexPatternSetRequest& request) const;

        /**
         * A Callable wrapper for CreateRegexPatternSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRegexPatternSetOutcomeCallable CreateRegexPatternSetCallable(const Model::CreateRegexPatternSetRequest& request) const;

        /**
         * An Async wrapper for CreateRegexPatternSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRegexPatternSetAsync(const Model::CreateRegexPatternSetRequest& request, const CreateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <a>RuleGroup</a> per the specifications provided. </p> <p> A rule
         * group defines a collection of rules to inspect and control web requests that you
         * can use in a <a>WebACL</a>. When you create a rule group, you define an
         * immutable capacity limit. If you update a rule group, you must stay within the
         * capacity. This allows others to reuse the rule group with confidence in its
         * capacity requirements. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CreateRuleGroup">AWS
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
         * <p>Creates a <a>WebACL</a> per the specifications provided.</p> <p> A web ACL
         * defines a collection of rules to use to inspect and control web requests. Each
         * rule has an action defined (allow, block, or count) for requests that match the
         * statement of the rule. In the web ACL, you assign a default action to take
         * (allow, block) for any request that does not match any of the rules. The rules
         * in a web ACL can be a combination of the types <a>Rule</a>, <a>RuleGroup</a>,
         * and managed rule group. You can associate a web ACL with one or more Amazon Web
         * Services resources to protect. The resources can be an Amazon CloudFront
         * distribution, an Amazon API Gateway REST API, an Application Load Balancer, an
         * AppSync GraphQL API, or an Amazon Cognito user pool. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CreateWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWebACLOutcome CreateWebACL(const Model::CreateWebACLRequest& request) const;

        /**
         * A Callable wrapper for CreateWebACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWebACLOutcomeCallable CreateWebACLCallable(const Model::CreateWebACLRequest& request) const;

        /**
         * An Async wrapper for CreateWebACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWebACLAsync(const Model::CreateWebACLRequest& request, const CreateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes all rule groups that are managed by Firewall Manager for the
         * specified web ACL. </p> <p>You can only use this if
         * <code>ManagedByFirewallManager</code> is false in the specified <a>WebACL</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteFirewallManagerRuleGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFirewallManagerRuleGroupsOutcome DeleteFirewallManagerRuleGroups(const Model::DeleteFirewallManagerRuleGroupsRequest& request) const;

        /**
         * A Callable wrapper for DeleteFirewallManagerRuleGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFirewallManagerRuleGroupsOutcomeCallable DeleteFirewallManagerRuleGroupsCallable(const Model::DeleteFirewallManagerRuleGroupsRequest& request) const;

        /**
         * An Async wrapper for DeleteFirewallManagerRuleGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFirewallManagerRuleGroupsAsync(const Model::DeleteFirewallManagerRuleGroupsRequest& request, const DeleteFirewallManagerRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified <a>IPSet</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIPSetOutcome DeleteIPSet(const Model::DeleteIPSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteIPSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIPSetOutcomeCallable DeleteIPSetCallable(const Model::DeleteIPSetRequest& request) const;

        /**
         * An Async wrapper for DeleteIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIPSetAsync(const Model::DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the <a>LoggingConfiguration</a> from the specified web
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoggingConfigurationOutcome DeleteLoggingConfiguration(const Model::DeleteLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoggingConfigurationOutcomeCallable DeleteLoggingConfigurationCallable(const Model::DeleteLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoggingConfigurationAsync(const Model::DeleteLoggingConfigurationRequest& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes an IAM policy from the specified rule group.</p> <p>You
         * must be the owner of the rule group to perform this operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeletePermissionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePermissionPolicyOutcome DeletePermissionPolicy(const Model::DeletePermissionPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeletePermissionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePermissionPolicyOutcomeCallable DeletePermissionPolicyCallable(const Model::DeletePermissionPolicyRequest& request) const;

        /**
         * An Async wrapper for DeletePermissionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePermissionPolicyAsync(const Model::DeletePermissionPolicyRequest& request, const DeletePermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified <a>RegexPatternSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegexPatternSetOutcome DeleteRegexPatternSet(const Model::DeleteRegexPatternSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteRegexPatternSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRegexPatternSetOutcomeCallable DeleteRegexPatternSetCallable(const Model::DeleteRegexPatternSetRequest& request) const;

        /**
         * An Async wrapper for DeleteRegexPatternSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRegexPatternSetAsync(const Model::DeleteRegexPatternSetRequest& request, const DeleteRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified <a>RuleGroup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteRuleGroup">AWS
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
         * <p>Deletes the specified <a>WebACL</a>. </p> <p>You can only use this if
         * <code>ManagedByFirewallManager</code> is false in the specified <a>WebACL</a>.
         * </p>  <p>Before deleting any web ACL, first disassociate it from all
         * resources.</p> <ul> <li> <p>To retrieve a list of the resources that are
         * associated with a web ACL, use the following calls:</p> <ul> <li> <p>For
         * regional resources, call <a>ListResourcesForWebACL</a>.</p> </li> <li> <p>For
         * Amazon CloudFront distributions, use the CloudFront call
         * <code>ListDistributionsByWebACLId</code>. For information, see <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_ListDistributionsByWebACLId.html">ListDistributionsByWebACLId</a>.</p>
         * </li> </ul> </li> <li> <p>To disassociate a resource from a web ACL, use the
         * following calls:</p> <ul> <li> <p>For regional resources, call
         * <a>DisassociateWebACL</a>.</p> </li> <li> <p>For Amazon CloudFront
         * distributions, provide an empty web ACL ID in the CloudFront call
         * <code>UpdateDistribution</code>. For information, see <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>.</p>
         * </li> </ul> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWebACLOutcome DeleteWebACL(const Model::DeleteWebACLRequest& request) const;

        /**
         * A Callable wrapper for DeleteWebACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWebACLOutcomeCallable DeleteWebACLCallable(const Model::DeleteWebACLRequest& request) const;

        /**
         * An Async wrapper for DeleteWebACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWebACLAsync(const Model::DeleteWebACLRequest& request, const DeleteWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides high-level information for a managed rule group, including
         * descriptions of the rules. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DescribeManagedRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeManagedRuleGroupOutcome DescribeManagedRuleGroup(const Model::DescribeManagedRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeManagedRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeManagedRuleGroupOutcomeCallable DescribeManagedRuleGroupCallable(const Model::DescribeManagedRuleGroupRequest& request) const;

        /**
         * An Async wrapper for DescribeManagedRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeManagedRuleGroupAsync(const Model::DescribeManagedRuleGroupRequest& request, const DescribeManagedRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified regional application resource from any existing
         * web ACL association. A resource can have at most one web ACL association. A
         * regional application can be an Application Load Balancer (ALB), an Amazon API
         * Gateway REST API, an AppSync GraphQL API, or an Amazon Cognito user pool. </p>
         * <p>For Amazon CloudFront, don't use this call. Instead, use your CloudFront
         * distribution configuration. To disassociate a web ACL, provide an empty web ACL
         * ID in the CloudFront call <code>UpdateDistribution</code>. For information, see
         * <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DisassociateWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateWebACLOutcome DisassociateWebACL(const Model::DisassociateWebACLRequest& request) const;

        /**
         * A Callable wrapper for DisassociateWebACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateWebACLOutcomeCallable DisassociateWebACLCallable(const Model::DisassociateWebACLRequest& request) const;

        /**
         * An Async wrapper for DisassociateWebACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateWebACLAsync(const Model::DisassociateWebACLRequest& request, const DisassociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a presigned download URL for the specified release of the mobile
         * SDK.</p> <p>The mobile SDK is not generally available. Customers who have access
         * to the mobile SDK can use it to establish and manage WAF tokens for use in
         * HTTP(S) requests from a mobile device to WAF. For more information, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-application-integration.html">WAF
         * client application integration</a> in the <i>WAF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GenerateMobileSdkReleaseUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateMobileSdkReleaseUrlOutcome GenerateMobileSdkReleaseUrl(const Model::GenerateMobileSdkReleaseUrlRequest& request) const;

        /**
         * A Callable wrapper for GenerateMobileSdkReleaseUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateMobileSdkReleaseUrlOutcomeCallable GenerateMobileSdkReleaseUrlCallable(const Model::GenerateMobileSdkReleaseUrlRequest& request) const;

        /**
         * An Async wrapper for GenerateMobileSdkReleaseUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateMobileSdkReleaseUrlAsync(const Model::GenerateMobileSdkReleaseUrlRequest& request, const GenerateMobileSdkReleaseUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified <a>IPSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetIPSet">AWS API
         * Reference</a></p>
         */
        virtual Model::GetIPSetOutcome GetIPSet(const Model::GetIPSetRequest& request) const;

        /**
         * A Callable wrapper for GetIPSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIPSetOutcomeCallable GetIPSetCallable(const Model::GetIPSetRequest& request) const;

        /**
         * An Async wrapper for GetIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIPSetAsync(const Model::GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <a>LoggingConfiguration</a> for the specified web
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoggingConfigurationOutcome GetLoggingConfiguration(const Model::GetLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoggingConfigurationOutcomeCallable GetLoggingConfigurationCallable(const Model::GetLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoggingConfigurationAsync(const Model::GetLoggingConfigurationRequest& request, const GetLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified managed rule set. </p>  <p>This is intended for
         * use only by vendors of managed rule sets. Vendors are Amazon Web Services and
         * Amazon Web Services Marketplace sellers. </p> <p>Vendors, you can use the
         * managed rule set APIs to provide controlled rollout of your versioned managed
         * rule group offerings for your customers. The APIs are
         * <code>ListManagedRuleSets</code>, <code>GetManagedRuleSet</code>,
         * <code>PutManagedRuleSetVersions</code>, and
         * <code>UpdateManagedRuleSetVersionExpiryDate</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetManagedRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetManagedRuleSetOutcome GetManagedRuleSet(const Model::GetManagedRuleSetRequest& request) const;

        /**
         * A Callable wrapper for GetManagedRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetManagedRuleSetOutcomeCallable GetManagedRuleSetCallable(const Model::GetManagedRuleSetRequest& request) const;

        /**
         * An Async wrapper for GetManagedRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetManagedRuleSetAsync(const Model::GetManagedRuleSetRequest& request, const GetManagedRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information for the specified mobile SDK release, including release
         * notes and tags.</p> <p>The mobile SDK is not generally available. Customers who
         * have access to the mobile SDK can use it to establish and manage WAF tokens for
         * use in HTTP(S) requests from a mobile device to WAF. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-application-integration.html">WAF
         * client application integration</a> in the <i>WAF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetMobileSdkRelease">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMobileSdkReleaseOutcome GetMobileSdkRelease(const Model::GetMobileSdkReleaseRequest& request) const;

        /**
         * A Callable wrapper for GetMobileSdkRelease that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMobileSdkReleaseOutcomeCallable GetMobileSdkReleaseCallable(const Model::GetMobileSdkReleaseRequest& request) const;

        /**
         * An Async wrapper for GetMobileSdkRelease that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMobileSdkReleaseAsync(const Model::GetMobileSdkReleaseRequest& request, const GetMobileSdkReleaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the IAM policy that is attached to the specified rule group.</p>
         * <p>You must be the owner of the rule group to perform this
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetPermissionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPermissionPolicyOutcome GetPermissionPolicy(const Model::GetPermissionPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetPermissionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPermissionPolicyOutcomeCallable GetPermissionPolicyCallable(const Model::GetPermissionPolicyRequest& request) const;

        /**
         * An Async wrapper for GetPermissionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPermissionPolicyAsync(const Model::GetPermissionPolicyRequest& request, const GetPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the keys that are currently blocked by a rate-based rule instance.
         * The maximum number of managed keys that can be blocked for a single rate-based
         * rule instance is 10,000. If more than 10,000 addresses exceed the rate limit,
         * those with the highest rates are blocked.</p> <p>For a rate-based rule that
         * you've defined inside a rule group, provide the name of the rule group reference
         * statement in your request, in addition to the rate-based rule name and the web
         * ACL name. </p> <p>WAF monitors web requests and manages keys independently for
         * each unique combination of web ACL, optional rule group, and rate-based rule.
         * For example, if you define a rate-based rule inside a rule group, and then use
         * the rule group in a web ACL, WAF monitors web requests and manages keys for that
         * web ACL, rule group reference statement, and rate-based rule instance. If you
         * use the same rule group in a second web ACL, WAF monitors web requests and
         * manages keys for this second usage completely independent of your first.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetRateBasedStatementManagedKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRateBasedStatementManagedKeysOutcome GetRateBasedStatementManagedKeys(const Model::GetRateBasedStatementManagedKeysRequest& request) const;

        /**
         * A Callable wrapper for GetRateBasedStatementManagedKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRateBasedStatementManagedKeysOutcomeCallable GetRateBasedStatementManagedKeysCallable(const Model::GetRateBasedStatementManagedKeysRequest& request) const;

        /**
         * An Async wrapper for GetRateBasedStatementManagedKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRateBasedStatementManagedKeysAsync(const Model::GetRateBasedStatementManagedKeysRequest& request, const GetRateBasedStatementManagedKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified <a>RegexPatternSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegexPatternSetOutcome GetRegexPatternSet(const Model::GetRegexPatternSetRequest& request) const;

        /**
         * A Callable wrapper for GetRegexPatternSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRegexPatternSetOutcomeCallable GetRegexPatternSetCallable(const Model::GetRegexPatternSetRequest& request) const;

        /**
         * An Async wrapper for GetRegexPatternSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRegexPatternSetAsync(const Model::GetRegexPatternSetRequest& request, const GetRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified <a>RuleGroup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRuleGroupOutcome GetRuleGroup(const Model::GetRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for GetRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRuleGroupOutcomeCallable GetRuleGroupCallable(const Model::GetRuleGroupRequest& request) const;

        /**
         * An Async wrapper for GetRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRuleGroupAsync(const Model::GetRuleGroupRequest& request, const GetRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets detailed information about a specified number of requests--a
         * sample--that WAF randomly selects from among the first 5,000 requests that your
         * Amazon Web Services resource received during a time range that you choose. You
         * can specify a sample size of up to 500 requests, and you can specify any time
         * range in the previous three hours.</p> <p> <code>GetSampledRequests</code>
         * returns a time range, which is usually the time range that you specified.
         * However, if your resource (such as a CloudFront distribution) received 5,000
         * requests before the specified time range elapsed,
         * <code>GetSampledRequests</code> returns an updated time range. This new time
         * range indicates the actual period during which WAF selected the requests in the
         * sample.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetSampledRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSampledRequestsOutcome GetSampledRequests(const Model::GetSampledRequestsRequest& request) const;

        /**
         * A Callable wrapper for GetSampledRequests that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSampledRequestsOutcomeCallable GetSampledRequestsCallable(const Model::GetSampledRequestsRequest& request) const;

        /**
         * An Async wrapper for GetSampledRequests that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSampledRequestsAsync(const Model::GetSampledRequestsRequest& request, const GetSampledRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified <a>WebACL</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetWebACL">AWS API
         * Reference</a></p>
         */
        virtual Model::GetWebACLOutcome GetWebACL(const Model::GetWebACLRequest& request) const;

        /**
         * A Callable wrapper for GetWebACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWebACLOutcomeCallable GetWebACLCallable(const Model::GetWebACLRequest& request) const;

        /**
         * An Async wrapper for GetWebACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWebACLAsync(const Model::GetWebACLRequest& request, const GetWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the <a>WebACL</a> for the specified resource. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetWebACLForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWebACLForResourceOutcome GetWebACLForResource(const Model::GetWebACLForResourceRequest& request) const;

        /**
         * A Callable wrapper for GetWebACLForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWebACLForResourceOutcomeCallable GetWebACLForResourceCallable(const Model::GetWebACLForResourceRequest& request) const;

        /**
         * An Async wrapper for GetWebACLForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWebACLForResourceAsync(const Model::GetWebACLForResourceRequest& request, const GetWebACLForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the available versions for the specified managed rule
         * group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListAvailableManagedRuleGroupVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAvailableManagedRuleGroupVersionsOutcome ListAvailableManagedRuleGroupVersions(const Model::ListAvailableManagedRuleGroupVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListAvailableManagedRuleGroupVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAvailableManagedRuleGroupVersionsOutcomeCallable ListAvailableManagedRuleGroupVersionsCallable(const Model::ListAvailableManagedRuleGroupVersionsRequest& request) const;

        /**
         * An Async wrapper for ListAvailableManagedRuleGroupVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAvailableManagedRuleGroupVersionsAsync(const Model::ListAvailableManagedRuleGroupVersionsRequest& request, const ListAvailableManagedRuleGroupVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an array of managed rule groups that are available for you to use.
         * This list includes all Amazon Web Services Managed Rules rule groups and all of
         * the Amazon Web Services Marketplace managed rule groups that you're subscribed
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListAvailableManagedRuleGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAvailableManagedRuleGroupsOutcome ListAvailableManagedRuleGroups(const Model::ListAvailableManagedRuleGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListAvailableManagedRuleGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAvailableManagedRuleGroupsOutcomeCallable ListAvailableManagedRuleGroupsCallable(const Model::ListAvailableManagedRuleGroupsRequest& request) const;

        /**
         * An Async wrapper for ListAvailableManagedRuleGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAvailableManagedRuleGroupsAsync(const Model::ListAvailableManagedRuleGroupsRequest& request, const ListAvailableManagedRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an array of <a>IPSetSummary</a> objects for the IP sets that you
         * manage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListIPSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIPSetsOutcome ListIPSets(const Model::ListIPSetsRequest& request) const;

        /**
         * A Callable wrapper for ListIPSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIPSetsOutcomeCallable ListIPSetsCallable(const Model::ListIPSetsRequest& request) const;

        /**
         * An Async wrapper for ListIPSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIPSetsAsync(const Model::ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an array of your <a>LoggingConfiguration</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListLoggingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLoggingConfigurationsOutcome ListLoggingConfigurations(const Model::ListLoggingConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListLoggingConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLoggingConfigurationsOutcomeCallable ListLoggingConfigurationsCallable(const Model::ListLoggingConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListLoggingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLoggingConfigurationsAsync(const Model::ListLoggingConfigurationsRequest& request, const ListLoggingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the managed rule sets that you own. </p>  <p>This is intended
         * for use only by vendors of managed rule sets. Vendors are Amazon Web Services
         * and Amazon Web Services Marketplace sellers. </p> <p>Vendors, you can use the
         * managed rule set APIs to provide controlled rollout of your versioned managed
         * rule group offerings for your customers. The APIs are
         * <code>ListManagedRuleSets</code>, <code>GetManagedRuleSet</code>,
         * <code>PutManagedRuleSetVersions</code>, and
         * <code>UpdateManagedRuleSetVersionExpiryDate</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListManagedRuleSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedRuleSetsOutcome ListManagedRuleSets(const Model::ListManagedRuleSetsRequest& request) const;

        /**
         * A Callable wrapper for ListManagedRuleSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListManagedRuleSetsOutcomeCallable ListManagedRuleSetsCallable(const Model::ListManagedRuleSetsRequest& request) const;

        /**
         * An Async wrapper for ListManagedRuleSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListManagedRuleSetsAsync(const Model::ListManagedRuleSetsRequest& request, const ListManagedRuleSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of the available releases for the mobile SDK and the
         * specified device platform. </p> <p>The mobile SDK is not generally available.
         * Customers who have access to the mobile SDK can use it to establish and manage
         * WAF tokens for use in HTTP(S) requests from a mobile device to WAF. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-application-integration.html">WAF
         * client application integration</a> in the <i>WAF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListMobileSdkReleases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMobileSdkReleasesOutcome ListMobileSdkReleases(const Model::ListMobileSdkReleasesRequest& request) const;

        /**
         * A Callable wrapper for ListMobileSdkReleases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMobileSdkReleasesOutcomeCallable ListMobileSdkReleasesCallable(const Model::ListMobileSdkReleasesRequest& request) const;

        /**
         * An Async wrapper for ListMobileSdkReleases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMobileSdkReleasesAsync(const Model::ListMobileSdkReleasesRequest& request, const ListMobileSdkReleasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an array of <a>RegexPatternSetSummary</a> objects for the regex
         * pattern sets that you manage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListRegexPatternSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegexPatternSetsOutcome ListRegexPatternSets(const Model::ListRegexPatternSetsRequest& request) const;

        /**
         * A Callable wrapper for ListRegexPatternSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRegexPatternSetsOutcomeCallable ListRegexPatternSetsCallable(const Model::ListRegexPatternSetsRequest& request) const;

        /**
         * An Async wrapper for ListRegexPatternSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRegexPatternSetsAsync(const Model::ListRegexPatternSetsRequest& request, const ListRegexPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an array of the Amazon Resource Names (ARNs) for the regional
         * resources that are associated with the specified web ACL. If you want the list
         * of Amazon CloudFront resources, use the CloudFront call
         * <code>ListDistributionsByWebACLId</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListResourcesForWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesForWebACLOutcome ListResourcesForWebACL(const Model::ListResourcesForWebACLRequest& request) const;

        /**
         * A Callable wrapper for ListResourcesForWebACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourcesForWebACLOutcomeCallable ListResourcesForWebACLCallable(const Model::ListResourcesForWebACLRequest& request) const;

        /**
         * An Async wrapper for ListResourcesForWebACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourcesForWebACLAsync(const Model::ListResourcesForWebACLRequest& request, const ListResourcesForWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an array of <a>RuleGroupSummary</a> objects for the rule groups
         * that you manage. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListRuleGroups">AWS
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
         * <p>Retrieves the <a>TagInfoForResource</a> for the specified resource. Tags are
         * key:value pairs that you can use to categorize and manage your resources, for
         * purposes like billing. For example, you might set the tag key to "customer" and
         * the value to the customer name or ID. You can specify one or more tags to add to
         * each Amazon Web Services resource, up to 50 tags for a resource.</p> <p>You can
         * tag the Amazon Web Services resources that you manage through WAF: web ACLs,
         * rule groups, IP sets, and regex pattern sets. You can't manage or view tags
         * through the WAF console. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListTagsForResource">AWS
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
         * <p>Retrieves an array of <a>WebACLSummary</a> objects for the web ACLs that you
         * manage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListWebACLs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWebACLsOutcome ListWebACLs(const Model::ListWebACLsRequest& request) const;

        /**
         * A Callable wrapper for ListWebACLs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWebACLsOutcomeCallable ListWebACLsCallable(const Model::ListWebACLsRequest& request) const;

        /**
         * An Async wrapper for ListWebACLs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWebACLsAsync(const Model::ListWebACLsRequest& request, const ListWebACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the specified <a>LoggingConfiguration</a>, to start logging from a
         * web ACL, according to the configuration provided. </p>  <p>You can define
         * one logging destination per web ACL.</p>  <p>You can access information
         * about the traffic that WAF inspects using the following steps:</p> <ol> <li>
         * <p>Create your logging destination. You can use an Amazon CloudWatch Logs log
         * group, an Amazon Simple Storage Service (Amazon S3) bucket, or an Amazon Kinesis
         * Data Firehose. </p> <p>The name that you give the destination must start with
         * <code>aws-waf-logs-</code>. Depending on the type of destination, you might need
         * to configure additional settings or permissions. </p> <p>For configuration
         * requirements and pricing information for each destination type, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
         * web ACL traffic</a> in the <i>WAF Developer Guide</i>.</p> </li> <li>
         * <p>Associate your logging destination to your web ACL using a
         * <code>PutLoggingConfiguration</code> request.</p> </li> </ol> <p>When you
         * successfully enable logging using a <code>PutLoggingConfiguration</code>
         * request, WAF creates an additional role or policy that is required to write logs
         * to the logging destination. For an Amazon CloudWatch Logs log group, WAF creates
         * a resource policy on the log group. For an Amazon S3 bucket, WAF creates a
         * bucket policy. For an Amazon Kinesis Data Firehose, WAF creates a service-linked
         * role.</p> <p>For additional information about web ACL logging, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
         * web ACL traffic information</a> in the <i>WAF Developer Guide</i>.</p> 
         * <p>This operation completely replaces the mutable specifications that you
         * already have for the logging configuration with the ones that you provide to
         * this call. To modify the logging configuration, retrieve it by calling
         * <a>GetLoggingConfiguration</a>, update the settings as needed, and then provide
         * the complete logging configuration specification to this call.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/PutLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLoggingConfigurationOutcome PutLoggingConfiguration(const Model::PutLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutLoggingConfigurationOutcomeCallable PutLoggingConfigurationCallable(const Model::PutLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLoggingConfigurationAsync(const Model::PutLoggingConfigurationRequest& request, const PutLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Defines the versions of your managed rule set that you are offering to the
         * customers. Customers see your offerings as managed rule groups with
         * versioning.</p>  <p>This is intended for use only by vendors of managed
         * rule sets. Vendors are Amazon Web Services and Amazon Web Services Marketplace
         * sellers. </p> <p>Vendors, you can use the managed rule set APIs to provide
         * controlled rollout of your versioned managed rule group offerings for your
         * customers. The APIs are <code>ListManagedRuleSets</code>,
         * <code>GetManagedRuleSet</code>, <code>PutManagedRuleSetVersions</code>, and
         * <code>UpdateManagedRuleSetVersionExpiryDate</code>.</p>  <p>Customers
         * retrieve their managed rule group list by calling
         * <a>ListAvailableManagedRuleGroups</a>. The name that you provide here for your
         * managed rule set is the name the customer sees for the corresponding managed
         * rule group. Customers can retrieve the available versions for a managed rule
         * group by calling <a>ListAvailableManagedRuleGroupVersions</a>. You provide a
         * rule group specification for each version. For each managed rule set, you must
         * specify a version that you recommend using. </p> <p>To initiate the expiration
         * of a managed rule group version, use
         * <a>UpdateManagedRuleSetVersionExpiryDate</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/PutManagedRuleSetVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutManagedRuleSetVersionsOutcome PutManagedRuleSetVersions(const Model::PutManagedRuleSetVersionsRequest& request) const;

        /**
         * A Callable wrapper for PutManagedRuleSetVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutManagedRuleSetVersionsOutcomeCallable PutManagedRuleSetVersionsCallable(const Model::PutManagedRuleSetVersionsRequest& request) const;

        /**
         * An Async wrapper for PutManagedRuleSetVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutManagedRuleSetVersionsAsync(const Model::PutManagedRuleSetVersionsRequest& request, const PutManagedRuleSetVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches an IAM policy to the specified resource. Use this to share a rule
         * group across accounts.</p> <p>You must be the owner of the rule group to perform
         * this operation.</p> <p>This action is subject to the following restrictions:</p>
         * <ul> <li> <p>You can attach only one policy with each
         * <code>PutPermissionPolicy</code> request.</p> </li> <li> <p>The ARN in the
         * request must be a valid WAF <a>RuleGroup</a> ARN and the rule group must exist
         * in the same Region.</p> </li> <li> <p>The user making the request must be the
         * owner of the rule group.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/PutPermissionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPermissionPolicyOutcome PutPermissionPolicy(const Model::PutPermissionPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutPermissionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPermissionPolicyOutcomeCallable PutPermissionPolicyCallable(const Model::PutPermissionPolicyRequest& request) const;

        /**
         * An Async wrapper for PutPermissionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPermissionPolicyAsync(const Model::PutPermissionPolicyRequest& request, const PutPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates tags with the specified Amazon Web Services resource. Tags are
         * key:value pairs that you can use to categorize and manage your resources, for
         * purposes like billing. For example, you might set the tag key to "customer" and
         * the value to the customer name or ID. You can specify one or more tags to add to
         * each Amazon Web Services resource, up to 50 tags for a resource.</p> <p>You can
         * tag the Amazon Web Services resources that you manage through WAF: web ACLs,
         * rule groups, IP sets, and regex pattern sets. You can't manage or view tags
         * through the WAF console. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/TagResource">AWS
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
         * <p>Disassociates tags from an Amazon Web Services resource. Tags are key:value
         * pairs that you can associate with Amazon Web Services resources. For example,
         * the tag key might be "customer" and the tag value might be "companyA." You can
         * specify one or more tags to add to each container. You can add up to 50 tags to
         * each Amazon Web Services resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UntagResource">AWS
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
         * <p>Updates the specified <a>IPSet</a>. </p>  <p>This operation completely
         * replaces the mutable specifications that you already have for the IP set with
         * the ones that you provide to this call. To modify the IP set, retrieve it by
         * calling <a>GetIPSet</a>, update the settings as needed, and then provide the
         * complete IP set specification to this call.</p>  <p>When you make changes
         * to web ACLs or web ACL components, like rules and rule groups, WAF propagates
         * the changes everywhere that the web ACL and its components are stored and used.
         * Your changes are applied within seconds, but there might be a brief period of
         * inconsistency when the changes have arrived in some places and not in others.
         * So, for example, if you change a rule action setting, the action might be the
         * old action in one area and the new action in another area. Or if you add an IP
         * address to an IP set used in a blocking rule, the new address might briefly be
         * blocked in one area while still allowed in another. This temporary inconsistency
         * can occur when you first associate a web ACL with an Amazon Web Services
         * resource and when you change a web ACL that is already associated with a
         * resource. Generally, any inconsistencies of this type last only a few
         * seconds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UpdateIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIPSetOutcome UpdateIPSet(const Model::UpdateIPSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateIPSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIPSetOutcomeCallable UpdateIPSetCallable(const Model::UpdateIPSetRequest& request) const;

        /**
         * An Async wrapper for UpdateIPSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIPSetAsync(const Model::UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the expiration information for your managed rule set. Use this to
         * initiate the expiration of a managed rule group version. After you initiate
         * expiration for a version, WAF excludes it from the response to
         * <a>ListAvailableManagedRuleGroupVersions</a> for the managed rule group. </p>
         *  <p>This is intended for use only by vendors of managed rule sets. Vendors
         * are Amazon Web Services and Amazon Web Services Marketplace sellers. </p>
         * <p>Vendors, you can use the managed rule set APIs to provide controlled rollout
         * of your versioned managed rule group offerings for your customers. The APIs are
         * <code>ListManagedRuleSets</code>, <code>GetManagedRuleSet</code>,
         * <code>PutManagedRuleSetVersions</code>, and
         * <code>UpdateManagedRuleSetVersionExpiryDate</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UpdateManagedRuleSetVersionExpiryDate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateManagedRuleSetVersionExpiryDateOutcome UpdateManagedRuleSetVersionExpiryDate(const Model::UpdateManagedRuleSetVersionExpiryDateRequest& request) const;

        /**
         * A Callable wrapper for UpdateManagedRuleSetVersionExpiryDate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateManagedRuleSetVersionExpiryDateOutcomeCallable UpdateManagedRuleSetVersionExpiryDateCallable(const Model::UpdateManagedRuleSetVersionExpiryDateRequest& request) const;

        /**
         * An Async wrapper for UpdateManagedRuleSetVersionExpiryDate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateManagedRuleSetVersionExpiryDateAsync(const Model::UpdateManagedRuleSetVersionExpiryDateRequest& request, const UpdateManagedRuleSetVersionExpiryDateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified <a>RegexPatternSet</a>.</p>  <p>This operation
         * completely replaces the mutable specifications that you already have for the
         * regex pattern set with the ones that you provide to this call. To modify the
         * regex pattern set, retrieve it by calling <a>GetRegexPatternSet</a>, update the
         * settings as needed, and then provide the complete regex pattern set
         * specification to this call.</p>  <p>When you make changes to web ACLs or
         * web ACL components, like rules and rule groups, WAF propagates the changes
         * everywhere that the web ACL and its components are stored and used. Your changes
         * are applied within seconds, but there might be a brief period of inconsistency
         * when the changes have arrived in some places and not in others. So, for example,
         * if you change a rule action setting, the action might be the old action in one
         * area and the new action in another area. Or if you add an IP address to an IP
         * set used in a blocking rule, the new address might briefly be blocked in one
         * area while still allowed in another. This temporary inconsistency can occur when
         * you first associate a web ACL with an Amazon Web Services resource and when you
         * change a web ACL that is already associated with a resource. Generally, any
         * inconsistencies of this type last only a few seconds.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UpdateRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRegexPatternSetOutcome UpdateRegexPatternSet(const Model::UpdateRegexPatternSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateRegexPatternSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRegexPatternSetOutcomeCallable UpdateRegexPatternSetCallable(const Model::UpdateRegexPatternSetRequest& request) const;

        /**
         * An Async wrapper for UpdateRegexPatternSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRegexPatternSetAsync(const Model::UpdateRegexPatternSetRequest& request, const UpdateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified <a>RuleGroup</a>.</p>  <p>This operation
         * completely replaces the mutable specifications that you already have for the
         * rule group with the ones that you provide to this call. To modify the rule
         * group, retrieve it by calling <a>GetRuleGroup</a>, update the settings as
         * needed, and then provide the complete rule group specification to this call.</p>
         *  <p>When you make changes to web ACLs or web ACL components, like rules
         * and rule groups, WAF propagates the changes everywhere that the web ACL and its
         * components are stored and used. Your changes are applied within seconds, but
         * there might be a brief period of inconsistency when the changes have arrived in
         * some places and not in others. So, for example, if you change a rule action
         * setting, the action might be the old action in one area and the new action in
         * another area. Or if you add an IP address to an IP set used in a blocking rule,
         * the new address might briefly be blocked in one area while still allowed in
         * another. This temporary inconsistency can occur when you first associate a web
         * ACL with an Amazon Web Services resource and when you change a web ACL that is
         * already associated with a resource. Generally, any inconsistencies of this type
         * last only a few seconds.</p> <p> A rule group defines a collection of rules to
         * inspect and control web requests that you can use in a <a>WebACL</a>. When you
         * create a rule group, you define an immutable capacity limit. If you update a
         * rule group, you must stay within the capacity. This allows others to reuse the
         * rule group with confidence in its capacity requirements. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UpdateRuleGroup">AWS
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
         * <p>Updates the specified <a>WebACL</a>. While updating a web ACL, WAF provides
         * continuous coverage to the resources that you have associated with the web ACL.
         * </p> <p>When you make changes to web ACLs or web ACL components, like rules and
         * rule groups, WAF propagates the changes everywhere that the web ACL and its
         * components are stored and used. Your changes are applied within seconds, but
         * there might be a brief period of inconsistency when the changes have arrived in
         * some places and not in others. So, for example, if you change a rule action
         * setting, the action might be the old action in one area and the new action in
         * another area. Or if you add an IP address to an IP set used in a blocking rule,
         * the new address might briefly be blocked in one area while still allowed in
         * another. This temporary inconsistency can occur when you first associate a web
         * ACL with an Amazon Web Services resource and when you change a web ACL that is
         * already associated with a resource. Generally, any inconsistencies of this type
         * last only a few seconds.</p>  <p>This operation completely replaces the
         * mutable specifications that you already have for the web ACL with the ones that
         * you provide to this call. To modify the web ACL, retrieve it by calling
         * <a>GetWebACL</a>, update the settings as needed, and then provide the complete
         * web ACL specification to this call.</p>  <p> A web ACL defines a
         * collection of rules to use to inspect and control web requests. Each rule has an
         * action defined (allow, block, or count) for requests that match the statement of
         * the rule. In the web ACL, you assign a default action to take (allow, block) for
         * any request that does not match any of the rules. The rules in a web ACL can be
         * a combination of the types <a>Rule</a>, <a>RuleGroup</a>, and managed rule
         * group. You can associate a web ACL with one or more Amazon Web Services
         * resources to protect. The resources can be an Amazon CloudFront distribution, an
         * Amazon API Gateway REST API, an Application Load Balancer, an AppSync GraphQL
         * API, or an Amazon Cognito user pool. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UpdateWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWebACLOutcome UpdateWebACL(const Model::UpdateWebACLRequest& request) const;

        /**
         * A Callable wrapper for UpdateWebACL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWebACLOutcomeCallable UpdateWebACLCallable(const Model::UpdateWebACLRequest& request) const;

        /**
         * An Async wrapper for UpdateWebACL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWebACLAsync(const Model::UpdateWebACLRequest& request, const UpdateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<WAFV2EndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<WAFV2Client>;
      void init(const WAFV2ClientConfiguration& clientConfiguration);

      WAFV2ClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<WAFV2EndpointProviderBase> m_endpointProvider;
  };

} // namespace WAFV2
} // namespace Aws
