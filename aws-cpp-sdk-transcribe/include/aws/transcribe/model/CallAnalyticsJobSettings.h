/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/VocabularyFilterMethod.h>
#include <aws/transcribe/model/ContentRedaction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/LanguageCode.h>
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
   * <p>Provides optional settings for the <code>CallAnalyticsJob</code> operation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CallAnalyticsJobSettings">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API CallAnalyticsJobSettings
  {
  public:
    CallAnalyticsJobSettings();
    CallAnalyticsJobSettings(Aws::Utils::Json::JsonView jsonValue);
    CallAnalyticsJobSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a vocabulary to use when processing the call analytics job.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of a vocabulary to use when processing the call analytics job.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of a vocabulary to use when processing the call analytics job.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of a vocabulary to use when processing the call analytics job.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of a vocabulary to use when processing the call analytics job.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of a vocabulary to use when processing the call analytics job.</p>
     */
    inline CallAnalyticsJobSettings& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of a vocabulary to use when processing the call analytics job.</p>
     */
    inline CallAnalyticsJobSettings& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of a vocabulary to use when processing the call analytics job.</p>
     */
    inline CallAnalyticsJobSettings& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The name of the vocabulary filter to use when running a call analytics job.
     * The filter that you specify must have the same language code as the analytics
     * job.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>The name of the vocabulary filter to use when running a call analytics job.
     * The filter that you specify must have the same language code as the analytics
     * job.</p>
     */
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }

    /**
     * <p>The name of the vocabulary filter to use when running a call analytics job.
     * The filter that you specify must have the same language code as the analytics
     * job.</p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }

    /**
     * <p>The name of the vocabulary filter to use when running a call analytics job.
     * The filter that you specify must have the same language code as the analytics
     * job.</p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }

    /**
     * <p>The name of the vocabulary filter to use when running a call analytics job.
     * The filter that you specify must have the same language code as the analytics
     * job.</p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }

    /**
     * <p>The name of the vocabulary filter to use when running a call analytics job.
     * The filter that you specify must have the same language code as the analytics
     * job.</p>
     */
    inline CallAnalyticsJobSettings& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>The name of the vocabulary filter to use when running a call analytics job.
     * The filter that you specify must have the same language code as the analytics
     * job.</p>
     */
    inline CallAnalyticsJobSettings& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary filter to use when running a call analytics job.
     * The filter that you specify must have the same language code as the analytics
     * job.</p>
     */
    inline CallAnalyticsJobSettings& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


    /**
     * <p>Set to mask to remove filtered text from the transcript and replace it with
     * three asterisks ("***") as placeholder text. Set to <code>remove</code> to
     * remove filtered text from the transcript without using placeholder text. Set to
     * <code>tag</code> to mark the word in the transcription output that matches the
     * vocabulary filter. When you set the filter method to <code>tag</code>, the words
     * matching your vocabulary filter are not masked or removed.</p>
     */
    inline const VocabularyFilterMethod& GetVocabularyFilterMethod() const{ return m_vocabularyFilterMethod; }

    /**
     * <p>Set to mask to remove filtered text from the transcript and replace it with
     * three asterisks ("***") as placeholder text. Set to <code>remove</code> to
     * remove filtered text from the transcript without using placeholder text. Set to
     * <code>tag</code> to mark the word in the transcription output that matches the
     * vocabulary filter. When you set the filter method to <code>tag</code>, the words
     * matching your vocabulary filter are not masked or removed.</p>
     */
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }

    /**
     * <p>Set to mask to remove filtered text from the transcript and replace it with
     * three asterisks ("***") as placeholder text. Set to <code>remove</code> to
     * remove filtered text from the transcript without using placeholder text. Set to
     * <code>tag</code> to mark the word in the transcription output that matches the
     * vocabulary filter. When you set the filter method to <code>tag</code>, the words
     * matching your vocabulary filter are not masked or removed.</p>
     */
    inline void SetVocabularyFilterMethod(const VocabularyFilterMethod& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }

    /**
     * <p>Set to mask to remove filtered text from the transcript and replace it with
     * three asterisks ("***") as placeholder text. Set to <code>remove</code> to
     * remove filtered text from the transcript without using placeholder text. Set to
     * <code>tag</code> to mark the word in the transcription output that matches the
     * vocabulary filter. When you set the filter method to <code>tag</code>, the words
     * matching your vocabulary filter are not masked or removed.</p>
     */
    inline void SetVocabularyFilterMethod(VocabularyFilterMethod&& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = std::move(value); }

    /**
     * <p>Set to mask to remove filtered text from the transcript and replace it with
     * three asterisks ("***") as placeholder text. Set to <code>remove</code> to
     * remove filtered text from the transcript without using placeholder text. Set to
     * <code>tag</code> to mark the word in the transcription output that matches the
     * vocabulary filter. When you set the filter method to <code>tag</code>, the words
     * matching your vocabulary filter are not masked or removed.</p>
     */
    inline CallAnalyticsJobSettings& WithVocabularyFilterMethod(const VocabularyFilterMethod& value) { SetVocabularyFilterMethod(value); return *this;}

    /**
     * <p>Set to mask to remove filtered text from the transcript and replace it with
     * three asterisks ("***") as placeholder text. Set to <code>remove</code> to
     * remove filtered text from the transcript without using placeholder text. Set to
     * <code>tag</code> to mark the word in the transcription output that matches the
     * vocabulary filter. When you set the filter method to <code>tag</code>, the words
     * matching your vocabulary filter are not masked or removed.</p>
     */
    inline CallAnalyticsJobSettings& WithVocabularyFilterMethod(VocabularyFilterMethod&& value) { SetVocabularyFilterMethod(std::move(value)); return *this;}


    /**
     * <p>The structure used to describe a custom language model.</p>
     */
    inline const Aws::String& GetLanguageModelName() const{ return m_languageModelName; }

    /**
     * <p>The structure used to describe a custom language model.</p>
     */
    inline bool LanguageModelNameHasBeenSet() const { return m_languageModelNameHasBeenSet; }

    /**
     * <p>The structure used to describe a custom language model.</p>
     */
    inline void SetLanguageModelName(const Aws::String& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = value; }

    /**
     * <p>The structure used to describe a custom language model.</p>
     */
    inline void SetLanguageModelName(Aws::String&& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = std::move(value); }

    /**
     * <p>The structure used to describe a custom language model.</p>
     */
    inline void SetLanguageModelName(const char* value) { m_languageModelNameHasBeenSet = true; m_languageModelName.assign(value); }

    /**
     * <p>The structure used to describe a custom language model.</p>
     */
    inline CallAnalyticsJobSettings& WithLanguageModelName(const Aws::String& value) { SetLanguageModelName(value); return *this;}

    /**
     * <p>The structure used to describe a custom language model.</p>
     */
    inline CallAnalyticsJobSettings& WithLanguageModelName(Aws::String&& value) { SetLanguageModelName(std::move(value)); return *this;}

    /**
     * <p>The structure used to describe a custom language model.</p>
     */
    inline CallAnalyticsJobSettings& WithLanguageModelName(const char* value) { SetLanguageModelName(value); return *this;}


    
    inline const ContentRedaction& GetContentRedaction() const{ return m_contentRedaction; }

    
    inline bool ContentRedactionHasBeenSet() const { return m_contentRedactionHasBeenSet; }

    
    inline void SetContentRedaction(const ContentRedaction& value) { m_contentRedactionHasBeenSet = true; m_contentRedaction = value; }

    
    inline void SetContentRedaction(ContentRedaction&& value) { m_contentRedactionHasBeenSet = true; m_contentRedaction = std::move(value); }

    
    inline CallAnalyticsJobSettings& WithContentRedaction(const ContentRedaction& value) { SetContentRedaction(value); return *this;}

    
    inline CallAnalyticsJobSettings& WithContentRedaction(ContentRedaction&& value) { SetContentRedaction(std::move(value)); return *this;}


    /**
     * <p>When you run a call analytics job, you can specify the language spoken in the
     * audio, or you can have Amazon Transcribe identify the language for you.</p>
     * <p>To specify a language, specify an array with one language code. If you don't
     * know the language, you can leave this field blank and Amazon Transcribe will use
     * machine learning to identify the language for you. To improve the ability of
     * Amazon Transcribe to correctly identify the language, you can provide an array
     * of the languages that can be present in the audio.</p> <p>The following list
     * shows the supported languages and corresponding language codes for call
     * analytics jobs:</p> <ul> <li> <p>Gulf Arabic (ar-AE)</p> </li> <li> <p>Mandarin
     * Chinese, Mainland (zh-CN)</p> </li> <li> <p>Australian English (en-AU)</p> </li>
     * <li> <p>British English (en-GB)</p> </li> <li> <p>Indian English (en-IN)</p>
     * </li> <li> <p>Irish English (en-IE)</p> </li> <li> <p>Scottish English
     * (en-AB)</p> </li> <li> <p>US English (en-US)</p> </li> <li> <p>Welsh English
     * (en-WL)</p> </li> <li> <p>Spanish (es-ES)</p> </li> <li> <p>US Spanish
     * (es-US)</p> </li> <li> <p>French (fr-FR)</p> </li> <li> <p>Canadian French
     * (fr-CA)</p> </li> <li> <p>German (de-DE)</p> </li> <li> <p>Swiss German
     * (de-CH)</p> </li> <li> <p>Indian Hindi (hi-IN)</p> </li> <li> <p>Italian
     * (it-IT)</p> </li> <li> <p>Japanese (ja-JP)</p> </li> <li> <p>Korean (ko-KR)</p>
     * </li> <li> <p>Portuguese (pt-PT)</p> </li> <li> <p>Brazilian Portuguese
     * (pt-BR)</p> </li> </ul>
     */
    inline const Aws::Vector<LanguageCode>& GetLanguageOptions() const{ return m_languageOptions; }

    /**
     * <p>When you run a call analytics job, you can specify the language spoken in the
     * audio, or you can have Amazon Transcribe identify the language for you.</p>
     * <p>To specify a language, specify an array with one language code. If you don't
     * know the language, you can leave this field blank and Amazon Transcribe will use
     * machine learning to identify the language for you. To improve the ability of
     * Amazon Transcribe to correctly identify the language, you can provide an array
     * of the languages that can be present in the audio.</p> <p>The following list
     * shows the supported languages and corresponding language codes for call
     * analytics jobs:</p> <ul> <li> <p>Gulf Arabic (ar-AE)</p> </li> <li> <p>Mandarin
     * Chinese, Mainland (zh-CN)</p> </li> <li> <p>Australian English (en-AU)</p> </li>
     * <li> <p>British English (en-GB)</p> </li> <li> <p>Indian English (en-IN)</p>
     * </li> <li> <p>Irish English (en-IE)</p> </li> <li> <p>Scottish English
     * (en-AB)</p> </li> <li> <p>US English (en-US)</p> </li> <li> <p>Welsh English
     * (en-WL)</p> </li> <li> <p>Spanish (es-ES)</p> </li> <li> <p>US Spanish
     * (es-US)</p> </li> <li> <p>French (fr-FR)</p> </li> <li> <p>Canadian French
     * (fr-CA)</p> </li> <li> <p>German (de-DE)</p> </li> <li> <p>Swiss German
     * (de-CH)</p> </li> <li> <p>Indian Hindi (hi-IN)</p> </li> <li> <p>Italian
     * (it-IT)</p> </li> <li> <p>Japanese (ja-JP)</p> </li> <li> <p>Korean (ko-KR)</p>
     * </li> <li> <p>Portuguese (pt-PT)</p> </li> <li> <p>Brazilian Portuguese
     * (pt-BR)</p> </li> </ul>
     */
    inline bool LanguageOptionsHasBeenSet() const { return m_languageOptionsHasBeenSet; }

    /**
     * <p>When you run a call analytics job, you can specify the language spoken in the
     * audio, or you can have Amazon Transcribe identify the language for you.</p>
     * <p>To specify a language, specify an array with one language code. If you don't
     * know the language, you can leave this field blank and Amazon Transcribe will use
     * machine learning to identify the language for you. To improve the ability of
     * Amazon Transcribe to correctly identify the language, you can provide an array
     * of the languages that can be present in the audio.</p> <p>The following list
     * shows the supported languages and corresponding language codes for call
     * analytics jobs:</p> <ul> <li> <p>Gulf Arabic (ar-AE)</p> </li> <li> <p>Mandarin
     * Chinese, Mainland (zh-CN)</p> </li> <li> <p>Australian English (en-AU)</p> </li>
     * <li> <p>British English (en-GB)</p> </li> <li> <p>Indian English (en-IN)</p>
     * </li> <li> <p>Irish English (en-IE)</p> </li> <li> <p>Scottish English
     * (en-AB)</p> </li> <li> <p>US English (en-US)</p> </li> <li> <p>Welsh English
     * (en-WL)</p> </li> <li> <p>Spanish (es-ES)</p> </li> <li> <p>US Spanish
     * (es-US)</p> </li> <li> <p>French (fr-FR)</p> </li> <li> <p>Canadian French
     * (fr-CA)</p> </li> <li> <p>German (de-DE)</p> </li> <li> <p>Swiss German
     * (de-CH)</p> </li> <li> <p>Indian Hindi (hi-IN)</p> </li> <li> <p>Italian
     * (it-IT)</p> </li> <li> <p>Japanese (ja-JP)</p> </li> <li> <p>Korean (ko-KR)</p>
     * </li> <li> <p>Portuguese (pt-PT)</p> </li> <li> <p>Brazilian Portuguese
     * (pt-BR)</p> </li> </ul>
     */
    inline void SetLanguageOptions(const Aws::Vector<LanguageCode>& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = value; }

    /**
     * <p>When you run a call analytics job, you can specify the language spoken in the
     * audio, or you can have Amazon Transcribe identify the language for you.</p>
     * <p>To specify a language, specify an array with one language code. If you don't
     * know the language, you can leave this field blank and Amazon Transcribe will use
     * machine learning to identify the language for you. To improve the ability of
     * Amazon Transcribe to correctly identify the language, you can provide an array
     * of the languages that can be present in the audio.</p> <p>The following list
     * shows the supported languages and corresponding language codes for call
     * analytics jobs:</p> <ul> <li> <p>Gulf Arabic (ar-AE)</p> </li> <li> <p>Mandarin
     * Chinese, Mainland (zh-CN)</p> </li> <li> <p>Australian English (en-AU)</p> </li>
     * <li> <p>British English (en-GB)</p> </li> <li> <p>Indian English (en-IN)</p>
     * </li> <li> <p>Irish English (en-IE)</p> </li> <li> <p>Scottish English
     * (en-AB)</p> </li> <li> <p>US English (en-US)</p> </li> <li> <p>Welsh English
     * (en-WL)</p> </li> <li> <p>Spanish (es-ES)</p> </li> <li> <p>US Spanish
     * (es-US)</p> </li> <li> <p>French (fr-FR)</p> </li> <li> <p>Canadian French
     * (fr-CA)</p> </li> <li> <p>German (de-DE)</p> </li> <li> <p>Swiss German
     * (de-CH)</p> </li> <li> <p>Indian Hindi (hi-IN)</p> </li> <li> <p>Italian
     * (it-IT)</p> </li> <li> <p>Japanese (ja-JP)</p> </li> <li> <p>Korean (ko-KR)</p>
     * </li> <li> <p>Portuguese (pt-PT)</p> </li> <li> <p>Brazilian Portuguese
     * (pt-BR)</p> </li> </ul>
     */
    inline void SetLanguageOptions(Aws::Vector<LanguageCode>&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = std::move(value); }

    /**
     * <p>When you run a call analytics job, you can specify the language spoken in the
     * audio, or you can have Amazon Transcribe identify the language for you.</p>
     * <p>To specify a language, specify an array with one language code. If you don't
     * know the language, you can leave this field blank and Amazon Transcribe will use
     * machine learning to identify the language for you. To improve the ability of
     * Amazon Transcribe to correctly identify the language, you can provide an array
     * of the languages that can be present in the audio.</p> <p>The following list
     * shows the supported languages and corresponding language codes for call
     * analytics jobs:</p> <ul> <li> <p>Gulf Arabic (ar-AE)</p> </li> <li> <p>Mandarin
     * Chinese, Mainland (zh-CN)</p> </li> <li> <p>Australian English (en-AU)</p> </li>
     * <li> <p>British English (en-GB)</p> </li> <li> <p>Indian English (en-IN)</p>
     * </li> <li> <p>Irish English (en-IE)</p> </li> <li> <p>Scottish English
     * (en-AB)</p> </li> <li> <p>US English (en-US)</p> </li> <li> <p>Welsh English
     * (en-WL)</p> </li> <li> <p>Spanish (es-ES)</p> </li> <li> <p>US Spanish
     * (es-US)</p> </li> <li> <p>French (fr-FR)</p> </li> <li> <p>Canadian French
     * (fr-CA)</p> </li> <li> <p>German (de-DE)</p> </li> <li> <p>Swiss German
     * (de-CH)</p> </li> <li> <p>Indian Hindi (hi-IN)</p> </li> <li> <p>Italian
     * (it-IT)</p> </li> <li> <p>Japanese (ja-JP)</p> </li> <li> <p>Korean (ko-KR)</p>
     * </li> <li> <p>Portuguese (pt-PT)</p> </li> <li> <p>Brazilian Portuguese
     * (pt-BR)</p> </li> </ul>
     */
    inline CallAnalyticsJobSettings& WithLanguageOptions(const Aws::Vector<LanguageCode>& value) { SetLanguageOptions(value); return *this;}

    /**
     * <p>When you run a call analytics job, you can specify the language spoken in the
     * audio, or you can have Amazon Transcribe identify the language for you.</p>
     * <p>To specify a language, specify an array with one language code. If you don't
     * know the language, you can leave this field blank and Amazon Transcribe will use
     * machine learning to identify the language for you. To improve the ability of
     * Amazon Transcribe to correctly identify the language, you can provide an array
     * of the languages that can be present in the audio.</p> <p>The following list
     * shows the supported languages and corresponding language codes for call
     * analytics jobs:</p> <ul> <li> <p>Gulf Arabic (ar-AE)</p> </li> <li> <p>Mandarin
     * Chinese, Mainland (zh-CN)</p> </li> <li> <p>Australian English (en-AU)</p> </li>
     * <li> <p>British English (en-GB)</p> </li> <li> <p>Indian English (en-IN)</p>
     * </li> <li> <p>Irish English (en-IE)</p> </li> <li> <p>Scottish English
     * (en-AB)</p> </li> <li> <p>US English (en-US)</p> </li> <li> <p>Welsh English
     * (en-WL)</p> </li> <li> <p>Spanish (es-ES)</p> </li> <li> <p>US Spanish
     * (es-US)</p> </li> <li> <p>French (fr-FR)</p> </li> <li> <p>Canadian French
     * (fr-CA)</p> </li> <li> <p>German (de-DE)</p> </li> <li> <p>Swiss German
     * (de-CH)</p> </li> <li> <p>Indian Hindi (hi-IN)</p> </li> <li> <p>Italian
     * (it-IT)</p> </li> <li> <p>Japanese (ja-JP)</p> </li> <li> <p>Korean (ko-KR)</p>
     * </li> <li> <p>Portuguese (pt-PT)</p> </li> <li> <p>Brazilian Portuguese
     * (pt-BR)</p> </li> </ul>
     */
    inline CallAnalyticsJobSettings& WithLanguageOptions(Aws::Vector<LanguageCode>&& value) { SetLanguageOptions(std::move(value)); return *this;}

    /**
     * <p>When you run a call analytics job, you can specify the language spoken in the
     * audio, or you can have Amazon Transcribe identify the language for you.</p>
     * <p>To specify a language, specify an array with one language code. If you don't
     * know the language, you can leave this field blank and Amazon Transcribe will use
     * machine learning to identify the language for you. To improve the ability of
     * Amazon Transcribe to correctly identify the language, you can provide an array
     * of the languages that can be present in the audio.</p> <p>The following list
     * shows the supported languages and corresponding language codes for call
     * analytics jobs:</p> <ul> <li> <p>Gulf Arabic (ar-AE)</p> </li> <li> <p>Mandarin
     * Chinese, Mainland (zh-CN)</p> </li> <li> <p>Australian English (en-AU)</p> </li>
     * <li> <p>British English (en-GB)</p> </li> <li> <p>Indian English (en-IN)</p>
     * </li> <li> <p>Irish English (en-IE)</p> </li> <li> <p>Scottish English
     * (en-AB)</p> </li> <li> <p>US English (en-US)</p> </li> <li> <p>Welsh English
     * (en-WL)</p> </li> <li> <p>Spanish (es-ES)</p> </li> <li> <p>US Spanish
     * (es-US)</p> </li> <li> <p>French (fr-FR)</p> </li> <li> <p>Canadian French
     * (fr-CA)</p> </li> <li> <p>German (de-DE)</p> </li> <li> <p>Swiss German
     * (de-CH)</p> </li> <li> <p>Indian Hindi (hi-IN)</p> </li> <li> <p>Italian
     * (it-IT)</p> </li> <li> <p>Japanese (ja-JP)</p> </li> <li> <p>Korean (ko-KR)</p>
     * </li> <li> <p>Portuguese (pt-PT)</p> </li> <li> <p>Brazilian Portuguese
     * (pt-BR)</p> </li> </ul>
     */
    inline CallAnalyticsJobSettings& AddLanguageOptions(const LanguageCode& value) { m_languageOptionsHasBeenSet = true; m_languageOptions.push_back(value); return *this; }

    /**
     * <p>When you run a call analytics job, you can specify the language spoken in the
     * audio, or you can have Amazon Transcribe identify the language for you.</p>
     * <p>To specify a language, specify an array with one language code. If you don't
     * know the language, you can leave this field blank and Amazon Transcribe will use
     * machine learning to identify the language for you. To improve the ability of
     * Amazon Transcribe to correctly identify the language, you can provide an array
     * of the languages that can be present in the audio.</p> <p>The following list
     * shows the supported languages and corresponding language codes for call
     * analytics jobs:</p> <ul> <li> <p>Gulf Arabic (ar-AE)</p> </li> <li> <p>Mandarin
     * Chinese, Mainland (zh-CN)</p> </li> <li> <p>Australian English (en-AU)</p> </li>
     * <li> <p>British English (en-GB)</p> </li> <li> <p>Indian English (en-IN)</p>
     * </li> <li> <p>Irish English (en-IE)</p> </li> <li> <p>Scottish English
     * (en-AB)</p> </li> <li> <p>US English (en-US)</p> </li> <li> <p>Welsh English
     * (en-WL)</p> </li> <li> <p>Spanish (es-ES)</p> </li> <li> <p>US Spanish
     * (es-US)</p> </li> <li> <p>French (fr-FR)</p> </li> <li> <p>Canadian French
     * (fr-CA)</p> </li> <li> <p>German (de-DE)</p> </li> <li> <p>Swiss German
     * (de-CH)</p> </li> <li> <p>Indian Hindi (hi-IN)</p> </li> <li> <p>Italian
     * (it-IT)</p> </li> <li> <p>Japanese (ja-JP)</p> </li> <li> <p>Korean (ko-KR)</p>
     * </li> <li> <p>Portuguese (pt-PT)</p> </li> <li> <p>Brazilian Portuguese
     * (pt-BR)</p> </li> </ul>
     */
    inline CallAnalyticsJobSettings& AddLanguageOptions(LanguageCode&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet;

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet;

    VocabularyFilterMethod m_vocabularyFilterMethod;
    bool m_vocabularyFilterMethodHasBeenSet;

    Aws::String m_languageModelName;
    bool m_languageModelNameHasBeenSet;

    ContentRedaction m_contentRedaction;
    bool m_contentRedactionHasBeenSet;

    Aws::Vector<LanguageCode> m_languageOptions;
    bool m_languageOptionsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
