/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
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
   * <p>Contains configurations for using Amazon Bedrock Data Automation as the
   * parser for ingesting your data sources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/BedrockDataAutomationConfiguration">AWS
   * API Reference</a></p>
   */
  class BedrockDataAutomationConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API BedrockDataAutomationConfiguration() = default;
    AWS_BEDROCKAGENT_API BedrockDataAutomationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API BedrockDataAutomationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether to enable parsing of multimodal data, including both text
     * and/or images.</p>
     */
    inline ParsingModality GetParsingModality() const { return m_parsingModality; }
    inline bool ParsingModalityHasBeenSet() const { return m_parsingModalityHasBeenSet; }
    inline void SetParsingModality(ParsingModality value) { m_parsingModalityHasBeenSet = true; m_parsingModality = value; }
    inline BedrockDataAutomationConfiguration& WithParsingModality(ParsingModality value) { SetParsingModality(value); return *this;}
    ///@}
  private:

    ParsingModality m_parsingModality{ParsingModality::NOT_SET};
    bool m_parsingModalityHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
