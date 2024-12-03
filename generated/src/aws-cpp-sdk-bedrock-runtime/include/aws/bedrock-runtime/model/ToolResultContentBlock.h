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
    AWS_BEDROCKRUNTIME_API ToolResultContentBlock();
    AWS_BEDROCKRUNTIME_API ToolResultContentBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ToolResultContentBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A tool result that is JSON format data.</p>
     */
    inline Aws::Utils::DocumentView GetJson() const{ return m_json; }
    inline bool JsonHasBeenSet() const { return m_jsonHasBeenSet; }
    inline void SetJson(const Aws::Utils::Document& value) { m_jsonHasBeenSet = true; m_json = value; }
    inline void SetJson(Aws::Utils::Document&& value) { m_jsonHasBeenSet = true; m_json = std::move(value); }
    inline ToolResultContentBlock& WithJson(const Aws::Utils::Document& value) { SetJson(value); return *this;}
    inline ToolResultContentBlock& WithJson(Aws::Utils::Document&& value) { SetJson(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tool result that is text.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline ToolResultContentBlock& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline ToolResultContentBlock& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline ToolResultContentBlock& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tool result that is an image.</p>  <p>This field is only supported by
     * Anthropic Claude 3 models.</p> 
     */
    inline const ImageBlock& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const ImageBlock& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(ImageBlock&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline ToolResultContentBlock& WithImage(const ImageBlock& value) { SetImage(value); return *this;}
    inline ToolResultContentBlock& WithImage(ImageBlock&& value) { SetImage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tool result that is a document.</p>
     */
    inline const DocumentBlock& GetDocument() const{ return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    inline void SetDocument(const DocumentBlock& value) { m_documentHasBeenSet = true; m_document = value; }
    inline void SetDocument(DocumentBlock&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }
    inline ToolResultContentBlock& WithDocument(const DocumentBlock& value) { SetDocument(value); return *this;}
    inline ToolResultContentBlock& WithDocument(DocumentBlock&& value) { SetDocument(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tool result that is video.</p>
     */
    inline const VideoBlock& GetVideo() const{ return m_video; }
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }
    inline void SetVideo(const VideoBlock& value) { m_videoHasBeenSet = true; m_video = value; }
    inline void SetVideo(VideoBlock&& value) { m_videoHasBeenSet = true; m_video = std::move(value); }
    inline ToolResultContentBlock& WithVideo(const VideoBlock& value) { SetVideo(value); return *this;}
    inline ToolResultContentBlock& WithVideo(VideoBlock&& value) { SetVideo(std::move(value)); return *this;}
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
