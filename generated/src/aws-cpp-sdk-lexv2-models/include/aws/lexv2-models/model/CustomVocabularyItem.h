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
   * <p>The unique custom vocabulary item from the custom vocabulary
   * list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CustomVocabularyItem">AWS
   * API Reference</a></p>
   */
  class CustomVocabularyItem
  {
  public:
    AWS_LEXMODELSV2_API CustomVocabularyItem();
    AWS_LEXMODELSV2_API CustomVocabularyItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API CustomVocabularyItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique item identifer for the custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline const Aws::String& GetItemId() const{ return m_itemId; }

    /**
     * <p>The unique item identifer for the custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline bool ItemIdHasBeenSet() const { return m_itemIdHasBeenSet; }

    /**
     * <p>The unique item identifer for the custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline void SetItemId(const Aws::String& value) { m_itemIdHasBeenSet = true; m_itemId = value; }

    /**
     * <p>The unique item identifer for the custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline void SetItemId(Aws::String&& value) { m_itemIdHasBeenSet = true; m_itemId = std::move(value); }

    /**
     * <p>The unique item identifer for the custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline void SetItemId(const char* value) { m_itemIdHasBeenSet = true; m_itemId.assign(value); }

    /**
     * <p>The unique item identifer for the custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline CustomVocabularyItem& WithItemId(const Aws::String& value) { SetItemId(value); return *this;}

    /**
     * <p>The unique item identifer for the custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline CustomVocabularyItem& WithItemId(Aws::String&& value) { SetItemId(std::move(value)); return *this;}

    /**
     * <p>The unique item identifer for the custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline CustomVocabularyItem& WithItemId(const char* value) { SetItemId(value); return *this;}


    /**
     * <p>The unique phrase for the custom vocabulary item from the custom vocabulary
     * list.</p>
     */
    inline const Aws::String& GetPhrase() const{ return m_phrase; }

    /**
     * <p>The unique phrase for the custom vocabulary item from the custom vocabulary
     * list.</p>
     */
    inline bool PhraseHasBeenSet() const { return m_phraseHasBeenSet; }

    /**
     * <p>The unique phrase for the custom vocabulary item from the custom vocabulary
     * list.</p>
     */
    inline void SetPhrase(const Aws::String& value) { m_phraseHasBeenSet = true; m_phrase = value; }

    /**
     * <p>The unique phrase for the custom vocabulary item from the custom vocabulary
     * list.</p>
     */
    inline void SetPhrase(Aws::String&& value) { m_phraseHasBeenSet = true; m_phrase = std::move(value); }

    /**
     * <p>The unique phrase for the custom vocabulary item from the custom vocabulary
     * list.</p>
     */
    inline void SetPhrase(const char* value) { m_phraseHasBeenSet = true; m_phrase.assign(value); }

    /**
     * <p>The unique phrase for the custom vocabulary item from the custom vocabulary
     * list.</p>
     */
    inline CustomVocabularyItem& WithPhrase(const Aws::String& value) { SetPhrase(value); return *this;}

    /**
     * <p>The unique phrase for the custom vocabulary item from the custom vocabulary
     * list.</p>
     */
    inline CustomVocabularyItem& WithPhrase(Aws::String&& value) { SetPhrase(std::move(value)); return *this;}

    /**
     * <p>The unique phrase for the custom vocabulary item from the custom vocabulary
     * list.</p>
     */
    inline CustomVocabularyItem& WithPhrase(const char* value) { SetPhrase(value); return *this;}


    /**
     * <p>The weight assigned for the custom vocabulary item from the custom vocabulary
     * list.</p>
     */
    inline int GetWeight() const{ return m_weight; }

    /**
     * <p>The weight assigned for the custom vocabulary item from the custom vocabulary
     * list.</p>
     */
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }

    /**
     * <p>The weight assigned for the custom vocabulary item from the custom vocabulary
     * list.</p>
     */
    inline void SetWeight(int value) { m_weightHasBeenSet = true; m_weight = value; }

    /**
     * <p>The weight assigned for the custom vocabulary item from the custom vocabulary
     * list.</p>
     */
    inline CustomVocabularyItem& WithWeight(int value) { SetWeight(value); return *this;}


    /**
     * <p>The display as value for the custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline const Aws::String& GetDisplayAs() const{ return m_displayAs; }

    /**
     * <p>The display as value for the custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline bool DisplayAsHasBeenSet() const { return m_displayAsHasBeenSet; }

    /**
     * <p>The display as value for the custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline void SetDisplayAs(const Aws::String& value) { m_displayAsHasBeenSet = true; m_displayAs = value; }

    /**
     * <p>The display as value for the custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline void SetDisplayAs(Aws::String&& value) { m_displayAsHasBeenSet = true; m_displayAs = std::move(value); }

    /**
     * <p>The display as value for the custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline void SetDisplayAs(const char* value) { m_displayAsHasBeenSet = true; m_displayAs.assign(value); }

    /**
     * <p>The display as value for the custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline CustomVocabularyItem& WithDisplayAs(const Aws::String& value) { SetDisplayAs(value); return *this;}

    /**
     * <p>The display as value for the custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline CustomVocabularyItem& WithDisplayAs(Aws::String&& value) { SetDisplayAs(std::move(value)); return *this;}

    /**
     * <p>The display as value for the custom vocabulary item from the custom
     * vocabulary list.</p>
     */
    inline CustomVocabularyItem& WithDisplayAs(const char* value) { SetDisplayAs(value); return *this;}

  private:

    Aws::String m_itemId;
    bool m_itemIdHasBeenSet = false;

    Aws::String m_phrase;
    bool m_phraseHasBeenSet = false;

    int m_weight;
    bool m_weightHasBeenSet = false;

    Aws::String m_displayAs;
    bool m_displayAsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
