/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/ToolUseBlockDelta.h>
#include <aws/bedrock-runtime/model/ReasoningContentBlockDelta.h>
#include <aws/bedrock-runtime/model/CitationsDelta.h>
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
   * <p>A block of content in a streaming response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ContentBlockDelta">AWS
   * API Reference</a></p>
   */
  class ContentBlockDelta
  {
  public:
    AWS_BEDROCKRUNTIME_API ContentBlockDelta() = default;
    AWS_BEDROCKRUNTIME_API ContentBlockDelta(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ContentBlockDelta& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content text.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    ContentBlockDelta& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a tool that the model is requesting to use.</p>
     */
    inline const ToolUseBlockDelta& GetToolUse() const { return m_toolUse; }
    inline bool ToolUseHasBeenSet() const { return m_toolUseHasBeenSet; }
    template<typename ToolUseT = ToolUseBlockDelta>
    void SetToolUse(ToolUseT&& value) { m_toolUseHasBeenSet = true; m_toolUse = std::forward<ToolUseT>(value); }
    template<typename ToolUseT = ToolUseBlockDelta>
    ContentBlockDelta& WithToolUse(ToolUseT&& value) { SetToolUse(std::forward<ToolUseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains content regarding the reasoning that is carried out by the model.
     * Reasoning refers to a Chain of Thought (CoT) that the model generates to enhance
     * the accuracy of its final response.</p>
     */
    inline const ReasoningContentBlockDelta& GetReasoningContent() const { return m_reasoningContent; }
    inline bool ReasoningContentHasBeenSet() const { return m_reasoningContentHasBeenSet; }
    template<typename ReasoningContentT = ReasoningContentBlockDelta>
    void SetReasoningContent(ReasoningContentT&& value) { m_reasoningContentHasBeenSet = true; m_reasoningContent = std::forward<ReasoningContentT>(value); }
    template<typename ReasoningContentT = ReasoningContentBlockDelta>
    ContentBlockDelta& WithReasoningContent(ReasoningContentT&& value) { SetReasoningContent(std::forward<ReasoningContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Incremental citation information that is streamed as part of the response
     * generation process.</p>
     */
    inline const CitationsDelta& GetCitation() const { return m_citation; }
    inline bool CitationHasBeenSet() const { return m_citationHasBeenSet; }
    template<typename CitationT = CitationsDelta>
    void SetCitation(CitationT&& value) { m_citationHasBeenSet = true; m_citation = std::forward<CitationT>(value); }
    template<typename CitationT = CitationsDelta>
    ContentBlockDelta& WithCitation(CitationT&& value) { SetCitation(std::forward<CitationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    ToolUseBlockDelta m_toolUse;
    bool m_toolUseHasBeenSet = false;

    ReasoningContentBlockDelta m_reasoningContent;
    bool m_reasoningContentHasBeenSet = false;

    CitationsDelta m_citation;
    bool m_citationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
