/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>References a specific automated reasoning policy rule that was applied during
   * evaluation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailAutomatedReasoningRule">AWS
   * API Reference</a></p>
   */
  class GuardrailAutomatedReasoningRule
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningRule() = default;
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the automated reasoning rule.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    GuardrailAutomatedReasoningRule& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the automated reasoning policy version that contains this
     * rule.</p>
     */
    inline const Aws::String& GetPolicyVersionArn() const { return m_policyVersionArn; }
    inline bool PolicyVersionArnHasBeenSet() const { return m_policyVersionArnHasBeenSet; }
    template<typename PolicyVersionArnT = Aws::String>
    void SetPolicyVersionArn(PolicyVersionArnT&& value) { m_policyVersionArnHasBeenSet = true; m_policyVersionArn = std::forward<PolicyVersionArnT>(value); }
    template<typename PolicyVersionArnT = Aws::String>
    GuardrailAutomatedReasoningRule& WithPolicyVersionArn(PolicyVersionArnT&& value) { SetPolicyVersionArn(std::forward<PolicyVersionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_policyVersionArn;
    bool m_policyVersionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
