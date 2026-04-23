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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf-regional/model/WafAction.h>
#include <aws/waf-regional/model/WafOverrideAction.h>
#include <aws/waf-regional/model/WafRuleType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/ExcludedRule.h>
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
   * <p>The <code>ActivatedRule</code> object in an <a>UpdateWebACL</a> request
   * specifies a <code>Rule</code> that you want to insert or delete, the priority of
   * the <code>Rule</code> in the <code>WebACL</code>, and the action that you want
   * AWS WAF to take when a web request matches the <code>Rule</code>
   * (<code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>).</p> <p>To
   * specify whether to insert or delete a <code>Rule</code>, use the
   * <code>Action</code> parameter in the <a>WebACLUpdate</a> data
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ActivatedRule">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API ActivatedRule
  {
  public:
    ActivatedRule();
    ActivatedRule(Aws::Utils::Json::JsonView jsonValue);
    ActivatedRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the order in which the <code>Rules</code> in a <code>WebACL</code>
     * are evaluated. Rules with a lower value for <code>Priority</code> are evaluated
     * before <code>Rules</code> with a higher value. The value must be a unique
     * integer. If you add multiple <code>Rules</code> to a <code>WebACL</code>, the
     * values don't need to be consecutive.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>Specifies the order in which the <code>Rules</code> in a <code>WebACL</code>
     * are evaluated. Rules with a lower value for <code>Priority</code> are evaluated
     * before <code>Rules</code> with a higher value. The value must be a unique
     * integer. If you add multiple <code>Rules</code> to a <code>WebACL</code>, the
     * values don't need to be consecutive.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>Specifies the order in which the <code>Rules</code> in a <code>WebACL</code>
     * are evaluated. Rules with a lower value for <code>Priority</code> are evaluated
     * before <code>Rules</code> with a higher value. The value must be a unique
     * integer. If you add multiple <code>Rules</code> to a <code>WebACL</code>, the
     * values don't need to be consecutive.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>Specifies the order in which the <code>Rules</code> in a <code>WebACL</code>
     * are evaluated. Rules with a lower value for <code>Priority</code> are evaluated
     * before <code>Rules</code> with a higher value. The value must be a unique
     * integer. If you add multiple <code>Rules</code> to a <code>WebACL</code>, the
     * values don't need to be consecutive.</p>
     */
    inline ActivatedRule& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The <code>RuleId</code> for a <code>Rule</code>. You use <code>RuleId</code>
     * to get more information about a <code>Rule</code> (see <a>GetRule</a>), update a
     * <code>Rule</code> (see <a>UpdateRule</a>), insert a <code>Rule</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>Rule</code> from AWS WAF (see
     * <a>DeleteRule</a>).</p> <p> <code>RuleId</code> is returned by <a>CreateRule</a>
     * and by <a>ListRules</a>.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The <code>RuleId</code> for a <code>Rule</code>. You use <code>RuleId</code>
     * to get more information about a <code>Rule</code> (see <a>GetRule</a>), update a
     * <code>Rule</code> (see <a>UpdateRule</a>), insert a <code>Rule</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>Rule</code> from AWS WAF (see
     * <a>DeleteRule</a>).</p> <p> <code>RuleId</code> is returned by <a>CreateRule</a>
     * and by <a>ListRules</a>.</p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>The <code>RuleId</code> for a <code>Rule</code>. You use <code>RuleId</code>
     * to get more information about a <code>Rule</code> (see <a>GetRule</a>), update a
     * <code>Rule</code> (see <a>UpdateRule</a>), insert a <code>Rule</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>Rule</code> from AWS WAF (see
     * <a>DeleteRule</a>).</p> <p> <code>RuleId</code> is returned by <a>CreateRule</a>
     * and by <a>ListRules</a>.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The <code>RuleId</code> for a <code>Rule</code>. You use <code>RuleId</code>
     * to get more information about a <code>Rule</code> (see <a>GetRule</a>), update a
     * <code>Rule</code> (see <a>UpdateRule</a>), insert a <code>Rule</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>Rule</code> from AWS WAF (see
     * <a>DeleteRule</a>).</p> <p> <code>RuleId</code> is returned by <a>CreateRule</a>
     * and by <a>ListRules</a>.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The <code>RuleId</code> for a <code>Rule</code>. You use <code>RuleId</code>
     * to get more information about a <code>Rule</code> (see <a>GetRule</a>), update a
     * <code>Rule</code> (see <a>UpdateRule</a>), insert a <code>Rule</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>Rule</code> from AWS WAF (see
     * <a>DeleteRule</a>).</p> <p> <code>RuleId</code> is returned by <a>CreateRule</a>
     * and by <a>ListRules</a>.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The <code>RuleId</code> for a <code>Rule</code>. You use <code>RuleId</code>
     * to get more information about a <code>Rule</code> (see <a>GetRule</a>), update a
     * <code>Rule</code> (see <a>UpdateRule</a>), insert a <code>Rule</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>Rule</code> from AWS WAF (see
     * <a>DeleteRule</a>).</p> <p> <code>RuleId</code> is returned by <a>CreateRule</a>
     * and by <a>ListRules</a>.</p>
     */
    inline ActivatedRule& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The <code>RuleId</code> for a <code>Rule</code>. You use <code>RuleId</code>
     * to get more information about a <code>Rule</code> (see <a>GetRule</a>), update a
     * <code>Rule</code> (see <a>UpdateRule</a>), insert a <code>Rule</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>Rule</code> from AWS WAF (see
     * <a>DeleteRule</a>).</p> <p> <code>RuleId</code> is returned by <a>CreateRule</a>
     * and by <a>ListRules</a>.</p>
     */
    inline ActivatedRule& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The <code>RuleId</code> for a <code>Rule</code>. You use <code>RuleId</code>
     * to get more information about a <code>Rule</code> (see <a>GetRule</a>), update a
     * <code>Rule</code> (see <a>UpdateRule</a>), insert a <code>Rule</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>Rule</code> from AWS WAF (see
     * <a>DeleteRule</a>).</p> <p> <code>RuleId</code> is returned by <a>CreateRule</a>
     * and by <a>ListRules</a>.</p>
     */
    inline ActivatedRule& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p>Specifies the action that CloudFront or AWS WAF takes when a web request
     * matches the conditions in the <code>Rule</code>. Valid values for
     * <code>Action</code> include the following:</p> <ul> <li> <p> <code>ALLOW</code>:
     * CloudFront responds with the requested object.</p> </li> <li> <p>
     * <code>BLOCK</code>: CloudFront responds with an HTTP 403 (Forbidden) status
     * code.</p> </li> <li> <p> <code>COUNT</code>: AWS WAF increments a counter of
     * requests that match the conditions in the rule and then continues to inspect the
     * web request based on the remaining rules in the web ACL. </p> </li> </ul> <p>
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case, you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline const WafAction& GetAction() const{ return m_action; }

    /**
     * <p>Specifies the action that CloudFront or AWS WAF takes when a web request
     * matches the conditions in the <code>Rule</code>. Valid values for
     * <code>Action</code> include the following:</p> <ul> <li> <p> <code>ALLOW</code>:
     * CloudFront responds with the requested object.</p> </li> <li> <p>
     * <code>BLOCK</code>: CloudFront responds with an HTTP 403 (Forbidden) status
     * code.</p> </li> <li> <p> <code>COUNT</code>: AWS WAF increments a counter of
     * requests that match the conditions in the rule and then continues to inspect the
     * web request based on the remaining rules in the web ACL. </p> </li> </ul> <p>
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case, you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies the action that CloudFront or AWS WAF takes when a web request
     * matches the conditions in the <code>Rule</code>. Valid values for
     * <code>Action</code> include the following:</p> <ul> <li> <p> <code>ALLOW</code>:
     * CloudFront responds with the requested object.</p> </li> <li> <p>
     * <code>BLOCK</code>: CloudFront responds with an HTTP 403 (Forbidden) status
     * code.</p> </li> <li> <p> <code>COUNT</code>: AWS WAF increments a counter of
     * requests that match the conditions in the rule and then continues to inspect the
     * web request based on the remaining rules in the web ACL. </p> </li> </ul> <p>
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case, you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline void SetAction(const WafAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies the action that CloudFront or AWS WAF takes when a web request
     * matches the conditions in the <code>Rule</code>. Valid values for
     * <code>Action</code> include the following:</p> <ul> <li> <p> <code>ALLOW</code>:
     * CloudFront responds with the requested object.</p> </li> <li> <p>
     * <code>BLOCK</code>: CloudFront responds with an HTTP 403 (Forbidden) status
     * code.</p> </li> <li> <p> <code>COUNT</code>: AWS WAF increments a counter of
     * requests that match the conditions in the rule and then continues to inspect the
     * web request based on the remaining rules in the web ACL. </p> </li> </ul> <p>
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case, you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline void SetAction(WafAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies the action that CloudFront or AWS WAF takes when a web request
     * matches the conditions in the <code>Rule</code>. Valid values for
     * <code>Action</code> include the following:</p> <ul> <li> <p> <code>ALLOW</code>:
     * CloudFront responds with the requested object.</p> </li> <li> <p>
     * <code>BLOCK</code>: CloudFront responds with an HTTP 403 (Forbidden) status
     * code.</p> </li> <li> <p> <code>COUNT</code>: AWS WAF increments a counter of
     * requests that match the conditions in the rule and then continues to inspect the
     * web request based on the remaining rules in the web ACL. </p> </li> </ul> <p>
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case, you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline ActivatedRule& WithAction(const WafAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies the action that CloudFront or AWS WAF takes when a web request
     * matches the conditions in the <code>Rule</code>. Valid values for
     * <code>Action</code> include the following:</p> <ul> <li> <p> <code>ALLOW</code>:
     * CloudFront responds with the requested object.</p> </li> <li> <p>
     * <code>BLOCK</code>: CloudFront responds with an HTTP 403 (Forbidden) status
     * code.</p> </li> <li> <p> <code>COUNT</code>: AWS WAF increments a counter of
     * requests that match the conditions in the rule and then continues to inspect the
     * web request based on the remaining rules in the web ACL. </p> </li> </ul> <p>
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case, you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline ActivatedRule& WithAction(WafAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Use the <code>OverrideAction</code> to test your <code>RuleGroup</code>.</p>
     * <p>Any rule in a <code>RuleGroup</code> can potentially block a request. If you
     * set the <code>OverrideAction</code> to <code>None</code>, the
     * <code>RuleGroup</code> will block a request if any individual rule in the
     * <code>RuleGroup</code> matches the request and is configured to block that
     * request. However if you first want to test the <code>RuleGroup</code>, set the
     * <code>OverrideAction</code> to <code>Count</code>. The <code>RuleGroup</code>
     * will then override any block action specified by individual rules contained
     * within the group. Instead of blocking matching requests, those requests will be
     * counted. You can view a record of counted requests using
     * <a>GetSampledRequests</a>. </p> <p> <code>ActivatedRule|OverrideAction</code>
     * applies only when updating or adding a <code>RuleGroup</code> to a
     * <code>WebACL</code>. In this case you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline const WafOverrideAction& GetOverrideAction() const{ return m_overrideAction; }

    /**
     * <p>Use the <code>OverrideAction</code> to test your <code>RuleGroup</code>.</p>
     * <p>Any rule in a <code>RuleGroup</code> can potentially block a request. If you
     * set the <code>OverrideAction</code> to <code>None</code>, the
     * <code>RuleGroup</code> will block a request if any individual rule in the
     * <code>RuleGroup</code> matches the request and is configured to block that
     * request. However if you first want to test the <code>RuleGroup</code>, set the
     * <code>OverrideAction</code> to <code>Count</code>. The <code>RuleGroup</code>
     * will then override any block action specified by individual rules contained
     * within the group. Instead of blocking matching requests, those requests will be
     * counted. You can view a record of counted requests using
     * <a>GetSampledRequests</a>. </p> <p> <code>ActivatedRule|OverrideAction</code>
     * applies only when updating or adding a <code>RuleGroup</code> to a
     * <code>WebACL</code>. In this case you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline bool OverrideActionHasBeenSet() const { return m_overrideActionHasBeenSet; }

    /**
     * <p>Use the <code>OverrideAction</code> to test your <code>RuleGroup</code>.</p>
     * <p>Any rule in a <code>RuleGroup</code> can potentially block a request. If you
     * set the <code>OverrideAction</code> to <code>None</code>, the
     * <code>RuleGroup</code> will block a request if any individual rule in the
     * <code>RuleGroup</code> matches the request and is configured to block that
     * request. However if you first want to test the <code>RuleGroup</code>, set the
     * <code>OverrideAction</code> to <code>Count</code>. The <code>RuleGroup</code>
     * will then override any block action specified by individual rules contained
     * within the group. Instead of blocking matching requests, those requests will be
     * counted. You can view a record of counted requests using
     * <a>GetSampledRequests</a>. </p> <p> <code>ActivatedRule|OverrideAction</code>
     * applies only when updating or adding a <code>RuleGroup</code> to a
     * <code>WebACL</code>. In this case you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline void SetOverrideAction(const WafOverrideAction& value) { m_overrideActionHasBeenSet = true; m_overrideAction = value; }

    /**
     * <p>Use the <code>OverrideAction</code> to test your <code>RuleGroup</code>.</p>
     * <p>Any rule in a <code>RuleGroup</code> can potentially block a request. If you
     * set the <code>OverrideAction</code> to <code>None</code>, the
     * <code>RuleGroup</code> will block a request if any individual rule in the
     * <code>RuleGroup</code> matches the request and is configured to block that
     * request. However if you first want to test the <code>RuleGroup</code>, set the
     * <code>OverrideAction</code> to <code>Count</code>. The <code>RuleGroup</code>
     * will then override any block action specified by individual rules contained
     * within the group. Instead of blocking matching requests, those requests will be
     * counted. You can view a record of counted requests using
     * <a>GetSampledRequests</a>. </p> <p> <code>ActivatedRule|OverrideAction</code>
     * applies only when updating or adding a <code>RuleGroup</code> to a
     * <code>WebACL</code>. In this case you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline void SetOverrideAction(WafOverrideAction&& value) { m_overrideActionHasBeenSet = true; m_overrideAction = std::move(value); }

    /**
     * <p>Use the <code>OverrideAction</code> to test your <code>RuleGroup</code>.</p>
     * <p>Any rule in a <code>RuleGroup</code> can potentially block a request. If you
     * set the <code>OverrideAction</code> to <code>None</code>, the
     * <code>RuleGroup</code> will block a request if any individual rule in the
     * <code>RuleGroup</code> matches the request and is configured to block that
     * request. However if you first want to test the <code>RuleGroup</code>, set the
     * <code>OverrideAction</code> to <code>Count</code>. The <code>RuleGroup</code>
     * will then override any block action specified by individual rules contained
     * within the group. Instead of blocking matching requests, those requests will be
     * counted. You can view a record of counted requests using
     * <a>GetSampledRequests</a>. </p> <p> <code>ActivatedRule|OverrideAction</code>
     * applies only when updating or adding a <code>RuleGroup</code> to a
     * <code>WebACL</code>. In this case you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline ActivatedRule& WithOverrideAction(const WafOverrideAction& value) { SetOverrideAction(value); return *this;}

    /**
     * <p>Use the <code>OverrideAction</code> to test your <code>RuleGroup</code>.</p>
     * <p>Any rule in a <code>RuleGroup</code> can potentially block a request. If you
     * set the <code>OverrideAction</code> to <code>None</code>, the
     * <code>RuleGroup</code> will block a request if any individual rule in the
     * <code>RuleGroup</code> matches the request and is configured to block that
     * request. However if you first want to test the <code>RuleGroup</code>, set the
     * <code>OverrideAction</code> to <code>Count</code>. The <code>RuleGroup</code>
     * will then override any block action specified by individual rules contained
     * within the group. Instead of blocking matching requests, those requests will be
     * counted. You can view a record of counted requests using
     * <a>GetSampledRequests</a>. </p> <p> <code>ActivatedRule|OverrideAction</code>
     * applies only when updating or adding a <code>RuleGroup</code> to a
     * <code>WebACL</code>. In this case you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>.</p>
     */
    inline ActivatedRule& WithOverrideAction(WafOverrideAction&& value) { SetOverrideAction(std::move(value)); return *this;}


    /**
     * <p>The rule type, either <code>REGULAR</code>, as defined by <a>Rule</a>,
     * <code>RATE_BASED</code>, as defined by <a>RateBasedRule</a>, or
     * <code>GROUP</code>, as defined by <a>RuleGroup</a>. The default is REGULAR.
     * Although this field is optional, be aware that if you try to add a RATE_BASED
     * rule to a web ACL without setting the type, the <a>UpdateWebACL</a> request will
     * fail because the request tries to add a REGULAR rule with the specified ID,
     * which does not exist. </p>
     */
    inline const WafRuleType& GetType() const{ return m_type; }

    /**
     * <p>The rule type, either <code>REGULAR</code>, as defined by <a>Rule</a>,
     * <code>RATE_BASED</code>, as defined by <a>RateBasedRule</a>, or
     * <code>GROUP</code>, as defined by <a>RuleGroup</a>. The default is REGULAR.
     * Although this field is optional, be aware that if you try to add a RATE_BASED
     * rule to a web ACL without setting the type, the <a>UpdateWebACL</a> request will
     * fail because the request tries to add a REGULAR rule with the specified ID,
     * which does not exist. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The rule type, either <code>REGULAR</code>, as defined by <a>Rule</a>,
     * <code>RATE_BASED</code>, as defined by <a>RateBasedRule</a>, or
     * <code>GROUP</code>, as defined by <a>RuleGroup</a>. The default is REGULAR.
     * Although this field is optional, be aware that if you try to add a RATE_BASED
     * rule to a web ACL without setting the type, the <a>UpdateWebACL</a> request will
     * fail because the request tries to add a REGULAR rule with the specified ID,
     * which does not exist. </p>
     */
    inline void SetType(const WafRuleType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The rule type, either <code>REGULAR</code>, as defined by <a>Rule</a>,
     * <code>RATE_BASED</code>, as defined by <a>RateBasedRule</a>, or
     * <code>GROUP</code>, as defined by <a>RuleGroup</a>. The default is REGULAR.
     * Although this field is optional, be aware that if you try to add a RATE_BASED
     * rule to a web ACL without setting the type, the <a>UpdateWebACL</a> request will
     * fail because the request tries to add a REGULAR rule with the specified ID,
     * which does not exist. </p>
     */
    inline void SetType(WafRuleType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The rule type, either <code>REGULAR</code>, as defined by <a>Rule</a>,
     * <code>RATE_BASED</code>, as defined by <a>RateBasedRule</a>, or
     * <code>GROUP</code>, as defined by <a>RuleGroup</a>. The default is REGULAR.
     * Although this field is optional, be aware that if you try to add a RATE_BASED
     * rule to a web ACL without setting the type, the <a>UpdateWebACL</a> request will
     * fail because the request tries to add a REGULAR rule with the specified ID,
     * which does not exist. </p>
     */
    inline ActivatedRule& WithType(const WafRuleType& value) { SetType(value); return *this;}

    /**
     * <p>The rule type, either <code>REGULAR</code>, as defined by <a>Rule</a>,
     * <code>RATE_BASED</code>, as defined by <a>RateBasedRule</a>, or
     * <code>GROUP</code>, as defined by <a>RuleGroup</a>. The default is REGULAR.
     * Although this field is optional, be aware that if you try to add a RATE_BASED
     * rule to a web ACL without setting the type, the <a>UpdateWebACL</a> request will
     * fail because the request tries to add a REGULAR rule with the specified ID,
     * which does not exist. </p>
     */
    inline ActivatedRule& WithType(WafRuleType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>An array of rules to exclude from a rule group. This is applicable only when
     * the <code>ActivatedRule</code> refers to a <code>RuleGroup</code>.</p>
     * <p>Sometimes it is necessary to troubleshoot rule groups that are blocking
     * traffic unexpectedly (false positives). One troubleshooting technique is to
     * identify the specific rule within the rule group that is blocking the legitimate
     * traffic and then disable (exclude) that particular rule. You can exclude rules
     * from both your own rule groups and AWS Marketplace rule groups that have been
     * associated with a web ACL.</p> <p>Specifying <code>ExcludedRules</code> does not
     * remove those rules from the rule group. Rather, it changes the action for the
     * rules to <code>COUNT</code>. Therefore, requests that match an
     * <code>ExcludedRule</code> are counted but not blocked. The
     * <code>RuleGroup</code> owner will receive COUNT metrics for each
     * <code>ExcludedRule</code>.</p> <p>If you want to exclude rules from a rule group
     * that is already associated with a web ACL, perform the following steps:</p> <ol>
     * <li> <p>Use the AWS WAF logs to identify the IDs of the rules that you want to
     * exclude. For more information about the logs, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
     * Web ACL Traffic Information</a>.</p> </li> <li> <p>Submit an <a>UpdateWebACL</a>
     * request that has two actions:</p> <ul> <li> <p>The first action deletes the
     * existing rule group from the web ACL. That is, in the <a>UpdateWebACL</a>
     * request, the first <code>Updates:Action</code> should be <code>DELETE</code> and
     * <code>Updates:ActivatedRule:RuleId</code> should be the rule group that contains
     * the rules that you want to exclude.</p> </li> <li> <p>The second action inserts
     * the same rule group back in, but specifying the rules to exclude. That is, the
     * second <code>Updates:Action</code> should be <code>INSERT</code>,
     * <code>Updates:ActivatedRule:RuleId</code> should be the rule group that you just
     * removed, and <code>ExcludedRules</code> should contain the rules that you want
     * to exclude.</p> </li> </ul> </li> </ol>
     */
    inline const Aws::Vector<ExcludedRule>& GetExcludedRules() const{ return m_excludedRules; }

    /**
     * <p>An array of rules to exclude from a rule group. This is applicable only when
     * the <code>ActivatedRule</code> refers to a <code>RuleGroup</code>.</p>
     * <p>Sometimes it is necessary to troubleshoot rule groups that are blocking
     * traffic unexpectedly (false positives). One troubleshooting technique is to
     * identify the specific rule within the rule group that is blocking the legitimate
     * traffic and then disable (exclude) that particular rule. You can exclude rules
     * from both your own rule groups and AWS Marketplace rule groups that have been
     * associated with a web ACL.</p> <p>Specifying <code>ExcludedRules</code> does not
     * remove those rules from the rule group. Rather, it changes the action for the
     * rules to <code>COUNT</code>. Therefore, requests that match an
     * <code>ExcludedRule</code> are counted but not blocked. The
     * <code>RuleGroup</code> owner will receive COUNT metrics for each
     * <code>ExcludedRule</code>.</p> <p>If you want to exclude rules from a rule group
     * that is already associated with a web ACL, perform the following steps:</p> <ol>
     * <li> <p>Use the AWS WAF logs to identify the IDs of the rules that you want to
     * exclude. For more information about the logs, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
     * Web ACL Traffic Information</a>.</p> </li> <li> <p>Submit an <a>UpdateWebACL</a>
     * request that has two actions:</p> <ul> <li> <p>The first action deletes the
     * existing rule group from the web ACL. That is, in the <a>UpdateWebACL</a>
     * request, the first <code>Updates:Action</code> should be <code>DELETE</code> and
     * <code>Updates:ActivatedRule:RuleId</code> should be the rule group that contains
     * the rules that you want to exclude.</p> </li> <li> <p>The second action inserts
     * the same rule group back in, but specifying the rules to exclude. That is, the
     * second <code>Updates:Action</code> should be <code>INSERT</code>,
     * <code>Updates:ActivatedRule:RuleId</code> should be the rule group that you just
     * removed, and <code>ExcludedRules</code> should contain the rules that you want
     * to exclude.</p> </li> </ul> </li> </ol>
     */
    inline bool ExcludedRulesHasBeenSet() const { return m_excludedRulesHasBeenSet; }

    /**
     * <p>An array of rules to exclude from a rule group. This is applicable only when
     * the <code>ActivatedRule</code> refers to a <code>RuleGroup</code>.</p>
     * <p>Sometimes it is necessary to troubleshoot rule groups that are blocking
     * traffic unexpectedly (false positives). One troubleshooting technique is to
     * identify the specific rule within the rule group that is blocking the legitimate
     * traffic and then disable (exclude) that particular rule. You can exclude rules
     * from both your own rule groups and AWS Marketplace rule groups that have been
     * associated with a web ACL.</p> <p>Specifying <code>ExcludedRules</code> does not
     * remove those rules from the rule group. Rather, it changes the action for the
     * rules to <code>COUNT</code>. Therefore, requests that match an
     * <code>ExcludedRule</code> are counted but not blocked. The
     * <code>RuleGroup</code> owner will receive COUNT metrics for each
     * <code>ExcludedRule</code>.</p> <p>If you want to exclude rules from a rule group
     * that is already associated with a web ACL, perform the following steps:</p> <ol>
     * <li> <p>Use the AWS WAF logs to identify the IDs of the rules that you want to
     * exclude. For more information about the logs, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
     * Web ACL Traffic Information</a>.</p> </li> <li> <p>Submit an <a>UpdateWebACL</a>
     * request that has two actions:</p> <ul> <li> <p>The first action deletes the
     * existing rule group from the web ACL. That is, in the <a>UpdateWebACL</a>
     * request, the first <code>Updates:Action</code> should be <code>DELETE</code> and
     * <code>Updates:ActivatedRule:RuleId</code> should be the rule group that contains
     * the rules that you want to exclude.</p> </li> <li> <p>The second action inserts
     * the same rule group back in, but specifying the rules to exclude. That is, the
     * second <code>Updates:Action</code> should be <code>INSERT</code>,
     * <code>Updates:ActivatedRule:RuleId</code> should be the rule group that you just
     * removed, and <code>ExcludedRules</code> should contain the rules that you want
     * to exclude.</p> </li> </ul> </li> </ol>
     */
    inline void SetExcludedRules(const Aws::Vector<ExcludedRule>& value) { m_excludedRulesHasBeenSet = true; m_excludedRules = value; }

    /**
     * <p>An array of rules to exclude from a rule group. This is applicable only when
     * the <code>ActivatedRule</code> refers to a <code>RuleGroup</code>.</p>
     * <p>Sometimes it is necessary to troubleshoot rule groups that are blocking
     * traffic unexpectedly (false positives). One troubleshooting technique is to
     * identify the specific rule within the rule group that is blocking the legitimate
     * traffic and then disable (exclude) that particular rule. You can exclude rules
     * from both your own rule groups and AWS Marketplace rule groups that have been
     * associated with a web ACL.</p> <p>Specifying <code>ExcludedRules</code> does not
     * remove those rules from the rule group. Rather, it changes the action for the
     * rules to <code>COUNT</code>. Therefore, requests that match an
     * <code>ExcludedRule</code> are counted but not blocked. The
     * <code>RuleGroup</code> owner will receive COUNT metrics for each
     * <code>ExcludedRule</code>.</p> <p>If you want to exclude rules from a rule group
     * that is already associated with a web ACL, perform the following steps:</p> <ol>
     * <li> <p>Use the AWS WAF logs to identify the IDs of the rules that you want to
     * exclude. For more information about the logs, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
     * Web ACL Traffic Information</a>.</p> </li> <li> <p>Submit an <a>UpdateWebACL</a>
     * request that has two actions:</p> <ul> <li> <p>The first action deletes the
     * existing rule group from the web ACL. That is, in the <a>UpdateWebACL</a>
     * request, the first <code>Updates:Action</code> should be <code>DELETE</code> and
     * <code>Updates:ActivatedRule:RuleId</code> should be the rule group that contains
     * the rules that you want to exclude.</p> </li> <li> <p>The second action inserts
     * the same rule group back in, but specifying the rules to exclude. That is, the
     * second <code>Updates:Action</code> should be <code>INSERT</code>,
     * <code>Updates:ActivatedRule:RuleId</code> should be the rule group that you just
     * removed, and <code>ExcludedRules</code> should contain the rules that you want
     * to exclude.</p> </li> </ul> </li> </ol>
     */
    inline void SetExcludedRules(Aws::Vector<ExcludedRule>&& value) { m_excludedRulesHasBeenSet = true; m_excludedRules = std::move(value); }

    /**
     * <p>An array of rules to exclude from a rule group. This is applicable only when
     * the <code>ActivatedRule</code> refers to a <code>RuleGroup</code>.</p>
     * <p>Sometimes it is necessary to troubleshoot rule groups that are blocking
     * traffic unexpectedly (false positives). One troubleshooting technique is to
     * identify the specific rule within the rule group that is blocking the legitimate
     * traffic and then disable (exclude) that particular rule. You can exclude rules
     * from both your own rule groups and AWS Marketplace rule groups that have been
     * associated with a web ACL.</p> <p>Specifying <code>ExcludedRules</code> does not
     * remove those rules from the rule group. Rather, it changes the action for the
     * rules to <code>COUNT</code>. Therefore, requests that match an
     * <code>ExcludedRule</code> are counted but not blocked. The
     * <code>RuleGroup</code> owner will receive COUNT metrics for each
     * <code>ExcludedRule</code>.</p> <p>If you want to exclude rules from a rule group
     * that is already associated with a web ACL, perform the following steps:</p> <ol>
     * <li> <p>Use the AWS WAF logs to identify the IDs of the rules that you want to
     * exclude. For more information about the logs, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
     * Web ACL Traffic Information</a>.</p> </li> <li> <p>Submit an <a>UpdateWebACL</a>
     * request that has two actions:</p> <ul> <li> <p>The first action deletes the
     * existing rule group from the web ACL. That is, in the <a>UpdateWebACL</a>
     * request, the first <code>Updates:Action</code> should be <code>DELETE</code> and
     * <code>Updates:ActivatedRule:RuleId</code> should be the rule group that contains
     * the rules that you want to exclude.</p> </li> <li> <p>The second action inserts
     * the same rule group back in, but specifying the rules to exclude. That is, the
     * second <code>Updates:Action</code> should be <code>INSERT</code>,
     * <code>Updates:ActivatedRule:RuleId</code> should be the rule group that you just
     * removed, and <code>ExcludedRules</code> should contain the rules that you want
     * to exclude.</p> </li> </ul> </li> </ol>
     */
    inline ActivatedRule& WithExcludedRules(const Aws::Vector<ExcludedRule>& value) { SetExcludedRules(value); return *this;}

    /**
     * <p>An array of rules to exclude from a rule group. This is applicable only when
     * the <code>ActivatedRule</code> refers to a <code>RuleGroup</code>.</p>
     * <p>Sometimes it is necessary to troubleshoot rule groups that are blocking
     * traffic unexpectedly (false positives). One troubleshooting technique is to
     * identify the specific rule within the rule group that is blocking the legitimate
     * traffic and then disable (exclude) that particular rule. You can exclude rules
     * from both your own rule groups and AWS Marketplace rule groups that have been
     * associated with a web ACL.</p> <p>Specifying <code>ExcludedRules</code> does not
     * remove those rules from the rule group. Rather, it changes the action for the
     * rules to <code>COUNT</code>. Therefore, requests that match an
     * <code>ExcludedRule</code> are counted but not blocked. The
     * <code>RuleGroup</code> owner will receive COUNT metrics for each
     * <code>ExcludedRule</code>.</p> <p>If you want to exclude rules from a rule group
     * that is already associated with a web ACL, perform the following steps:</p> <ol>
     * <li> <p>Use the AWS WAF logs to identify the IDs of the rules that you want to
     * exclude. For more information about the logs, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
     * Web ACL Traffic Information</a>.</p> </li> <li> <p>Submit an <a>UpdateWebACL</a>
     * request that has two actions:</p> <ul> <li> <p>The first action deletes the
     * existing rule group from the web ACL. That is, in the <a>UpdateWebACL</a>
     * request, the first <code>Updates:Action</code> should be <code>DELETE</code> and
     * <code>Updates:ActivatedRule:RuleId</code> should be the rule group that contains
     * the rules that you want to exclude.</p> </li> <li> <p>The second action inserts
     * the same rule group back in, but specifying the rules to exclude. That is, the
     * second <code>Updates:Action</code> should be <code>INSERT</code>,
     * <code>Updates:ActivatedRule:RuleId</code> should be the rule group that you just
     * removed, and <code>ExcludedRules</code> should contain the rules that you want
     * to exclude.</p> </li> </ul> </li> </ol>
     */
    inline ActivatedRule& WithExcludedRules(Aws::Vector<ExcludedRule>&& value) { SetExcludedRules(std::move(value)); return *this;}

    /**
     * <p>An array of rules to exclude from a rule group. This is applicable only when
     * the <code>ActivatedRule</code> refers to a <code>RuleGroup</code>.</p>
     * <p>Sometimes it is necessary to troubleshoot rule groups that are blocking
     * traffic unexpectedly (false positives). One troubleshooting technique is to
     * identify the specific rule within the rule group that is blocking the legitimate
     * traffic and then disable (exclude) that particular rule. You can exclude rules
     * from both your own rule groups and AWS Marketplace rule groups that have been
     * associated with a web ACL.</p> <p>Specifying <code>ExcludedRules</code> does not
     * remove those rules from the rule group. Rather, it changes the action for the
     * rules to <code>COUNT</code>. Therefore, requests that match an
     * <code>ExcludedRule</code> are counted but not blocked. The
     * <code>RuleGroup</code> owner will receive COUNT metrics for each
     * <code>ExcludedRule</code>.</p> <p>If you want to exclude rules from a rule group
     * that is already associated with a web ACL, perform the following steps:</p> <ol>
     * <li> <p>Use the AWS WAF logs to identify the IDs of the rules that you want to
     * exclude. For more information about the logs, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
     * Web ACL Traffic Information</a>.</p> </li> <li> <p>Submit an <a>UpdateWebACL</a>
     * request that has two actions:</p> <ul> <li> <p>The first action deletes the
     * existing rule group from the web ACL. That is, in the <a>UpdateWebACL</a>
     * request, the first <code>Updates:Action</code> should be <code>DELETE</code> and
     * <code>Updates:ActivatedRule:RuleId</code> should be the rule group that contains
     * the rules that you want to exclude.</p> </li> <li> <p>The second action inserts
     * the same rule group back in, but specifying the rules to exclude. That is, the
     * second <code>Updates:Action</code> should be <code>INSERT</code>,
     * <code>Updates:ActivatedRule:RuleId</code> should be the rule group that you just
     * removed, and <code>ExcludedRules</code> should contain the rules that you want
     * to exclude.</p> </li> </ul> </li> </ol>
     */
    inline ActivatedRule& AddExcludedRules(const ExcludedRule& value) { m_excludedRulesHasBeenSet = true; m_excludedRules.push_back(value); return *this; }

    /**
     * <p>An array of rules to exclude from a rule group. This is applicable only when
     * the <code>ActivatedRule</code> refers to a <code>RuleGroup</code>.</p>
     * <p>Sometimes it is necessary to troubleshoot rule groups that are blocking
     * traffic unexpectedly (false positives). One troubleshooting technique is to
     * identify the specific rule within the rule group that is blocking the legitimate
     * traffic and then disable (exclude) that particular rule. You can exclude rules
     * from both your own rule groups and AWS Marketplace rule groups that have been
     * associated with a web ACL.</p> <p>Specifying <code>ExcludedRules</code> does not
     * remove those rules from the rule group. Rather, it changes the action for the
     * rules to <code>COUNT</code>. Therefore, requests that match an
     * <code>ExcludedRule</code> are counted but not blocked. The
     * <code>RuleGroup</code> owner will receive COUNT metrics for each
     * <code>ExcludedRule</code>.</p> <p>If you want to exclude rules from a rule group
     * that is already associated with a web ACL, perform the following steps:</p> <ol>
     * <li> <p>Use the AWS WAF logs to identify the IDs of the rules that you want to
     * exclude. For more information about the logs, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
     * Web ACL Traffic Information</a>.</p> </li> <li> <p>Submit an <a>UpdateWebACL</a>
     * request that has two actions:</p> <ul> <li> <p>The first action deletes the
     * existing rule group from the web ACL. That is, in the <a>UpdateWebACL</a>
     * request, the first <code>Updates:Action</code> should be <code>DELETE</code> and
     * <code>Updates:ActivatedRule:RuleId</code> should be the rule group that contains
     * the rules that you want to exclude.</p> </li> <li> <p>The second action inserts
     * the same rule group back in, but specifying the rules to exclude. That is, the
     * second <code>Updates:Action</code> should be <code>INSERT</code>,
     * <code>Updates:ActivatedRule:RuleId</code> should be the rule group that you just
     * removed, and <code>ExcludedRules</code> should contain the rules that you want
     * to exclude.</p> </li> </ul> </li> </ol>
     */
    inline ActivatedRule& AddExcludedRules(ExcludedRule&& value) { m_excludedRulesHasBeenSet = true; m_excludedRules.push_back(std::move(value)); return *this; }

  private:

    int m_priority;
    bool m_priorityHasBeenSet;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet;

    WafAction m_action;
    bool m_actionHasBeenSet;

    WafOverrideAction m_overrideAction;
    bool m_overrideActionHasBeenSet;

    WafRuleType m_type;
    bool m_typeHasBeenSet;

    Aws::Vector<ExcludedRule> m_excludedRules;
    bool m_excludedRulesHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
