/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>An object that defines the <code>ruleCondition</code> and the
   * <code>ruleName</code> to use in a matching workflow.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/RuleCondition">AWS
   * API Reference</a></p>
   */
  class RuleCondition
  {
  public:
    AWS_ENTITYRESOLUTION_API RuleCondition() = default;
    AWS_ENTITYRESOLUTION_API RuleCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API RuleCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A name for the matching rule.</p> <p>For example: <code>Rule1</code> </p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    RuleCondition& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A statement that specifies the conditions for a matching rule.</p> <p>If your
     * data is accurate, use an Exact matching function: <code>Exact</code> or
     * <code>ExactManyToMany</code>. </p> <p>If your data has variations in spelling or
     * pronunciation, use a Fuzzy matching function: <code>Cosine</code>,
     * <code>Levenshtein</code>, or <code>Soundex</code>. </p> <p>Use operators if you
     * want to combine (<code>AND</code>), separate (<code>OR</code>), or group
     * matching functions <code>(...)</code>.</p> <p>For example: <code>(Cosine(a, 10)
     * AND Exact(b, true)) OR ExactManyToMany(c, d)</code> </p>
     */
    inline const Aws::String& GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    template<typename ConditionT = Aws::String>
    void SetCondition(ConditionT&& value) { m_conditionHasBeenSet = true; m_condition = std::forward<ConditionT>(value); }
    template<typename ConditionT = Aws::String>
    RuleCondition& WithCondition(ConditionT&& value) { SetCondition(std::forward<ConditionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_condition;
    bool m_conditionHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
