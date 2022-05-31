/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>If using automatic language identification (<code>IdentifyLanguage</code>) in
   * your request and you want to apply a custom language model, a custom vocabulary,
   * or a custom vocabulary filter, include <code>LanguageIdSettings</code> with the
   * relevant sub-parameters (<code>VocabularyName</code>,
   * <code>LanguageModelName</code>, and <code>VocabularyFilterName</code>).</p>
   * <p>You can specify two or more language codes that represent the languages you
   * think may be present in your media; including more than five is not recommended.
   * Each language code you include can have an associated custom language model,
   * custom vocabulary, and custom vocabulary filter. The languages you specify must
   * match the languages of the specified custom language models, custom
   * vocabularies, and custom vocabulary filters.</p> <p>To include language options
   * using <code>IdentifyLanguage</code> <b>without</b> including a custom language
   * model, a custom vocabulary, or a custom vocabulary filter, use
   * <code>LanguageOptions</code> instead of <code>LanguageIdSettings</code>.
   * Including language options can improve the accuracy of automatic language
   * identification.</p> <p>If you want to include a custom language model with your
   * request but <b>do not</b> want to use automatic language identification, use
   * instead the <code/> parameter with the <code>LanguageModelName</code>
   * sub-parameter.</p> <p>If you want to include a custom vocabulary or a custom
   * vocabulary filter (or both) with your request but <b>do not</b> want to use
   * automatic language identification, use instead the <code/> parameter with the
   * <code>VocabularyName</code> or <code>VocabularyFilterName</code> (or both)
   * sub-parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/LanguageIdSettings">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API LanguageIdSettings
  {
  public:
    LanguageIdSettings();
    LanguageIdSettings(Aws::Utils::Json::JsonView jsonValue);
    LanguageIdSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the custom vocabulary you want to use when processing your
     * transcription job. Vocabulary names are case sensitive.</p> <p>The language of
     * the specified vocabulary must match the language code you specify in your
     * transcription request. If the languages don't match, the vocabulary isn't
     * applied. There are no errors or warnings associated with a language
     * mismatch.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the custom vocabulary you want to use when processing your
     * transcription job. Vocabulary names are case sensitive.</p> <p>The language of
     * the specified vocabulary must match the language code you specify in your
     * transcription request. If the languages don't match, the vocabulary isn't
     * applied. There are no errors or warnings associated with a language
     * mismatch.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of the custom vocabulary you want to use when processing your
     * transcription job. Vocabulary names are case sensitive.</p> <p>The language of
     * the specified vocabulary must match the language code you specify in your
     * transcription request. If the languages don't match, the vocabulary isn't
     * applied. There are no errors or warnings associated with a language
     * mismatch.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of the custom vocabulary you want to use when processing your
     * transcription job. Vocabulary names are case sensitive.</p> <p>The language of
     * the specified vocabulary must match the language code you specify in your
     * transcription request. If the languages don't match, the vocabulary isn't
     * applied. There are no errors or warnings associated with a language
     * mismatch.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the custom vocabulary you want to use when processing your
     * transcription job. Vocabulary names are case sensitive.</p> <p>The language of
     * the specified vocabulary must match the language code you specify in your
     * transcription request. If the languages don't match, the vocabulary isn't
     * applied. There are no errors or warnings associated with a language
     * mismatch.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of the custom vocabulary you want to use when processing your
     * transcription job. Vocabulary names are case sensitive.</p> <p>The language of
     * the specified vocabulary must match the language code you specify in your
     * transcription request. If the languages don't match, the vocabulary isn't
     * applied. There are no errors or warnings associated with a language
     * mismatch.</p>
     */
    inline LanguageIdSettings& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the custom vocabulary you want to use when processing your
     * transcription job. Vocabulary names are case sensitive.</p> <p>The language of
     * the specified vocabulary must match the language code you specify in your
     * transcription request. If the languages don't match, the vocabulary isn't
     * applied. There are no errors or warnings associated with a language
     * mismatch.</p>
     */
    inline LanguageIdSettings& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom vocabulary you want to use when processing your
     * transcription job. Vocabulary names are case sensitive.</p> <p>The language of
     * the specified vocabulary must match the language code you specify in your
     * transcription request. If the languages don't match, the vocabulary isn't
     * applied. There are no errors or warnings associated with a language
     * mismatch.</p>
     */
    inline LanguageIdSettings& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The name of the custom vocabulary filter you want to use when processing your
     * transcription job. Vocabulary filter names are case sensitive.</p> <p>The
     * language of the specified vocabulary filter must match the language code you
     * specify in your transcription request. If the languages don't match, the
     * vocabulary filter isn't applied. There are no errors or warnings associated with
     * a language mismatch.</p> <p>Note that if you include
     * <code>VocabularyFilterName</code> in your request, you must also include
     * <code>VocabularyFilterMethod</code>.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>The name of the custom vocabulary filter you want to use when processing your
     * transcription job. Vocabulary filter names are case sensitive.</p> <p>The
     * language of the specified vocabulary filter must match the language code you
     * specify in your transcription request. If the languages don't match, the
     * vocabulary filter isn't applied. There are no errors or warnings associated with
     * a language mismatch.</p> <p>Note that if you include
     * <code>VocabularyFilterName</code> in your request, you must also include
     * <code>VocabularyFilterMethod</code>.</p>
     */
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }

    /**
     * <p>The name of the custom vocabulary filter you want to use when processing your
     * transcription job. Vocabulary filter names are case sensitive.</p> <p>The
     * language of the specified vocabulary filter must match the language code you
     * specify in your transcription request. If the languages don't match, the
     * vocabulary filter isn't applied. There are no errors or warnings associated with
     * a language mismatch.</p> <p>Note that if you include
     * <code>VocabularyFilterName</code> in your request, you must also include
     * <code>VocabularyFilterMethod</code>.</p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }

    /**
     * <p>The name of the custom vocabulary filter you want to use when processing your
     * transcription job. Vocabulary filter names are case sensitive.</p> <p>The
     * language of the specified vocabulary filter must match the language code you
     * specify in your transcription request. If the languages don't match, the
     * vocabulary filter isn't applied. There are no errors or warnings associated with
     * a language mismatch.</p> <p>Note that if you include
     * <code>VocabularyFilterName</code> in your request, you must also include
     * <code>VocabularyFilterMethod</code>.</p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }

    /**
     * <p>The name of the custom vocabulary filter you want to use when processing your
     * transcription job. Vocabulary filter names are case sensitive.</p> <p>The
     * language of the specified vocabulary filter must match the language code you
     * specify in your transcription request. If the languages don't match, the
     * vocabulary filter isn't applied. There are no errors or warnings associated with
     * a language mismatch.</p> <p>Note that if you include
     * <code>VocabularyFilterName</code> in your request, you must also include
     * <code>VocabularyFilterMethod</code>.</p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }

    /**
     * <p>The name of the custom vocabulary filter you want to use when processing your
     * transcription job. Vocabulary filter names are case sensitive.</p> <p>The
     * language of the specified vocabulary filter must match the language code you
     * specify in your transcription request. If the languages don't match, the
     * vocabulary filter isn't applied. There are no errors or warnings associated with
     * a language mismatch.</p> <p>Note that if you include
     * <code>VocabularyFilterName</code> in your request, you must also include
     * <code>VocabularyFilterMethod</code>.</p>
     */
    inline LanguageIdSettings& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>The name of the custom vocabulary filter you want to use when processing your
     * transcription job. Vocabulary filter names are case sensitive.</p> <p>The
     * language of the specified vocabulary filter must match the language code you
     * specify in your transcription request. If the languages don't match, the
     * vocabulary filter isn't applied. There are no errors or warnings associated with
     * a language mismatch.</p> <p>Note that if you include
     * <code>VocabularyFilterName</code> in your request, you must also include
     * <code>VocabularyFilterMethod</code>.</p>
     */
    inline LanguageIdSettings& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom vocabulary filter you want to use when processing your
     * transcription job. Vocabulary filter names are case sensitive.</p> <p>The
     * language of the specified vocabulary filter must match the language code you
     * specify in your transcription request. If the languages don't match, the
     * vocabulary filter isn't applied. There are no errors or warnings associated with
     * a language mismatch.</p> <p>Note that if you include
     * <code>VocabularyFilterName</code> in your request, you must also include
     * <code>VocabularyFilterMethod</code>.</p>
     */
    inline LanguageIdSettings& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


    /**
     * <p>The name of the custom language model you want to use when processing your
     * transcription job. Note that language model names are case sensitive.</p> <p>The
     * language of the specified language model must match the language code you
     * specify in your transcription request. If the languages don't match, the
     * language model isn't applied. There are no errors or warnings associated with a
     * language mismatch.</p>
     */
    inline const Aws::String& GetLanguageModelName() const{ return m_languageModelName; }

    /**
     * <p>The name of the custom language model you want to use when processing your
     * transcription job. Note that language model names are case sensitive.</p> <p>The
     * language of the specified language model must match the language code you
     * specify in your transcription request. If the languages don't match, the
     * language model isn't applied. There are no errors or warnings associated with a
     * language mismatch.</p>
     */
    inline bool LanguageModelNameHasBeenSet() const { return m_languageModelNameHasBeenSet; }

    /**
     * <p>The name of the custom language model you want to use when processing your
     * transcription job. Note that language model names are case sensitive.</p> <p>The
     * language of the specified language model must match the language code you
     * specify in your transcription request. If the languages don't match, the
     * language model isn't applied. There are no errors or warnings associated with a
     * language mismatch.</p>
     */
    inline void SetLanguageModelName(const Aws::String& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = value; }

    /**
     * <p>The name of the custom language model you want to use when processing your
     * transcription job. Note that language model names are case sensitive.</p> <p>The
     * language of the specified language model must match the language code you
     * specify in your transcription request. If the languages don't match, the
     * language model isn't applied. There are no errors or warnings associated with a
     * language mismatch.</p>
     */
    inline void SetLanguageModelName(Aws::String&& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = std::move(value); }

    /**
     * <p>The name of the custom language model you want to use when processing your
     * transcription job. Note that language model names are case sensitive.</p> <p>The
     * language of the specified language model must match the language code you
     * specify in your transcription request. If the languages don't match, the
     * language model isn't applied. There are no errors or warnings associated with a
     * language mismatch.</p>
     */
    inline void SetLanguageModelName(const char* value) { m_languageModelNameHasBeenSet = true; m_languageModelName.assign(value); }

    /**
     * <p>The name of the custom language model you want to use when processing your
     * transcription job. Note that language model names are case sensitive.</p> <p>The
     * language of the specified language model must match the language code you
     * specify in your transcription request. If the languages don't match, the
     * language model isn't applied. There are no errors or warnings associated with a
     * language mismatch.</p>
     */
    inline LanguageIdSettings& WithLanguageModelName(const Aws::String& value) { SetLanguageModelName(value); return *this;}

    /**
     * <p>The name of the custom language model you want to use when processing your
     * transcription job. Note that language model names are case sensitive.</p> <p>The
     * language of the specified language model must match the language code you
     * specify in your transcription request. If the languages don't match, the
     * language model isn't applied. There are no errors or warnings associated with a
     * language mismatch.</p>
     */
    inline LanguageIdSettings& WithLanguageModelName(Aws::String&& value) { SetLanguageModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom language model you want to use when processing your
     * transcription job. Note that language model names are case sensitive.</p> <p>The
     * language of the specified language model must match the language code you
     * specify in your transcription request. If the languages don't match, the
     * language model isn't applied. There are no errors or warnings associated with a
     * language mismatch.</p>
     */
    inline LanguageIdSettings& WithLanguageModelName(const char* value) { SetLanguageModelName(value); return *this;}

  private:

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet;

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet;

    Aws::String m_languageModelName;
    bool m_languageModelNameHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
