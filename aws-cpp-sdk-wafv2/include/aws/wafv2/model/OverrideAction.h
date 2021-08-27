/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/CountAction.h>
#include <aws/wafv2/model/NoneAction.h>
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
   * <p>The override action to apply to the rules in a rule group. Used only for rule
   * statements that reference a rule group, like
   * <code>RuleGroupReferenceStatement</code> and
   * <code>ManagedRuleGroupStatement</code>. </p> <p>Set the override action to none
   * to leave the rule actions in effect. Set it to count to only count matches,
   * regardless of the rule action settings. </p> <p>In a <a>Rule</a>, you must
   * specify either this <code>OverrideAction</code> setting or the rule
   * <code>Action</code> setting, but not both:</p> <ul> <li> <p>If the rule
   * statement references a rule group, use this override action setting and not the
   * action setting. </p> </li> <li> <p>If the rule statement does not reference a
   * rule group, use the rule action setting and not this rule override action
   * setting. </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/OverrideAction">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API OverrideAction
  {
  public:
    OverrideAction();
    OverrideAction(Aws::Utils::Json::JsonView jsonValue);
    OverrideAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Override the rule action setting to count.</p>
     */
    inline const CountAction& GetCount() const{ return m_count; }

    /**
     * <p>Override the rule action setting to count.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>Override the rule action setting to count.</p>
     */
    inline void SetCount(const CountAction& value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>Override the rule action setting to count.</p>
     */
    inline void SetCount(CountAction&& value) { m_countHasBeenSet = true; m_count = std::move(value); }

    /**
     * <p>Override the rule action setting to count.</p>
     */
    inline OverrideAction& WithCount(const CountAction& value) { SetCount(value); return *this;}

    /**
     * <p>Override the rule action setting to count.</p>
     */
    inline OverrideAction& WithCount(CountAction&& value) { SetCount(std::move(value)); return *this;}


    /**
     * <p>Don't override the rule action setting.</p>
     */
    inline const NoneAction& GetNone() const{ return m_none; }

    /**
     * <p>Don't override the rule action setting.</p>
     */
    inline bool NoneHasBeenSet() const { return m_noneHasBeenSet; }

    /**
     * <p>Don't override the rule action setting.</p>
     */
    inline void SetNone(const NoneAction& value) { m_noneHasBeenSet = true; m_none = value; }

    /**
     * <p>Don't override the rule action setting.</p>
     */
    inline void SetNone(NoneAction&& value) { m_noneHasBeenSet = true; m_none = std::move(value); }

    /**
     * <p>Don't override the rule action setting.</p>
     */
    inline OverrideAction& WithNone(const NoneAction& value) { SetNone(value); return *this;}

    /**
     * <p>Don't override the rule action setting.</p>
     */
    inline OverrideAction& WithNone(NoneAction&& value) { SetNone(std::move(value)); return *this;}

  private:

    CountAction m_count;
    bool m_countHasBeenSet;

    NoneAction m_none;
    bool m_noneHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
