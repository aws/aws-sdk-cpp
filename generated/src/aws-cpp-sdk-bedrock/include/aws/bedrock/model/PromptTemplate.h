/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>The template for the prompt that's sent to the model for response
   * generation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/PromptTemplate">AWS
   * API Reference</a></p>
   */
  class PromptTemplate
  {
  public:
    AWS_BEDROCK_API PromptTemplate() = default;
    AWS_BEDROCK_API PromptTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API PromptTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The template for the prompt that's sent to the model for response generation.
     * You can include prompt placeholders, which become replaced before the prompt is
     * sent to the model to provide instructions and context to the model. In addition,
     * you can include XML tags to delineate meaningful sections of the prompt
     * template.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-test-config.html">Knowledge
     * base prompt template</a> and <a
     * href="https://docs.anthropic.com/en/docs/build-with-claude/prompt-engineering/use-xml-tags">Use
     * XML tags with Anthropic Claude models</a>.</p>
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
} // namespace Bedrock
} // namespace Aws
