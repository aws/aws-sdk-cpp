/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/CachePointBlock.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/PromptInputVariable.h>
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
   * <p>Contains configurations for a text prompt template. To include a variable,
   * enclose a word in double curly braces as in
   * <code>{{variable}}</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/TextPromptTemplateConfiguration">AWS
   * API Reference</a></p>
   */
  class TextPromptTemplateConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API TextPromptTemplateConfiguration() = default;
    AWS_BEDROCKAGENT_API TextPromptTemplateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API TextPromptTemplateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message for the prompt.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    TextPromptTemplateConfiguration& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A cache checkpoint within a template configuration.</p>
     */
    inline const CachePointBlock& GetCachePoint() const { return m_cachePoint; }
    inline bool CachePointHasBeenSet() const { return m_cachePointHasBeenSet; }
    template<typename CachePointT = CachePointBlock>
    void SetCachePoint(CachePointT&& value) { m_cachePointHasBeenSet = true; m_cachePoint = std::forward<CachePointT>(value); }
    template<typename CachePointT = CachePointBlock>
    TextPromptTemplateConfiguration& WithCachePoint(CachePointT&& value) { SetCachePoint(std::forward<CachePointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of the variables in the prompt template.</p>
     */
    inline const Aws::Vector<PromptInputVariable>& GetInputVariables() const { return m_inputVariables; }
    inline bool InputVariablesHasBeenSet() const { return m_inputVariablesHasBeenSet; }
    template<typename InputVariablesT = Aws::Vector<PromptInputVariable>>
    void SetInputVariables(InputVariablesT&& value) { m_inputVariablesHasBeenSet = true; m_inputVariables = std::forward<InputVariablesT>(value); }
    template<typename InputVariablesT = Aws::Vector<PromptInputVariable>>
    TextPromptTemplateConfiguration& WithInputVariables(InputVariablesT&& value) { SetInputVariables(std::forward<InputVariablesT>(value)); return *this;}
    template<typename InputVariablesT = PromptInputVariable>
    TextPromptTemplateConfiguration& AddInputVariables(InputVariablesT&& value) { m_inputVariablesHasBeenSet = true; m_inputVariables.emplace_back(std::forward<InputVariablesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    CachePointBlock m_cachePoint;
    bool m_cachePointHasBeenSet = false;

    Aws::Vector<PromptInputVariable> m_inputVariables;
    bool m_inputVariablesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
