/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/ImageBlock.h>
#include <aws/bedrock-runtime/model/ToolUseBlock.h>
#include <aws/bedrock-runtime/model/ToolResultBlock.h>
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
   * <p>A block of content for a message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ContentBlock">AWS
   * API Reference</a></p>
   */
  class ContentBlock
  {
  public:
    AWS_BEDROCKRUNTIME_API ContentBlock();
    AWS_BEDROCKRUNTIME_API ContentBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ContentBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Text to include in the message.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline ContentBlock& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline ContentBlock& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline ContentBlock& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Image to include in the message. </p>  <p>This field is only supported
     * by Anthropic Claude 3 models.</p> 
     */
    inline const ImageBlock& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const ImageBlock& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(ImageBlock&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline ContentBlock& WithImage(const ImageBlock& value) { SetImage(value); return *this;}
    inline ContentBlock& WithImage(ImageBlock&& value) { SetImage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a tool use request from a model. </p>
     */
    inline const ToolUseBlock& GetToolUse() const{ return m_toolUse; }
    inline bool ToolUseHasBeenSet() const { return m_toolUseHasBeenSet; }
    inline void SetToolUse(const ToolUseBlock& value) { m_toolUseHasBeenSet = true; m_toolUse = value; }
    inline void SetToolUse(ToolUseBlock&& value) { m_toolUseHasBeenSet = true; m_toolUse = std::move(value); }
    inline ContentBlock& WithToolUse(const ToolUseBlock& value) { SetToolUse(value); return *this;}
    inline ContentBlock& WithToolUse(ToolUseBlock&& value) { SetToolUse(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result for a tool request that a model makes.</p>
     */
    inline const ToolResultBlock& GetToolResult() const{ return m_toolResult; }
    inline bool ToolResultHasBeenSet() const { return m_toolResultHasBeenSet; }
    inline void SetToolResult(const ToolResultBlock& value) { m_toolResultHasBeenSet = true; m_toolResult = value; }
    inline void SetToolResult(ToolResultBlock&& value) { m_toolResultHasBeenSet = true; m_toolResult = std::move(value); }
    inline ContentBlock& WithToolResult(const ToolResultBlock& value) { SetToolResult(value); return *this;}
    inline ContentBlock& WithToolResult(ToolResultBlock&& value) { SetToolResult(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    ImageBlock m_image;
    bool m_imageHasBeenSet = false;

    ToolUseBlock m_toolUse;
    bool m_toolUseHasBeenSet = false;

    ToolResultBlock m_toolResult;
    bool m_toolResultHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
