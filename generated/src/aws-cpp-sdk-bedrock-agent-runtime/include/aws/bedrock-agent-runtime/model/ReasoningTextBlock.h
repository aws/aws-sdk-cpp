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
    AWS_BEDROCKAGENTRUNTIME_API ReasoningTextBlock();
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
    inline const Aws::String& GetSignature() const{ return m_signature; }
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }
    inline void SetSignature(const Aws::String& value) { m_signatureHasBeenSet = true; m_signature = value; }
    inline void SetSignature(Aws::String&& value) { m_signatureHasBeenSet = true; m_signature = std::move(value); }
    inline void SetSignature(const char* value) { m_signatureHasBeenSet = true; m_signature.assign(value); }
    inline ReasoningTextBlock& WithSignature(const Aws::String& value) { SetSignature(value); return *this;}
    inline ReasoningTextBlock& WithSignature(Aws::String&& value) { SetSignature(std::move(value)); return *this;}
    inline ReasoningTextBlock& WithSignature(const char* value) { SetSignature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Text describing the reasoning that the model used to return the content in
     * the content block.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline ReasoningTextBlock& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline ReasoningTextBlock& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline ReasoningTextBlock& WithText(const char* value) { SetText(value); return *this;}
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
