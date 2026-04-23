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
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/HTTPRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFRegional
{
namespace Model
{

  /**
   * <p>The response from a <a>GetSampledRequests</a> request includes a
   * <code>SampledHTTPRequests</code> complex type that appears as
   * <code>SampledRequests</code> in the response syntax.
   * <code>SampledHTTPRequests</code> contains one <code>SampledHTTPRequest</code>
   * object for each web request that is returned by
   * <code>GetSampledRequests</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/SampledHTTPRequest">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API SampledHTTPRequest
  {
  public:
    SampledHTTPRequest();
    SampledHTTPRequest(Aws::Utils::Json::JsonView jsonValue);
    SampledHTTPRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A complex type that contains detailed information about the request.</p>
     */
    inline const HTTPRequest& GetRequest() const{ return m_request; }

    /**
     * <p>A complex type that contains detailed information about the request.</p>
     */
    inline bool RequestHasBeenSet() const { return m_requestHasBeenSet; }

    /**
     * <p>A complex type that contains detailed information about the request.</p>
     */
    inline void SetRequest(const HTTPRequest& value) { m_requestHasBeenSet = true; m_request = value; }

    /**
     * <p>A complex type that contains detailed information about the request.</p>
     */
    inline void SetRequest(HTTPRequest&& value) { m_requestHasBeenSet = true; m_request = std::move(value); }

    /**
     * <p>A complex type that contains detailed information about the request.</p>
     */
    inline SampledHTTPRequest& WithRequest(const HTTPRequest& value) { SetRequest(value); return *this;}

    /**
     * <p>A complex type that contains detailed information about the request.</p>
     */
    inline SampledHTTPRequest& WithRequest(HTTPRequest&& value) { SetRequest(std::move(value)); return *this;}


    /**
     * <p>A value that indicates how one result in the response relates proportionally
     * to other results in the response. A result that has a weight of <code>2</code>
     * represents roughly twice as many CloudFront web requests as a result that has a
     * weight of <code>1</code>.</p>
     */
    inline long long GetWeight() const{ return m_weight; }

    /**
     * <p>A value that indicates how one result in the response relates proportionally
     * to other results in the response. A result that has a weight of <code>2</code>
     * represents roughly twice as many CloudFront web requests as a result that has a
     * weight of <code>1</code>.</p>
     */
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }

    /**
     * <p>A value that indicates how one result in the response relates proportionally
     * to other results in the response. A result that has a weight of <code>2</code>
     * represents roughly twice as many CloudFront web requests as a result that has a
     * weight of <code>1</code>.</p>
     */
    inline void SetWeight(long long value) { m_weightHasBeenSet = true; m_weight = value; }

    /**
     * <p>A value that indicates how one result in the response relates proportionally
     * to other results in the response. A result that has a weight of <code>2</code>
     * represents roughly twice as many CloudFront web requests as a result that has a
     * weight of <code>1</code>.</p>
     */
    inline SampledHTTPRequest& WithWeight(long long value) { SetWeight(value); return *this;}


    /**
     * <p>The time at which AWS WAF received the request from your AWS resource, in
     * Unix time format (in seconds).</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time at which AWS WAF received the request from your AWS resource, in
     * Unix time format (in seconds).</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The time at which AWS WAF received the request from your AWS resource, in
     * Unix time format (in seconds).</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time at which AWS WAF received the request from your AWS resource, in
     * Unix time format (in seconds).</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The time at which AWS WAF received the request from your AWS resource, in
     * Unix time format (in seconds).</p>
     */
    inline SampledHTTPRequest& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The time at which AWS WAF received the request from your AWS resource, in
     * Unix time format (in seconds).</p>
     */
    inline SampledHTTPRequest& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>The action for the <code>Rule</code> that the request matched:
     * <code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The action for the <code>Rule</code> that the request matched:
     * <code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action for the <code>Rule</code> that the request matched:
     * <code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action for the <code>Rule</code> that the request matched:
     * <code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action for the <code>Rule</code> that the request matched:
     * <code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>The action for the <code>Rule</code> that the request matched:
     * <code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>.</p>
     */
    inline SampledHTTPRequest& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The action for the <code>Rule</code> that the request matched:
     * <code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>.</p>
     */
    inline SampledHTTPRequest& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The action for the <code>Rule</code> that the request matched:
     * <code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>.</p>
     */
    inline SampledHTTPRequest& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>This value is returned if the <code>GetSampledRequests</code> request
     * specifies the ID of a <code>RuleGroup</code> rather than the ID of an individual
     * rule. <code>RuleWithinRuleGroup</code> is the rule within the specified
     * <code>RuleGroup</code> that matched the request listed in the response.</p>
     */
    inline const Aws::String& GetRuleWithinRuleGroup() const{ return m_ruleWithinRuleGroup; }

    /**
     * <p>This value is returned if the <code>GetSampledRequests</code> request
     * specifies the ID of a <code>RuleGroup</code> rather than the ID of an individual
     * rule. <code>RuleWithinRuleGroup</code> is the rule within the specified
     * <code>RuleGroup</code> that matched the request listed in the response.</p>
     */
    inline bool RuleWithinRuleGroupHasBeenSet() const { return m_ruleWithinRuleGroupHasBeenSet; }

    /**
     * <p>This value is returned if the <code>GetSampledRequests</code> request
     * specifies the ID of a <code>RuleGroup</code> rather than the ID of an individual
     * rule. <code>RuleWithinRuleGroup</code> is the rule within the specified
     * <code>RuleGroup</code> that matched the request listed in the response.</p>
     */
    inline void SetRuleWithinRuleGroup(const Aws::String& value) { m_ruleWithinRuleGroupHasBeenSet = true; m_ruleWithinRuleGroup = value; }

    /**
     * <p>This value is returned if the <code>GetSampledRequests</code> request
     * specifies the ID of a <code>RuleGroup</code> rather than the ID of an individual
     * rule. <code>RuleWithinRuleGroup</code> is the rule within the specified
     * <code>RuleGroup</code> that matched the request listed in the response.</p>
     */
    inline void SetRuleWithinRuleGroup(Aws::String&& value) { m_ruleWithinRuleGroupHasBeenSet = true; m_ruleWithinRuleGroup = std::move(value); }

    /**
     * <p>This value is returned if the <code>GetSampledRequests</code> request
     * specifies the ID of a <code>RuleGroup</code> rather than the ID of an individual
     * rule. <code>RuleWithinRuleGroup</code> is the rule within the specified
     * <code>RuleGroup</code> that matched the request listed in the response.</p>
     */
    inline void SetRuleWithinRuleGroup(const char* value) { m_ruleWithinRuleGroupHasBeenSet = true; m_ruleWithinRuleGroup.assign(value); }

    /**
     * <p>This value is returned if the <code>GetSampledRequests</code> request
     * specifies the ID of a <code>RuleGroup</code> rather than the ID of an individual
     * rule. <code>RuleWithinRuleGroup</code> is the rule within the specified
     * <code>RuleGroup</code> that matched the request listed in the response.</p>
     */
    inline SampledHTTPRequest& WithRuleWithinRuleGroup(const Aws::String& value) { SetRuleWithinRuleGroup(value); return *this;}

    /**
     * <p>This value is returned if the <code>GetSampledRequests</code> request
     * specifies the ID of a <code>RuleGroup</code> rather than the ID of an individual
     * rule. <code>RuleWithinRuleGroup</code> is the rule within the specified
     * <code>RuleGroup</code> that matched the request listed in the response.</p>
     */
    inline SampledHTTPRequest& WithRuleWithinRuleGroup(Aws::String&& value) { SetRuleWithinRuleGroup(std::move(value)); return *this;}

    /**
     * <p>This value is returned if the <code>GetSampledRequests</code> request
     * specifies the ID of a <code>RuleGroup</code> rather than the ID of an individual
     * rule. <code>RuleWithinRuleGroup</code> is the rule within the specified
     * <code>RuleGroup</code> that matched the request listed in the response.</p>
     */
    inline SampledHTTPRequest& WithRuleWithinRuleGroup(const char* value) { SetRuleWithinRuleGroup(value); return *this;}

  private:

    HTTPRequest m_request;
    bool m_requestHasBeenSet;

    long long m_weight;
    bool m_weightHasBeenSet;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;

    Aws::String m_action;
    bool m_actionHasBeenSet;

    Aws::String m_ruleWithinRuleGroup;
    bool m_ruleWithinRuleGroupHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
