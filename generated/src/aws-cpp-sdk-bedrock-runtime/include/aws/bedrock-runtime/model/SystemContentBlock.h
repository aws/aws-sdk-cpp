/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/GuardrailConverseContentBlock.h>
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
   * <p>A system content block.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/SystemContentBlock">AWS
   * API Reference</a></p>
   */
  class SystemContentBlock
  {
  public:
    AWS_BEDROCKRUNTIME_API SystemContentBlock();
    AWS_BEDROCKRUNTIME_API SystemContentBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API SystemContentBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A system prompt for the model. </p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline SystemContentBlock& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline SystemContentBlock& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline SystemContentBlock& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A content block to assess with the guardrail. Use with the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_Converse.html">Converse</a>
     * or <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_ConverseStream.html">ConverseStream</a>
     * API operations. </p> <p>For more information, see <i>Use a guardrail with the
     * Converse API</i> in the <i>Amazon Bedrock User Guide</i>.</p>
     */
    inline const GuardrailConverseContentBlock& GetGuardContent() const{ return m_guardContent; }
    inline bool GuardContentHasBeenSet() const { return m_guardContentHasBeenSet; }
    inline void SetGuardContent(const GuardrailConverseContentBlock& value) { m_guardContentHasBeenSet = true; m_guardContent = value; }
    inline void SetGuardContent(GuardrailConverseContentBlock&& value) { m_guardContentHasBeenSet = true; m_guardContent = std::move(value); }
    inline SystemContentBlock& WithGuardContent(const GuardrailConverseContentBlock& value) { SetGuardContent(value); return *this;}
    inline SystemContentBlock& WithGuardContent(GuardrailConverseContentBlock&& value) { SetGuardContent(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    GuardrailConverseContentBlock m_guardContent;
    bool m_guardContentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
