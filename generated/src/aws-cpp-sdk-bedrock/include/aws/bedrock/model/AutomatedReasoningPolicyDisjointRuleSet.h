/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Represents a set of rules that operate on completely separate variables,
   * indicating they address different concerns or domains within the
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyDisjointRuleSet">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyDisjointRuleSet
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyDisjointRuleSet() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyDisjointRuleSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyDisjointRuleSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The set of variables that are used by the rules in this disjoint set.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVariables() const { return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    template<typename VariablesT = Aws::Vector<Aws::String>>
    void SetVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables = std::forward<VariablesT>(value); }
    template<typename VariablesT = Aws::Vector<Aws::String>>
    AutomatedReasoningPolicyDisjointRuleSet& WithVariables(VariablesT&& value) { SetVariables(std::forward<VariablesT>(value)); return *this;}
    template<typename VariablesT = Aws::String>
    AutomatedReasoningPolicyDisjointRuleSet& AddVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables.emplace_back(std::forward<VariablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of rules that form this disjoint set, all operating on the same set
     * of variables.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<Aws::String>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<Aws::String>>
    AutomatedReasoningPolicyDisjointRuleSet& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = Aws::String>
    AutomatedReasoningPolicyDisjointRuleSet& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_variables;
    bool m_variablesHasBeenSet = false;

    Aws::Vector<Aws::String> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
