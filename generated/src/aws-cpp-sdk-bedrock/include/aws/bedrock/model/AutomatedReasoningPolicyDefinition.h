/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDefinitionType.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDefinitionRule.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDefinitionVariable.h>
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
   * <p>Contains the formal logic rules, variables, and custom variable types that
   * define an Automated Reasoning policy. The policy definition specifies the
   * constraints used to validate foundation model responses for accuracy and logical
   * consistency.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyDefinition">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyDefinition
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyDefinition() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the policy definition format.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    AutomatedReasoningPolicyDefinition& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom user-defined vairable types used in the policy. Types are
     * enum-based variable types that provide additional context beyond the predefined
     * variable types.</p>
     */
    inline const Aws::Vector<AutomatedReasoningPolicyDefinitionType>& GetTypes() const { return m_types; }
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
    template<typename TypesT = Aws::Vector<AutomatedReasoningPolicyDefinitionType>>
    void SetTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types = std::forward<TypesT>(value); }
    template<typename TypesT = Aws::Vector<AutomatedReasoningPolicyDefinitionType>>
    AutomatedReasoningPolicyDefinition& WithTypes(TypesT&& value) { SetTypes(std::forward<TypesT>(value)); return *this;}
    template<typename TypesT = AutomatedReasoningPolicyDefinitionType>
    AutomatedReasoningPolicyDefinition& AddTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types.emplace_back(std::forward<TypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The formal logic rules extracted from the source document. Rules define the
     * logical constraints that determine whether model responses are valid, invalid,
     * or satisfiable.</p>
     */
    inline const Aws::Vector<AutomatedReasoningPolicyDefinitionRule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<AutomatedReasoningPolicyDefinitionRule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<AutomatedReasoningPolicyDefinitionRule>>
    AutomatedReasoningPolicyDefinition& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = AutomatedReasoningPolicyDefinitionRule>
    AutomatedReasoningPolicyDefinition& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The variables that represent concepts in the policy. Variables can have
     * values assigned when translating natural language into formal logic. Their
     * descriptions are crucial for accurate translation.</p>
     */
    inline const Aws::Vector<AutomatedReasoningPolicyDefinitionVariable>& GetVariables() const { return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    template<typename VariablesT = Aws::Vector<AutomatedReasoningPolicyDefinitionVariable>>
    void SetVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables = std::forward<VariablesT>(value); }
    template<typename VariablesT = Aws::Vector<AutomatedReasoningPolicyDefinitionVariable>>
    AutomatedReasoningPolicyDefinition& WithVariables(VariablesT&& value) { SetVariables(std::forward<VariablesT>(value)); return *this;}
    template<typename VariablesT = AutomatedReasoningPolicyDefinitionVariable>
    AutomatedReasoningPolicyDefinition& AddVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables.emplace_back(std::forward<VariablesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<AutomatedReasoningPolicyDefinitionType> m_types;
    bool m_typesHasBeenSet = false;

    Aws::Vector<AutomatedReasoningPolicyDefinitionRule> m_rules;
    bool m_rulesHasBeenSet = false;

    Aws::Vector<AutomatedReasoningPolicyDefinitionVariable> m_variables;
    bool m_variablesHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
