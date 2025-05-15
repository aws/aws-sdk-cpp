/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Defines a custom prompt template for orchestrating the retrieval and
   * generation process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/KnowledgeBasePromptTemplate">AWS
   * API Reference</a></p>
   */
  class KnowledgeBasePromptTemplate
  {
  public:
    AWS_BEDROCKAGENT_API KnowledgeBasePromptTemplate() = default;
    AWS_BEDROCKAGENT_API KnowledgeBasePromptTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API KnowledgeBasePromptTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text of the prompt template.</p>
     */
    inline const Aws::String& GetTextPromptTemplate() const { return m_textPromptTemplate; }
    inline bool TextPromptTemplateHasBeenSet() const { return m_textPromptTemplateHasBeenSet; }
    template<typename TextPromptTemplateT = Aws::String>
    void SetTextPromptTemplate(TextPromptTemplateT&& value) { m_textPromptTemplateHasBeenSet = true; m_textPromptTemplate = std::forward<TextPromptTemplateT>(value); }
    template<typename TextPromptTemplateT = Aws::String>
    KnowledgeBasePromptTemplate& WithTextPromptTemplate(TextPromptTemplateT&& value) { SetTextPromptTemplate(std::forward<TextPromptTemplateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_textPromptTemplate;
    bool m_textPromptTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
