/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/BedrockFoundationModelConfiguration.h>
#include <aws/bedrock-agent/model/ParsingStrategy.h>
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
   * <p>Settings for parsing document contents. By default, the service converts the
   * contents of each document into text before splitting it into chunks. To improve
   * processing of PDF files with tables and images, you can configure the data
   * source to convert the pages of text into images and use a model to describe the
   * contents of each page.</p> <p>To use a model to parse PDF documents, set the
   * parsing strategy to <code>BEDROCK_FOUNDATION_MODEL</code> and specify the model
   * or <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference.html">inference
   * profile</a> to use by ARN. You can also override the default parsing prompt with
   * instructions for how to interpret images and tables in your documents. The
   * following models are supported.</p> <ul> <li> <p>Anthropic Claude 3 Sonnet -
   * <code>anthropic.claude-3-sonnet-20240229-v1:0</code> </p> </li> <li>
   * <p>Anthropic Claude 3 Haiku -
   * <code>anthropic.claude-3-haiku-20240307-v1:0</code> </p> </li> </ul> <p>You can
   * get the ARN of a model with the <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_ListFoundationModels.html">ListFoundationModels</a>
   * action. Standard model usage charges apply for the foundation model parsing
   * strategy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ParsingConfiguration">AWS
   * API Reference</a></p>
   */
  class ParsingConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API ParsingConfiguration();
    AWS_BEDROCKAGENT_API ParsingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ParsingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Settings for a foundation model used to parse documents for a data
     * source.</p>
     */
    inline const BedrockFoundationModelConfiguration& GetBedrockFoundationModelConfiguration() const{ return m_bedrockFoundationModelConfiguration; }
    inline bool BedrockFoundationModelConfigurationHasBeenSet() const { return m_bedrockFoundationModelConfigurationHasBeenSet; }
    inline void SetBedrockFoundationModelConfiguration(const BedrockFoundationModelConfiguration& value) { m_bedrockFoundationModelConfigurationHasBeenSet = true; m_bedrockFoundationModelConfiguration = value; }
    inline void SetBedrockFoundationModelConfiguration(BedrockFoundationModelConfiguration&& value) { m_bedrockFoundationModelConfigurationHasBeenSet = true; m_bedrockFoundationModelConfiguration = std::move(value); }
    inline ParsingConfiguration& WithBedrockFoundationModelConfiguration(const BedrockFoundationModelConfiguration& value) { SetBedrockFoundationModelConfiguration(value); return *this;}
    inline ParsingConfiguration& WithBedrockFoundationModelConfiguration(BedrockFoundationModelConfiguration&& value) { SetBedrockFoundationModelConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parsing strategy for the data source.</p>
     */
    inline const ParsingStrategy& GetParsingStrategy() const{ return m_parsingStrategy; }
    inline bool ParsingStrategyHasBeenSet() const { return m_parsingStrategyHasBeenSet; }
    inline void SetParsingStrategy(const ParsingStrategy& value) { m_parsingStrategyHasBeenSet = true; m_parsingStrategy = value; }
    inline void SetParsingStrategy(ParsingStrategy&& value) { m_parsingStrategyHasBeenSet = true; m_parsingStrategy = std::move(value); }
    inline ParsingConfiguration& WithParsingStrategy(const ParsingStrategy& value) { SetParsingStrategy(value); return *this;}
    inline ParsingConfiguration& WithParsingStrategy(ParsingStrategy&& value) { SetParsingStrategy(std::move(value)); return *this;}
    ///@}
  private:

    BedrockFoundationModelConfiguration m_bedrockFoundationModelConfiguration;
    bool m_bedrockFoundationModelConfigurationHasBeenSet = false;

    ParsingStrategy m_parsingStrategy;
    bool m_parsingStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
