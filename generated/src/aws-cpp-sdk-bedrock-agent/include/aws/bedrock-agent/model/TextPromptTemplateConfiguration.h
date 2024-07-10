/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_BEDROCKAGENT_API TextPromptTemplateConfiguration();
    AWS_BEDROCKAGENT_API TextPromptTemplateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API TextPromptTemplateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of the variables in the prompt template.</p>
     */
    inline const Aws::Vector<PromptInputVariable>& GetInputVariables() const{ return m_inputVariables; }
    inline bool InputVariablesHasBeenSet() const { return m_inputVariablesHasBeenSet; }
    inline void SetInputVariables(const Aws::Vector<PromptInputVariable>& value) { m_inputVariablesHasBeenSet = true; m_inputVariables = value; }
    inline void SetInputVariables(Aws::Vector<PromptInputVariable>&& value) { m_inputVariablesHasBeenSet = true; m_inputVariables = std::move(value); }
    inline TextPromptTemplateConfiguration& WithInputVariables(const Aws::Vector<PromptInputVariable>& value) { SetInputVariables(value); return *this;}
    inline TextPromptTemplateConfiguration& WithInputVariables(Aws::Vector<PromptInputVariable>&& value) { SetInputVariables(std::move(value)); return *this;}
    inline TextPromptTemplateConfiguration& AddInputVariables(const PromptInputVariable& value) { m_inputVariablesHasBeenSet = true; m_inputVariables.push_back(value); return *this; }
    inline TextPromptTemplateConfiguration& AddInputVariables(PromptInputVariable&& value) { m_inputVariablesHasBeenSet = true; m_inputVariables.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The message for the prompt.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline TextPromptTemplateConfiguration& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline TextPromptTemplateConfiguration& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline TextPromptTemplateConfiguration& WithText(const char* value) { SetText(value); return *this;}
    ///@}
  private:

    Aws::Vector<PromptInputVariable> m_inputVariables;
    bool m_inputVariablesHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
