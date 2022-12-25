/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/ChangeAction.h>
#include <aws/waf-regional/model/ActivatedRule.h>
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
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>Specifies an
   * <code>ActivatedRule</code> and indicates whether you want to add it to a
   * <code>RuleGroup</code> or delete it from a <code>RuleGroup</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/RuleGroupUpdate">AWS
   * API Reference</a></p>
   */
  class RuleGroupUpdate
  {
  public:
    AWS_WAFREGIONAL_API RuleGroupUpdate();
    AWS_WAFREGIONAL_API RuleGroupUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API RuleGroupUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_actionHasBeenSet = false;

    ActivatedRule m_activatedRule;
    bool m_activatedRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
