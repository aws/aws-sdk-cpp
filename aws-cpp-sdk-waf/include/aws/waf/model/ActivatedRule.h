/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf/model/WafAction.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAF
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
   * <code>Action</code> parameter in the <a>WebACLUpdate</a> data type.</p>
   */
  class AWS_WAF_API ActivatedRule
  {
  public:
    ActivatedRule();
    ActivatedRule(const Aws::Utils::Json::JsonValue& jsonValue);
    ActivatedRule& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
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
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

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
    inline ActivatedRule& WithRuleId(Aws::String&& value) { SetRuleId(value); return *this;}

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
     * web request based on the remaining rules in the web ACL. </p> </li> </ul>
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
     * web request based on the remaining rules in the web ACL. </p> </li> </ul>
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
     * web request based on the remaining rules in the web ACL. </p> </li> </ul>
     */
    inline void SetAction(WafAction&& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies the action that CloudFront or AWS WAF takes when a web request
     * matches the conditions in the <code>Rule</code>. Valid values for
     * <code>Action</code> include the following:</p> <ul> <li> <p> <code>ALLOW</code>:
     * CloudFront responds with the requested object.</p> </li> <li> <p>
     * <code>BLOCK</code>: CloudFront responds with an HTTP 403 (Forbidden) status
     * code.</p> </li> <li> <p> <code>COUNT</code>: AWS WAF increments a counter of
     * requests that match the conditions in the rule and then continues to inspect the
     * web request based on the remaining rules in the web ACL. </p> </li> </ul>
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
     * web request based on the remaining rules in the web ACL. </p> </li> </ul>
     */
    inline ActivatedRule& WithAction(WafAction&& value) { SetAction(value); return *this;}

  private:
    int m_priority;
    bool m_priorityHasBeenSet;
    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet;
    WafAction m_action;
    bool m_actionHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
