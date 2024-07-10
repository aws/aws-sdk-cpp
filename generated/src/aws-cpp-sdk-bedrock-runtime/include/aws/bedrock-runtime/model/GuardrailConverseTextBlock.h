/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/GuardrailConverseContentQualifier.h>
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
   * <p>A text block that contains text that you want to assess with a guardrail. For
   * more information, see <a>GuardrailConverseContentBlock</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailConverseTextBlock">AWS
   * API Reference</a></p>
   */
  class GuardrailConverseTextBlock
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailConverseTextBlock();
    AWS_BEDROCKRUNTIME_API GuardrailConverseTextBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailConverseTextBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text that you want to guard.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline GuardrailConverseTextBlock& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline GuardrailConverseTextBlock& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline GuardrailConverseTextBlock& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The qualifier details for the guardrails contextual grounding filter.</p>
     */
    inline const Aws::Vector<GuardrailConverseContentQualifier>& GetQualifiers() const{ return m_qualifiers; }
    inline bool QualifiersHasBeenSet() const { return m_qualifiersHasBeenSet; }
    inline void SetQualifiers(const Aws::Vector<GuardrailConverseContentQualifier>& value) { m_qualifiersHasBeenSet = true; m_qualifiers = value; }
    inline void SetQualifiers(Aws::Vector<GuardrailConverseContentQualifier>&& value) { m_qualifiersHasBeenSet = true; m_qualifiers = std::move(value); }
    inline GuardrailConverseTextBlock& WithQualifiers(const Aws::Vector<GuardrailConverseContentQualifier>& value) { SetQualifiers(value); return *this;}
    inline GuardrailConverseTextBlock& WithQualifiers(Aws::Vector<GuardrailConverseContentQualifier>&& value) { SetQualifiers(std::move(value)); return *this;}
    inline GuardrailConverseTextBlock& AddQualifiers(const GuardrailConverseContentQualifier& value) { m_qualifiersHasBeenSet = true; m_qualifiers.push_back(value); return *this; }
    inline GuardrailConverseTextBlock& AddQualifiers(GuardrailConverseContentQualifier&& value) { m_qualifiersHasBeenSet = true; m_qualifiers.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::Vector<GuardrailConverseContentQualifier> m_qualifiers;
    bool m_qualifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
