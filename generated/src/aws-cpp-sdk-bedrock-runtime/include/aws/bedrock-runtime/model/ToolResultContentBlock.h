/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/ImageBlock.h>
#include <aws/bedrock-runtime/model/DocumentBlock.h>
#include <aws/bedrock-runtime/model/VideoBlock.h>
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
   * <p>The tool result content block.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ToolResultContentBlock">AWS
   * API Reference</a></p>
   */
  class ToolResultContentBlock
  {
  public:
    AWS_BEDROCKRUNTIME_API ToolResultContentBlock() = default;
    AWS_BEDROCKRUNTIME_API ToolResultContentBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ToolResultContentBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A tool result that is JSON format data.</p>
     */
    inline Aws::Utils::DocumentView GetJson() const { return m_json; }
    inline bool JsonHasBeenSet() const { return m_jsonHasBeenSet; }
    template<typename JsonT = Aws::Utils::Document>
    void SetJson(JsonT&& value) { m_jsonHasBeenSet = true; m_json = std::forward<JsonT>(value); }
    template<typename JsonT = Aws::Utils::Document>
    ToolResultContentBlock& WithJson(JsonT&& value) { SetJson(std::forward<JsonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tool result that is text.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    ToolResultContentBlock& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tool result that is an image.</p>  <p>This field is only supported by
     * Anthropic Claude 3 models.</p> 
     */
    inline const ImageBlock& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = ImageBlock>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = ImageBlock>
    ToolResultContentBlock& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tool result that is a document.</p>
     */
    inline const DocumentBlock& GetDocument() const { return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    template<typename DocumentT = DocumentBlock>
    void SetDocument(DocumentT&& value) { m_documentHasBeenSet = true; m_document = std::forward<DocumentT>(value); }
    template<typename DocumentT = DocumentBlock>
    ToolResultContentBlock& WithDocument(DocumentT&& value) { SetDocument(std::forward<DocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tool result that is video.</p>
     */
    inline const VideoBlock& GetVideo() const { return m_video; }
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }
    template<typename VideoT = VideoBlock>
    void SetVideo(VideoT&& value) { m_videoHasBeenSet = true; m_video = std::forward<VideoT>(value); }
    template<typename VideoT = VideoBlock>
    ToolResultContentBlock& WithVideo(VideoT&& value) { SetVideo(std::forward<VideoT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_json;
    bool m_jsonHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    ImageBlock m_image;
    bool m_imageHasBeenSet = false;

    DocumentBlock m_document;
    bool m_documentHasBeenSet = false;

    VideoBlock m_video;
    bool m_videoHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
