/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/AutomatedReasoningCheckTranslation.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Represents one possible logical interpretation of ambiguous input
   * content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningCheckTranslationOption">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningCheckTranslationOption
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningCheckTranslationOption() = default;
    AWS_BEDROCK_API AutomatedReasoningCheckTranslationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningCheckTranslationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Different logical interpretations that were detected during translation of
     * the input.</p>
     */
    inline const Aws::Vector<AutomatedReasoningCheckTranslation>& GetTranslations() const { return m_translations; }
    inline bool TranslationsHasBeenSet() const { return m_translationsHasBeenSet; }
    template<typename TranslationsT = Aws::Vector<AutomatedReasoningCheckTranslation>>
    void SetTranslations(TranslationsT&& value) { m_translationsHasBeenSet = true; m_translations = std::forward<TranslationsT>(value); }
    template<typename TranslationsT = Aws::Vector<AutomatedReasoningCheckTranslation>>
    AutomatedReasoningCheckTranslationOption& WithTranslations(TranslationsT&& value) { SetTranslations(std::forward<TranslationsT>(value)); return *this;}
    template<typename TranslationsT = AutomatedReasoningCheckTranslation>
    AutomatedReasoningCheckTranslationOption& AddTranslations(TranslationsT&& value) { m_translationsHasBeenSet = true; m_translations.emplace_back(std::forward<TranslationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AutomatedReasoningCheckTranslation> m_translations;
    bool m_translationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
