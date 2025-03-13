/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/ReasoningTextBlock.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>Contains content regarding the reasoning that is carried out by the model
   * with respect to the content in the content block. Reasoning refers to a Chain of
   * Thought (CoT) that the model generates to enhance the accuracy of its final
   * response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ReasoningContentBlock">AWS
   * API Reference</a></p>
   */
  class ReasoningContentBlock
  {
  public:
    AWS_BEDROCKRUNTIME_API ReasoningContentBlock() = default;
    AWS_BEDROCKRUNTIME_API ReasoningContentBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ReasoningContentBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reasoning that the model used to return the output.</p>
     */
    inline const ReasoningTextBlock& GetReasoningText() const { return m_reasoningText; }
    inline bool ReasoningTextHasBeenSet() const { return m_reasoningTextHasBeenSet; }
    template<typename ReasoningTextT = ReasoningTextBlock>
    void SetReasoningText(ReasoningTextT&& value) { m_reasoningTextHasBeenSet = true; m_reasoningText = std::forward<ReasoningTextT>(value); }
    template<typename ReasoningTextT = ReasoningTextBlock>
    ReasoningContentBlock& WithReasoningText(ReasoningTextT&& value) { SetReasoningText(std::forward<ReasoningTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content in the reasoning that was encrypted by the model provider for
     * safety reasons. The encryption doesn't affect the quality of responses.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetRedactedContent() const { return m_redactedContent; }
    inline bool RedactedContentHasBeenSet() const { return m_redactedContentHasBeenSet; }
    template<typename RedactedContentT = Aws::Utils::ByteBuffer>
    void SetRedactedContent(RedactedContentT&& value) { m_redactedContentHasBeenSet = true; m_redactedContent = std::forward<RedactedContentT>(value); }
    template<typename RedactedContentT = Aws::Utils::ByteBuffer>
    ReasoningContentBlock& WithRedactedContent(RedactedContentT&& value) { SetRedactedContent(std::forward<RedactedContentT>(value)); return *this;}
    ///@}
  private:

    ReasoningTextBlock m_reasoningText;
    bool m_reasoningTextHasBeenSet = false;

    Aws::Utils::ByteBuffer m_redactedContent{};
    bool m_redactedContentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
