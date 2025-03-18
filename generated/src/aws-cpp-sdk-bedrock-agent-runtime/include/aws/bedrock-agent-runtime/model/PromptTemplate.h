/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains the template for the prompt that's sent to the model for response
   * generation. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-test-config.html#kb-test-config-sysprompt">Knowledge
   * base prompt templates</a>.</p> <p>This data type is used in the following API
   * operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_RetrieveAndGenerate.html#API_agent-runtime_RetrieveAndGenerate_RequestSyntax">RetrieveAndGenerate
   * request</a> – in the <code>filter</code> field</p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/PromptTemplate">AWS
   * API Reference</a></p>
   */
  class PromptTemplate
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API PromptTemplate() = default;
    AWS_BEDROCKAGENTRUNTIME_API PromptTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API PromptTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The template for the prompt that's sent to the model for response generation.
     * You can include prompt placeholders, which become replaced before the prompt is
     * sent to the model to provide instructions and context to the model. In addition,
     * you can include XML tags to delineate meaningful sections of the prompt
     * template.</p> <p>For more information, see the following resources:</p> <ul>
     * <li> <p> <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-test-config.html#kb-test-config-sysprompt">Knowledge
     * base prompt templates</a> </p> </li> <li> <p> <a
     * href="https://docs.anthropic.com/claude/docs/use-xml-tags">Use XML tags with
     * Anthropic Claude models</a> </p> </li> </ul>
     */
    inline const Aws::String& GetTextPromptTemplate() const { return m_textPromptTemplate; }
    inline bool TextPromptTemplateHasBeenSet() const { return m_textPromptTemplateHasBeenSet; }
    template<typename TextPromptTemplateT = Aws::String>
    void SetTextPromptTemplate(TextPromptTemplateT&& value) { m_textPromptTemplateHasBeenSet = true; m_textPromptTemplate = std::forward<TextPromptTemplateT>(value); }
    template<typename TextPromptTemplateT = Aws::String>
    PromptTemplate& WithTextPromptTemplate(TextPromptTemplateT&& value) { SetTextPromptTemplate(std::forward<TextPromptTemplateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_textPromptTemplate;
    bool m_textPromptTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
