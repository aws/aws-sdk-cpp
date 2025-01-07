/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/ParsingModality.h>
#include <aws/bedrock-agent/model/ParsingPrompt.h>
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
   * <p>Settings for a foundation model or <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference.html">inference
   * profile</a> used to parse documents for a data source.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/BedrockFoundationModelConfiguration">AWS
   * API Reference</a></p>
   */
  class BedrockFoundationModelConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API BedrockFoundationModelConfiguration();
    AWS_BEDROCKAGENT_API BedrockFoundationModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API BedrockFoundationModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the foundation model or <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference.html">inference
     * profile</a> to use for parsing.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }
    inline BedrockFoundationModelConfiguration& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline BedrockFoundationModelConfiguration& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline BedrockFoundationModelConfiguration& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable parsing of multimodal data, including both text
     * and/or images.</p>
     */
    inline const ParsingModality& GetParsingModality() const{ return m_parsingModality; }
    inline bool ParsingModalityHasBeenSet() const { return m_parsingModalityHasBeenSet; }
    inline void SetParsingModality(const ParsingModality& value) { m_parsingModalityHasBeenSet = true; m_parsingModality = value; }
    inline void SetParsingModality(ParsingModality&& value) { m_parsingModalityHasBeenSet = true; m_parsingModality = std::move(value); }
    inline BedrockFoundationModelConfiguration& WithParsingModality(const ParsingModality& value) { SetParsingModality(value); return *this;}
    inline BedrockFoundationModelConfiguration& WithParsingModality(ParsingModality&& value) { SetParsingModality(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Instructions for interpreting the contents of a document.</p>
     */
    inline const ParsingPrompt& GetParsingPrompt() const{ return m_parsingPrompt; }
    inline bool ParsingPromptHasBeenSet() const { return m_parsingPromptHasBeenSet; }
    inline void SetParsingPrompt(const ParsingPrompt& value) { m_parsingPromptHasBeenSet = true; m_parsingPrompt = value; }
    inline void SetParsingPrompt(ParsingPrompt&& value) { m_parsingPromptHasBeenSet = true; m_parsingPrompt = std::move(value); }
    inline BedrockFoundationModelConfiguration& WithParsingPrompt(const ParsingPrompt& value) { SetParsingPrompt(value); return *this;}
    inline BedrockFoundationModelConfiguration& WithParsingPrompt(ParsingPrompt&& value) { SetParsingPrompt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    ParsingModality m_parsingModality;
    bool m_parsingModalityHasBeenSet = false;

    ParsingPrompt m_parsingPrompt;
    bool m_parsingPromptHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
