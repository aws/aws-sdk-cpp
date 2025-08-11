/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
   * <p>A mutation operation that adds a new rule to the policy definition during the
   * build process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyAddRuleMutation">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyAddRuleMutation
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyAddRuleMutation() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyAddRuleMutation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyAddRuleMutation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The rule definition that specifies the formal logical expression and metadata
     * for the new rule being added to the policy.</p>
     */
    inline const AutomatedReasoningPolicyDefinitionRule& GetRule() const { return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    template<typename RuleT = AutomatedReasoningPolicyDefinitionRule>
    void SetRule(RuleT&& value) { m_ruleHasBeenSet = true; m_rule = std::forward<RuleT>(value); }
    template<typename RuleT = AutomatedReasoningPolicyDefinitionRule>
    AutomatedReasoningPolicyAddRuleMutation& WithRule(RuleT&& value) { SetRule(std::forward<RuleT>(value)); return *this;}
    ///@}
  private:

    AutomatedReasoningPolicyDefinitionRule m_rule;
    bool m_ruleHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
