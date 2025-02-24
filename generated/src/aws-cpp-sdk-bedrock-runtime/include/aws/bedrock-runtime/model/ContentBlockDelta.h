/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/ToolUseBlockDelta.h>
#include <aws/bedrock-runtime/model/ReasoningContentBlockDelta.h>
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
    AWS_BEDROCKRUNTIME_API ContentBlockDelta();
    AWS_BEDROCKRUNTIME_API ContentBlockDelta(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ContentBlockDelta& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content text.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline ContentBlockDelta& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline ContentBlockDelta& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline ContentBlockDelta& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a tool that the model is requesting to use.</p>
     */
    inline const ToolUseBlockDelta& GetToolUse() const{ return m_toolUse; }
    inline bool ToolUseHasBeenSet() const { return m_toolUseHasBeenSet; }
    inline void SetToolUse(const ToolUseBlockDelta& value) { m_toolUseHasBeenSet = true; m_toolUse = value; }
    inline void SetToolUse(ToolUseBlockDelta&& value) { m_toolUseHasBeenSet = true; m_toolUse = std::move(value); }
    inline ContentBlockDelta& WithToolUse(const ToolUseBlockDelta& value) { SetToolUse(value); return *this;}
    inline ContentBlockDelta& WithToolUse(ToolUseBlockDelta&& value) { SetToolUse(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains content regarding the reasoning that is carried out by the model.
     * Reasoning refers to a Chain of Thought (CoT) that the model generates to enhance
     * the accuracy of its final response.</p>
     */
    inline const ReasoningContentBlockDelta& GetReasoningContent() const{ return m_reasoningContent; }
    inline bool ReasoningContentHasBeenSet() const { return m_reasoningContentHasBeenSet; }
    inline void SetReasoningContent(const ReasoningContentBlockDelta& value) { m_reasoningContentHasBeenSet = true; m_reasoningContent = value; }
    inline void SetReasoningContent(ReasoningContentBlockDelta&& value) { m_reasoningContentHasBeenSet = true; m_reasoningContent = std::move(value); }
    inline ContentBlockDelta& WithReasoningContent(const ReasoningContentBlockDelta& value) { SetReasoningContent(value); return *this;}
    inline ContentBlockDelta& WithReasoningContent(ReasoningContentBlockDelta&& value) { SetReasoningContent(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    ToolUseBlockDelta m_toolUse;
    bool m_toolUseHasBeenSet = false;

    ReasoningContentBlockDelta m_reasoningContent;
    bool m_reasoningContentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
