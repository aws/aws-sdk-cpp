/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Errors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/AssociateWebACLResult.h>
#include <aws/wafv2/model/CheckCapacityResult.h>
#include <aws/wafv2/model/CreateIPSetResult.h>
#include <aws/wafv2/model/CreateRegexPatternSetResult.h>
#include <aws/wafv2/model/CreateRuleGroupResult.h>
#include <aws/wafv2/model/CreateWebACLResult.h>
#include <aws/wafv2/model/DeleteFirewallManagerRuleGroupsResult.h>
#include <aws/wafv2/model/DeleteIPSetResult.h>
#include <aws/wafv2/model/DeleteLoggingConfigurationResult.h>
#include <aws/wafv2/model/DeletePermissionPolicyResult.h>
#include <aws/wafv2/model/DeleteRegexPatternSetResult.h>
#include <aws/wafv2/model/DeleteRuleGroupResult.h>
#include <aws/wafv2/model/DeleteWebACLResult.h>
#include <aws/wafv2/model/DescribeManagedRuleGroupResult.h>
#include <aws/wafv2/model/DisassociateWebACLResult.h>
#include <aws/wafv2/model/GetIPSetResult.h>
#include <aws/wafv2/model/GetLoggingConfigurationResult.h>
#include <aws/wafv2/model/GetPermissionPolicyResult.h>
#include <aws/wafv2/model/GetRateBasedStatementManagedKeysResult.h>
#include <aws/wafv2/model/GetRegexPatternSetResult.h>
#include <aws/wafv2/model/GetRuleGroupResult.h>
#include <aws/wafv2/model/GetSampledRequestsResult.h>
#include <aws/wafv2/model/GetWebACLResult.h>
#include <aws/wafv2/model/GetWebACLForResourceResult.h>
#include <aws/wafv2/model/ListAvailableManagedRuleGroupsResult.h>
#include <aws/wafv2/model/ListIPSetsResult.h>
#include <aws/wafv2/model/ListLoggingConfigurationsResult.h>
#include <aws/wafv2/model/ListRegexPatternSetsResult.h>
#include <aws/wafv2/model/ListResourcesForWebACLResult.h>
#include <aws/wafv2/model/ListRuleGroupsResult.h>
#include <aws/wafv2/model/ListTagsForResourceResult.h>
#include <aws/wafv2/model/ListWebACLsResult.h>
#include <aws/wafv2/model/PutLoggingConfigurationResult.h>
#include <aws/wafv2/model/PutPermissionPolicyResult.h>
#include <aws/wafv2/model/TagResourceResult.h>
#include <aws/wafv2/model/UntagResourceResult.h>
#include <aws/wafv2/model/UpdateIPSetResult.h>
#include <aws/wafv2/model/UpdateRegexPatternSetResult.h>
#include <aws/wafv2/model/UpdateRuleGroupResult.h>
#include <aws/wafv2/model/UpdateWebACLResult.h>
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

namespace WAFV2
{

namespace Model
{
        class AssociateWebACLRequest;
        class CheckCapacityRequest;
        class CreateIPSetRequest;
        class CreateRegexPatternSetRequest;
        class CreateRuleGroupRequest;
        class CreateWebACLRequest;
        class DeleteFirewallManagerRuleGroupsRequest;
        class DeleteIPSetRequest;
        class DeleteLoggingConfigurationRequest;
        class DeletePermissionPolicyRequest;
        class DeleteRegexPatternSetRequest;
        class DeleteRuleGroupRequest;
        class DeleteWebACLRequest;
        class DescribeManagedRuleGroupRequest;
        class DisassociateWebACLRequest;
        class GetIPSetRequest;
        class GetLoggingConfigurationRequest;
        class GetPermissionPolicyRequest;
        class GetRateBasedStatementManagedKeysRequest;
        class GetRegexPatternSetRequest;
        class GetRuleGroupRequest;
        class GetSampledRequestsRequest;
        class GetWebACLRequest;
        class GetWebACLForResourceRequest;
        class ListAvailableManagedRuleGroupsRequest;
        class ListIPSetsRequest;
        class ListLoggingConfigurationsRequest;
        class ListRegexPatternSetsRequest;
        class ListResourcesForWebACLRequest;
        class ListRuleGroupsRequest;
        class ListTagsForResourceRequest;
        class ListWebACLsRequest;
        class PutLoggingConfigurationRequest;
        class PutPermissionPolicyRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateIPSetRequest;
        class UpdateRegexPatternSetRequest;
        class UpdateRuleGroupRequest;
        class UpdateWebACLRequest;

        typedef Aws::Utils::Outcome<AssociateWebACLResult, WAFV2Error> AssociateWebACLOutcome;
        typedef Aws::Utils::Outcome<CheckCapacityResult, WAFV2Error> CheckCapacityOutcome;
        typedef Aws::Utils::Outcome<CreateIPSetResult, WAFV2Error> CreateIPSetOutcome;
        typedef Aws::Utils::Outcome<CreateRegexPatternSetResult, WAFV2Error> CreateRegexPatternSetOutcome;
        typedef Aws::Utils::Outcome<CreateRuleGroupResult, WAFV2Error> CreateRuleGroupOutcome;
        typedef Aws::Utils::Outcome<CreateWebACLResult, WAFV2Error> CreateWebACLOutcome;
        typedef Aws::Utils::Outcome<DeleteFirewallManagerRuleGroupsResult, WAFV2Error> DeleteFirewallManagerRuleGroupsOutcome;
        typedef Aws::Utils::Outcome<DeleteIPSetResult, WAFV2Error> DeleteIPSetOutcome;
        typedef Aws::Utils::Outcome<DeleteLoggingConfigurationResult, WAFV2Error> DeleteLoggingConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeletePermissionPolicyResult, WAFV2Error> DeletePermissionPolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteRegexPatternSetResult, WAFV2Error> DeleteRegexPatternSetOutcome;
        typedef Aws::Utils::Outcome<DeleteRuleGroupResult, WAFV2Error> DeleteRuleGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteWebACLResult, WAFV2Error> DeleteWebACLOutcome;
        typedef Aws::Utils::Outcome<DescribeManagedRuleGroupResult, WAFV2Error> DescribeManagedRuleGroupOutcome;
        typedef Aws::Utils::Outcome<DisassociateWebACLResult, WAFV2Error> DisassociateWebACLOutcome;
        typedef Aws::Utils::Outcome<GetIPSetResult, WAFV2Error> GetIPSetOutcome;
        typedef Aws::Utils::Outcome<GetLoggingConfigurationResult, WAFV2Error> GetLoggingConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetPermissionPolicyResult, WAFV2Error> GetPermissionPolicyOutcome;
        typedef Aws::Utils::Outcome<GetRateBasedStatementManagedKeysResult, WAFV2Error> GetRateBasedStatementManagedKeysOutcome;
        typedef Aws::Utils::Outcome<GetRegexPatternSetResult, WAFV2Error> GetRegexPatternSetOutcome;
        typedef Aws::Utils::Outcome<GetRuleGroupResult, WAFV2Error> GetRuleGroupOutcome;
        typedef Aws::Utils::Outcome<GetSampledRequestsResult, WAFV2Error> GetSampledRequestsOutcome;
        typedef Aws::Utils::Outcome<GetWebACLResult, WAFV2Error> GetWebACLOutcome;
        typedef Aws::Utils::Outcome<GetWebACLForResourceResult, WAFV2Error> GetWebACLForResourceOutcome;
        typedef Aws::Utils::Outcome<ListAvailableManagedRuleGroupsResult, WAFV2Error> ListAvailableManagedRuleGroupsOutcome;
        typedef Aws::Utils::Outcome<ListIPSetsResult, WAFV2Error> ListIPSetsOutcome;
        typedef Aws::Utils::Outcome<ListLoggingConfigurationsResult, WAFV2Error> ListLoggingConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListRegexPatternSetsResult, WAFV2Error> ListRegexPatternSetsOutcome;
        typedef Aws::Utils::Outcome<ListResourcesForWebACLResult, WAFV2Error> ListResourcesForWebACLOutcome;
        typedef Aws::Utils::Outcome<ListRuleGroupsResult, WAFV2Error> ListRuleGroupsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, WAFV2Error> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListWebACLsResult, WAFV2Error> ListWebACLsOutcome;
        typedef Aws::Utils::Outcome<PutLoggingConfigurationResult, WAFV2Error> PutLoggingConfigurationOutcome;
        typedef Aws::Utils::Outcome<PutPermissionPolicyResult, WAFV2Error> PutPermissionPolicyOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, WAFV2Error> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, WAFV2Error> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateIPSetResult, WAFV2Error> UpdateIPSetOutcome;
        typedef Aws::Utils::Outcome<UpdateRegexPatternSetResult, WAFV2Error> UpdateRegexPatternSetOutcome;
        typedef Aws::Utils::Outcome<UpdateRuleGroupResult, WAFV2Error> UpdateRuleGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateWebACLResult, WAFV2Error> UpdateWebACLOutcome;

        typedef std::future<AssociateWebACLOutcome> AssociateWebACLOutcomeCallable;
        typedef std::future<CheckCapacityOutcome> CheckCapacityOutcomeCallable;
        typedef std::future<CreateIPSetOutcome> CreateIPSetOutcomeCallable;
        typedef std::future<CreateRegexPatternSetOutcome> CreateRegexPatternSetOutcomeCallable;
        typedef std::future<CreateRuleGroupOutcome> CreateRuleGroupOutcomeCallable;
        typedef std::future<CreateWebACLOutcome> CreateWebACLOutcomeCallable;
        typedef std::future<DeleteFirewallManagerRuleGroupsOutcome> DeleteFirewallManagerRuleGroupsOutcomeCallable;
        typedef std::future<DeleteIPSetOutcome> DeleteIPSetOutcomeCallable;
        typedef std::future<DeleteLoggingConfigurationOutcome> DeleteLoggingConfigurationOutcomeCallable;
        typedef std::future<DeletePermissionPolicyOutcome> DeletePermissionPolicyOutcomeCallable;
        typedef std::future<DeleteRegexPatternSetOutcome> DeleteRegexPatternSetOutcomeCallable;
        typedef std::future<DeleteRuleGroupOutcome> DeleteRuleGroupOutcomeCallable;
        typedef std::future<DeleteWebACLOutcome> DeleteWebACLOutcomeCallable;
        typedef std::future<DescribeManagedRuleGroupOutcome> DescribeManagedRuleGroupOutcomeCallable;
        typedef std::future<DisassociateWebACLOutcome> DisassociateWebACLOutcomeCallable;
        typedef std::future<GetIPSetOutcome> GetIPSetOutcomeCallable;
        typedef std::future<GetLoggingConfigurationOutcome> GetLoggingConfigurationOutcomeCallable;
        typedef std::future<GetPermissionPolicyOutcome> GetPermissionPolicyOutcomeCallable;
        typedef std::future<GetRateBasedStatementManagedKeysOutcome> GetRateBasedStatementManagedKeysOutcomeCallable;
        typedef std::future<GetRegexPatternSetOutcome> GetRegexPatternSetOutcomeCallable;
        typedef std::future<GetRuleGroupOutcome> GetRuleGroupOutcomeCallable;
        typedef std::future<GetSampledRequestsOutcome> GetSampledRequestsOutcomeCallable;
        typedef std::future<GetWebACLOutcome> GetWebACLOutcomeCallable;
        typedef std::future<GetWebACLForResourceOutcome> GetWebACLForResourceOutcomeCallable;
        typedef std::future<ListAvailableManagedRuleGroupsOutcome> ListAvailableManagedRuleGroupsOutcomeCallable;
        typedef std::future<ListIPSetsOutcome> ListIPSetsOutcomeCallable;
        typedef std::future<ListLoggingConfigurationsOutcome> ListLoggingConfigurationsOutcomeCallable;
        typedef std::future<ListRegexPatternSetsOutcome> ListRegexPatternSetsOutcomeCallable;
        typedef std::future<ListResourcesForWebACLOutcome> ListResourcesForWebACLOutcomeCallable;
        typedef std::future<ListRuleGroupsOutcome> ListRuleGroupsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListWebACLsOutcome> ListWebACLsOutcomeCallable;
        typedef std::future<PutLoggingConfigurationOutcome> PutLoggingConfigurationOutcomeCallable;
        typedef std::future<PutPermissionPolicyOutcome> PutPermissionPolicyOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateIPSetOutcome> UpdateIPSetOutcomeCallable;
        typedef std::future<UpdateRegexPatternSetOutcome> UpdateRegexPatternSetOutcomeCallable;
        typedef std::future<UpdateRuleGroupOutcome> UpdateRuleGroupOutcomeCallable;
        typedef std::future<UpdateWebACLOutcome> UpdateWebACLOutcomeCallable;
} // namespace Model

  class WAFV2Client;

    typedef std::function<void(const WAFV2Client*, const Model::AssociateWebACLRequest&, const Model::AssociateWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::CheckCapacityRequest&, const Model::CheckCapacityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CheckCapacityResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::CreateIPSetRequest&, const Model::CreateIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIPSetResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::CreateRegexPatternSetRequest&, const Model::CreateRegexPatternSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRegexPatternSetResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::CreateRuleGroupRequest&, const Model::CreateRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::CreateWebACLRequest&, const Model::CreateWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::DeleteFirewallManagerRuleGroupsRequest&, const Model::DeleteFirewallManagerRuleGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFirewallManagerRuleGroupsResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::DeleteIPSetRequest&, const Model::DeleteIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIPSetResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::DeleteLoggingConfigurationRequest&, const Model::DeleteLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::DeletePermissionPolicyRequest&, const Model::DeletePermissionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePermissionPolicyResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::DeleteRegexPatternSetRequest&, const Model::DeleteRegexPatternSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRegexPatternSetResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::DeleteRuleGroupRequest&, const Model::DeleteRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::DeleteWebACLRequest&, const Model::DeleteWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::DescribeManagedRuleGroupRequest&, const Model::DescribeManagedRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeManagedRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::DisassociateWebACLRequest&, const Model::DisassociateWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetIPSetRequest&, const Model::GetIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIPSetResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetLoggingConfigurationRequest&, const Model::GetLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetPermissionPolicyRequest&, const Model::GetPermissionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPermissionPolicyResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetRateBasedStatementManagedKeysRequest&, const Model::GetRateBasedStatementManagedKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRateBasedStatementManagedKeysResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetRegexPatternSetRequest&, const Model::GetRegexPatternSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRegexPatternSetResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetRuleGroupRequest&, const Model::GetRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetSampledRequestsRequest&, const Model::GetSampledRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSampledRequestsResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetWebACLRequest&, const Model::GetWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::GetWebACLForResourceRequest&, const Model::GetWebACLForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWebACLForResourceResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::ListAvailableManagedRuleGroupsRequest&, const Model::ListAvailableManagedRuleGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAvailableManagedRuleGroupsResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::ListIPSetsRequest&, const Model::ListIPSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIPSetsResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::ListLoggingConfigurationsRequest&, const Model::ListLoggingConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLoggingConfigurationsResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::ListRegexPatternSetsRequest&, const Model::ListRegexPatternSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRegexPatternSetsResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::ListResourcesForWebACLRequest&, const Model::ListResourcesForWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcesForWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::ListRuleGroupsRequest&, const Model::ListRuleGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRuleGroupsResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::ListWebACLsRequest&, const Model::ListWebACLsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWebACLsResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::PutLoggingConfigurationRequest&, const Model::PutLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::PutPermissionPolicyRequest&, const Model::PutPermissionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPermissionPolicyResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::UpdateIPSetRequest&, const Model::UpdateIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIPSetResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::UpdateRegexPatternSetRequest&, const Model::UpdateRegexPatternSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRegexPatternSetResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::UpdateRuleGroupRequest&, const Model::UpdateRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFV2Client*, const Model::UpdateWebACLRequest&, const Model::UpdateWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWebACLResponseReceivedHandler;

  /**
   *  <p>This is the latest version of the <b>AWS WAF</b> API, released in
   * November, 2019. The names of the entities that you use to access this API, like
   * endpoints and namespaces, all have the versioning information added, like "V2"
   * or "v2", to distinguish from the prior version. We recommend migrating your
   * resources to this version, because it has a number of significant
   * improvements.</p> <p>If you used AWS WAF prior to this release, you can't use
   * this AWS WAFV2 API to access any AWS WAF resources that you created before. You
   * can access your old rules, web ACLs, and other AWS WAF resources only through
   * the AWS WAF Classic APIs. The AWS WAF Classic APIs have retained the prior
   * names, endpoints, and namespaces. </p> <p>For information, including how to
   * migrate your AWS WAF resources to this version, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p>  <p>AWS WAF is a web application firewall
   * that lets you monitor the HTTP and HTTPS requests that are forwarded to Amazon
   * CloudFront, an Amazon API Gateway REST API, an Application Load Balancer, or an
   * AWS AppSync GraphQL API. AWS WAF also lets you control access to your content.
   * Based on conditions that you specify, such as the IP addresses that requests
   * originate from or the values of query strings, the API Gateway REST API,
   * CloudFront distribution, the Application Load Balancer, or the AWS AppSync
   * GraphQL API responds to requests either with the requested content or with an
   * HTTP 403 status code (Forbidden). You also can configure CloudFront to return a
   * custom error page when a request is blocked.</p> <p>This API guide is for
   * developers who need detailed information about AWS WAF API actions, data types,
   * and errors. For detailed information about AWS WAF features and an overview of
   * how to use AWS WAF, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
   * Guide</a>.</p> <p>You can make calls using the endpoints listed in <a
   * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS
   * Service Endpoints for AWS WAF</a>. </p> <ul> <li> <p>For regional applications,
   * you can use any of the endpoints in the list. A regional application can be an
   * Application Load Balancer (ALB), an API Gateway REST API, or an AppSync GraphQL
   * API. </p> </li> <li> <p>For AWS CloudFront applications, you must use the API
   * endpoint listed for US East (N. Virginia): us-east-1.</p> </li> </ul>
   * <p>Alternatively, you can use one of the AWS SDKs to access an API that's
   * tailored to the programming language or platform that you're using. For more
   * information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS SDKs</a>.</p>
   * <p>We currently provide two versions of the AWS WAF API: this API and the prior
   * versions, the classic AWS WAF APIs. This new API provides the same functionality
   * as the older versions, with the following major improvements:</p> <ul> <li>
   * <p>You use one API for both global and regional applications. Where you need to
   * distinguish the scope, you specify a <code>Scope</code> parameter and set it to
   * <code>CLOUDFRONT</code> or <code>REGIONAL</code>. </p> </li> <li> <p>You can
   * define a Web ACL or rule group with a single call, and update it with a single
   * call. You define all rule specifications in JSON format, and pass them to your
   * rule group or Web ACL calls.</p> </li> <li> <p>The limits AWS WAF places on the
   * use of rules more closely reflects the cost of running each type of rule. Rule
   * groups include capacity settings, so you know the maximum cost of a rule group
   * when you use it.</p> </li> </ul>
   */
  class AWS_WAFV2_API WAFV2Client : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WAFV2Client(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WAFV2Client(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WAFV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~WAFV2Client();


        /**
         * <p>Associates a Web ACL with a regional application resource, to protect the
         * resource. A regional application can be an Application Load Balancer (ALB), an
         * API Gateway REST API, or an AppSync GraphQL API. </p> <p>For AWS CloudFront,
         * don't use this call. Instead, use your CloudFront distribution configuration. To
         * associate a Web ACL, in the CloudFront call <code>UpdateDistribution</code>, set
         * the web ACL ID to the Amazon Resource Name (ARN) of the Web ACL. For
         * information, see <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AssociateWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWebACLOutcome AssociateWebACL(const Model::AssociateWebACLRequest& request) const;

        /**
         * <p>Associates a Web ACL with a regional application resource, to protect the
         * resource. A regional application can be an Application Load Balancer (ALB), an
         * API Gateway REST API, or an AppSync GraphQL API. </p> <p>For AWS CloudFront,
         * don't use this call. Instead, use your CloudFront distribution configuration. To
         * associate a Web ACL, in the CloudFront call <code>UpdateDistribution</code>, set
         * the web ACL ID to the Amazon Resource Name (ARN) of the Web ACL. For
         * information, see <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AssociateWebACL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateWebACLOutcomeCallable AssociateWebACLCallable(const Model::AssociateWebACLRequest& request) const;

        /**
         * <p>Associates a Web ACL with a regional application resource, to protect the
         * resource. A regional application can be an Application Load Balancer (ALB), an
         * API Gateway REST API, or an AppSync GraphQL API. </p> <p>For AWS CloudFront,
         * don't use this call. Instead, use your CloudFront distribution configuration. To
         * associate a Web ACL, in the CloudFront call <code>UpdateDistribution</code>, set
         * the web ACL ID to the Amazon Resource Name (ARN) of the Web ACL. For
         * information, see <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AssociateWebACL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateWebACLAsync(const Model::AssociateWebACLRequest& request, const AssociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the web ACL capacity unit (WCU) requirements for a specified scope
         * and set of rules. You can use this to check the capacity requirements for the
         * rules you want to use in a <a>RuleGroup</a> or <a>WebACL</a>. </p> <p>AWS WAF
         * uses WCUs to calculate and control the operating resources that are used to run
         * your rules, rule groups, and web ACLs. AWS WAF calculates capacity differently
         * for each rule type, to reflect the relative cost of each rule. Simple rules that
         * cost little to run use fewer WCUs than more complex rules that use more
         * processing power. Rule group capacity is fixed at creation, which helps users
         * plan their web ACL WCU usage when they use a rule group. The WCU limit for web
         * ACLs is 1,500. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CheckCapacity">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckCapacityOutcome CheckCapacity(const Model::CheckCapacityRequest& request) const;

        /**
         * <p>Returns the web ACL capacity unit (WCU) requirements for a specified scope
         * and set of rules. You can use this to check the capacity requirements for the
         * rules you want to use in a <a>RuleGroup</a> or <a>WebACL</a>. </p> <p>AWS WAF
         * uses WCUs to calculate and control the operating resources that are used to run
         * your rules, rule groups, and web ACLs. AWS WAF calculates capacity differently
         * for each rule type, to reflect the relative cost of each rule. Simple rules that
         * cost little to run use fewer WCUs than more complex rules that use more
         * processing power. Rule group capacity is fixed at creation, which helps users
         * plan their web ACL WCU usage when they use a rule group. The WCU limit for web
         * ACLs is 1,500. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CheckCapacity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CheckCapacityOutcomeCallable CheckCapacityCallable(const Model::CheckCapacityRequest& request) const;

        /**
         * <p>Returns the web ACL capacity unit (WCU) requirements for a specified scope
         * and set of rules. You can use this to check the capacity requirements for the
         * rules you want to use in a <a>RuleGroup</a> or <a>WebACL</a>. </p> <p>AWS WAF
         * uses WCUs to calculate and control the operating resources that are used to run
         * your rules, rule groups, and web ACLs. AWS WAF calculates capacity differently
         * for each rule type, to reflect the relative cost of each rule. Simple rules that
         * cost little to run use fewer WCUs than more complex rules that use more
         * processing power. Rule group capacity is fixed at creation, which helps users
         * plan their web ACL WCU usage when they use a rule group. The WCU limit for web
         * ACLs is 1,500. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CheckCapacity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CheckCapacityAsync(const Model::CheckCapacityRequest& request, const CheckCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an <a>IPSet</a>, which you use to identify web requests that
         * originate from specific IP addresses or ranges of IP addresses. For example, if
         * you're receiving a lot of requests from a ranges of IP addresses, you can
         * configure AWS WAF to block them using an IPSet that lists those IP addresses.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CreateIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIPSetOutcome CreateIPSet(const Model::CreateIPSetRequest& request) const;

        /**
         * <p>Creates an <a>IPSet</a>, which you use to identify web requests that
         * originate from specific IP addresses or ranges of IP addresses. For example, if
         * you're receiving a lot of requests from a ranges of IP addresses, you can
         * configure AWS WAF to block them using an IPSet that lists those IP addresses.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CreateIPSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIPSetOutcomeCallable CreateIPSetCallable(const Model::CreateIPSetRequest& request) const;

        /**
         * <p>Creates an <a>IPSet</a>, which you use to identify web requests that
         * originate from specific IP addresses or ranges of IP addresses. For example, if
         * you're receiving a lot of requests from a ranges of IP addresses, you can
         * configure AWS WAF to block them using an IPSet that lists those IP addresses.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CreateIPSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIPSetAsync(const Model::CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <a>RegexPatternSet</a>, which you reference in a
         * <a>RegexPatternSetReferenceStatement</a>, to have AWS WAF inspect a web request
         * component for the specified patterns.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CreateRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRegexPatternSetOutcome CreateRegexPatternSet(const Model::CreateRegexPatternSetRequest& request) const;

        /**
         * <p>Creates a <a>RegexPatternSet</a>, which you reference in a
         * <a>RegexPatternSetReferenceStatement</a>, to have AWS WAF inspect a web request
         * component for the specified patterns.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CreateRegexPatternSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRegexPatternSetOutcomeCallable CreateRegexPatternSetCallable(const Model::CreateRegexPatternSetRequest& request) const;

        /**
         * <p>Creates a <a>RegexPatternSet</a>, which you reference in a
         * <a>RegexPatternSetReferenceStatement</a>, to have AWS WAF inspect a web request
         * component for the specified patterns.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CreateRegexPatternSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a <a>RuleGroup</a> per the specifications provided. </p> <p> A rule
         * group defines a collection of rules to inspect and control web requests that you
         * can use in a <a>WebACL</a>. When you create a rule group, you define an
         * immutable capacity limit. If you update a rule group, you must stay within the
         * capacity. This allows others to reuse the rule group with confidence in its
         * capacity requirements. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CreateRuleGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRuleGroupOutcomeCallable CreateRuleGroupCallable(const Model::CreateRuleGroupRequest& request) const;

        /**
         * <p>Creates a <a>RuleGroup</a> per the specifications provided. </p> <p> A rule
         * group defines a collection of rules to inspect and control web requests that you
         * can use in a <a>WebACL</a>. When you create a rule group, you define an
         * immutable capacity limit. If you update a rule group, you must stay within the
         * capacity. This allows others to reuse the rule group with confidence in its
         * capacity requirements. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CreateRuleGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRuleGroupAsync(const Model::CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <a>WebACL</a> per the specifications provided.</p> <p> A Web ACL
         * defines a collection of rules to use to inspect and control web requests. Each
         * rule has an action defined (allow, block, or count) for requests that match the
         * statement of the rule. In the Web ACL, you assign a default action to take
         * (allow, block) for any request that does not match any of the rules. The rules
         * in a Web ACL can be a combination of the types <a>Rule</a>, <a>RuleGroup</a>,
         * and managed rule group. You can associate a Web ACL with one or more AWS
         * resources to protect. The resources can be Amazon CloudFront, an Amazon API
         * Gateway REST API, an Application Load Balancer, or an AWS AppSync GraphQL API.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CreateWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWebACLOutcome CreateWebACL(const Model::CreateWebACLRequest& request) const;

        /**
         * <p>Creates a <a>WebACL</a> per the specifications provided.</p> <p> A Web ACL
         * defines a collection of rules to use to inspect and control web requests. Each
         * rule has an action defined (allow, block, or count) for requests that match the
         * statement of the rule. In the Web ACL, you assign a default action to take
         * (allow, block) for any request that does not match any of the rules. The rules
         * in a Web ACL can be a combination of the types <a>Rule</a>, <a>RuleGroup</a>,
         * and managed rule group. You can associate a Web ACL with one or more AWS
         * resources to protect. The resources can be Amazon CloudFront, an Amazon API
         * Gateway REST API, an Application Load Balancer, or an AWS AppSync GraphQL API.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CreateWebACL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWebACLOutcomeCallable CreateWebACLCallable(const Model::CreateWebACLRequest& request) const;

        /**
         * <p>Creates a <a>WebACL</a> per the specifications provided.</p> <p> A Web ACL
         * defines a collection of rules to use to inspect and control web requests. Each
         * rule has an action defined (allow, block, or count) for requests that match the
         * statement of the rule. In the Web ACL, you assign a default action to take
         * (allow, block) for any request that does not match any of the rules. The rules
         * in a Web ACL can be a combination of the types <a>Rule</a>, <a>RuleGroup</a>,
         * and managed rule group. You can associate a Web ACL with one or more AWS
         * resources to protect. The resources can be Amazon CloudFront, an Amazon API
         * Gateway REST API, an Application Load Balancer, or an AWS AppSync GraphQL API.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CreateWebACL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWebACLAsync(const Model::CreateWebACLRequest& request, const CreateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes all rule groups that are managed by AWS Firewall Manager for the
         * specified web ACL. </p> <p>You can only use this if
         * <code>ManagedByFirewallManager</code> is false in the specified <a>WebACL</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteFirewallManagerRuleGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFirewallManagerRuleGroupsOutcome DeleteFirewallManagerRuleGroups(const Model::DeleteFirewallManagerRuleGroupsRequest& request) const;

        /**
         * <p>Deletes all rule groups that are managed by AWS Firewall Manager for the
         * specified web ACL. </p> <p>You can only use this if
         * <code>ManagedByFirewallManager</code> is false in the specified <a>WebACL</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteFirewallManagerRuleGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFirewallManagerRuleGroupsOutcomeCallable DeleteFirewallManagerRuleGroupsCallable(const Model::DeleteFirewallManagerRuleGroupsRequest& request) const;

        /**
         * <p>Deletes all rule groups that are managed by AWS Firewall Manager for the
         * specified web ACL. </p> <p>You can only use this if
         * <code>ManagedByFirewallManager</code> is false in the specified <a>WebACL</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteFirewallManagerRuleGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFirewallManagerRuleGroupsAsync(const Model::DeleteFirewallManagerRuleGroupsRequest& request, const DeleteFirewallManagerRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified <a>IPSet</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIPSetOutcome DeleteIPSet(const Model::DeleteIPSetRequest& request) const;

        /**
         * <p>Deletes the specified <a>IPSet</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteIPSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIPSetOutcomeCallable DeleteIPSetCallable(const Model::DeleteIPSetRequest& request) const;

        /**
         * <p>Deletes the specified <a>IPSet</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteIPSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes the <a>LoggingConfiguration</a> from the specified web
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoggingConfigurationOutcomeCallable DeleteLoggingConfigurationCallable(const Model::DeleteLoggingConfigurationRequest& request) const;

        /**
         * <p>Deletes the <a>LoggingConfiguration</a> from the specified web
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Permanently deletes an IAM policy from the specified rule group.</p> <p>You
         * must be the owner of the rule group to perform this operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeletePermissionPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePermissionPolicyOutcomeCallable DeletePermissionPolicyCallable(const Model::DeletePermissionPolicyRequest& request) const;

        /**
         * <p>Permanently deletes an IAM policy from the specified rule group.</p> <p>You
         * must be the owner of the rule group to perform this operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeletePermissionPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePermissionPolicyAsync(const Model::DeletePermissionPolicyRequest& request, const DeletePermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified <a>RegexPatternSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegexPatternSetOutcome DeleteRegexPatternSet(const Model::DeleteRegexPatternSetRequest& request) const;

        /**
         * <p>Deletes the specified <a>RegexPatternSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteRegexPatternSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRegexPatternSetOutcomeCallable DeleteRegexPatternSetCallable(const Model::DeleteRegexPatternSetRequest& request) const;

        /**
         * <p>Deletes the specified <a>RegexPatternSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteRegexPatternSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRegexPatternSetAsync(const Model::DeleteRegexPatternSetRequest& request, const DeleteRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified <a>RuleGroup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleGroupOutcome DeleteRuleGroup(const Model::DeleteRuleGroupRequest& request) const;

        /**
         * <p>Deletes the specified <a>RuleGroup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteRuleGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRuleGroupOutcomeCallable DeleteRuleGroupCallable(const Model::DeleteRuleGroupRequest& request) const;

        /**
         * <p>Deletes the specified <a>RuleGroup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteRuleGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRuleGroupAsync(const Model::DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified <a>WebACL</a>.</p> <p>You can only use this if
         * <code>ManagedByFirewallManager</code> is false in the specified <a>WebACL</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWebACLOutcome DeleteWebACL(const Model::DeleteWebACLRequest& request) const;

        /**
         * <p>Deletes the specified <a>WebACL</a>.</p> <p>You can only use this if
         * <code>ManagedByFirewallManager</code> is false in the specified <a>WebACL</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteWebACL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWebACLOutcomeCallable DeleteWebACLCallable(const Model::DeleteWebACLRequest& request) const;

        /**
         * <p>Deletes the specified <a>WebACL</a>.</p> <p>You can only use this if
         * <code>ManagedByFirewallManager</code> is false in the specified <a>WebACL</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DeleteWebACL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Provides high-level information for a managed rule group, including
         * descriptions of the rules. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DescribeManagedRuleGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeManagedRuleGroupOutcomeCallable DescribeManagedRuleGroupCallable(const Model::DescribeManagedRuleGroupRequest& request) const;

        /**
         * <p>Provides high-level information for a managed rule group, including
         * descriptions of the rules. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DescribeManagedRuleGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeManagedRuleGroupAsync(const Model::DescribeManagedRuleGroupRequest& request, const DescribeManagedRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a Web ACL from a regional application resource. A regional
         * application can be an Application Load Balancer (ALB), an API Gateway REST API,
         * or an AppSync GraphQL API. </p> <p>For AWS CloudFront, don't use this call.
         * Instead, use your CloudFront distribution configuration. To disassociate a Web
         * ACL, provide an empty web ACL ID in the CloudFront call
         * <code>UpdateDistribution</code>. For information, see <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DisassociateWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateWebACLOutcome DisassociateWebACL(const Model::DisassociateWebACLRequest& request) const;

        /**
         * <p>Disassociates a Web ACL from a regional application resource. A regional
         * application can be an Application Load Balancer (ALB), an API Gateway REST API,
         * or an AppSync GraphQL API. </p> <p>For AWS CloudFront, don't use this call.
         * Instead, use your CloudFront distribution configuration. To disassociate a Web
         * ACL, provide an empty web ACL ID in the CloudFront call
         * <code>UpdateDistribution</code>. For information, see <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DisassociateWebACL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateWebACLOutcomeCallable DisassociateWebACLCallable(const Model::DisassociateWebACLRequest& request) const;

        /**
         * <p>Disassociates a Web ACL from a regional application resource. A regional
         * application can be an Application Load Balancer (ALB), an API Gateway REST API,
         * or an AppSync GraphQL API. </p> <p>For AWS CloudFront, don't use this call.
         * Instead, use your CloudFront distribution configuration. To disassociate a Web
         * ACL, provide an empty web ACL ID in the CloudFront call
         * <code>UpdateDistribution</code>. For information, see <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DisassociateWebACL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateWebACLAsync(const Model::DisassociateWebACLRequest& request, const DisassociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified <a>IPSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetIPSet">AWS API
         * Reference</a></p>
         */
        virtual Model::GetIPSetOutcome GetIPSet(const Model::GetIPSetRequest& request) const;

        /**
         * <p>Retrieves the specified <a>IPSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetIPSet">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIPSetOutcomeCallable GetIPSetCallable(const Model::GetIPSetRequest& request) const;

        /**
         * <p>Retrieves the specified <a>IPSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetIPSet">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the <a>LoggingConfiguration</a> for the specified web
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoggingConfigurationOutcomeCallable GetLoggingConfigurationCallable(const Model::GetLoggingConfigurationRequest& request) const;

        /**
         * <p>Returns the <a>LoggingConfiguration</a> for the specified web
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoggingConfigurationAsync(const Model::GetLoggingConfigurationRequest& request, const GetLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the IAM policy that is attached to the specified rule group.</p>
         * <p>You must be the owner of the rule group to perform this
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetPermissionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPermissionPolicyOutcome GetPermissionPolicy(const Model::GetPermissionPolicyRequest& request) const;

        /**
         * <p>Returns the IAM policy that is attached to the specified rule group.</p>
         * <p>You must be the owner of the rule group to perform this
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetPermissionPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPermissionPolicyOutcomeCallable GetPermissionPolicyCallable(const Model::GetPermissionPolicyRequest& request) const;

        /**
         * <p>Returns the IAM policy that is attached to the specified rule group.</p>
         * <p>You must be the owner of the rule group to perform this
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetPermissionPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPermissionPolicyAsync(const Model::GetPermissionPolicyRequest& request, const GetPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the keys that are currently blocked by a rate-based rule. The
         * maximum number of managed keys that can be blocked for a single rate-based rule
         * is 10,000. If more than 10,000 addresses exceed the rate limit, those with the
         * highest rates are blocked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetRateBasedStatementManagedKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRateBasedStatementManagedKeysOutcome GetRateBasedStatementManagedKeys(const Model::GetRateBasedStatementManagedKeysRequest& request) const;

        /**
         * <p>Retrieves the keys that are currently blocked by a rate-based rule. The
         * maximum number of managed keys that can be blocked for a single rate-based rule
         * is 10,000. If more than 10,000 addresses exceed the rate limit, those with the
         * highest rates are blocked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetRateBasedStatementManagedKeys">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRateBasedStatementManagedKeysOutcomeCallable GetRateBasedStatementManagedKeysCallable(const Model::GetRateBasedStatementManagedKeysRequest& request) const;

        /**
         * <p>Retrieves the keys that are currently blocked by a rate-based rule. The
         * maximum number of managed keys that can be blocked for a single rate-based rule
         * is 10,000. If more than 10,000 addresses exceed the rate limit, those with the
         * highest rates are blocked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetRateBasedStatementManagedKeys">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRateBasedStatementManagedKeysAsync(const Model::GetRateBasedStatementManagedKeysRequest& request, const GetRateBasedStatementManagedKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified <a>RegexPatternSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegexPatternSetOutcome GetRegexPatternSet(const Model::GetRegexPatternSetRequest& request) const;

        /**
         * <p>Retrieves the specified <a>RegexPatternSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetRegexPatternSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRegexPatternSetOutcomeCallable GetRegexPatternSetCallable(const Model::GetRegexPatternSetRequest& request) const;

        /**
         * <p>Retrieves the specified <a>RegexPatternSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetRegexPatternSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRegexPatternSetAsync(const Model::GetRegexPatternSetRequest& request, const GetRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified <a>RuleGroup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRuleGroupOutcome GetRuleGroup(const Model::GetRuleGroupRequest& request) const;

        /**
         * <p>Retrieves the specified <a>RuleGroup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetRuleGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRuleGroupOutcomeCallable GetRuleGroupCallable(const Model::GetRuleGroupRequest& request) const;

        /**
         * <p>Retrieves the specified <a>RuleGroup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetRuleGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRuleGroupAsync(const Model::GetRuleGroupRequest& request, const GetRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets detailed information about a specified number of requests--a
         * sample--that AWS WAF randomly selects from among the first 5,000 requests that
         * your AWS resource received during a time range that you choose. You can specify
         * a sample size of up to 500 requests, and you can specify any time range in the
         * previous three hours.</p> <p> <code>GetSampledRequests</code> returns a time
         * range, which is usually the time range that you specified. However, if your
         * resource (such as a CloudFront distribution) received 5,000 requests before the
         * specified time range elapsed, <code>GetSampledRequests</code> returns an updated
         * time range. This new time range indicates the actual period during which AWS WAF
         * selected the requests in the sample.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetSampledRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSampledRequestsOutcome GetSampledRequests(const Model::GetSampledRequestsRequest& request) const;

        /**
         * <p>Gets detailed information about a specified number of requests--a
         * sample--that AWS WAF randomly selects from among the first 5,000 requests that
         * your AWS resource received during a time range that you choose. You can specify
         * a sample size of up to 500 requests, and you can specify any time range in the
         * previous three hours.</p> <p> <code>GetSampledRequests</code> returns a time
         * range, which is usually the time range that you specified. However, if your
         * resource (such as a CloudFront distribution) received 5,000 requests before the
         * specified time range elapsed, <code>GetSampledRequests</code> returns an updated
         * time range. This new time range indicates the actual period during which AWS WAF
         * selected the requests in the sample.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetSampledRequests">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSampledRequestsOutcomeCallable GetSampledRequestsCallable(const Model::GetSampledRequestsRequest& request) const;

        /**
         * <p>Gets detailed information about a specified number of requests--a
         * sample--that AWS WAF randomly selects from among the first 5,000 requests that
         * your AWS resource received during a time range that you choose. You can specify
         * a sample size of up to 500 requests, and you can specify any time range in the
         * previous three hours.</p> <p> <code>GetSampledRequests</code> returns a time
         * range, which is usually the time range that you specified. However, if your
         * resource (such as a CloudFront distribution) received 5,000 requests before the
         * specified time range elapsed, <code>GetSampledRequests</code> returns an updated
         * time range. This new time range indicates the actual period during which AWS WAF
         * selected the requests in the sample.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetSampledRequests">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSampledRequestsAsync(const Model::GetSampledRequestsRequest& request, const GetSampledRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified <a>WebACL</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetWebACL">AWS API
         * Reference</a></p>
         */
        virtual Model::GetWebACLOutcome GetWebACL(const Model::GetWebACLRequest& request) const;

        /**
         * <p>Retrieves the specified <a>WebACL</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetWebACL">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWebACLOutcomeCallable GetWebACLCallable(const Model::GetWebACLRequest& request) const;

        /**
         * <p>Retrieves the specified <a>WebACL</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetWebACL">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves the <a>WebACL</a> for the specified resource. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetWebACLForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWebACLForResourceOutcomeCallable GetWebACLForResourceCallable(const Model::GetWebACLForResourceRequest& request) const;

        /**
         * <p>Retrieves the <a>WebACL</a> for the specified resource. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/GetWebACLForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWebACLForResourceAsync(const Model::GetWebACLForResourceRequest& request, const GetWebACLForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an array of managed rule groups that are available for you to use.
         * This list includes all AWS Managed Rules rule groups and the AWS Marketplace
         * managed rule groups that you're subscribed to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListAvailableManagedRuleGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAvailableManagedRuleGroupsOutcome ListAvailableManagedRuleGroups(const Model::ListAvailableManagedRuleGroupsRequest& request) const;

        /**
         * <p>Retrieves an array of managed rule groups that are available for you to use.
         * This list includes all AWS Managed Rules rule groups and the AWS Marketplace
         * managed rule groups that you're subscribed to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListAvailableManagedRuleGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAvailableManagedRuleGroupsOutcomeCallable ListAvailableManagedRuleGroupsCallable(const Model::ListAvailableManagedRuleGroupsRequest& request) const;

        /**
         * <p>Retrieves an array of managed rule groups that are available for you to use.
         * This list includes all AWS Managed Rules rule groups and the AWS Marketplace
         * managed rule groups that you're subscribed to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListAvailableManagedRuleGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves an array of <a>IPSetSummary</a> objects for the IP sets that you
         * manage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListIPSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIPSetsOutcomeCallable ListIPSetsCallable(const Model::ListIPSetsRequest& request) const;

        /**
         * <p>Retrieves an array of <a>IPSetSummary</a> objects for the IP sets that you
         * manage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListIPSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves an array of your <a>LoggingConfiguration</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListLoggingConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLoggingConfigurationsOutcomeCallable ListLoggingConfigurationsCallable(const Model::ListLoggingConfigurationsRequest& request) const;

        /**
         * <p>Retrieves an array of your <a>LoggingConfiguration</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListLoggingConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLoggingConfigurationsAsync(const Model::ListLoggingConfigurationsRequest& request, const ListLoggingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an array of <a>RegexPatternSetSummary</a> objects for the regex
         * pattern sets that you manage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListRegexPatternSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegexPatternSetsOutcome ListRegexPatternSets(const Model::ListRegexPatternSetsRequest& request) const;

        /**
         * <p>Retrieves an array of <a>RegexPatternSetSummary</a> objects for the regex
         * pattern sets that you manage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListRegexPatternSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRegexPatternSetsOutcomeCallable ListRegexPatternSetsCallable(const Model::ListRegexPatternSetsRequest& request) const;

        /**
         * <p>Retrieves an array of <a>RegexPatternSetSummary</a> objects for the regex
         * pattern sets that you manage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListRegexPatternSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRegexPatternSetsAsync(const Model::ListRegexPatternSetsRequest& request, const ListRegexPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an array of the Amazon Resource Names (ARNs) for the regional
         * resources that are associated with the specified web ACL. If you want the list
         * of AWS CloudFront resources, use the AWS CloudFront call
         * <code>ListDistributionsByWebACLId</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListResourcesForWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesForWebACLOutcome ListResourcesForWebACL(const Model::ListResourcesForWebACLRequest& request) const;

        /**
         * <p>Retrieves an array of the Amazon Resource Names (ARNs) for the regional
         * resources that are associated with the specified web ACL. If you want the list
         * of AWS CloudFront resources, use the AWS CloudFront call
         * <code>ListDistributionsByWebACLId</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListResourcesForWebACL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourcesForWebACLOutcomeCallable ListResourcesForWebACLCallable(const Model::ListResourcesForWebACLRequest& request) const;

        /**
         * <p>Retrieves an array of the Amazon Resource Names (ARNs) for the regional
         * resources that are associated with the specified web ACL. If you want the list
         * of AWS CloudFront resources, use the AWS CloudFront call
         * <code>ListDistributionsByWebACLId</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListResourcesForWebACL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves an array of <a>RuleGroupSummary</a> objects for the rule groups
         * that you manage. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListRuleGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRuleGroupsOutcomeCallable ListRuleGroupsCallable(const Model::ListRuleGroupsRequest& request) const;

        /**
         * <p>Retrieves an array of <a>RuleGroupSummary</a> objects for the rule groups
         * that you manage. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListRuleGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRuleGroupsAsync(const Model::ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the <a>TagInfoForResource</a> for the specified resource. Tags are
         * key:value pairs that you can use to categorize and manage your resources, for
         * purposes like billing. For example, you might set the tag key to "customer" and
         * the value to the customer name or ID. You can specify one or more tags to add to
         * each AWS resource, up to 50 tags for a resource.</p> <p>You can tag the AWS
         * resources that you manage through AWS WAF: web ACLs, rule groups, IP sets, and
         * regex pattern sets. You can't manage or view tags through the AWS WAF console.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves the <a>TagInfoForResource</a> for the specified resource. Tags are
         * key:value pairs that you can use to categorize and manage your resources, for
         * purposes like billing. For example, you might set the tag key to "customer" and
         * the value to the customer name or ID. You can specify one or more tags to add to
         * each AWS resource, up to 50 tags for a resource.</p> <p>You can tag the AWS
         * resources that you manage through AWS WAF: web ACLs, rule groups, IP sets, and
         * regex pattern sets. You can't manage or view tags through the AWS WAF console.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves the <a>TagInfoForResource</a> for the specified resource. Tags are
         * key:value pairs that you can use to categorize and manage your resources, for
         * purposes like billing. For example, you might set the tag key to "customer" and
         * the value to the customer name or ID. You can specify one or more tags to add to
         * each AWS resource, up to 50 tags for a resource.</p> <p>You can tag the AWS
         * resources that you manage through AWS WAF: web ACLs, rule groups, IP sets, and
         * regex pattern sets. You can't manage or view tags through the AWS WAF console.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves an array of <a>WebACLSummary</a> objects for the web ACLs that you
         * manage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListWebACLs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWebACLsOutcomeCallable ListWebACLsCallable(const Model::ListWebACLsRequest& request) const;

        /**
         * <p>Retrieves an array of <a>WebACLSummary</a> objects for the web ACLs that you
         * manage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ListWebACLs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWebACLsAsync(const Model::ListWebACLsRequest& request, const ListWebACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the specified <a>LoggingConfiguration</a>, to start logging from a
         * web ACL, according to the configuration provided.</p> <p>You can access
         * information about all traffic that AWS WAF inspects using the following
         * steps:</p> <ol> <li> <p>Create an Amazon Kinesis Data Firehose. </p> <p>Create
         * the data firehose with a PUT source and in the Region that you are operating. If
         * you are capturing logs for Amazon CloudFront, always create the firehose in US
         * East (N. Virginia). </p> <p>Give the data firehose a name that starts with the
         * prefix <code>aws-waf-logs-</code>. For example,
         * <code>aws-waf-logs-us-east-2-analytics</code>.</p>  <p>Do not create the
         * data firehose using a <code>Kinesis stream</code> as your source.</p> 
         * </li> <li> <p>Associate that firehose to your web ACL using a
         * <code>PutLoggingConfiguration</code> request.</p> </li> </ol> <p>When you
         * successfully enable logging using a <code>PutLoggingConfiguration</code>
         * request, AWS WAF will create a service linked role with the necessary
         * permissions to write logs to the Amazon Kinesis Data Firehose. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
         * Web ACL Traffic Information</a> in the <i>AWS WAF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/PutLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLoggingConfigurationOutcome PutLoggingConfiguration(const Model::PutLoggingConfigurationRequest& request) const;

        /**
         * <p>Enables the specified <a>LoggingConfiguration</a>, to start logging from a
         * web ACL, according to the configuration provided.</p> <p>You can access
         * information about all traffic that AWS WAF inspects using the following
         * steps:</p> <ol> <li> <p>Create an Amazon Kinesis Data Firehose. </p> <p>Create
         * the data firehose with a PUT source and in the Region that you are operating. If
         * you are capturing logs for Amazon CloudFront, always create the firehose in US
         * East (N. Virginia). </p> <p>Give the data firehose a name that starts with the
         * prefix <code>aws-waf-logs-</code>. For example,
         * <code>aws-waf-logs-us-east-2-analytics</code>.</p>  <p>Do not create the
         * data firehose using a <code>Kinesis stream</code> as your source.</p> 
         * </li> <li> <p>Associate that firehose to your web ACL using a
         * <code>PutLoggingConfiguration</code> request.</p> </li> </ol> <p>When you
         * successfully enable logging using a <code>PutLoggingConfiguration</code>
         * request, AWS WAF will create a service linked role with the necessary
         * permissions to write logs to the Amazon Kinesis Data Firehose. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
         * Web ACL Traffic Information</a> in the <i>AWS WAF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/PutLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutLoggingConfigurationOutcomeCallable PutLoggingConfigurationCallable(const Model::PutLoggingConfigurationRequest& request) const;

        /**
         * <p>Enables the specified <a>LoggingConfiguration</a>, to start logging from a
         * web ACL, according to the configuration provided.</p> <p>You can access
         * information about all traffic that AWS WAF inspects using the following
         * steps:</p> <ol> <li> <p>Create an Amazon Kinesis Data Firehose. </p> <p>Create
         * the data firehose with a PUT source and in the Region that you are operating. If
         * you are capturing logs for Amazon CloudFront, always create the firehose in US
         * East (N. Virginia). </p> <p>Give the data firehose a name that starts with the
         * prefix <code>aws-waf-logs-</code>. For example,
         * <code>aws-waf-logs-us-east-2-analytics</code>.</p>  <p>Do not create the
         * data firehose using a <code>Kinesis stream</code> as your source.</p> 
         * </li> <li> <p>Associate that firehose to your web ACL using a
         * <code>PutLoggingConfiguration</code> request.</p> </li> </ol> <p>When you
         * successfully enable logging using a <code>PutLoggingConfiguration</code>
         * request, AWS WAF will create a service linked role with the necessary
         * permissions to write logs to the Amazon Kinesis Data Firehose. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
         * Web ACL Traffic Information</a> in the <i>AWS WAF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/PutLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLoggingConfigurationAsync(const Model::PutLoggingConfigurationRequest& request, const PutLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches an IAM policy to the specified resource. Use this to share a rule
         * group across accounts.</p> <p>You must be the owner of the rule group to perform
         * this operation.</p> <p>This action is subject to the following restrictions:</p>
         * <ul> <li> <p>You can attach only one policy with each
         * <code>PutPermissionPolicy</code> request.</p> </li> <li> <p>The ARN in the
         * request must be a valid WAF <a>RuleGroup</a> ARN and the rule group must exist
         * in the same region.</p> </li> <li> <p>The user making the request must be the
         * owner of the rule group.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/PutPermissionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPermissionPolicyOutcome PutPermissionPolicy(const Model::PutPermissionPolicyRequest& request) const;

        /**
         * <p>Attaches an IAM policy to the specified resource. Use this to share a rule
         * group across accounts.</p> <p>You must be the owner of the rule group to perform
         * this operation.</p> <p>This action is subject to the following restrictions:</p>
         * <ul> <li> <p>You can attach only one policy with each
         * <code>PutPermissionPolicy</code> request.</p> </li> <li> <p>The ARN in the
         * request must be a valid WAF <a>RuleGroup</a> ARN and the rule group must exist
         * in the same region.</p> </li> <li> <p>The user making the request must be the
         * owner of the rule group.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/PutPermissionPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPermissionPolicyOutcomeCallable PutPermissionPolicyCallable(const Model::PutPermissionPolicyRequest& request) const;

        /**
         * <p>Attaches an IAM policy to the specified resource. Use this to share a rule
         * group across accounts.</p> <p>You must be the owner of the rule group to perform
         * this operation.</p> <p>This action is subject to the following restrictions:</p>
         * <ul> <li> <p>You can attach only one policy with each
         * <code>PutPermissionPolicy</code> request.</p> </li> <li> <p>The ARN in the
         * request must be a valid WAF <a>RuleGroup</a> ARN and the rule group must exist
         * in the same region.</p> </li> <li> <p>The user making the request must be the
         * owner of the rule group.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/PutPermissionPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPermissionPolicyAsync(const Model::PutPermissionPolicyRequest& request, const PutPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates tags with the specified AWS resource. Tags are key:value pairs
         * that you can use to categorize and manage your resources, for purposes like
         * billing. For example, you might set the tag key to "customer" and the value to
         * the customer name or ID. You can specify one or more tags to add to each AWS
         * resource, up to 50 tags for a resource.</p> <p>You can tag the AWS resources
         * that you manage through AWS WAF: web ACLs, rule groups, IP sets, and regex
         * pattern sets. You can't manage or view tags through the AWS WAF console.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates tags with the specified AWS resource. Tags are key:value pairs
         * that you can use to categorize and manage your resources, for purposes like
         * billing. For example, you might set the tag key to "customer" and the value to
         * the customer name or ID. You can specify one or more tags to add to each AWS
         * resource, up to 50 tags for a resource.</p> <p>You can tag the AWS resources
         * that you manage through AWS WAF: web ACLs, rule groups, IP sets, and regex
         * pattern sets. You can't manage or view tags through the AWS WAF console.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates tags with the specified AWS resource. Tags are key:value pairs
         * that you can use to categorize and manage your resources, for purposes like
         * billing. For example, you might set the tag key to "customer" and the value to
         * the customer name or ID. You can specify one or more tags to add to each AWS
         * resource, up to 50 tags for a resource.</p> <p>You can tag the AWS resources
         * that you manage through AWS WAF: web ACLs, rule groups, IP sets, and regex
         * pattern sets. You can't manage or view tags through the AWS WAF console.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates tags from an AWS resource. Tags are key:value pairs that you
         * can associate with AWS resources. For example, the tag key might be "customer"
         * and the tag value might be "companyA." You can specify one or more tags to add
         * to each container. You can add up to 50 tags to each AWS resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Disassociates tags from an AWS resource. Tags are key:value pairs that you
         * can associate with AWS resources. For example, the tag key might be "customer"
         * and the tag value might be "companyA." You can specify one or more tags to add
         * to each container. You can add up to 50 tags to each AWS resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Disassociates tags from an AWS resource. Tags are key:value pairs that you
         * can associate with AWS resources. For example, the tag key might be "customer"
         * and the tag value might be "companyA." You can specify one or more tags to add
         * to each container. You can add up to 50 tags to each AWS resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified <a>IPSet</a>. </p>  <p>This operation completely
         * replaces any IP address specifications that you already have in the IP set with
         * the ones that you provide to this call. If you want to add to or modify the
         * addresses that are already in the IP set, retrieve those by calling
         * <a>GetIPSet</a>, update them, and provide the complete updated array of IP
         * addresses to this call.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UpdateIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIPSetOutcome UpdateIPSet(const Model::UpdateIPSetRequest& request) const;

        /**
         * <p>Updates the specified <a>IPSet</a>. </p>  <p>This operation completely
         * replaces any IP address specifications that you already have in the IP set with
         * the ones that you provide to this call. If you want to add to or modify the
         * addresses that are already in the IP set, retrieve those by calling
         * <a>GetIPSet</a>, update them, and provide the complete updated array of IP
         * addresses to this call.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UpdateIPSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIPSetOutcomeCallable UpdateIPSetCallable(const Model::UpdateIPSetRequest& request) const;

        /**
         * <p>Updates the specified <a>IPSet</a>. </p>  <p>This operation completely
         * replaces any IP address specifications that you already have in the IP set with
         * the ones that you provide to this call. If you want to add to or modify the
         * addresses that are already in the IP set, retrieve those by calling
         * <a>GetIPSet</a>, update them, and provide the complete updated array of IP
         * addresses to this call.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UpdateIPSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIPSetAsync(const Model::UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified <a>RegexPatternSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UpdateRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRegexPatternSetOutcome UpdateRegexPatternSet(const Model::UpdateRegexPatternSetRequest& request) const;

        /**
         * <p>Updates the specified <a>RegexPatternSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UpdateRegexPatternSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRegexPatternSetOutcomeCallable UpdateRegexPatternSetCallable(const Model::UpdateRegexPatternSetRequest& request) const;

        /**
         * <p>Updates the specified <a>RegexPatternSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UpdateRegexPatternSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRegexPatternSetAsync(const Model::UpdateRegexPatternSetRequest& request, const UpdateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified <a>RuleGroup</a>.</p> <p> A rule group defines a
         * collection of rules to inspect and control web requests that you can use in a
         * <a>WebACL</a>. When you create a rule group, you define an immutable capacity
         * limit. If you update a rule group, you must stay within the capacity. This
         * allows others to reuse the rule group with confidence in its capacity
         * requirements. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UpdateRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRuleGroupOutcome UpdateRuleGroup(const Model::UpdateRuleGroupRequest& request) const;

        /**
         * <p>Updates the specified <a>RuleGroup</a>.</p> <p> A rule group defines a
         * collection of rules to inspect and control web requests that you can use in a
         * <a>WebACL</a>. When you create a rule group, you define an immutable capacity
         * limit. If you update a rule group, you must stay within the capacity. This
         * allows others to reuse the rule group with confidence in its capacity
         * requirements. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UpdateRuleGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRuleGroupOutcomeCallable UpdateRuleGroupCallable(const Model::UpdateRuleGroupRequest& request) const;

        /**
         * <p>Updates the specified <a>RuleGroup</a>.</p> <p> A rule group defines a
         * collection of rules to inspect and control web requests that you can use in a
         * <a>WebACL</a>. When you create a rule group, you define an immutable capacity
         * limit. If you update a rule group, you must stay within the capacity. This
         * allows others to reuse the rule group with confidence in its capacity
         * requirements. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UpdateRuleGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRuleGroupAsync(const Model::UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified <a>WebACL</a>.</p> <p> A Web ACL defines a collection
         * of rules to use to inspect and control web requests. Each rule has an action
         * defined (allow, block, or count) for requests that match the statement of the
         * rule. In the Web ACL, you assign a default action to take (allow, block) for any
         * request that does not match any of the rules. The rules in a Web ACL can be a
         * combination of the types <a>Rule</a>, <a>RuleGroup</a>, and managed rule group.
         * You can associate a Web ACL with one or more AWS resources to protect. The
         * resources can be Amazon CloudFront, an Amazon API Gateway REST API, an
         * Application Load Balancer, or an AWS AppSync GraphQL API. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UpdateWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWebACLOutcome UpdateWebACL(const Model::UpdateWebACLRequest& request) const;

        /**
         * <p>Updates the specified <a>WebACL</a>.</p> <p> A Web ACL defines a collection
         * of rules to use to inspect and control web requests. Each rule has an action
         * defined (allow, block, or count) for requests that match the statement of the
         * rule. In the Web ACL, you assign a default action to take (allow, block) for any
         * request that does not match any of the rules. The rules in a Web ACL can be a
         * combination of the types <a>Rule</a>, <a>RuleGroup</a>, and managed rule group.
         * You can associate a Web ACL with one or more AWS resources to protect. The
         * resources can be Amazon CloudFront, an Amazon API Gateway REST API, an
         * Application Load Balancer, or an AWS AppSync GraphQL API. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UpdateWebACL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWebACLOutcomeCallable UpdateWebACLCallable(const Model::UpdateWebACLRequest& request) const;

        /**
         * <p>Updates the specified <a>WebACL</a>.</p> <p> A Web ACL defines a collection
         * of rules to use to inspect and control web requests. Each rule has an action
         * defined (allow, block, or count) for requests that match the statement of the
         * rule. In the Web ACL, you assign a default action to take (allow, block) for any
         * request that does not match any of the rules. The rules in a Web ACL can be a
         * combination of the types <a>Rule</a>, <a>RuleGroup</a>, and managed rule group.
         * You can associate a Web ACL with one or more AWS resources to protect. The
         * resources can be Amazon CloudFront, an Amazon API Gateway REST API, an
         * Application Load Balancer, or an AWS AppSync GraphQL API. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/UpdateWebACL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWebACLAsync(const Model::UpdateWebACLRequest& request, const UpdateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateWebACLAsyncHelper(const Model::AssociateWebACLRequest& request, const AssociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CheckCapacityAsyncHelper(const Model::CheckCapacityRequest& request, const CheckCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIPSetAsyncHelper(const Model::CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRegexPatternSetAsyncHelper(const Model::CreateRegexPatternSetRequest& request, const CreateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRuleGroupAsyncHelper(const Model::CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWebACLAsyncHelper(const Model::CreateWebACLRequest& request, const CreateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFirewallManagerRuleGroupsAsyncHelper(const Model::DeleteFirewallManagerRuleGroupsRequest& request, const DeleteFirewallManagerRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIPSetAsyncHelper(const Model::DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLoggingConfigurationAsyncHelper(const Model::DeleteLoggingConfigurationRequest& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePermissionPolicyAsyncHelper(const Model::DeletePermissionPolicyRequest& request, const DeletePermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRegexPatternSetAsyncHelper(const Model::DeleteRegexPatternSetRequest& request, const DeleteRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRuleGroupAsyncHelper(const Model::DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWebACLAsyncHelper(const Model::DeleteWebACLRequest& request, const DeleteWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeManagedRuleGroupAsyncHelper(const Model::DescribeManagedRuleGroupRequest& request, const DescribeManagedRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateWebACLAsyncHelper(const Model::DisassociateWebACLRequest& request, const DisassociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIPSetAsyncHelper(const Model::GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLoggingConfigurationAsyncHelper(const Model::GetLoggingConfigurationRequest& request, const GetLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPermissionPolicyAsyncHelper(const Model::GetPermissionPolicyRequest& request, const GetPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRateBasedStatementManagedKeysAsyncHelper(const Model::GetRateBasedStatementManagedKeysRequest& request, const GetRateBasedStatementManagedKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRegexPatternSetAsyncHelper(const Model::GetRegexPatternSetRequest& request, const GetRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRuleGroupAsyncHelper(const Model::GetRuleGroupRequest& request, const GetRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSampledRequestsAsyncHelper(const Model::GetSampledRequestsRequest& request, const GetSampledRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWebACLAsyncHelper(const Model::GetWebACLRequest& request, const GetWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWebACLForResourceAsyncHelper(const Model::GetWebACLForResourceRequest& request, const GetWebACLForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAvailableManagedRuleGroupsAsyncHelper(const Model::ListAvailableManagedRuleGroupsRequest& request, const ListAvailableManagedRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIPSetsAsyncHelper(const Model::ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLoggingConfigurationsAsyncHelper(const Model::ListLoggingConfigurationsRequest& request, const ListLoggingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRegexPatternSetsAsyncHelper(const Model::ListRegexPatternSetsRequest& request, const ListRegexPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourcesForWebACLAsyncHelper(const Model::ListResourcesForWebACLRequest& request, const ListResourcesForWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRuleGroupsAsyncHelper(const Model::ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWebACLsAsyncHelper(const Model::ListWebACLsRequest& request, const ListWebACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutLoggingConfigurationAsyncHelper(const Model::PutLoggingConfigurationRequest& request, const PutLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutPermissionPolicyAsyncHelper(const Model::PutPermissionPolicyRequest& request, const PutPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateIPSetAsyncHelper(const Model::UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRegexPatternSetAsyncHelper(const Model::UpdateRegexPatternSetRequest& request, const UpdateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRuleGroupAsyncHelper(const Model::UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWebACLAsyncHelper(const Model::UpdateWebACLRequest& request, const UpdateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace WAFV2
} // namespace Aws
