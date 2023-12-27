/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/PromptType.h>
#include <aws/bedrock-agent/model/CreationMode.h>
#include <aws/bedrock-agent/model/PromptState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/InferenceConfiguration.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>BasePromptConfiguration per Prompt Type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PromptConfiguration">AWS
   * API Reference</a></p>
   */
  class PromptConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API PromptConfiguration();
    AWS_BEDROCKAGENT_API PromptConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PromptConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const PromptType& GetPromptType() const{ return m_promptType; }

    
    inline bool PromptTypeHasBeenSet() const { return m_promptTypeHasBeenSet; }

    
    inline void SetPromptType(const PromptType& value) { m_promptTypeHasBeenSet = true; m_promptType = value; }

    
    inline void SetPromptType(PromptType&& value) { m_promptTypeHasBeenSet = true; m_promptType = std::move(value); }

    
    inline PromptConfiguration& WithPromptType(const PromptType& value) { SetPromptType(value); return *this;}

    
    inline PromptConfiguration& WithPromptType(PromptType&& value) { SetPromptType(std::move(value)); return *this;}


    
    inline const CreationMode& GetPromptCreationMode() const{ return m_promptCreationMode; }

    
    inline bool PromptCreationModeHasBeenSet() const { return m_promptCreationModeHasBeenSet; }

    
    inline void SetPromptCreationMode(const CreationMode& value) { m_promptCreationModeHasBeenSet = true; m_promptCreationMode = value; }

    
    inline void SetPromptCreationMode(CreationMode&& value) { m_promptCreationModeHasBeenSet = true; m_promptCreationMode = std::move(value); }

    
    inline PromptConfiguration& WithPromptCreationMode(const CreationMode& value) { SetPromptCreationMode(value); return *this;}

    
    inline PromptConfiguration& WithPromptCreationMode(CreationMode&& value) { SetPromptCreationMode(std::move(value)); return *this;}


    
    inline const PromptState& GetPromptState() const{ return m_promptState; }

    
    inline bool PromptStateHasBeenSet() const { return m_promptStateHasBeenSet; }

    
    inline void SetPromptState(const PromptState& value) { m_promptStateHasBeenSet = true; m_promptState = value; }

    
    inline void SetPromptState(PromptState&& value) { m_promptStateHasBeenSet = true; m_promptState = std::move(value); }

    
    inline PromptConfiguration& WithPromptState(const PromptState& value) { SetPromptState(value); return *this;}

    
    inline PromptConfiguration& WithPromptState(PromptState&& value) { SetPromptState(std::move(value)); return *this;}


    
    inline const Aws::String& GetBasePromptTemplate() const{ return m_basePromptTemplate; }

    
    inline bool BasePromptTemplateHasBeenSet() const { return m_basePromptTemplateHasBeenSet; }

    
    inline void SetBasePromptTemplate(const Aws::String& value) { m_basePromptTemplateHasBeenSet = true; m_basePromptTemplate = value; }

    
    inline void SetBasePromptTemplate(Aws::String&& value) { m_basePromptTemplateHasBeenSet = true; m_basePromptTemplate = std::move(value); }

    
    inline void SetBasePromptTemplate(const char* value) { m_basePromptTemplateHasBeenSet = true; m_basePromptTemplate.assign(value); }

    
    inline PromptConfiguration& WithBasePromptTemplate(const Aws::String& value) { SetBasePromptTemplate(value); return *this;}

    
    inline PromptConfiguration& WithBasePromptTemplate(Aws::String&& value) { SetBasePromptTemplate(std::move(value)); return *this;}

    
    inline PromptConfiguration& WithBasePromptTemplate(const char* value) { SetBasePromptTemplate(value); return *this;}


    
    inline const InferenceConfiguration& GetInferenceConfiguration() const{ return m_inferenceConfiguration; }

    
    inline bool InferenceConfigurationHasBeenSet() const { return m_inferenceConfigurationHasBeenSet; }

    
    inline void SetInferenceConfiguration(const InferenceConfiguration& value) { m_inferenceConfigurationHasBeenSet = true; m_inferenceConfiguration = value; }

    
    inline void SetInferenceConfiguration(InferenceConfiguration&& value) { m_inferenceConfigurationHasBeenSet = true; m_inferenceConfiguration = std::move(value); }

    
    inline PromptConfiguration& WithInferenceConfiguration(const InferenceConfiguration& value) { SetInferenceConfiguration(value); return *this;}

    
    inline PromptConfiguration& WithInferenceConfiguration(InferenceConfiguration&& value) { SetInferenceConfiguration(std::move(value)); return *this;}


    
    inline const CreationMode& GetParserMode() const{ return m_parserMode; }

    
    inline bool ParserModeHasBeenSet() const { return m_parserModeHasBeenSet; }

    
    inline void SetParserMode(const CreationMode& value) { m_parserModeHasBeenSet = true; m_parserMode = value; }

    
    inline void SetParserMode(CreationMode&& value) { m_parserModeHasBeenSet = true; m_parserMode = std::move(value); }

    
    inline PromptConfiguration& WithParserMode(const CreationMode& value) { SetParserMode(value); return *this;}

    
    inline PromptConfiguration& WithParserMode(CreationMode&& value) { SetParserMode(std::move(value)); return *this;}

  private:

    PromptType m_promptType;
    bool m_promptTypeHasBeenSet = false;

    CreationMode m_promptCreationMode;
    bool m_promptCreationModeHasBeenSet = false;

    PromptState m_promptState;
    bool m_promptStateHasBeenSet = false;

    Aws::String m_basePromptTemplate;
    bool m_basePromptTemplateHasBeenSet = false;

    InferenceConfiguration m_inferenceConfiguration;
    bool m_inferenceConfigurationHasBeenSet = false;

    CreationMode m_parserMode;
    bool m_parserModeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
