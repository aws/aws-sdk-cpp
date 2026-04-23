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
#include <aws/waf/model/ChangeAction.h>
#include <aws/waf/model/ActivatedRule.h>
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
namespace WAF
{
namespace Model
{

  /**
   * <p>Specifies an <code>ActivatedRule</code> and indicates whether you want to add
   * it to a <code>RuleGroup</code> or delete it from a
   * <code>RuleGroup</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/RuleGroupUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_WAF_API RuleGroupUpdate
  {
  public:
    RuleGroupUpdate();
    RuleGroupUpdate(Aws::Utils::Json::JsonView jsonValue);
    RuleGroupUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify <code>INSERT</code> to add an <code>ActivatedRule</code> to a
     * <code>RuleGroup</code>. Use <code>DELETE</code> to remove an
     * <code>ActivatedRule</code> from a <code>RuleGroup</code>.</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }

    /**
     * <p>Specify <code>INSERT</code> to add an <code>ActivatedRule</code> to a
     * <code>RuleGroup</code>. Use <code>DELETE</code> to remove an
     * <code>ActivatedRule</code> from a <code>RuleGroup</code>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specify <code>INSERT</code> to add an <code>ActivatedRule</code> to a
     * <code>RuleGroup</code>. Use <code>DELETE</code> to remove an
     * <code>ActivatedRule</code> from a <code>RuleGroup</code>.</p>
     */
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specify <code>INSERT</code> to add an <code>ActivatedRule</code> to a
     * <code>RuleGroup</code>. Use <code>DELETE</code> to remove an
     * <code>ActivatedRule</code> from a <code>RuleGroup</code>.</p>
     */
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specify <code>INSERT</code> to add an <code>ActivatedRule</code> to a
     * <code>RuleGroup</code>. Use <code>DELETE</code> to remove an
     * <code>ActivatedRule</code> from a <code>RuleGroup</code>.</p>
     */
    inline RuleGroupUpdate& WithAction(const ChangeAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specify <code>INSERT</code> to add an <code>ActivatedRule</code> to a
     * <code>RuleGroup</code>. Use <code>DELETE</code> to remove an
     * <code>ActivatedRule</code> from a <code>RuleGroup</code>.</p>
     */
    inline RuleGroupUpdate& WithAction(ChangeAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The <code>ActivatedRule</code> object specifies a <code>Rule</code> that you
     * want to insert or delete, the priority of the <code>Rule</code> in the
     * <code>WebACL</code>, and the action that you want AWS WAF to take when a web
     * request matches the <code>Rule</code> (<code>ALLOW</code>, <code>BLOCK</code>,
     * or <code>COUNT</code>).</p>
     */
    inline const ActivatedRule& GetActivatedRule() const{ return m_activatedRule; }

    /**
     * <p>The <code>ActivatedRule</code> object specifies a <code>Rule</code> that you
     * want to insert or delete, the priority of the <code>Rule</code> in the
     * <code>WebACL</code>, and the action that you want AWS WAF to take when a web
     * request matches the <code>Rule</code> (<code>ALLOW</code>, <code>BLOCK</code>,
     * or <code>COUNT</code>).</p>
     */
    inline bool ActivatedRuleHasBeenSet() const { return m_activatedRuleHasBeenSet; }

    /**
     * <p>The <code>ActivatedRule</code> object specifies a <code>Rule</code> that you
     * want to insert or delete, the priority of the <code>Rule</code> in the
     * <code>WebACL</code>, and the action that you want AWS WAF to take when a web
     * request matches the <code>Rule</code> (<code>ALLOW</code>, <code>BLOCK</code>,
     * or <code>COUNT</code>).</p>
     */
    inline void SetActivatedRule(const ActivatedRule& value) { m_activatedRuleHasBeenSet = true; m_activatedRule = value; }

    /**
     * <p>The <code>ActivatedRule</code> object specifies a <code>Rule</code> that you
     * want to insert or delete, the priority of the <code>Rule</code> in the
     * <code>WebACL</code>, and the action that you want AWS WAF to take when a web
     * request matches the <code>Rule</code> (<code>ALLOW</code>, <code>BLOCK</code>,
     * or <code>COUNT</code>).</p>
     */
    inline void SetActivatedRule(ActivatedRule&& value) { m_activatedRuleHasBeenSet = true; m_activatedRule = std::move(value); }

    /**
     * <p>The <code>ActivatedRule</code> object specifies a <code>Rule</code> that you
     * want to insert or delete, the priority of the <code>Rule</code> in the
     * <code>WebACL</code>, and the action that you want AWS WAF to take when a web
     * request matches the <code>Rule</code> (<code>ALLOW</code>, <code>BLOCK</code>,
     * or <code>COUNT</code>).</p>
     */
    inline RuleGroupUpdate& WithActivatedRule(const ActivatedRule& value) { SetActivatedRule(value); return *this;}

    /**
     * <p>The <code>ActivatedRule</code> object specifies a <code>Rule</code> that you
     * want to insert or delete, the priority of the <code>Rule</code> in the
     * <code>WebACL</code>, and the action that you want AWS WAF to take when a web
     * request matches the <code>Rule</code> (<code>ALLOW</code>, <code>BLOCK</code>,
     * or <code>COUNT</code>).</p>
     */
    inline RuleGroupUpdate& WithActivatedRule(ActivatedRule&& value) { SetActivatedRule(std::move(value)); return *this;}

  private:

    ChangeAction m_action;
    bool m_actionHasBeenSet;

    ActivatedRule m_activatedRule;
    bool m_activatedRuleHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
