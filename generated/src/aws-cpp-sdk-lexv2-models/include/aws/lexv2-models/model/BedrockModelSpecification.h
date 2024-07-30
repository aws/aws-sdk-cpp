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
    AWS_LEXMODELSV2_API BedrockModelSpecification();
    AWS_LEXMODELSV2_API BedrockModelSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BedrockModelSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the foundation model used in descriptive bot building.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }
    inline BedrockModelSpecification& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline BedrockModelSpecification& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline BedrockModelSpecification& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The guardrail configuration in the Bedrock model specification details.</p>
     */
    inline const BedrockGuardrailConfiguration& GetGuardrail() const{ return m_guardrail; }
    inline bool GuardrailHasBeenSet() const { return m_guardrailHasBeenSet; }
    inline void SetGuardrail(const BedrockGuardrailConfiguration& value) { m_guardrailHasBeenSet = true; m_guardrail = value; }
    inline void SetGuardrail(BedrockGuardrailConfiguration&& value) { m_guardrailHasBeenSet = true; m_guardrail = std::move(value); }
    inline BedrockModelSpecification& WithGuardrail(const BedrockGuardrailConfiguration& value) { SetGuardrail(value); return *this;}
    inline BedrockModelSpecification& WithGuardrail(BedrockGuardrailConfiguration&& value) { SetGuardrail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Bedrock trace status in the Bedrock model specification details.</p>
     */
    inline const BedrockTraceStatus& GetTraceStatus() const{ return m_traceStatus; }
    inline bool TraceStatusHasBeenSet() const { return m_traceStatusHasBeenSet; }
    inline void SetTraceStatus(const BedrockTraceStatus& value) { m_traceStatusHasBeenSet = true; m_traceStatus = value; }
    inline void SetTraceStatus(BedrockTraceStatus&& value) { m_traceStatusHasBeenSet = true; m_traceStatus = std::move(value); }
    inline BedrockModelSpecification& WithTraceStatus(const BedrockTraceStatus& value) { SetTraceStatus(value); return *this;}
    inline BedrockModelSpecification& WithTraceStatus(BedrockTraceStatus&& value) { SetTraceStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom prompt used in the Bedrock model specification details.</p>
     */
    inline const Aws::String& GetCustomPrompt() const{ return m_customPrompt; }
    inline bool CustomPromptHasBeenSet() const { return m_customPromptHasBeenSet; }
    inline void SetCustomPrompt(const Aws::String& value) { m_customPromptHasBeenSet = true; m_customPrompt = value; }
    inline void SetCustomPrompt(Aws::String&& value) { m_customPromptHasBeenSet = true; m_customPrompt = std::move(value); }
    inline void SetCustomPrompt(const char* value) { m_customPromptHasBeenSet = true; m_customPrompt.assign(value); }
    inline BedrockModelSpecification& WithCustomPrompt(const Aws::String& value) { SetCustomPrompt(value); return *this;}
    inline BedrockModelSpecification& WithCustomPrompt(Aws::String&& value) { SetCustomPrompt(std::move(value)); return *this;}
    inline BedrockModelSpecification& WithCustomPrompt(const char* value) { SetCustomPrompt(value); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    BedrockGuardrailConfiguration m_guardrail;
    bool m_guardrailHasBeenSet = false;

    BedrockTraceStatus m_traceStatus;
    bool m_traceStatusHasBeenSet = false;

    Aws::String m_customPrompt;
    bool m_customPromptHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
