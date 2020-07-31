/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/HTTPRequest.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   *  <p>This is the latest version of <b>AWS WAF</b>, named AWS WAFV2,
   * released in November, 2019. For information, including how to migrate your AWS
   * WAF resources from the prior release, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p>  <p>Represents a single sampled web
   * request. The response from <a>GetSampledRequests</a> includes a
   * <code>SampledHTTPRequests</code> complex type that appears as
   * <code>SampledRequests</code> in the response syntax.
   * <code>SampledHTTPRequests</code> contains an array of
   * <code>SampledHTTPRequest</code> objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/SampledHTTPRequest">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API SampledHTTPRequest
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
     * to other results in the response. For example, a result that has a weight of
     * <code>2</code> represents roughly twice as many web requests as a result that
     * has a weight of <code>1</code>.</p>
     */
    inline long long GetWeight() const{ return m_weight; }

    /**
     * <p>A value that indicates how one result in the response relates proportionally
     * to other results in the response. For example, a result that has a weight of
     * <code>2</code> represents roughly twice as many web requests as a result that
     * has a weight of <code>1</code>.</p>
     */
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }

    /**
     * <p>A value that indicates how one result in the response relates proportionally
     * to other results in the response. For example, a result that has a weight of
     * <code>2</code> represents roughly twice as many web requests as a result that
     * has a weight of <code>1</code>.</p>
     */
    inline void SetWeight(long long value) { m_weightHasBeenSet = true; m_weight = value; }

    /**
     * <p>A value that indicates how one result in the response relates proportionally
     * to other results in the response. For example, a result that has a weight of
     * <code>2</code> represents roughly twice as many web requests as a result that
     * has a weight of <code>1</code>.</p>
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
     * <p>The name of the <code>Rule</code> that the request matched. For managed rule
     * groups, the format for this name is <code>&lt;vendor name&gt;#&lt;managed rule
     * group name&gt;#&lt;rule name&gt;</code>. For your own rule groups, the format
     * for this name is <code>&lt;rule group name&gt;#&lt;rule name&gt;</code>. If the
     * rule is not in a rule group, this field is absent. </p>
     */
    inline const Aws::String& GetRuleNameWithinRuleGroup() const{ return m_ruleNameWithinRuleGroup; }

    /**
     * <p>The name of the <code>Rule</code> that the request matched. For managed rule
     * groups, the format for this name is <code>&lt;vendor name&gt;#&lt;managed rule
     * group name&gt;#&lt;rule name&gt;</code>. For your own rule groups, the format
     * for this name is <code>&lt;rule group name&gt;#&lt;rule name&gt;</code>. If the
     * rule is not in a rule group, this field is absent. </p>
     */
    inline bool RuleNameWithinRuleGroupHasBeenSet() const { return m_ruleNameWithinRuleGroupHasBeenSet; }

    /**
     * <p>The name of the <code>Rule</code> that the request matched. For managed rule
     * groups, the format for this name is <code>&lt;vendor name&gt;#&lt;managed rule
     * group name&gt;#&lt;rule name&gt;</code>. For your own rule groups, the format
     * for this name is <code>&lt;rule group name&gt;#&lt;rule name&gt;</code>. If the
     * rule is not in a rule group, this field is absent. </p>
     */
    inline void SetRuleNameWithinRuleGroup(const Aws::String& value) { m_ruleNameWithinRuleGroupHasBeenSet = true; m_ruleNameWithinRuleGroup = value; }

    /**
     * <p>The name of the <code>Rule</code> that the request matched. For managed rule
     * groups, the format for this name is <code>&lt;vendor name&gt;#&lt;managed rule
     * group name&gt;#&lt;rule name&gt;</code>. For your own rule groups, the format
     * for this name is <code>&lt;rule group name&gt;#&lt;rule name&gt;</code>. If the
     * rule is not in a rule group, this field is absent. </p>
     */
    inline void SetRuleNameWithinRuleGroup(Aws::String&& value) { m_ruleNameWithinRuleGroupHasBeenSet = true; m_ruleNameWithinRuleGroup = std::move(value); }

    /**
     * <p>The name of the <code>Rule</code> that the request matched. For managed rule
     * groups, the format for this name is <code>&lt;vendor name&gt;#&lt;managed rule
     * group name&gt;#&lt;rule name&gt;</code>. For your own rule groups, the format
     * for this name is <code>&lt;rule group name&gt;#&lt;rule name&gt;</code>. If the
     * rule is not in a rule group, this field is absent. </p>
     */
    inline void SetRuleNameWithinRuleGroup(const char* value) { m_ruleNameWithinRuleGroupHasBeenSet = true; m_ruleNameWithinRuleGroup.assign(value); }

    /**
     * <p>The name of the <code>Rule</code> that the request matched. For managed rule
     * groups, the format for this name is <code>&lt;vendor name&gt;#&lt;managed rule
     * group name&gt;#&lt;rule name&gt;</code>. For your own rule groups, the format
     * for this name is <code>&lt;rule group name&gt;#&lt;rule name&gt;</code>. If the
     * rule is not in a rule group, this field is absent. </p>
     */
    inline SampledHTTPRequest& WithRuleNameWithinRuleGroup(const Aws::String& value) { SetRuleNameWithinRuleGroup(value); return *this;}

    /**
     * <p>The name of the <code>Rule</code> that the request matched. For managed rule
     * groups, the format for this name is <code>&lt;vendor name&gt;#&lt;managed rule
     * group name&gt;#&lt;rule name&gt;</code>. For your own rule groups, the format
     * for this name is <code>&lt;rule group name&gt;#&lt;rule name&gt;</code>. If the
     * rule is not in a rule group, this field is absent. </p>
     */
    inline SampledHTTPRequest& WithRuleNameWithinRuleGroup(Aws::String&& value) { SetRuleNameWithinRuleGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>Rule</code> that the request matched. For managed rule
     * groups, the format for this name is <code>&lt;vendor name&gt;#&lt;managed rule
     * group name&gt;#&lt;rule name&gt;</code>. For your own rule groups, the format
     * for this name is <code>&lt;rule group name&gt;#&lt;rule name&gt;</code>. If the
     * rule is not in a rule group, this field is absent. </p>
     */
    inline SampledHTTPRequest& WithRuleNameWithinRuleGroup(const char* value) { SetRuleNameWithinRuleGroup(value); return *this;}

  private:

    HTTPRequest m_request;
    bool m_requestHasBeenSet;

    long long m_weight;
    bool m_weightHasBeenSet;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;

    Aws::String m_action;
    bool m_actionHasBeenSet;

    Aws::String m_ruleNameWithinRuleGroup;
    bool m_ruleNameWithinRuleGroupHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
