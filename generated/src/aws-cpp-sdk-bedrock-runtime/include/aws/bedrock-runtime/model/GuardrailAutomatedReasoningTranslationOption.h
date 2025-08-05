/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningTranslation.h>
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
   * <p>Represents one possible logical interpretation of ambiguous input
   * content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailAutomatedReasoningTranslationOption">AWS
   * API Reference</a></p>
   */
  class GuardrailAutomatedReasoningTranslationOption
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningTranslationOption() = default;
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningTranslationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningTranslationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Example translations that provide this possible interpretation of the
     * input.</p>
     */
    inline const Aws::Vector<GuardrailAutomatedReasoningTranslation>& GetTranslations() const { return m_translations; }
    inline bool TranslationsHasBeenSet() const { return m_translationsHasBeenSet; }
    template<typename TranslationsT = Aws::Vector<GuardrailAutomatedReasoningTranslation>>
    void SetTranslations(TranslationsT&& value) { m_translationsHasBeenSet = true; m_translations = std::forward<TranslationsT>(value); }
    template<typename TranslationsT = Aws::Vector<GuardrailAutomatedReasoningTranslation>>
    GuardrailAutomatedReasoningTranslationOption& WithTranslations(TranslationsT&& value) { SetTranslations(std::forward<TranslationsT>(value)); return *this;}
    template<typename TranslationsT = GuardrailAutomatedReasoningTranslation>
    GuardrailAutomatedReasoningTranslationOption& AddTranslations(TranslationsT&& value) { m_translationsHasBeenSet = true; m_translations.emplace_back(std::forward<TranslationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailAutomatedReasoningTranslation> m_translations;
    bool m_translationsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
