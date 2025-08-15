/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/ParsingPrompt.h>
#include <aws/bedrock-agent/model/ParsingModality.h>
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
   * <p>Settings for a foundation model used to parse documents for a data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/BedrockFoundationModelConfiguration">AWS
   * API Reference</a></p>
   */
  class BedrockFoundationModelConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API BedrockFoundationModelConfiguration() = default;
    AWS_BEDROCKAGENT_API BedrockFoundationModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API BedrockFoundationModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the foundation model to use for parsing.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    BedrockFoundationModelConfiguration& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Instructions for interpreting the contents of a document.</p>
     */
    inline const ParsingPrompt& GetParsingPrompt() const { return m_parsingPrompt; }
    inline bool ParsingPromptHasBeenSet() const { return m_parsingPromptHasBeenSet; }
    template<typename ParsingPromptT = ParsingPrompt>
    void SetParsingPrompt(ParsingPromptT&& value) { m_parsingPromptHasBeenSet = true; m_parsingPrompt = std::forward<ParsingPromptT>(value); }
    template<typename ParsingPromptT = ParsingPrompt>
    BedrockFoundationModelConfiguration& WithParsingPrompt(ParsingPromptT&& value) { SetParsingPrompt(std::forward<ParsingPromptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable parsing of multimodal data, including both text
     * and/or images.</p>
     */
    inline ParsingModality GetParsingModality() const { return m_parsingModality; }
    inline bool ParsingModalityHasBeenSet() const { return m_parsingModalityHasBeenSet; }
    inline void SetParsingModality(ParsingModality value) { m_parsingModalityHasBeenSet = true; m_parsingModality = value; }
    inline BedrockFoundationModelConfiguration& WithParsingModality(ParsingModality value) { SetParsingModality(value); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    ParsingPrompt m_parsingPrompt;
    bool m_parsingPromptHasBeenSet = false;

    ParsingModality m_parsingModality{ParsingModality::NOT_SET};
    bool m_parsingModalityHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
