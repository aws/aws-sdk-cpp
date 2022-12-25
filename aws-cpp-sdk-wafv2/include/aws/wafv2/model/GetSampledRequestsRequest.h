/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/wafv2/model/TimeWindow.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class GetSampledRequestsRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API GetSampledRequestsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSampledRequests"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon resource name (ARN) of the <code>WebACL</code> for which you want
     * a sample of requests.</p>
     */
    inline const Aws::String& GetWebAclArn() const{ return m_webAclArn; }

    /**
     * <p>The Amazon resource name (ARN) of the <code>WebACL</code> for which you want
     * a sample of requests.</p>
     */
    inline bool WebAclArnHasBeenSet() const { return m_webAclArnHasBeenSet; }

    /**
     * <p>The Amazon resource name (ARN) of the <code>WebACL</code> for which you want
     * a sample of requests.</p>
     */
    inline void SetWebAclArn(const Aws::String& value) { m_webAclArnHasBeenSet = true; m_webAclArn = value; }

    /**
     * <p>The Amazon resource name (ARN) of the <code>WebACL</code> for which you want
     * a sample of requests.</p>
     */
    inline void SetWebAclArn(Aws::String&& value) { m_webAclArnHasBeenSet = true; m_webAclArn = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) of the <code>WebACL</code> for which you want
     * a sample of requests.</p>
     */
    inline void SetWebAclArn(const char* value) { m_webAclArnHasBeenSet = true; m_webAclArn.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) of the <code>WebACL</code> for which you want
     * a sample of requests.</p>
     */
    inline GetSampledRequestsRequest& WithWebAclArn(const Aws::String& value) { SetWebAclArn(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the <code>WebACL</code> for which you want
     * a sample of requests.</p>
     */
    inline GetSampledRequestsRequest& WithWebAclArn(Aws::String&& value) { SetWebAclArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the <code>WebACL</code> for which you want
     * a sample of requests.</p>
     */
    inline GetSampledRequestsRequest& WithWebAclArn(const char* value) { SetWebAclArn(value); return *this;}


    /**
     * <p>The metric name assigned to the <code>Rule</code> or <code>RuleGroup</code>
     * for which you want a sample of requests.</p>
     */
    inline const Aws::String& GetRuleMetricName() const{ return m_ruleMetricName; }

    /**
     * <p>The metric name assigned to the <code>Rule</code> or <code>RuleGroup</code>
     * for which you want a sample of requests.</p>
     */
    inline bool RuleMetricNameHasBeenSet() const { return m_ruleMetricNameHasBeenSet; }

    /**
     * <p>The metric name assigned to the <code>Rule</code> or <code>RuleGroup</code>
     * for which you want a sample of requests.</p>
     */
    inline void SetRuleMetricName(const Aws::String& value) { m_ruleMetricNameHasBeenSet = true; m_ruleMetricName = value; }

    /**
     * <p>The metric name assigned to the <code>Rule</code> or <code>RuleGroup</code>
     * for which you want a sample of requests.</p>
     */
    inline void SetRuleMetricName(Aws::String&& value) { m_ruleMetricNameHasBeenSet = true; m_ruleMetricName = std::move(value); }

    /**
     * <p>The metric name assigned to the <code>Rule</code> or <code>RuleGroup</code>
     * for which you want a sample of requests.</p>
     */
    inline void SetRuleMetricName(const char* value) { m_ruleMetricNameHasBeenSet = true; m_ruleMetricName.assign(value); }

    /**
     * <p>The metric name assigned to the <code>Rule</code> or <code>RuleGroup</code>
     * for which you want a sample of requests.</p>
     */
    inline GetSampledRequestsRequest& WithRuleMetricName(const Aws::String& value) { SetRuleMetricName(value); return *this;}

    /**
     * <p>The metric name assigned to the <code>Rule</code> or <code>RuleGroup</code>
     * for which you want a sample of requests.</p>
     */
    inline GetSampledRequestsRequest& WithRuleMetricName(Aws::String&& value) { SetRuleMetricName(std::move(value)); return *this;}

    /**
     * <p>The metric name assigned to the <code>Rule</code> or <code>RuleGroup</code>
     * for which you want a sample of requests.</p>
     */
    inline GetSampledRequestsRequest& WithRuleMetricName(const char* value) { SetRuleMetricName(value); return *this;}


    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline GetSampledRequestsRequest& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline GetSampledRequestsRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p>The start date and time and the end date and time of the range for which you
     * want <code>GetSampledRequests</code> to return a sample of requests. You must
     * specify the times in Coordinated Universal Time (UTC) format. UTC format
     * includes the special designator, <code>Z</code>. For example,
     * <code>"2016-09-27T14:50Z"</code>. You can specify any time range in the previous
     * three hours. If you specify a start time that's earlier than three hours ago,
     * WAF sets it to three hours ago.</p>
     */
    inline const TimeWindow& GetTimeWindow() const{ return m_timeWindow; }

    /**
     * <p>The start date and time and the end date and time of the range for which you
     * want <code>GetSampledRequests</code> to return a sample of requests. You must
     * specify the times in Coordinated Universal Time (UTC) format. UTC format
     * includes the special designator, <code>Z</code>. For example,
     * <code>"2016-09-27T14:50Z"</code>. You can specify any time range in the previous
     * three hours. If you specify a start time that's earlier than three hours ago,
     * WAF sets it to three hours ago.</p>
     */
    inline bool TimeWindowHasBeenSet() const { return m_timeWindowHasBeenSet; }

    /**
     * <p>The start date and time and the end date and time of the range for which you
     * want <code>GetSampledRequests</code> to return a sample of requests. You must
     * specify the times in Coordinated Universal Time (UTC) format. UTC format
     * includes the special designator, <code>Z</code>. For example,
     * <code>"2016-09-27T14:50Z"</code>. You can specify any time range in the previous
     * three hours. If you specify a start time that's earlier than three hours ago,
     * WAF sets it to three hours ago.</p>
     */
    inline void SetTimeWindow(const TimeWindow& value) { m_timeWindowHasBeenSet = true; m_timeWindow = value; }

    /**
     * <p>The start date and time and the end date and time of the range for which you
     * want <code>GetSampledRequests</code> to return a sample of requests. You must
     * specify the times in Coordinated Universal Time (UTC) format. UTC format
     * includes the special designator, <code>Z</code>. For example,
     * <code>"2016-09-27T14:50Z"</code>. You can specify any time range in the previous
     * three hours. If you specify a start time that's earlier than three hours ago,
     * WAF sets it to three hours ago.</p>
     */
    inline void SetTimeWindow(TimeWindow&& value) { m_timeWindowHasBeenSet = true; m_timeWindow = std::move(value); }

    /**
     * <p>The start date and time and the end date and time of the range for which you
     * want <code>GetSampledRequests</code> to return a sample of requests. You must
     * specify the times in Coordinated Universal Time (UTC) format. UTC format
     * includes the special designator, <code>Z</code>. For example,
     * <code>"2016-09-27T14:50Z"</code>. You can specify any time range in the previous
     * three hours. If you specify a start time that's earlier than three hours ago,
     * WAF sets it to three hours ago.</p>
     */
    inline GetSampledRequestsRequest& WithTimeWindow(const TimeWindow& value) { SetTimeWindow(value); return *this;}

    /**
     * <p>The start date and time and the end date and time of the range for which you
     * want <code>GetSampledRequests</code> to return a sample of requests. You must
     * specify the times in Coordinated Universal Time (UTC) format. UTC format
     * includes the special designator, <code>Z</code>. For example,
     * <code>"2016-09-27T14:50Z"</code>. You can specify any time range in the previous
     * three hours. If you specify a start time that's earlier than three hours ago,
     * WAF sets it to three hours ago.</p>
     */
    inline GetSampledRequestsRequest& WithTimeWindow(TimeWindow&& value) { SetTimeWindow(std::move(value)); return *this;}


    /**
     * <p>The number of requests that you want WAF to return from among the first 5,000
     * requests that your Amazon Web Services resource received during the time range.
     * If your resource received fewer requests than the value of
     * <code>MaxItems</code>, <code>GetSampledRequests</code> returns information about
     * all of them. </p>
     */
    inline long long GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The number of requests that you want WAF to return from among the first 5,000
     * requests that your Amazon Web Services resource received during the time range.
     * If your resource received fewer requests than the value of
     * <code>MaxItems</code>, <code>GetSampledRequests</code> returns information about
     * all of them. </p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The number of requests that you want WAF to return from among the first 5,000
     * requests that your Amazon Web Services resource received during the time range.
     * If your resource received fewer requests than the value of
     * <code>MaxItems</code>, <code>GetSampledRequests</code> returns information about
     * all of them. </p>
     */
    inline void SetMaxItems(long long value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The number of requests that you want WAF to return from among the first 5,000
     * requests that your Amazon Web Services resource received during the time range.
     * If your resource received fewer requests than the value of
     * <code>MaxItems</code>, <code>GetSampledRequests</code> returns information about
     * all of them. </p>
     */
    inline GetSampledRequestsRequest& WithMaxItems(long long value) { SetMaxItems(value); return *this;}

  private:

    Aws::String m_webAclArn;
    bool m_webAclArnHasBeenSet = false;

    Aws::String m_ruleMetricName;
    bool m_ruleMetricNameHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    TimeWindow m_timeWindow;
    bool m_timeWindowHasBeenSet = false;

    long long m_maxItems;
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
