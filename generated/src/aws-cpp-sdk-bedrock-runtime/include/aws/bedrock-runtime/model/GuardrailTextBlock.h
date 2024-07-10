/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/GuardrailContentQualifier.h>
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
   * <p>The text block to be evaluated by the guardrail.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailTextBlock">AWS
   * API Reference</a></p>
   */
  class GuardrailTextBlock
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailTextBlock();
    AWS_BEDROCKRUNTIME_API GuardrailTextBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailTextBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input text details to be evaluated by the guardrail.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline GuardrailTextBlock& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline GuardrailTextBlock& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline GuardrailTextBlock& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The qualifiers describing the text block.</p>
     */
    inline const Aws::Vector<GuardrailContentQualifier>& GetQualifiers() const{ return m_qualifiers; }
    inline bool QualifiersHasBeenSet() const { return m_qualifiersHasBeenSet; }
    inline void SetQualifiers(const Aws::Vector<GuardrailContentQualifier>& value) { m_qualifiersHasBeenSet = true; m_qualifiers = value; }
    inline void SetQualifiers(Aws::Vector<GuardrailContentQualifier>&& value) { m_qualifiersHasBeenSet = true; m_qualifiers = std::move(value); }
    inline GuardrailTextBlock& WithQualifiers(const Aws::Vector<GuardrailContentQualifier>& value) { SetQualifiers(value); return *this;}
    inline GuardrailTextBlock& WithQualifiers(Aws::Vector<GuardrailContentQualifier>&& value) { SetQualifiers(std::move(value)); return *this;}
    inline GuardrailTextBlock& AddQualifiers(const GuardrailContentQualifier& value) { m_qualifiersHasBeenSet = true; m_qualifiers.push_back(value); return *this; }
    inline GuardrailTextBlock& AddQualifiers(GuardrailContentQualifier&& value) { m_qualifiersHasBeenSet = true; m_qualifiers.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::Vector<GuardrailContentQualifier> m_qualifiers;
    bool m_qualifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
