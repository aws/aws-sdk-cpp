/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/ImageBlock.h>
#include <aws/bedrock-runtime/model/DocumentBlock.h>
#include <aws/bedrock-runtime/model/VideoBlock.h>
#include <aws/bedrock-runtime/model/ToolUseBlock.h>
#include <aws/bedrock-runtime/model/ToolResultBlock.h>
#include <aws/bedrock-runtime/model/GuardrailConverseContentBlock.h>
#include <aws/bedrock-runtime/model/CachePointBlock.h>
#include <aws/bedrock-runtime/model/ReasoningContentBlock.h>
#include <aws/bedrock-runtime/model/CitationsContentBlock.h>
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
   * <p>A block of content for a message that you pass to, or receive from, a model
   * with the <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_Converse.html">Converse</a>
   * or <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_ConverseStream.html">ConverseStream</a>
   * API operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ContentBlock">AWS
   * API Reference</a></p>
   */
  class ContentBlock
  {
  public:
    AWS_BEDROCKRUNTIME_API ContentBlock() = default;
    AWS_BEDROCKRUNTIME_API ContentBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ContentBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Text to include in the message.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    ContentBlock& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Image to include in the message. </p>  <p>This field is only supported
     * by Anthropic Claude 3 models.</p> 
     */
    inline const ImageBlock& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = ImageBlock>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = ImageBlock>
    ContentBlock& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A document to include in the message.</p>
     */
    inline const DocumentBlock& GetDocument() const { return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    template<typename DocumentT = DocumentBlock>
    void SetDocument(DocumentT&& value) { m_documentHasBeenSet = true; m_document = std::forward<DocumentT>(value); }
    template<typename DocumentT = DocumentBlock>
    ContentBlock& WithDocument(DocumentT&& value) { SetDocument(std::forward<DocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Video to include in the message. </p>
     */
    inline const VideoBlock& GetVideo() const { return m_video; }
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }
    template<typename VideoT = VideoBlock>
    void SetVideo(VideoT&& value) { m_videoHasBeenSet = true; m_video = std::forward<VideoT>(value); }
    template<typename VideoT = VideoBlock>
    ContentBlock& WithVideo(VideoT&& value) { SetVideo(std::forward<VideoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a tool use request from a model.</p>
     */
    inline const ToolUseBlock& GetToolUse() const { return m_toolUse; }
    inline bool ToolUseHasBeenSet() const { return m_toolUseHasBeenSet; }
    template<typename ToolUseT = ToolUseBlock>
    void SetToolUse(ToolUseT&& value) { m_toolUseHasBeenSet = true; m_toolUse = std::forward<ToolUseT>(value); }
    template<typename ToolUseT = ToolUseBlock>
    ContentBlock& WithToolUse(ToolUseT&& value) { SetToolUse(std::forward<ToolUseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result for a tool request that a model makes.</p>
     */
    inline const ToolResultBlock& GetToolResult() const { return m_toolResult; }
    inline bool ToolResultHasBeenSet() const { return m_toolResultHasBeenSet; }
    template<typename ToolResultT = ToolResultBlock>
    void SetToolResult(ToolResultT&& value) { m_toolResultHasBeenSet = true; m_toolResult = std::forward<ToolResultT>(value); }
    template<typename ToolResultT = ToolResultBlock>
    ContentBlock& WithToolResult(ToolResultT&& value) { SetToolResult(std::forward<ToolResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the content to assess with the guardrail. If you don't specify
     * <code>guardContent</code> in a call to the Converse API, the guardrail (if
     * passed in the Converse API) assesses the entire message.</p> <p>For more
     * information, see <i>Use a guardrail with the Converse API</i> in the <i>Amazon
     * Bedrock User Guide</i>. </p>
     */
    inline const GuardrailConverseContentBlock& GetGuardContent() const { return m_guardContent; }
    inline bool GuardContentHasBeenSet() const { return m_guardContentHasBeenSet; }
    template<typename GuardContentT = GuardrailConverseContentBlock>
    void SetGuardContent(GuardContentT&& value) { m_guardContentHasBeenSet = true; m_guardContent = std::forward<GuardContentT>(value); }
    template<typename GuardContentT = GuardrailConverseContentBlock>
    ContentBlock& WithGuardContent(GuardContentT&& value) { SetGuardContent(std::forward<GuardContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>CachePoint to include in the message.</p>
     */
    inline const CachePointBlock& GetCachePoint() const { return m_cachePoint; }
    inline bool CachePointHasBeenSet() const { return m_cachePointHasBeenSet; }
    template<typename CachePointT = CachePointBlock>
    void SetCachePoint(CachePointT&& value) { m_cachePointHasBeenSet = true; m_cachePoint = std::forward<CachePointT>(value); }
    template<typename CachePointT = CachePointBlock>
    ContentBlock& WithCachePoint(CachePointT&& value) { SetCachePoint(std::forward<CachePointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains content regarding the reasoning that is carried out by the model.
     * Reasoning refers to a Chain of Thought (CoT) that the model generates to enhance
     * the accuracy of its final response.</p>
     */
    inline const ReasoningContentBlock& GetReasoningContent() const { return m_reasoningContent; }
    inline bool ReasoningContentHasBeenSet() const { return m_reasoningContentHasBeenSet; }
    template<typename ReasoningContentT = ReasoningContentBlock>
    void SetReasoningContent(ReasoningContentT&& value) { m_reasoningContentHasBeenSet = true; m_reasoningContent = std::forward<ReasoningContentT>(value); }
    template<typename ReasoningContentT = ReasoningContentBlock>
    ContentBlock& WithReasoningContent(ReasoningContentT&& value) { SetReasoningContent(std::forward<ReasoningContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A content block that contains both generated text and associated citation
     * information, providing traceability between the response and source
     * documents.</p>
     */
    inline const CitationsContentBlock& GetCitationsContent() const { return m_citationsContent; }
    inline bool CitationsContentHasBeenSet() const { return m_citationsContentHasBeenSet; }
    template<typename CitationsContentT = CitationsContentBlock>
    void SetCitationsContent(CitationsContentT&& value) { m_citationsContentHasBeenSet = true; m_citationsContent = std::forward<CitationsContentT>(value); }
    template<typename CitationsContentT = CitationsContentBlock>
    ContentBlock& WithCitationsContent(CitationsContentT&& value) { SetCitationsContent(std::forward<CitationsContentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    ImageBlock m_image;
    bool m_imageHasBeenSet = false;

    DocumentBlock m_document;
    bool m_documentHasBeenSet = false;

    VideoBlock m_video;
    bool m_videoHasBeenSet = false;

    ToolUseBlock m_toolUse;
    bool m_toolUseHasBeenSet = false;

    ToolResultBlock m_toolResult;
    bool m_toolResultHasBeenSet = false;

    GuardrailConverseContentBlock m_guardContent;
    bool m_guardContentHasBeenSet = false;

    CachePointBlock m_cachePoint;
    bool m_cachePointHasBeenSet = false;

    ReasoningContentBlock m_reasoningContent;
    bool m_reasoningContentHasBeenSet = false;

    CitationsContentBlock m_citationsContent;
    bool m_citationsContentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
