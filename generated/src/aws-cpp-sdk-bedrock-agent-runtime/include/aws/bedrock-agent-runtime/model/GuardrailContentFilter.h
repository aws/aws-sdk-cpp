/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/GuardrailContentFilterType.h>
#include <aws/bedrock-agent-runtime/model/GuardrailContentFilterConfidence.h>
#include <aws/bedrock-agent-runtime/model/GuardrailContentPolicyAction.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Details of the content filter used in the Guardrail.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GuardrailContentFilter">AWS
   * API Reference</a></p>
   */
  class GuardrailContentFilter
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GuardrailContentFilter() = default;
    AWS_BEDROCKAGENTRUNTIME_API GuardrailContentFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GuardrailContentFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of content detected in the filter by the Guardrail.</p>
     */
    inline GuardrailContentFilterType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GuardrailContentFilterType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GuardrailContentFilter& WithType(GuardrailContentFilterType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence level regarding the content detected in the filter by the
     * Guardrail.</p>
     */
    inline GuardrailContentFilterConfidence GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(GuardrailContentFilterConfidence value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline GuardrailContentFilter& WithConfidence(GuardrailContentFilterConfidence value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action placed on the content by the Guardrail filter.</p>
     */
    inline GuardrailContentPolicyAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(GuardrailContentPolicyAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline GuardrailContentFilter& WithAction(GuardrailContentPolicyAction value) { SetAction(value); return *this;}
    ///@}
  private:

    GuardrailContentFilterType m_type{GuardrailContentFilterType::NOT_SET};
    bool m_typeHasBeenSet = false;

    GuardrailContentFilterConfidence m_confidence{GuardrailContentFilterConfidence::NOT_SET};
    bool m_confidenceHasBeenSet = false;

    GuardrailContentPolicyAction m_action{GuardrailContentPolicyAction::NOT_SET};
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
