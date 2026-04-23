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
   * <p>The rule to exclude from a rule group. This is applicable only when the
   * <code>ActivatedRule</code> refers to a <code>RuleGroup</code>. The rule must
   * belong to the <code>RuleGroup</code> that is specified by the
   * <code>ActivatedRule</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ExcludedRule">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API ExcludedRule
  {
  public:
    ExcludedRule();
    ExcludedRule(Aws::Utils::Json::JsonView jsonValue);
    ExcludedRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the rule to exclude from the rule group.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The unique identifier for the rule to exclude from the rule group.</p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>The unique identifier for the rule to exclude from the rule group.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The unique identifier for the rule to exclude from the rule group.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The unique identifier for the rule to exclude from the rule group.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The unique identifier for the rule to exclude from the rule group.</p>
     */
    inline ExcludedRule& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The unique identifier for the rule to exclude from the rule group.</p>
     */
    inline ExcludedRule& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the rule to exclude from the rule group.</p>
     */
    inline ExcludedRule& WithRuleId(const char* value) { SetRuleId(value); return *this;}

  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
