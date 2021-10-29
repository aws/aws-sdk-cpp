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
   * <p>Language-specific settings that can be specified when language identification
   * is enabled.</p><p><h3>See Also:</h3>   <a
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
     * <p>The name of the vocabulary you want to use when processing your transcription
     * job. The vocabulary you specify must have the same language code as the
     * transcription job; if the languages don't match, the vocabulary won't be
     * applied.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the vocabulary you want to use when processing your transcription
     * job. The vocabulary you specify must have the same language code as the
     * transcription job; if the languages don't match, the vocabulary won't be
     * applied.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of the vocabulary you want to use when processing your transcription
     * job. The vocabulary you specify must have the same language code as the
     * transcription job; if the languages don't match, the vocabulary won't be
     * applied.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of the vocabulary you want to use when processing your transcription
     * job. The vocabulary you specify must have the same language code as the
     * transcription job; if the languages don't match, the vocabulary won't be
     * applied.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the vocabulary you want to use when processing your transcription
     * job. The vocabulary you specify must have the same language code as the
     * transcription job; if the languages don't match, the vocabulary won't be
     * applied.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of the vocabulary you want to use when processing your transcription
     * job. The vocabulary you specify must have the same language code as the
     * transcription job; if the languages don't match, the vocabulary won't be
     * applied.</p>
     */
    inline LanguageIdSettings& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the vocabulary you want to use when processing your transcription
     * job. The vocabulary you specify must have the same language code as the
     * transcription job; if the languages don't match, the vocabulary won't be
     * applied.</p>
     */
    inline LanguageIdSettings& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary you want to use when processing your transcription
     * job. The vocabulary you specify must have the same language code as the
     * transcription job; if the languages don't match, the vocabulary won't be
     * applied.</p>
     */
    inline LanguageIdSettings& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The name of the vocabulary filter you want to use when transcribing your
     * audio. The filter you specify must have the same language code as the
     * transcription job; if the languages don't match, the vocabulary filter won't be
     * applied.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>The name of the vocabulary filter you want to use when transcribing your
     * audio. The filter you specify must have the same language code as the
     * transcription job; if the languages don't match, the vocabulary filter won't be
     * applied.</p>
     */
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }

    /**
     * <p>The name of the vocabulary filter you want to use when transcribing your
     * audio. The filter you specify must have the same language code as the
     * transcription job; if the languages don't match, the vocabulary filter won't be
     * applied.</p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }

    /**
     * <p>The name of the vocabulary filter you want to use when transcribing your
     * audio. The filter you specify must have the same language code as the
     * transcription job; if the languages don't match, the vocabulary filter won't be
     * applied.</p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }

    /**
     * <p>The name of the vocabulary filter you want to use when transcribing your
     * audio. The filter you specify must have the same language code as the
     * transcription job; if the languages don't match, the vocabulary filter won't be
     * applied.</p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }

    /**
     * <p>The name of the vocabulary filter you want to use when transcribing your
     * audio. The filter you specify must have the same language code as the
     * transcription job; if the languages don't match, the vocabulary filter won't be
     * applied.</p>
     */
    inline LanguageIdSettings& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>The name of the vocabulary filter you want to use when transcribing your
     * audio. The filter you specify must have the same language code as the
     * transcription job; if the languages don't match, the vocabulary filter won't be
     * applied.</p>
     */
    inline LanguageIdSettings& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary filter you want to use when transcribing your
     * audio. The filter you specify must have the same language code as the
     * transcription job; if the languages don't match, the vocabulary filter won't be
     * applied.</p>
     */
    inline LanguageIdSettings& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


    /**
     * <p>The name of the language model you want to use when transcribing your audio.
     * The model you specify must have the same language code as the transcription job;
     * if the languages don't match, the language model won't be applied.</p>
     */
    inline const Aws::String& GetLanguageModelName() const{ return m_languageModelName; }

    /**
     * <p>The name of the language model you want to use when transcribing your audio.
     * The model you specify must have the same language code as the transcription job;
     * if the languages don't match, the language model won't be applied.</p>
     */
    inline bool LanguageModelNameHasBeenSet() const { return m_languageModelNameHasBeenSet; }

    /**
     * <p>The name of the language model you want to use when transcribing your audio.
     * The model you specify must have the same language code as the transcription job;
     * if the languages don't match, the language model won't be applied.</p>
     */
    inline void SetLanguageModelName(const Aws::String& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = value; }

    /**
     * <p>The name of the language model you want to use when transcribing your audio.
     * The model you specify must have the same language code as the transcription job;
     * if the languages don't match, the language model won't be applied.</p>
     */
    inline void SetLanguageModelName(Aws::String&& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = std::move(value); }

    /**
     * <p>The name of the language model you want to use when transcribing your audio.
     * The model you specify must have the same language code as the transcription job;
     * if the languages don't match, the language model won't be applied.</p>
     */
    inline void SetLanguageModelName(const char* value) { m_languageModelNameHasBeenSet = true; m_languageModelName.assign(value); }

    /**
     * <p>The name of the language model you want to use when transcribing your audio.
     * The model you specify must have the same language code as the transcription job;
     * if the languages don't match, the language model won't be applied.</p>
     */
    inline LanguageIdSettings& WithLanguageModelName(const Aws::String& value) { SetLanguageModelName(value); return *this;}

    /**
     * <p>The name of the language model you want to use when transcribing your audio.
     * The model you specify must have the same language code as the transcription job;
     * if the languages don't match, the language model won't be applied.</p>
     */
    inline LanguageIdSettings& WithLanguageModelName(Aws::String&& value) { SetLanguageModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the language model you want to use when transcribing your audio.
     * The model you specify must have the same language code as the transcription job;
     * if the languages don't match, the language model won't be applied.</p>
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
