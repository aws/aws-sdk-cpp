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
    AWS_BEDROCK_API PromptTemplate();
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
    inline const Aws::String& GetTextPromptTemplate() const{ return m_textPromptTemplate; }
    inline bool TextPromptTemplateHasBeenSet() const { return m_textPromptTemplateHasBeenSet; }
    inline void SetTextPromptTemplate(const Aws::String& value) { m_textPromptTemplateHasBeenSet = true; m_textPromptTemplate = value; }
    inline void SetTextPromptTemplate(Aws::String&& value) { m_textPromptTemplateHasBeenSet = true; m_textPromptTemplate = std::move(value); }
    inline void SetTextPromptTemplate(const char* value) { m_textPromptTemplateHasBeenSet = true; m_textPromptTemplate.assign(value); }
    inline PromptTemplate& WithTextPromptTemplate(const Aws::String& value) { SetTextPromptTemplate(value); return *this;}
    inline PromptTemplate& WithTextPromptTemplate(Aws::String&& value) { SetTextPromptTemplate(std::move(value)); return *this;}
    inline PromptTemplate& WithTextPromptTemplate(const char* value) { SetTextPromptTemplate(value); return *this;}
    ///@}
  private:

    Aws::String m_textPromptTemplate;
    bool m_textPromptTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
