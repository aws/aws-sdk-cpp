/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ImageBlock.h>
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
   * <p>A block of content that you pass to, or receive from, a Amazon Bedrock
   * session in an invocation step. You pass the content to a session in the
   * <code>payLoad</code> of the <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_PutInvocationStep.html">PutInvocationStep</a>
   * API operation. You retrieve the content with the <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_GetInvocationStep.html">GetInvocationStep</a>
   * API operation.</p> <p>For more information about sessions, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/sessions.html">Store
   * and retrieve conversation history and context with Amazon Bedrock
   * sessions</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/BedrockSessionContentBlock">AWS
   * API Reference</a></p>
   */
  class BedrockSessionContentBlock
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API BedrockSessionContentBlock();
    AWS_BEDROCKAGENTRUNTIME_API BedrockSessionContentBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API BedrockSessionContentBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The image in the invocation step.</p>
     */
    inline const ImageBlock& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const ImageBlock& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(ImageBlock&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline BedrockSessionContentBlock& WithImage(const ImageBlock& value) { SetImage(value); return *this;}
    inline BedrockSessionContentBlock& WithImage(ImageBlock&& value) { SetImage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text in the invocation step.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline BedrockSessionContentBlock& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline BedrockSessionContentBlock& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline BedrockSessionContentBlock& WithText(const char* value) { SetText(value); return *this;}
    ///@}
  private:

    ImageBlock m_image;
    bool m_imageHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
