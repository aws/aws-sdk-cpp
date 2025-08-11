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
   * <p>A mutation operation that modifies an existing rule in the policy definition
   * during the build process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyUpdateRuleMutation">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyUpdateRuleMutation
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateRuleMutation() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateRuleMutation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateRuleMutation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The updated rule definition containing the modified formal logical expression
     * and any changed metadata for the existing rule.</p>
     */
    inline const AutomatedReasoningPolicyDefinitionRule& GetRule() const { return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    template<typename RuleT = AutomatedReasoningPolicyDefinitionRule>
    void SetRule(RuleT&& value) { m_ruleHasBeenSet = true; m_rule = std::forward<RuleT>(value); }
    template<typename RuleT = AutomatedReasoningPolicyDefinitionRule>
    AutomatedReasoningPolicyUpdateRuleMutation& WithRule(RuleT&& value) { SetRule(std::forward<RuleT>(value)); return *this;}
    ///@}
  private:

    AutomatedReasoningPolicyDefinitionRule m_rule;
    bool m_ruleHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
