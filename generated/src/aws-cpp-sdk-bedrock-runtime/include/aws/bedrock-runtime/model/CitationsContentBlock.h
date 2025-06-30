/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/CitationGeneratedContent.h>
#include <aws/bedrock-runtime/model/Citation.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>A content block that contains both generated text and associated citation
   * information. This block type is returned when document citations are enabled,
   * providing traceability between the generated content and the source documents
   * that informed the response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/CitationsContentBlock">AWS
   * API Reference</a></p>
   */
  class CitationsContentBlock
  {
  public:
    AWS_BEDROCKRUNTIME_API CitationsContentBlock() = default;
    AWS_BEDROCKRUNTIME_API CitationsContentBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API CitationsContentBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The generated content that is supported by the associated citations.</p>
     */
    inline const Aws::Vector<CitationGeneratedContent>& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::Vector<CitationGeneratedContent>>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::Vector<CitationGeneratedContent>>
    CitationsContentBlock& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    template<typename ContentT = CitationGeneratedContent>
    CitationsContentBlock& AddContent(ContentT&& value) { m_contentHasBeenSet = true; m_content.emplace_back(std::forward<ContentT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of citations that reference the source documents used to generate
     * the associated content.</p>
     */
    inline const Aws::Vector<Citation>& GetCitations() const { return m_citations; }
    inline bool CitationsHasBeenSet() const { return m_citationsHasBeenSet; }
    template<typename CitationsT = Aws::Vector<Citation>>
    void SetCitations(CitationsT&& value) { m_citationsHasBeenSet = true; m_citations = std::forward<CitationsT>(value); }
    template<typename CitationsT = Aws::Vector<Citation>>
    CitationsContentBlock& WithCitations(CitationsT&& value) { SetCitations(std::forward<CitationsT>(value)); return *this;}
    template<typename CitationsT = Citation>
    CitationsContentBlock& AddCitations(CitationsT&& value) { m_citationsHasBeenSet = true; m_citations.emplace_back(std::forward<CitationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CitationGeneratedContent> m_content;
    bool m_contentHasBeenSet = false;

    Aws::Vector<Citation> m_citations;
    bool m_citationsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
