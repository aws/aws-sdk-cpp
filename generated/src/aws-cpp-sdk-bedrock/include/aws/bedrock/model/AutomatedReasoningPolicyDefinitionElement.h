/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDefinitionVariable.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDefinitionType.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDefinitionRule.h>
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
   * <p>Represents a single element in an Automated Reasoning policy definition, such
   * as a rule, variable, or type definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyDefinitionElement">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyDefinitionElement
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyDefinitionElement() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyDefinitionElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyDefinitionElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A variable element within the policy definition that represents a concept
     * used in logical expressions and rules.</p>
     */
    inline const AutomatedReasoningPolicyDefinitionVariable& GetPolicyDefinitionVariable() const { return m_policyDefinitionVariable; }
    inline bool PolicyDefinitionVariableHasBeenSet() const { return m_policyDefinitionVariableHasBeenSet; }
    template<typename PolicyDefinitionVariableT = AutomatedReasoningPolicyDefinitionVariable>
    void SetPolicyDefinitionVariable(PolicyDefinitionVariableT&& value) { m_policyDefinitionVariableHasBeenSet = true; m_policyDefinitionVariable = std::forward<PolicyDefinitionVariableT>(value); }
    template<typename PolicyDefinitionVariableT = AutomatedReasoningPolicyDefinitionVariable>
    AutomatedReasoningPolicyDefinitionElement& WithPolicyDefinitionVariable(PolicyDefinitionVariableT&& value) { SetPolicyDefinitionVariable(std::forward<PolicyDefinitionVariableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom type element within the policy definition that defines a set of
     * possible values for variables.</p>
     */
    inline const AutomatedReasoningPolicyDefinitionType& GetPolicyDefinitionType() const { return m_policyDefinitionType; }
    inline bool PolicyDefinitionTypeHasBeenSet() const { return m_policyDefinitionTypeHasBeenSet; }
    template<typename PolicyDefinitionTypeT = AutomatedReasoningPolicyDefinitionType>
    void SetPolicyDefinitionType(PolicyDefinitionTypeT&& value) { m_policyDefinitionTypeHasBeenSet = true; m_policyDefinitionType = std::forward<PolicyDefinitionTypeT>(value); }
    template<typename PolicyDefinitionTypeT = AutomatedReasoningPolicyDefinitionType>
    AutomatedReasoningPolicyDefinitionElement& WithPolicyDefinitionType(PolicyDefinitionTypeT&& value) { SetPolicyDefinitionType(std::forward<PolicyDefinitionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A rule element within the policy definition that contains a formal logical
     * expression used for validation.</p>
     */
    inline const AutomatedReasoningPolicyDefinitionRule& GetPolicyDefinitionRule() const { return m_policyDefinitionRule; }
    inline bool PolicyDefinitionRuleHasBeenSet() const { return m_policyDefinitionRuleHasBeenSet; }
    template<typename PolicyDefinitionRuleT = AutomatedReasoningPolicyDefinitionRule>
    void SetPolicyDefinitionRule(PolicyDefinitionRuleT&& value) { m_policyDefinitionRuleHasBeenSet = true; m_policyDefinitionRule = std::forward<PolicyDefinitionRuleT>(value); }
    template<typename PolicyDefinitionRuleT = AutomatedReasoningPolicyDefinitionRule>
    AutomatedReasoningPolicyDefinitionElement& WithPolicyDefinitionRule(PolicyDefinitionRuleT&& value) { SetPolicyDefinitionRule(std::forward<PolicyDefinitionRuleT>(value)); return *this;}
    ///@}
  private:

    AutomatedReasoningPolicyDefinitionVariable m_policyDefinitionVariable;
    bool m_policyDefinitionVariableHasBeenSet = false;

    AutomatedReasoningPolicyDefinitionType m_policyDefinitionType;
    bool m_policyDefinitionTypeHasBeenSet = false;

    AutomatedReasoningPolicyDefinitionRule m_policyDefinitionRule;
    bool m_policyDefinitionRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
