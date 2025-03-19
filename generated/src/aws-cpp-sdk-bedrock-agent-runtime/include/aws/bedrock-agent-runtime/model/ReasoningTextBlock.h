/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
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
   * <p>Contains information about the reasoning that the model used to return the
   * content in the content block.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ReasoningTextBlock">AWS
   * API Reference</a></p>
   */
  class ReasoningTextBlock
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ReasoningTextBlock() = default;
    AWS_BEDROCKAGENTRUNTIME_API ReasoningTextBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ReasoningTextBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A hash of all the messages in the conversation to ensure that the content in
     * the reasoning text block isn't tampered with. You must submit the signature in
     * subsequent <code>Converse</code> requests, in addition to the previous messages.
     * If the previous messages are tampered with, the response throws an error.</p>
     */
    inline const Aws::String& GetSignature() const { return m_signature; }
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }
    template<typename SignatureT = Aws::String>
    void SetSignature(SignatureT&& value) { m_signatureHasBeenSet = true; m_signature = std::forward<SignatureT>(value); }
    template<typename SignatureT = Aws::String>
    ReasoningTextBlock& WithSignature(SignatureT&& value) { SetSignature(std::forward<SignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Text describing the reasoning that the model used to return the content in
     * the content block.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    ReasoningTextBlock& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_signature;
    bool m_signatureHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
