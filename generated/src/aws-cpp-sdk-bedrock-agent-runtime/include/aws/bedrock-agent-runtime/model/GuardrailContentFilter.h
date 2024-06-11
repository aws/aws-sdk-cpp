/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/GuardrailContentPolicyAction.h>
#include <aws/bedrock-agent-runtime/model/GuardrailContentFilterConfidence.h>
#include <aws/bedrock-agent-runtime/model/GuardrailContentFilterType.h>
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
    AWS_BEDROCKAGENTRUNTIME_API GuardrailContentFilter();
    AWS_BEDROCKAGENTRUNTIME_API GuardrailContentFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GuardrailContentFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action placed on the content by the Guardrail filter.</p>
     */
    inline const GuardrailContentPolicyAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const GuardrailContentPolicyAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(GuardrailContentPolicyAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline GuardrailContentFilter& WithAction(const GuardrailContentPolicyAction& value) { SetAction(value); return *this;}
    inline GuardrailContentFilter& WithAction(GuardrailContentPolicyAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence level regarding the content detected in the filter by the
     * Guardrail.</p>
     */
    inline const GuardrailContentFilterConfidence& GetConfidence() const{ return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(const GuardrailContentFilterConfidence& value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline void SetConfidence(GuardrailContentFilterConfidence&& value) { m_confidenceHasBeenSet = true; m_confidence = std::move(value); }
    inline GuardrailContentFilter& WithConfidence(const GuardrailContentFilterConfidence& value) { SetConfidence(value); return *this;}
    inline GuardrailContentFilter& WithConfidence(GuardrailContentFilterConfidence&& value) { SetConfidence(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of content detected in the filter by the Guardrail.</p>
     */
    inline const GuardrailContentFilterType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const GuardrailContentFilterType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(GuardrailContentFilterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline GuardrailContentFilter& WithType(const GuardrailContentFilterType& value) { SetType(value); return *this;}
    inline GuardrailContentFilter& WithType(GuardrailContentFilterType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    GuardrailContentPolicyAction m_action;
    bool m_actionHasBeenSet = false;

    GuardrailContentFilterConfidence m_confidence;
    bool m_confidenceHasBeenSet = false;

    GuardrailContentFilterType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
