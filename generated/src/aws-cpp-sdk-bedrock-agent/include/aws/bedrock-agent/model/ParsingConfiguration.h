/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/ParsingStrategy.h>
#include <aws/bedrock-agent/model/BedrockFoundationModelConfiguration.h>
#include <aws/bedrock-agent/model/BedrockDataAutomationConfiguration.h>
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
   * <p>Settings for parsing document contents. If you exclude this field, the
   * default parser converts the contents of each document into text before splitting
   * it into chunks. Specify the parsing strategy to use in the
   * <code>parsingStrategy</code> field and include the relevant configuration, or
   * omit it to use the Amazon Bedrock default parser. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-advanced-parsing.html">Parsing
   * options for your data source</a>.</p>  <p>If you specify
   * <code>BEDROCK_DATA_AUTOMATION</code> or <code>BEDROCK_FOUNDATION_MODEL</code>
   * and it fails to parse a file, the Amazon Bedrock default parser will be used
   * instead.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ParsingConfiguration">AWS
   * API Reference</a></p>
   */
  class ParsingConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API ParsingConfiguration() = default;
    AWS_BEDROCKAGENT_API ParsingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ParsingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parsing strategy for the data source.</p>
     */
    inline ParsingStrategy GetParsingStrategy() const { return m_parsingStrategy; }
    inline bool ParsingStrategyHasBeenSet() const { return m_parsingStrategyHasBeenSet; }
    inline void SetParsingStrategy(ParsingStrategy value) { m_parsingStrategyHasBeenSet = true; m_parsingStrategy = value; }
    inline ParsingConfiguration& WithParsingStrategy(ParsingStrategy value) { SetParsingStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you specify <code>BEDROCK_FOUNDATION_MODEL</code> as the parsing strategy
     * for ingesting your data source, use this object to modify configurations for
     * using a foundation model to parse documents.</p>
     */
    inline const BedrockFoundationModelConfiguration& GetBedrockFoundationModelConfiguration() const { return m_bedrockFoundationModelConfiguration; }
    inline bool BedrockFoundationModelConfigurationHasBeenSet() const { return m_bedrockFoundationModelConfigurationHasBeenSet; }
    template<typename BedrockFoundationModelConfigurationT = BedrockFoundationModelConfiguration>
    void SetBedrockFoundationModelConfiguration(BedrockFoundationModelConfigurationT&& value) { m_bedrockFoundationModelConfigurationHasBeenSet = true; m_bedrockFoundationModelConfiguration = std::forward<BedrockFoundationModelConfigurationT>(value); }
    template<typename BedrockFoundationModelConfigurationT = BedrockFoundationModelConfiguration>
    ParsingConfiguration& WithBedrockFoundationModelConfiguration(BedrockFoundationModelConfigurationT&& value) { SetBedrockFoundationModelConfiguration(std::forward<BedrockFoundationModelConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you specify <code>BEDROCK_DATA_AUTOMATION</code> as the parsing strategy
     * for ingesting your data source, use this object to modify configurations for
     * using the Amazon Bedrock Data Automation parser.</p>
     */
    inline const BedrockDataAutomationConfiguration& GetBedrockDataAutomationConfiguration() const { return m_bedrockDataAutomationConfiguration; }
    inline bool BedrockDataAutomationConfigurationHasBeenSet() const { return m_bedrockDataAutomationConfigurationHasBeenSet; }
    template<typename BedrockDataAutomationConfigurationT = BedrockDataAutomationConfiguration>
    void SetBedrockDataAutomationConfiguration(BedrockDataAutomationConfigurationT&& value) { m_bedrockDataAutomationConfigurationHasBeenSet = true; m_bedrockDataAutomationConfiguration = std::forward<BedrockDataAutomationConfigurationT>(value); }
    template<typename BedrockDataAutomationConfigurationT = BedrockDataAutomationConfiguration>
    ParsingConfiguration& WithBedrockDataAutomationConfiguration(BedrockDataAutomationConfigurationT&& value) { SetBedrockDataAutomationConfiguration(std::forward<BedrockDataAutomationConfigurationT>(value)); return *this;}
    ///@}
  private:

    ParsingStrategy m_parsingStrategy{ParsingStrategy::NOT_SET};
    bool m_parsingStrategyHasBeenSet = false;

    BedrockFoundationModelConfiguration m_bedrockFoundationModelConfiguration;
    bool m_bedrockFoundationModelConfigurationHasBeenSet = false;

    BedrockDataAutomationConfiguration m_bedrockDataAutomationConfiguration;
    bool m_bedrockDataAutomationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
