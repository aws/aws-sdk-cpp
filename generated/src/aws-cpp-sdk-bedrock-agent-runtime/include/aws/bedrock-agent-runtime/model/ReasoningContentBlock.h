/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ReasoningTextBlock.h>
#include <aws/core/utils/Array.h>
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
   * <p>Contains content regarding the reasoning that the foundation model made with
   * respect to the content in the content block. Reasoning refers to a Chain of
   * Thought (CoT) that the model generates to enhance the accuracy of its final
   * response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ReasoningContentBlock">AWS
   * API Reference</a></p>
   */
  class ReasoningContentBlock
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ReasoningContentBlock();
    AWS_BEDROCKAGENTRUNTIME_API ReasoningContentBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ReasoningContentBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about the reasoning that the model used to return the
     * content in the content block.</p>
     */
    inline const ReasoningTextBlock& GetReasoningText() const{ return m_reasoningText; }
    inline bool ReasoningTextHasBeenSet() const { return m_reasoningTextHasBeenSet; }
    inline void SetReasoningText(const ReasoningTextBlock& value) { m_reasoningTextHasBeenSet = true; m_reasoningText = value; }
    inline void SetReasoningText(ReasoningTextBlock&& value) { m_reasoningTextHasBeenSet = true; m_reasoningText = std::move(value); }
    inline ReasoningContentBlock& WithReasoningText(const ReasoningTextBlock& value) { SetReasoningText(value); return *this;}
    inline ReasoningContentBlock& WithReasoningText(ReasoningTextBlock&& value) { SetReasoningText(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content in the reasoning that was encrypted by the model provider for
     * trust and safety reasons.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetRedactedContent() const{ return m_redactedContent; }
    inline bool RedactedContentHasBeenSet() const { return m_redactedContentHasBeenSet; }
    inline void SetRedactedContent(const Aws::Utils::ByteBuffer& value) { m_redactedContentHasBeenSet = true; m_redactedContent = value; }
    inline void SetRedactedContent(Aws::Utils::ByteBuffer&& value) { m_redactedContentHasBeenSet = true; m_redactedContent = std::move(value); }
    inline ReasoningContentBlock& WithRedactedContent(const Aws::Utils::ByteBuffer& value) { SetRedactedContent(value); return *this;}
    inline ReasoningContentBlock& WithRedactedContent(Aws::Utils::ByteBuffer&& value) { SetRedactedContent(std::move(value)); return *this;}
    ///@}
  private:

    ReasoningTextBlock m_reasoningText;
    bool m_reasoningTextHasBeenSet = false;

    Aws::Utils::ByteBuffer m_redactedContent;
    bool m_redactedContentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
