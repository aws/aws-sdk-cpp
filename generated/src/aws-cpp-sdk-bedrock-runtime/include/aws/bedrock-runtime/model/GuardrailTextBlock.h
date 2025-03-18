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
    AWS_BEDROCKRUNTIME_API GuardrailTextBlock() = default;
    AWS_BEDROCKRUNTIME_API GuardrailTextBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailTextBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input text details to be evaluated by the guardrail.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    GuardrailTextBlock& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The qualifiers describing the text block.</p>
     */
    inline const Aws::Vector<GuardrailContentQualifier>& GetQualifiers() const { return m_qualifiers; }
    inline bool QualifiersHasBeenSet() const { return m_qualifiersHasBeenSet; }
    template<typename QualifiersT = Aws::Vector<GuardrailContentQualifier>>
    void SetQualifiers(QualifiersT&& value) { m_qualifiersHasBeenSet = true; m_qualifiers = std::forward<QualifiersT>(value); }
    template<typename QualifiersT = Aws::Vector<GuardrailContentQualifier>>
    GuardrailTextBlock& WithQualifiers(QualifiersT&& value) { SetQualifiers(std::forward<QualifiersT>(value)); return *this;}
    inline GuardrailTextBlock& AddQualifiers(GuardrailContentQualifier value) { m_qualifiersHasBeenSet = true; m_qualifiers.push_back(value); return *this; }
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
