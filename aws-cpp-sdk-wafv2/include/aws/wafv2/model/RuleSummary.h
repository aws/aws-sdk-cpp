/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/RuleAction.h>
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
   * WAF Developer Guide</a>. </p>  <p>High-level information about a
   * <a>Rule</a>, returned by operations like <a>DescribeManagedRuleGroup</a>. This
   * provides information like the ID, that you can use to retrieve and manage a
   * <code>RuleGroup</code>, and the ARN, that you provide to the
   * <a>RuleGroupReferenceStatement</a> to use the rule group in a
   * <a>Rule</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RuleSummary">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API RuleSummary
  {
  public:
    RuleSummary();
    RuleSummary(Aws::Utils::Json::JsonView jsonValue);
    RuleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the rule. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the rule. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rule. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rule. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rule. </p>
     */
    inline RuleSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule. </p>
     */
    inline RuleSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule. </p>
     */
    inline RuleSummary& WithName(const char* value) { SetName(value); return *this;}


    
    inline const RuleAction& GetAction() const{ return m_action; }

    
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    
    inline void SetAction(const RuleAction& value) { m_actionHasBeenSet = true; m_action = value; }

    
    inline void SetAction(RuleAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    
    inline RuleSummary& WithAction(const RuleAction& value) { SetAction(value); return *this;}

    
    inline RuleSummary& WithAction(RuleAction&& value) { SetAction(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    RuleAction m_action;
    bool m_actionHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
