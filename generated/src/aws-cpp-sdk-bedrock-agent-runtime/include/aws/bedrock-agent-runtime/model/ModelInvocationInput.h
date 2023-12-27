/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/PromptType.h>
#include <aws/bedrock-agent-runtime/model/InferenceConfiguration.h>
#include <aws/bedrock-agent-runtime/model/CreationMode.h>
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
   * <p>Trace Part which contains information used to call Invoke Model</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ModelInvocationInput">AWS
   * API Reference</a></p>
   */
  class ModelInvocationInput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ModelInvocationInput();
    AWS_BEDROCKAGENTRUNTIME_API ModelInvocationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ModelInvocationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetTraceId() const{ return m_traceId; }

    
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }

    
    inline void SetTraceId(const Aws::String& value) { m_traceIdHasBeenSet = true; m_traceId = value; }

    
    inline void SetTraceId(Aws::String&& value) { m_traceIdHasBeenSet = true; m_traceId = std::move(value); }

    
    inline void SetTraceId(const char* value) { m_traceIdHasBeenSet = true; m_traceId.assign(value); }

    
    inline ModelInvocationInput& WithTraceId(const Aws::String& value) { SetTraceId(value); return *this;}

    
    inline ModelInvocationInput& WithTraceId(Aws::String&& value) { SetTraceId(std::move(value)); return *this;}

    
    inline ModelInvocationInput& WithTraceId(const char* value) { SetTraceId(value); return *this;}


    
    inline const Aws::String& GetText() const{ return m_text; }

    
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    
    inline ModelInvocationInput& WithText(const Aws::String& value) { SetText(value); return *this;}

    
    inline ModelInvocationInput& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    
    inline ModelInvocationInput& WithText(const char* value) { SetText(value); return *this;}


    
    inline const PromptType& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const PromptType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(PromptType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline ModelInvocationInput& WithType(const PromptType& value) { SetType(value); return *this;}

    
    inline ModelInvocationInput& WithType(PromptType&& value) { SetType(std::move(value)); return *this;}


    
    inline const InferenceConfiguration& GetInferenceConfiguration() const{ return m_inferenceConfiguration; }

    
    inline bool InferenceConfigurationHasBeenSet() const { return m_inferenceConfigurationHasBeenSet; }

    
    inline void SetInferenceConfiguration(const InferenceConfiguration& value) { m_inferenceConfigurationHasBeenSet = true; m_inferenceConfiguration = value; }

    
    inline void SetInferenceConfiguration(InferenceConfiguration&& value) { m_inferenceConfigurationHasBeenSet = true; m_inferenceConfiguration = std::move(value); }

    
    inline ModelInvocationInput& WithInferenceConfiguration(const InferenceConfiguration& value) { SetInferenceConfiguration(value); return *this;}

    
    inline ModelInvocationInput& WithInferenceConfiguration(InferenceConfiguration&& value) { SetInferenceConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetOverrideLambda() const{ return m_overrideLambda; }

    
    inline bool OverrideLambdaHasBeenSet() const { return m_overrideLambdaHasBeenSet; }

    
    inline void SetOverrideLambda(const Aws::String& value) { m_overrideLambdaHasBeenSet = true; m_overrideLambda = value; }

    
    inline void SetOverrideLambda(Aws::String&& value) { m_overrideLambdaHasBeenSet = true; m_overrideLambda = std::move(value); }

    
    inline void SetOverrideLambda(const char* value) { m_overrideLambdaHasBeenSet = true; m_overrideLambda.assign(value); }

    
    inline ModelInvocationInput& WithOverrideLambda(const Aws::String& value) { SetOverrideLambda(value); return *this;}

    
    inline ModelInvocationInput& WithOverrideLambda(Aws::String&& value) { SetOverrideLambda(std::move(value)); return *this;}

    
    inline ModelInvocationInput& WithOverrideLambda(const char* value) { SetOverrideLambda(value); return *this;}


    
    inline const CreationMode& GetPromptCreationMode() const{ return m_promptCreationMode; }

    
    inline bool PromptCreationModeHasBeenSet() const { return m_promptCreationModeHasBeenSet; }

    
    inline void SetPromptCreationMode(const CreationMode& value) { m_promptCreationModeHasBeenSet = true; m_promptCreationMode = value; }

    
    inline void SetPromptCreationMode(CreationMode&& value) { m_promptCreationModeHasBeenSet = true; m_promptCreationMode = std::move(value); }

    
    inline ModelInvocationInput& WithPromptCreationMode(const CreationMode& value) { SetPromptCreationMode(value); return *this;}

    
    inline ModelInvocationInput& WithPromptCreationMode(CreationMode&& value) { SetPromptCreationMode(std::move(value)); return *this;}


    
    inline const CreationMode& GetParserMode() const{ return m_parserMode; }

    
    inline bool ParserModeHasBeenSet() const { return m_parserModeHasBeenSet; }

    
    inline void SetParserMode(const CreationMode& value) { m_parserModeHasBeenSet = true; m_parserMode = value; }

    
    inline void SetParserMode(CreationMode&& value) { m_parserModeHasBeenSet = true; m_parserMode = std::move(value); }

    
    inline ModelInvocationInput& WithParserMode(const CreationMode& value) { SetParserMode(value); return *this;}

    
    inline ModelInvocationInput& WithParserMode(CreationMode&& value) { SetParserMode(std::move(value)); return *this;}

  private:

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    PromptType m_type;
    bool m_typeHasBeenSet = false;

    InferenceConfiguration m_inferenceConfiguration;
    bool m_inferenceConfigurationHasBeenSet = false;

    Aws::String m_overrideLambda;
    bool m_overrideLambdaHasBeenSet = false;

    CreationMode m_promptCreationMode;
    bool m_promptCreationModeHasBeenSet = false;

    CreationMode m_parserMode;
    bool m_parserModeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
