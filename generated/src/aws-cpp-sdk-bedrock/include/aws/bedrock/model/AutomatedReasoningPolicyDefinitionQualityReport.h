/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDefinitionTypeValuePair.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDisjointRuleSet.h>
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
   * <p>Provides a comprehensive analysis of the quality and completeness of an
   * Automated Reasoning policy definition, highlighting potential issues and
   * optimization opportunities.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyDefinitionQualityReport">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyDefinitionQualityReport
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyDefinitionQualityReport() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyDefinitionQualityReport(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyDefinitionQualityReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of custom types defined in the policy.</p>
     */
    inline int GetTypeCount() const { return m_typeCount; }
    inline bool TypeCountHasBeenSet() const { return m_typeCountHasBeenSet; }
    inline void SetTypeCount(int value) { m_typeCountHasBeenSet = true; m_typeCount = value; }
    inline AutomatedReasoningPolicyDefinitionQualityReport& WithTypeCount(int value) { SetTypeCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of variables defined in the policy.</p>
     */
    inline int GetVariableCount() const { return m_variableCount; }
    inline bool VariableCountHasBeenSet() const { return m_variableCountHasBeenSet; }
    inline void SetVariableCount(int value) { m_variableCountHasBeenSet = true; m_variableCount = value; }
    inline AutomatedReasoningPolicyDefinitionQualityReport& WithVariableCount(int value) { SetVariableCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of rules defined in the policy.</p>
     */
    inline int GetRuleCount() const { return m_ruleCount; }
    inline bool RuleCountHasBeenSet() const { return m_ruleCountHasBeenSet; }
    inline void SetRuleCount(int value) { m_ruleCountHasBeenSet = true; m_ruleCount = value; }
    inline AutomatedReasoningPolicyDefinitionQualityReport& WithRuleCount(int value) { SetRuleCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom types that are defined but not referenced by any variables
     * or rules, suggesting they may be unnecessary.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUnusedTypes() const { return m_unusedTypes; }
    inline bool UnusedTypesHasBeenSet() const { return m_unusedTypesHasBeenSet; }
    template<typename UnusedTypesT = Aws::Vector<Aws::String>>
    void SetUnusedTypes(UnusedTypesT&& value) { m_unusedTypesHasBeenSet = true; m_unusedTypes = std::forward<UnusedTypesT>(value); }
    template<typename UnusedTypesT = Aws::Vector<Aws::String>>
    AutomatedReasoningPolicyDefinitionQualityReport& WithUnusedTypes(UnusedTypesT&& value) { SetUnusedTypes(std::forward<UnusedTypesT>(value)); return *this;}
    template<typename UnusedTypesT = Aws::String>
    AutomatedReasoningPolicyDefinitionQualityReport& AddUnusedTypes(UnusedTypesT&& value) { m_unusedTypesHasBeenSet = true; m_unusedTypes.emplace_back(std::forward<UnusedTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of type values that are defined but never used in any rules,
     * indicating potential cleanup opportunities.</p>
     */
    inline const Aws::Vector<AutomatedReasoningPolicyDefinitionTypeValuePair>& GetUnusedTypeValues() const { return m_unusedTypeValues; }
    inline bool UnusedTypeValuesHasBeenSet() const { return m_unusedTypeValuesHasBeenSet; }
    template<typename UnusedTypeValuesT = Aws::Vector<AutomatedReasoningPolicyDefinitionTypeValuePair>>
    void SetUnusedTypeValues(UnusedTypeValuesT&& value) { m_unusedTypeValuesHasBeenSet = true; m_unusedTypeValues = std::forward<UnusedTypeValuesT>(value); }
    template<typename UnusedTypeValuesT = Aws::Vector<AutomatedReasoningPolicyDefinitionTypeValuePair>>
    AutomatedReasoningPolicyDefinitionQualityReport& WithUnusedTypeValues(UnusedTypeValuesT&& value) { SetUnusedTypeValues(std::forward<UnusedTypeValuesT>(value)); return *this;}
    template<typename UnusedTypeValuesT = AutomatedReasoningPolicyDefinitionTypeValuePair>
    AutomatedReasoningPolicyDefinitionQualityReport& AddUnusedTypeValues(UnusedTypeValuesT&& value) { m_unusedTypeValuesHasBeenSet = true; m_unusedTypeValues.emplace_back(std::forward<UnusedTypeValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of variables that are defined but not referenced by any rules,
     * suggesting they may be unnecessary.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUnusedVariables() const { return m_unusedVariables; }
    inline bool UnusedVariablesHasBeenSet() const { return m_unusedVariablesHasBeenSet; }
    template<typename UnusedVariablesT = Aws::Vector<Aws::String>>
    void SetUnusedVariables(UnusedVariablesT&& value) { m_unusedVariablesHasBeenSet = true; m_unusedVariables = std::forward<UnusedVariablesT>(value); }
    template<typename UnusedVariablesT = Aws::Vector<Aws::String>>
    AutomatedReasoningPolicyDefinitionQualityReport& WithUnusedVariables(UnusedVariablesT&& value) { SetUnusedVariables(std::forward<UnusedVariablesT>(value)); return *this;}
    template<typename UnusedVariablesT = Aws::String>
    AutomatedReasoningPolicyDefinitionQualityReport& AddUnusedVariables(UnusedVariablesT&& value) { m_unusedVariablesHasBeenSet = true; m_unusedVariables.emplace_back(std::forward<UnusedVariablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of rules that may conflict with each other, potentially leading to
     * inconsistent policy behavior.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConflictingRules() const { return m_conflictingRules; }
    inline bool ConflictingRulesHasBeenSet() const { return m_conflictingRulesHasBeenSet; }
    template<typename ConflictingRulesT = Aws::Vector<Aws::String>>
    void SetConflictingRules(ConflictingRulesT&& value) { m_conflictingRulesHasBeenSet = true; m_conflictingRules = std::forward<ConflictingRulesT>(value); }
    template<typename ConflictingRulesT = Aws::Vector<Aws::String>>
    AutomatedReasoningPolicyDefinitionQualityReport& WithConflictingRules(ConflictingRulesT&& value) { SetConflictingRules(std::forward<ConflictingRulesT>(value)); return *this;}
    template<typename ConflictingRulesT = Aws::String>
    AutomatedReasoningPolicyDefinitionQualityReport& AddConflictingRules(ConflictingRulesT&& value) { m_conflictingRulesHasBeenSet = true; m_conflictingRules.emplace_back(std::forward<ConflictingRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Groups of rules that operate on completely separate sets of variables,
     * indicating the policy may be addressing multiple unrelated concerns.</p>
     */
    inline const Aws::Vector<AutomatedReasoningPolicyDisjointRuleSet>& GetDisjointRuleSets() const { return m_disjointRuleSets; }
    inline bool DisjointRuleSetsHasBeenSet() const { return m_disjointRuleSetsHasBeenSet; }
    template<typename DisjointRuleSetsT = Aws::Vector<AutomatedReasoningPolicyDisjointRuleSet>>
    void SetDisjointRuleSets(DisjointRuleSetsT&& value) { m_disjointRuleSetsHasBeenSet = true; m_disjointRuleSets = std::forward<DisjointRuleSetsT>(value); }
    template<typename DisjointRuleSetsT = Aws::Vector<AutomatedReasoningPolicyDisjointRuleSet>>
    AutomatedReasoningPolicyDefinitionQualityReport& WithDisjointRuleSets(DisjointRuleSetsT&& value) { SetDisjointRuleSets(std::forward<DisjointRuleSetsT>(value)); return *this;}
    template<typename DisjointRuleSetsT = AutomatedReasoningPolicyDisjointRuleSet>
    AutomatedReasoningPolicyDefinitionQualityReport& AddDisjointRuleSets(DisjointRuleSetsT&& value) { m_disjointRuleSetsHasBeenSet = true; m_disjointRuleSets.emplace_back(std::forward<DisjointRuleSetsT>(value)); return *this; }
    ///@}
  private:

    int m_typeCount{0};
    bool m_typeCountHasBeenSet = false;

    int m_variableCount{0};
    bool m_variableCountHasBeenSet = false;

    int m_ruleCount{0};
    bool m_ruleCountHasBeenSet = false;

    Aws::Vector<Aws::String> m_unusedTypes;
    bool m_unusedTypesHasBeenSet = false;

    Aws::Vector<AutomatedReasoningPolicyDefinitionTypeValuePair> m_unusedTypeValues;
    bool m_unusedTypeValuesHasBeenSet = false;

    Aws::Vector<Aws::String> m_unusedVariables;
    bool m_unusedVariablesHasBeenSet = false;

    Aws::Vector<Aws::String> m_conflictingRules;
    bool m_conflictingRulesHasBeenSet = false;

    Aws::Vector<AutomatedReasoningPolicyDisjointRuleSet> m_disjointRuleSets;
    bool m_disjointRuleSetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
