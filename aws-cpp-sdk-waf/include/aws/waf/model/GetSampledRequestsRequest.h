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
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf/model/TimeWindow.h>
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class AWS_WAF_API GetSampledRequestsRequest : public WAFRequest
  {
  public:
    GetSampledRequestsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSampledRequests"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>WebACLId</code> of the <code>WebACL</code> for which you want
     * <code>GetSampledRequests</code> to return a sample of requests.</p>
     */
    inline const Aws::String& GetWebAclId() const{ return m_webAclId; }

    /**
     * <p>The <code>WebACLId</code> of the <code>WebACL</code> for which you want
     * <code>GetSampledRequests</code> to return a sample of requests.</p>
     */
    inline bool WebAclIdHasBeenSet() const { return m_webAclIdHasBeenSet; }

    /**
     * <p>The <code>WebACLId</code> of the <code>WebACL</code> for which you want
     * <code>GetSampledRequests</code> to return a sample of requests.</p>
     */
    inline void SetWebAclId(const Aws::String& value) { m_webAclIdHasBeenSet = true; m_webAclId = value; }

    /**
     * <p>The <code>WebACLId</code> of the <code>WebACL</code> for which you want
     * <code>GetSampledRequests</code> to return a sample of requests.</p>
     */
    inline void SetWebAclId(Aws::String&& value) { m_webAclIdHasBeenSet = true; m_webAclId = std::move(value); }

    /**
     * <p>The <code>WebACLId</code> of the <code>WebACL</code> for which you want
     * <code>GetSampledRequests</code> to return a sample of requests.</p>
     */
    inline void SetWebAclId(const char* value) { m_webAclIdHasBeenSet = true; m_webAclId.assign(value); }

    /**
     * <p>The <code>WebACLId</code> of the <code>WebACL</code> for which you want
     * <code>GetSampledRequests</code> to return a sample of requests.</p>
     */
    inline GetSampledRequestsRequest& WithWebAclId(const Aws::String& value) { SetWebAclId(value); return *this;}

    /**
     * <p>The <code>WebACLId</code> of the <code>WebACL</code> for which you want
     * <code>GetSampledRequests</code> to return a sample of requests.</p>
     */
    inline GetSampledRequestsRequest& WithWebAclId(Aws::String&& value) { SetWebAclId(std::move(value)); return *this;}

    /**
     * <p>The <code>WebACLId</code> of the <code>WebACL</code> for which you want
     * <code>GetSampledRequests</code> to return a sample of requests.</p>
     */
    inline GetSampledRequestsRequest& WithWebAclId(const char* value) { SetWebAclId(value); return *this;}


    /**
     * <p> <code>RuleId</code> is one of three values:</p> <ul> <li> <p>The
     * <code>RuleId</code> of the <code>Rule</code> or the <code>RuleGroupId</code> of
     * the <code>RuleGroup</code> for which you want <code>GetSampledRequests</code> to
     * return a sample of requests.</p> </li> <li> <p> <code>Default_Action</code>,
     * which causes <code>GetSampledRequests</code> to return a sample of the requests
     * that didn't match any of the rules in the specified <code>WebACL</code>.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p> <code>RuleId</code> is one of three values:</p> <ul> <li> <p>The
     * <code>RuleId</code> of the <code>Rule</code> or the <code>RuleGroupId</code> of
     * the <code>RuleGroup</code> for which you want <code>GetSampledRequests</code> to
     * return a sample of requests.</p> </li> <li> <p> <code>Default_Action</code>,
     * which causes <code>GetSampledRequests</code> to return a sample of the requests
     * that didn't match any of the rules in the specified <code>WebACL</code>.</p>
     * </li> </ul>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p> <code>RuleId</code> is one of three values:</p> <ul> <li> <p>The
     * <code>RuleId</code> of the <code>Rule</code> or the <code>RuleGroupId</code> of
     * the <code>RuleGroup</code> for which you want <code>GetSampledRequests</code> to
     * return a sample of requests.</p> </li> <li> <p> <code>Default_Action</code>,
     * which causes <code>GetSampledRequests</code> to return a sample of the requests
     * that didn't match any of the rules in the specified <code>WebACL</code>.</p>
     * </li> </ul>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p> <code>RuleId</code> is one of three values:</p> <ul> <li> <p>The
     * <code>RuleId</code> of the <code>Rule</code> or the <code>RuleGroupId</code> of
     * the <code>RuleGroup</code> for which you want <code>GetSampledRequests</code> to
     * return a sample of requests.</p> </li> <li> <p> <code>Default_Action</code>,
     * which causes <code>GetSampledRequests</code> to return a sample of the requests
     * that didn't match any of the rules in the specified <code>WebACL</code>.</p>
     * </li> </ul>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p> <code>RuleId</code> is one of three values:</p> <ul> <li> <p>The
     * <code>RuleId</code> of the <code>Rule</code> or the <code>RuleGroupId</code> of
     * the <code>RuleGroup</code> for which you want <code>GetSampledRequests</code> to
     * return a sample of requests.</p> </li> <li> <p> <code>Default_Action</code>,
     * which causes <code>GetSampledRequests</code> to return a sample of the requests
     * that didn't match any of the rules in the specified <code>WebACL</code>.</p>
     * </li> </ul>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p> <code>RuleId</code> is one of three values:</p> <ul> <li> <p>The
     * <code>RuleId</code> of the <code>Rule</code> or the <code>RuleGroupId</code> of
     * the <code>RuleGroup</code> for which you want <code>GetSampledRequests</code> to
     * return a sample of requests.</p> </li> <li> <p> <code>Default_Action</code>,
     * which causes <code>GetSampledRequests</code> to return a sample of the requests
     * that didn't match any of the rules in the specified <code>WebACL</code>.</p>
     * </li> </ul>
     */
    inline GetSampledRequestsRequest& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p> <code>RuleId</code> is one of three values:</p> <ul> <li> <p>The
     * <code>RuleId</code> of the <code>Rule</code> or the <code>RuleGroupId</code> of
     * the <code>RuleGroup</code> for which you want <code>GetSampledRequests</code> to
     * return a sample of requests.</p> </li> <li> <p> <code>Default_Action</code>,
     * which causes <code>GetSampledRequests</code> to return a sample of the requests
     * that didn't match any of the rules in the specified <code>WebACL</code>.</p>
     * </li> </ul>
     */
    inline GetSampledRequestsRequest& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p> <code>RuleId</code> is one of three values:</p> <ul> <li> <p>The
     * <code>RuleId</code> of the <code>Rule</code> or the <code>RuleGroupId</code> of
     * the <code>RuleGroup</code> for which you want <code>GetSampledRequests</code> to
     * return a sample of requests.</p> </li> <li> <p> <code>Default_Action</code>,
     * which causes <code>GetSampledRequests</code> to return a sample of the requests
     * that didn't match any of the rules in the specified <code>WebACL</code>.</p>
     * </li> </ul>
     */
    inline GetSampledRequestsRequest& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p>The start date and time and the end date and time of the range for which you
     * want <code>GetSampledRequests</code> to return a sample of requests. Specify the
     * date and time in the following format: <code>"2016-09-27T14:50Z"</code>. You can
     * specify any time range in the previous three hours.</p>
     */
    inline const TimeWindow& GetTimeWindow() const{ return m_timeWindow; }

    /**
     * <p>The start date and time and the end date and time of the range for which you
     * want <code>GetSampledRequests</code> to return a sample of requests. Specify the
     * date and time in the following format: <code>"2016-09-27T14:50Z"</code>. You can
     * specify any time range in the previous three hours.</p>
     */
    inline bool TimeWindowHasBeenSet() const { return m_timeWindowHasBeenSet; }

    /**
     * <p>The start date and time and the end date and time of the range for which you
     * want <code>GetSampledRequests</code> to return a sample of requests. Specify the
     * date and time in the following format: <code>"2016-09-27T14:50Z"</code>. You can
     * specify any time range in the previous three hours.</p>
     */
    inline void SetTimeWindow(const TimeWindow& value) { m_timeWindowHasBeenSet = true; m_timeWindow = value; }

    /**
     * <p>The start date and time and the end date and time of the range for which you
     * want <code>GetSampledRequests</code> to return a sample of requests. Specify the
     * date and time in the following format: <code>"2016-09-27T14:50Z"</code>. You can
     * specify any time range in the previous three hours.</p>
     */
    inline void SetTimeWindow(TimeWindow&& value) { m_timeWindowHasBeenSet = true; m_timeWindow = std::move(value); }

    /**
     * <p>The start date and time and the end date and time of the range for which you
     * want <code>GetSampledRequests</code> to return a sample of requests. Specify the
     * date and time in the following format: <code>"2016-09-27T14:50Z"</code>. You can
     * specify any time range in the previous three hours.</p>
     */
    inline GetSampledRequestsRequest& WithTimeWindow(const TimeWindow& value) { SetTimeWindow(value); return *this;}

    /**
     * <p>The start date and time and the end date and time of the range for which you
     * want <code>GetSampledRequests</code> to return a sample of requests. Specify the
     * date and time in the following format: <code>"2016-09-27T14:50Z"</code>. You can
     * specify any time range in the previous three hours.</p>
     */
    inline GetSampledRequestsRequest& WithTimeWindow(TimeWindow&& value) { SetTimeWindow(std::move(value)); return *this;}


    /**
     * <p>The number of requests that you want AWS WAF to return from among the first
     * 5,000 requests that your AWS resource received during the time range. If your
     * resource received fewer requests than the value of <code>MaxItems</code>,
     * <code>GetSampledRequests</code> returns information about all of them. </p>
     */
    inline long long GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The number of requests that you want AWS WAF to return from among the first
     * 5,000 requests that your AWS resource received during the time range. If your
     * resource received fewer requests than the value of <code>MaxItems</code>,
     * <code>GetSampledRequests</code> returns information about all of them. </p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The number of requests that you want AWS WAF to return from among the first
     * 5,000 requests that your AWS resource received during the time range. If your
     * resource received fewer requests than the value of <code>MaxItems</code>,
     * <code>GetSampledRequests</code> returns information about all of them. </p>
     */
    inline void SetMaxItems(long long value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The number of requests that you want AWS WAF to return from among the first
     * 5,000 requests that your AWS resource received during the time range. If your
     * resource received fewer requests than the value of <code>MaxItems</code>,
     * <code>GetSampledRequests</code> returns information about all of them. </p>
     */
    inline GetSampledRequestsRequest& WithMaxItems(long long value) { SetMaxItems(value); return *this;}

  private:

    Aws::String m_webAclId;
    bool m_webAclIdHasBeenSet;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet;

    TimeWindow m_timeWindow;
    bool m_timeWindowHasBeenSet;

    long long m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
