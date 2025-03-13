/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BedrockGuardrailConfiguration.h>
#include <aws/lexv2-models/model/BedrockTraceStatus.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains information about the Amazon Bedrock model used to interpret the
   * prompt used in descriptive bot building.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BedrockModelSpecification">AWS
   * API Reference</a></p>
   */
  class BedrockModelSpecification
  {
  public:
    AWS_LEXMODELSV2_API BedrockModelSpecification() = default;
    AWS_LEXMODELSV2_API BedrockModelSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BedrockModelSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the foundation model used in descriptive bot building.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    BedrockModelSpecification& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The guardrail configuration in the Bedrock model specification details.</p>
     */
    inline const BedrockGuardrailConfiguration& GetGuardrail() const { return m_guardrail; }
    inline bool GuardrailHasBeenSet() const { return m_guardrailHasBeenSet; }
    template<typename GuardrailT = BedrockGuardrailConfiguration>
    void SetGuardrail(GuardrailT&& value) { m_guardrailHasBeenSet = true; m_guardrail = std::forward<GuardrailT>(value); }
    template<typename GuardrailT = BedrockGuardrailConfiguration>
    BedrockModelSpecification& WithGuardrail(GuardrailT&& value) { SetGuardrail(std::forward<GuardrailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Bedrock trace status in the Bedrock model specification details.</p>
     */
    inline BedrockTraceStatus GetTraceStatus() const { return m_traceStatus; }
    inline bool TraceStatusHasBeenSet() const { return m_traceStatusHasBeenSet; }
    inline void SetTraceStatus(BedrockTraceStatus value) { m_traceStatusHasBeenSet = true; m_traceStatus = value; }
    inline BedrockModelSpecification& WithTraceStatus(BedrockTraceStatus value) { SetTraceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom prompt used in the Bedrock model specification details.</p>
     */
    inline const Aws::String& GetCustomPrompt() const { return m_customPrompt; }
    inline bool CustomPromptHasBeenSet() const { return m_customPromptHasBeenSet; }
    template<typename CustomPromptT = Aws::String>
    void SetCustomPrompt(CustomPromptT&& value) { m_customPromptHasBeenSet = true; m_customPrompt = std::forward<CustomPromptT>(value); }
    template<typename CustomPromptT = Aws::String>
    BedrockModelSpecification& WithCustomPrompt(CustomPromptT&& value) { SetCustomPrompt(std::forward<CustomPromptT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    BedrockGuardrailConfiguration m_guardrail;
    bool m_guardrailHasBeenSet = false;

    BedrockTraceStatus m_traceStatus{BedrockTraceStatus::NOT_SET};
    bool m_traceStatusHasBeenSet = false;

    Aws::String m_customPrompt;
    bool m_customPromptHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
