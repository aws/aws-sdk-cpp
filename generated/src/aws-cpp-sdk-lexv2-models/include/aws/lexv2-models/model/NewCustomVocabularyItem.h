/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>The new custom vocabulary item from the custom vocabulary list.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/NewCustomVocabularyItem">AWS
   * API Reference</a></p>
   */
  class NewCustomVocabularyItem
  {
  public:
    AWS_LEXMODELSV2_API NewCustomVocabularyItem() = default;
    AWS_LEXMODELSV2_API NewCustomVocabularyItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API NewCustomVocabularyItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique phrase for the new custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline const Aws::String& GetPhrase() const { return m_phrase; }
    inline bool PhraseHasBeenSet() const { return m_phraseHasBeenSet; }
    template<typename PhraseT = Aws::String>
    void SetPhrase(PhraseT&& value) { m_phraseHasBeenSet = true; m_phrase = std::forward<PhraseT>(value); }
    template<typename PhraseT = Aws::String>
    NewCustomVocabularyItem& WithPhrase(PhraseT&& value) { SetPhrase(std::forward<PhraseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weight assigned to the new custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline int GetWeight() const { return m_weight; }
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
    inline void SetWeight(int value) { m_weightHasBeenSet = true; m_weight = value; }
    inline NewCustomVocabularyItem& WithWeight(int value) { SetWeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display as value assigned to the new custom vocabulary item from the
     * custom vocabulary list.</p>
     */
    inline const Aws::String& GetDisplayAs() const { return m_displayAs; }
    inline bool DisplayAsHasBeenSet() const { return m_displayAsHasBeenSet; }
    template<typename DisplayAsT = Aws::String>
    void SetDisplayAs(DisplayAsT&& value) { m_displayAsHasBeenSet = true; m_displayAs = std::forward<DisplayAsT>(value); }
    template<typename DisplayAsT = Aws::String>
    NewCustomVocabularyItem& WithDisplayAs(DisplayAsT&& value) { SetDisplayAs(std::forward<DisplayAsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_phrase;
    bool m_phraseHasBeenSet = false;

    int m_weight{0};
    bool m_weightHasBeenSet = false;

    Aws::String m_displayAs;
    bool m_displayAsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
