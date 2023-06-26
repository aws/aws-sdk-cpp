/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/CallAnalyticsLanguageCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/VocabularyFilterMethod.h>
#include <aws/chime-sdk-media-pipelines/model/PartialResultsStability.h>
#include <aws/chime-sdk-media-pipelines/model/ContentType.h>
#include <aws/chime-sdk-media-pipelines/model/PostCallAnalyticsSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>A structure that contains the configuration settings for an Amazon Transcribe
   * call analytics processor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/AmazonTranscribeCallAnalyticsProcessorConfiguration">AWS
   * API Reference</a></p>
   */
  class AmazonTranscribeCallAnalyticsProcessorConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API AmazonTranscribeCallAnalyticsProcessorConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API AmazonTranscribeCallAnalyticsProcessorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API AmazonTranscribeCallAnalyticsProcessorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The language code in the configuration.</p>
     */
    inline const CallAnalyticsLanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code in the configuration.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code in the configuration.</p>
     */
    inline void SetLanguageCode(const CallAnalyticsLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code in the configuration.</p>
     */
    inline void SetLanguageCode(CallAnalyticsLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code in the configuration.</p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithLanguageCode(const CallAnalyticsLanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code in the configuration.</p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithLanguageCode(CallAnalyticsLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>Specifies the name of the custom vocabulary to use when processing a
     * transcription. Note that vocabulary names are case sensitive.</p> <p>If the
     * language of the specified custom vocabulary doesn't match the language
     * identified in your media, the custom vocabulary is not applied to your
     * transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a> in the <i>Amazon Transcribe Developer Guide</i>.</p> <p>Length
     * Constraints: Minimum length of 1. Maximum length of 200. </p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>Specifies the name of the custom vocabulary to use when processing a
     * transcription. Note that vocabulary names are case sensitive.</p> <p>If the
     * language of the specified custom vocabulary doesn't match the language
     * identified in your media, the custom vocabulary is not applied to your
     * transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a> in the <i>Amazon Transcribe Developer Guide</i>.</p> <p>Length
     * Constraints: Minimum length of 1. Maximum length of 200. </p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>Specifies the name of the custom vocabulary to use when processing a
     * transcription. Note that vocabulary names are case sensitive.</p> <p>If the
     * language of the specified custom vocabulary doesn't match the language
     * identified in your media, the custom vocabulary is not applied to your
     * transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a> in the <i>Amazon Transcribe Developer Guide</i>.</p> <p>Length
     * Constraints: Minimum length of 1. Maximum length of 200. </p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>Specifies the name of the custom vocabulary to use when processing a
     * transcription. Note that vocabulary names are case sensitive.</p> <p>If the
     * language of the specified custom vocabulary doesn't match the language
     * identified in your media, the custom vocabulary is not applied to your
     * transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a> in the <i>Amazon Transcribe Developer Guide</i>.</p> <p>Length
     * Constraints: Minimum length of 1. Maximum length of 200. </p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>Specifies the name of the custom vocabulary to use when processing a
     * transcription. Note that vocabulary names are case sensitive.</p> <p>If the
     * language of the specified custom vocabulary doesn't match the language
     * identified in your media, the custom vocabulary is not applied to your
     * transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a> in the <i>Amazon Transcribe Developer Guide</i>.</p> <p>Length
     * Constraints: Minimum length of 1. Maximum length of 200. </p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>Specifies the name of the custom vocabulary to use when processing a
     * transcription. Note that vocabulary names are case sensitive.</p> <p>If the
     * language of the specified custom vocabulary doesn't match the language
     * identified in your media, the custom vocabulary is not applied to your
     * transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a> in the <i>Amazon Transcribe Developer Guide</i>.</p> <p>Length
     * Constraints: Minimum length of 1. Maximum length of 200. </p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>Specifies the name of the custom vocabulary to use when processing a
     * transcription. Note that vocabulary names are case sensitive.</p> <p>If the
     * language of the specified custom vocabulary doesn't match the language
     * identified in your media, the custom vocabulary is not applied to your
     * transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a> in the <i>Amazon Transcribe Developer Guide</i>.</p> <p>Length
     * Constraints: Minimum length of 1. Maximum length of 200. </p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the custom vocabulary to use when processing a
     * transcription. Note that vocabulary names are case sensitive.</p> <p>If the
     * language of the specified custom vocabulary doesn't match the language
     * identified in your media, the custom vocabulary is not applied to your
     * transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a> in the <i>Amazon Transcribe Developer Guide</i>.</p> <p>Length
     * Constraints: Minimum length of 1. Maximum length of 200. </p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>Specifies the name of the custom vocabulary filter to use when processing a
     * transcription. Note that vocabulary filter names are case sensitive.</p> <p>If
     * the language of the specified custom vocabulary filter doesn't match the
     * language identified in your media, the vocabulary filter is not applied to your
     * transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a> in the <i>Amazon Transcribe
     * Developer Guide</i>.</p> <p>Length Constraints: Minimum length of 1. Maximum
     * length of 200. </p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>Specifies the name of the custom vocabulary filter to use when processing a
     * transcription. Note that vocabulary filter names are case sensitive.</p> <p>If
     * the language of the specified custom vocabulary filter doesn't match the
     * language identified in your media, the vocabulary filter is not applied to your
     * transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a> in the <i>Amazon Transcribe
     * Developer Guide</i>.</p> <p>Length Constraints: Minimum length of 1. Maximum
     * length of 200. </p>
     */
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }

    /**
     * <p>Specifies the name of the custom vocabulary filter to use when processing a
     * transcription. Note that vocabulary filter names are case sensitive.</p> <p>If
     * the language of the specified custom vocabulary filter doesn't match the
     * language identified in your media, the vocabulary filter is not applied to your
     * transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a> in the <i>Amazon Transcribe
     * Developer Guide</i>.</p> <p>Length Constraints: Minimum length of 1. Maximum
     * length of 200. </p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }

    /**
     * <p>Specifies the name of the custom vocabulary filter to use when processing a
     * transcription. Note that vocabulary filter names are case sensitive.</p> <p>If
     * the language of the specified custom vocabulary filter doesn't match the
     * language identified in your media, the vocabulary filter is not applied to your
     * transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a> in the <i>Amazon Transcribe
     * Developer Guide</i>.</p> <p>Length Constraints: Minimum length of 1. Maximum
     * length of 200. </p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }

    /**
     * <p>Specifies the name of the custom vocabulary filter to use when processing a
     * transcription. Note that vocabulary filter names are case sensitive.</p> <p>If
     * the language of the specified custom vocabulary filter doesn't match the
     * language identified in your media, the vocabulary filter is not applied to your
     * transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a> in the <i>Amazon Transcribe
     * Developer Guide</i>.</p> <p>Length Constraints: Minimum length of 1. Maximum
     * length of 200. </p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }

    /**
     * <p>Specifies the name of the custom vocabulary filter to use when processing a
     * transcription. Note that vocabulary filter names are case sensitive.</p> <p>If
     * the language of the specified custom vocabulary filter doesn't match the
     * language identified in your media, the vocabulary filter is not applied to your
     * transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a> in the <i>Amazon Transcribe
     * Developer Guide</i>.</p> <p>Length Constraints: Minimum length of 1. Maximum
     * length of 200. </p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>Specifies the name of the custom vocabulary filter to use when processing a
     * transcription. Note that vocabulary filter names are case sensitive.</p> <p>If
     * the language of the specified custom vocabulary filter doesn't match the
     * language identified in your media, the vocabulary filter is not applied to your
     * transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a> in the <i>Amazon Transcribe
     * Developer Guide</i>.</p> <p>Length Constraints: Minimum length of 1. Maximum
     * length of 200. </p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the custom vocabulary filter to use when processing a
     * transcription. Note that vocabulary filter names are case sensitive.</p> <p>If
     * the language of the specified custom vocabulary filter doesn't match the
     * language identified in your media, the vocabulary filter is not applied to your
     * transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a> in the <i>Amazon Transcribe
     * Developer Guide</i>.</p> <p>Length Constraints: Minimum length of 1. Maximum
     * length of 200. </p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


    /**
     * <p>Specifies how to apply a vocabulary filter to a transcript.</p> <p>To replace
     * words with <b>***</b>, choose <code>mask</code>.</p> <p>To delete words, choose
     * <code>remove</code>.</p> <p>To flag words without changing them, choose
     * <code>tag</code>. </p>
     */
    inline const VocabularyFilterMethod& GetVocabularyFilterMethod() const{ return m_vocabularyFilterMethod; }

    /**
     * <p>Specifies how to apply a vocabulary filter to a transcript.</p> <p>To replace
     * words with <b>***</b>, choose <code>mask</code>.</p> <p>To delete words, choose
     * <code>remove</code>.</p> <p>To flag words without changing them, choose
     * <code>tag</code>. </p>
     */
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }

    /**
     * <p>Specifies how to apply a vocabulary filter to a transcript.</p> <p>To replace
     * words with <b>***</b>, choose <code>mask</code>.</p> <p>To delete words, choose
     * <code>remove</code>.</p> <p>To flag words without changing them, choose
     * <code>tag</code>. </p>
     */
    inline void SetVocabularyFilterMethod(const VocabularyFilterMethod& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }

    /**
     * <p>Specifies how to apply a vocabulary filter to a transcript.</p> <p>To replace
     * words with <b>***</b>, choose <code>mask</code>.</p> <p>To delete words, choose
     * <code>remove</code>.</p> <p>To flag words without changing them, choose
     * <code>tag</code>. </p>
     */
    inline void SetVocabularyFilterMethod(VocabularyFilterMethod&& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = std::move(value); }

    /**
     * <p>Specifies how to apply a vocabulary filter to a transcript.</p> <p>To replace
     * words with <b>***</b>, choose <code>mask</code>.</p> <p>To delete words, choose
     * <code>remove</code>.</p> <p>To flag words without changing them, choose
     * <code>tag</code>. </p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithVocabularyFilterMethod(const VocabularyFilterMethod& value) { SetVocabularyFilterMethod(value); return *this;}

    /**
     * <p>Specifies how to apply a vocabulary filter to a transcript.</p> <p>To replace
     * words with <b>***</b>, choose <code>mask</code>.</p> <p>To delete words, choose
     * <code>remove</code>.</p> <p>To flag words without changing them, choose
     * <code>tag</code>. </p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithVocabularyFilterMethod(VocabularyFilterMethod&& value) { SetVocabularyFilterMethod(std::move(value)); return *this;}


    /**
     * <p>Specifies the name of the custom language model to use when processing a
     * transcription. Note that language model names are case sensitive.</p> <p>The
     * language of the specified language model must match the language code specified
     * in the transcription request. If the languages don't match, the custom language
     * model isn't applied. Language mismatches don't generate errors or warnings.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline const Aws::String& GetLanguageModelName() const{ return m_languageModelName; }

    /**
     * <p>Specifies the name of the custom language model to use when processing a
     * transcription. Note that language model names are case sensitive.</p> <p>The
     * language of the specified language model must match the language code specified
     * in the transcription request. If the languages don't match, the custom language
     * model isn't applied. Language mismatches don't generate errors or warnings.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline bool LanguageModelNameHasBeenSet() const { return m_languageModelNameHasBeenSet; }

    /**
     * <p>Specifies the name of the custom language model to use when processing a
     * transcription. Note that language model names are case sensitive.</p> <p>The
     * language of the specified language model must match the language code specified
     * in the transcription request. If the languages don't match, the custom language
     * model isn't applied. Language mismatches don't generate errors or warnings.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline void SetLanguageModelName(const Aws::String& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = value; }

    /**
     * <p>Specifies the name of the custom language model to use when processing a
     * transcription. Note that language model names are case sensitive.</p> <p>The
     * language of the specified language model must match the language code specified
     * in the transcription request. If the languages don't match, the custom language
     * model isn't applied. Language mismatches don't generate errors or warnings.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline void SetLanguageModelName(Aws::String&& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = std::move(value); }

    /**
     * <p>Specifies the name of the custom language model to use when processing a
     * transcription. Note that language model names are case sensitive.</p> <p>The
     * language of the specified language model must match the language code specified
     * in the transcription request. If the languages don't match, the custom language
     * model isn't applied. Language mismatches don't generate errors or warnings.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline void SetLanguageModelName(const char* value) { m_languageModelNameHasBeenSet = true; m_languageModelName.assign(value); }

    /**
     * <p>Specifies the name of the custom language model to use when processing a
     * transcription. Note that language model names are case sensitive.</p> <p>The
     * language of the specified language model must match the language code specified
     * in the transcription request. If the languages don't match, the custom language
     * model isn't applied. Language mismatches don't generate errors or warnings.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithLanguageModelName(const Aws::String& value) { SetLanguageModelName(value); return *this;}

    /**
     * <p>Specifies the name of the custom language model to use when processing a
     * transcription. Note that language model names are case sensitive.</p> <p>The
     * language of the specified language model must match the language code specified
     * in the transcription request. If the languages don't match, the custom language
     * model isn't applied. Language mismatches don't generate errors or warnings.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithLanguageModelName(Aws::String&& value) { SetLanguageModelName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the custom language model to use when processing a
     * transcription. Note that language model names are case sensitive.</p> <p>The
     * language of the specified language model must match the language code specified
     * in the transcription request. If the languages don't match, the custom language
     * model isn't applied. Language mismatches don't generate errors or warnings.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithLanguageModelName(const char* value) { SetLanguageModelName(value); return *this;}


    /**
     * <p>Enables partial result stabilization for your transcription. Partial result
     * stabilization can reduce latency in your output, but may impact accuracy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline bool GetEnablePartialResultsStabilization() const{ return m_enablePartialResultsStabilization; }

    /**
     * <p>Enables partial result stabilization for your transcription. Partial result
     * stabilization can reduce latency in your output, but may impact accuracy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline bool EnablePartialResultsStabilizationHasBeenSet() const { return m_enablePartialResultsStabilizationHasBeenSet; }

    /**
     * <p>Enables partial result stabilization for your transcription. Partial result
     * stabilization can reduce latency in your output, but may impact accuracy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline void SetEnablePartialResultsStabilization(bool value) { m_enablePartialResultsStabilizationHasBeenSet = true; m_enablePartialResultsStabilization = value; }

    /**
     * <p>Enables partial result stabilization for your transcription. Partial result
     * stabilization can reduce latency in your output, but may impact accuracy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithEnablePartialResultsStabilization(bool value) { SetEnablePartialResultsStabilization(value); return *this;}


    /**
     * <p>Specifies the level of stability to use when you enable partial results
     * stabilization (<code>EnablePartialResultsStabilization</code>).</p> <p>Low
     * stability provides the highest accuracy. High stability transcribes faster, but
     * with slightly lower accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline const PartialResultsStability& GetPartialResultsStability() const{ return m_partialResultsStability; }

    /**
     * <p>Specifies the level of stability to use when you enable partial results
     * stabilization (<code>EnablePartialResultsStabilization</code>).</p> <p>Low
     * stability provides the highest accuracy. High stability transcribes faster, but
     * with slightly lower accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline bool PartialResultsStabilityHasBeenSet() const { return m_partialResultsStabilityHasBeenSet; }

    /**
     * <p>Specifies the level of stability to use when you enable partial results
     * stabilization (<code>EnablePartialResultsStabilization</code>).</p> <p>Low
     * stability provides the highest accuracy. High stability transcribes faster, but
     * with slightly lower accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline void SetPartialResultsStability(const PartialResultsStability& value) { m_partialResultsStabilityHasBeenSet = true; m_partialResultsStability = value; }

    /**
     * <p>Specifies the level of stability to use when you enable partial results
     * stabilization (<code>EnablePartialResultsStabilization</code>).</p> <p>Low
     * stability provides the highest accuracy. High stability transcribes faster, but
     * with slightly lower accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline void SetPartialResultsStability(PartialResultsStability&& value) { m_partialResultsStabilityHasBeenSet = true; m_partialResultsStability = std::move(value); }

    /**
     * <p>Specifies the level of stability to use when you enable partial results
     * stabilization (<code>EnablePartialResultsStabilization</code>).</p> <p>Low
     * stability provides the highest accuracy. High stability transcribes faster, but
     * with slightly lower accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithPartialResultsStability(const PartialResultsStability& value) { SetPartialResultsStability(value); return *this;}

    /**
     * <p>Specifies the level of stability to use when you enable partial results
     * stabilization (<code>EnablePartialResultsStabilization</code>).</p> <p>Low
     * stability provides the highest accuracy. High stability transcribes faster, but
     * with slightly lower accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithPartialResultsStability(PartialResultsStability&& value) { SetPartialResultsStability(std::move(value)); return *this;}


    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you do, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline const ContentType& GetContentIdentificationType() const{ return m_contentIdentificationType; }

    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you do, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }

    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you do, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline void SetContentIdentificationType(const ContentType& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }

    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you do, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline void SetContentIdentificationType(ContentType&& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = std::move(value); }

    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you do, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithContentIdentificationType(const ContentType& value) { SetContentIdentificationType(value); return *this;}

    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you do, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithContentIdentificationType(ContentType&& value) { SetContentIdentificationType(std::move(value)); return *this;}


    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is redacted upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentRedactionType</code> and
     * <code>ContentIdentificationType</code> in the same request. If you do, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline const ContentType& GetContentRedactionType() const{ return m_contentRedactionType; }

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is redacted upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentRedactionType</code> and
     * <code>ContentIdentificationType</code> in the same request. If you do, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline bool ContentRedactionTypeHasBeenSet() const { return m_contentRedactionTypeHasBeenSet; }

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is redacted upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentRedactionType</code> and
     * <code>ContentIdentificationType</code> in the same request. If you do, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline void SetContentRedactionType(const ContentType& value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = value; }

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is redacted upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentRedactionType</code> and
     * <code>ContentIdentificationType</code> in the same request. If you do, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline void SetContentRedactionType(ContentType&& value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = std::move(value); }

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is redacted upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentRedactionType</code> and
     * <code>ContentIdentificationType</code> in the same request. If you do, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithContentRedactionType(const ContentType& value) { SetContentRedactionType(value); return *this;}

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is redacted upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentRedactionType</code> and
     * <code>ContentIdentificationType</code> in the same request. If you do, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithContentRedactionType(ContentType&& value) { SetContentRedactionType(std::move(value)); return *this;}


    /**
     * <p>Specifies the types of personally identifiable information (PII) to redact
     * from a transcript. You can include as many types as you'd like, or you can
     * select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in your
     * Call Analytics request, you must also include
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>, but
     * you can't include both. </p> <p>Values must be comma-separated and can include:
     * <code>ADDRESS</code>, <code>BANK_ACCOUNT_NUMBER</code>,
     * <code>BANK_ROUTING</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>CREDIT_DEBIT_NUMBER</code>,
     * <code>EMAIL</code>, <code>NAME</code>, <code>PHONE</code>, <code>PIN</code>,
     * <code>SSN</code>, or <code>ALL</code>.</p> <p>Length Constraints: Minimum length
     * of 1. Maximum length of 300.</p>
     */
    inline const Aws::String& GetPiiEntityTypes() const{ return m_piiEntityTypes; }

    /**
     * <p>Specifies the types of personally identifiable information (PII) to redact
     * from a transcript. You can include as many types as you'd like, or you can
     * select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in your
     * Call Analytics request, you must also include
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>, but
     * you can't include both. </p> <p>Values must be comma-separated and can include:
     * <code>ADDRESS</code>, <code>BANK_ACCOUNT_NUMBER</code>,
     * <code>BANK_ROUTING</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>CREDIT_DEBIT_NUMBER</code>,
     * <code>EMAIL</code>, <code>NAME</code>, <code>PHONE</code>, <code>PIN</code>,
     * <code>SSN</code>, or <code>ALL</code>.</p> <p>Length Constraints: Minimum length
     * of 1. Maximum length of 300.</p>
     */
    inline bool PiiEntityTypesHasBeenSet() const { return m_piiEntityTypesHasBeenSet; }

    /**
     * <p>Specifies the types of personally identifiable information (PII) to redact
     * from a transcript. You can include as many types as you'd like, or you can
     * select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in your
     * Call Analytics request, you must also include
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>, but
     * you can't include both. </p> <p>Values must be comma-separated and can include:
     * <code>ADDRESS</code>, <code>BANK_ACCOUNT_NUMBER</code>,
     * <code>BANK_ROUTING</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>CREDIT_DEBIT_NUMBER</code>,
     * <code>EMAIL</code>, <code>NAME</code>, <code>PHONE</code>, <code>PIN</code>,
     * <code>SSN</code>, or <code>ALL</code>.</p> <p>Length Constraints: Minimum length
     * of 1. Maximum length of 300.</p>
     */
    inline void SetPiiEntityTypes(const Aws::String& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = value; }

    /**
     * <p>Specifies the types of personally identifiable information (PII) to redact
     * from a transcript. You can include as many types as you'd like, or you can
     * select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in your
     * Call Analytics request, you must also include
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>, but
     * you can't include both. </p> <p>Values must be comma-separated and can include:
     * <code>ADDRESS</code>, <code>BANK_ACCOUNT_NUMBER</code>,
     * <code>BANK_ROUTING</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>CREDIT_DEBIT_NUMBER</code>,
     * <code>EMAIL</code>, <code>NAME</code>, <code>PHONE</code>, <code>PIN</code>,
     * <code>SSN</code>, or <code>ALL</code>.</p> <p>Length Constraints: Minimum length
     * of 1. Maximum length of 300.</p>
     */
    inline void SetPiiEntityTypes(Aws::String&& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = std::move(value); }

    /**
     * <p>Specifies the types of personally identifiable information (PII) to redact
     * from a transcript. You can include as many types as you'd like, or you can
     * select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in your
     * Call Analytics request, you must also include
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>, but
     * you can't include both. </p> <p>Values must be comma-separated and can include:
     * <code>ADDRESS</code>, <code>BANK_ACCOUNT_NUMBER</code>,
     * <code>BANK_ROUTING</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>CREDIT_DEBIT_NUMBER</code>,
     * <code>EMAIL</code>, <code>NAME</code>, <code>PHONE</code>, <code>PIN</code>,
     * <code>SSN</code>, or <code>ALL</code>.</p> <p>Length Constraints: Minimum length
     * of 1. Maximum length of 300.</p>
     */
    inline void SetPiiEntityTypes(const char* value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes.assign(value); }

    /**
     * <p>Specifies the types of personally identifiable information (PII) to redact
     * from a transcript. You can include as many types as you'd like, or you can
     * select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in your
     * Call Analytics request, you must also include
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>, but
     * you can't include both. </p> <p>Values must be comma-separated and can include:
     * <code>ADDRESS</code>, <code>BANK_ACCOUNT_NUMBER</code>,
     * <code>BANK_ROUTING</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>CREDIT_DEBIT_NUMBER</code>,
     * <code>EMAIL</code>, <code>NAME</code>, <code>PHONE</code>, <code>PIN</code>,
     * <code>SSN</code>, or <code>ALL</code>.</p> <p>Length Constraints: Minimum length
     * of 1. Maximum length of 300.</p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithPiiEntityTypes(const Aws::String& value) { SetPiiEntityTypes(value); return *this;}

    /**
     * <p>Specifies the types of personally identifiable information (PII) to redact
     * from a transcript. You can include as many types as you'd like, or you can
     * select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in your
     * Call Analytics request, you must also include
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>, but
     * you can't include both. </p> <p>Values must be comma-separated and can include:
     * <code>ADDRESS</code>, <code>BANK_ACCOUNT_NUMBER</code>,
     * <code>BANK_ROUTING</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>CREDIT_DEBIT_NUMBER</code>,
     * <code>EMAIL</code>, <code>NAME</code>, <code>PHONE</code>, <code>PIN</code>,
     * <code>SSN</code>, or <code>ALL</code>.</p> <p>Length Constraints: Minimum length
     * of 1. Maximum length of 300.</p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithPiiEntityTypes(Aws::String&& value) { SetPiiEntityTypes(std::move(value)); return *this;}

    /**
     * <p>Specifies the types of personally identifiable information (PII) to redact
     * from a transcript. You can include as many types as you'd like, or you can
     * select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in your
     * Call Analytics request, you must also include
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>, but
     * you can't include both. </p> <p>Values must be comma-separated and can include:
     * <code>ADDRESS</code>, <code>BANK_ACCOUNT_NUMBER</code>,
     * <code>BANK_ROUTING</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>CREDIT_DEBIT_NUMBER</code>,
     * <code>EMAIL</code>, <code>NAME</code>, <code>PHONE</code>, <code>PIN</code>,
     * <code>SSN</code>, or <code>ALL</code>.</p> <p>Length Constraints: Minimum length
     * of 1. Maximum length of 300.</p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithPiiEntityTypes(const char* value) { SetPiiEntityTypes(value); return *this;}


    /**
     * <p>If true, <code>UtteranceEvents</code> with <code>IsPartial: true</code> are
     * filtered out of the insights target.</p>
     */
    inline bool GetFilterPartialResults() const{ return m_filterPartialResults; }

    /**
     * <p>If true, <code>UtteranceEvents</code> with <code>IsPartial: true</code> are
     * filtered out of the insights target.</p>
     */
    inline bool FilterPartialResultsHasBeenSet() const { return m_filterPartialResultsHasBeenSet; }

    /**
     * <p>If true, <code>UtteranceEvents</code> with <code>IsPartial: true</code> are
     * filtered out of the insights target.</p>
     */
    inline void SetFilterPartialResults(bool value) { m_filterPartialResultsHasBeenSet = true; m_filterPartialResults = value; }

    /**
     * <p>If true, <code>UtteranceEvents</code> with <code>IsPartial: true</code> are
     * filtered out of the insights target.</p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithFilterPartialResults(bool value) { SetFilterPartialResults(value); return *this;}


    /**
     * <p>The settings for a post-call analysis task in an analytics configuration.</p>
     */
    inline const PostCallAnalyticsSettings& GetPostCallAnalyticsSettings() const{ return m_postCallAnalyticsSettings; }

    /**
     * <p>The settings for a post-call analysis task in an analytics configuration.</p>
     */
    inline bool PostCallAnalyticsSettingsHasBeenSet() const { return m_postCallAnalyticsSettingsHasBeenSet; }

    /**
     * <p>The settings for a post-call analysis task in an analytics configuration.</p>
     */
    inline void SetPostCallAnalyticsSettings(const PostCallAnalyticsSettings& value) { m_postCallAnalyticsSettingsHasBeenSet = true; m_postCallAnalyticsSettings = value; }

    /**
     * <p>The settings for a post-call analysis task in an analytics configuration.</p>
     */
    inline void SetPostCallAnalyticsSettings(PostCallAnalyticsSettings&& value) { m_postCallAnalyticsSettingsHasBeenSet = true; m_postCallAnalyticsSettings = std::move(value); }

    /**
     * <p>The settings for a post-call analysis task in an analytics configuration.</p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithPostCallAnalyticsSettings(const PostCallAnalyticsSettings& value) { SetPostCallAnalyticsSettings(value); return *this;}

    /**
     * <p>The settings for a post-call analysis task in an analytics configuration.</p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithPostCallAnalyticsSettings(PostCallAnalyticsSettings&& value) { SetPostCallAnalyticsSettings(std::move(value)); return *this;}


    /**
     * <p>By default, all <code>CategoryEvents</code> are sent to the insights target.
     * If this parameter is specified, only included categories are sent to the
     * insights target. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCallAnalyticsStreamCategories() const{ return m_callAnalyticsStreamCategories; }

    /**
     * <p>By default, all <code>CategoryEvents</code> are sent to the insights target.
     * If this parameter is specified, only included categories are sent to the
     * insights target. </p>
     */
    inline bool CallAnalyticsStreamCategoriesHasBeenSet() const { return m_callAnalyticsStreamCategoriesHasBeenSet; }

    /**
     * <p>By default, all <code>CategoryEvents</code> are sent to the insights target.
     * If this parameter is specified, only included categories are sent to the
     * insights target. </p>
     */
    inline void SetCallAnalyticsStreamCategories(const Aws::Vector<Aws::String>& value) { m_callAnalyticsStreamCategoriesHasBeenSet = true; m_callAnalyticsStreamCategories = value; }

    /**
     * <p>By default, all <code>CategoryEvents</code> are sent to the insights target.
     * If this parameter is specified, only included categories are sent to the
     * insights target. </p>
     */
    inline void SetCallAnalyticsStreamCategories(Aws::Vector<Aws::String>&& value) { m_callAnalyticsStreamCategoriesHasBeenSet = true; m_callAnalyticsStreamCategories = std::move(value); }

    /**
     * <p>By default, all <code>CategoryEvents</code> are sent to the insights target.
     * If this parameter is specified, only included categories are sent to the
     * insights target. </p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithCallAnalyticsStreamCategories(const Aws::Vector<Aws::String>& value) { SetCallAnalyticsStreamCategories(value); return *this;}

    /**
     * <p>By default, all <code>CategoryEvents</code> are sent to the insights target.
     * If this parameter is specified, only included categories are sent to the
     * insights target. </p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& WithCallAnalyticsStreamCategories(Aws::Vector<Aws::String>&& value) { SetCallAnalyticsStreamCategories(std::move(value)); return *this;}

    /**
     * <p>By default, all <code>CategoryEvents</code> are sent to the insights target.
     * If this parameter is specified, only included categories are sent to the
     * insights target. </p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& AddCallAnalyticsStreamCategories(const Aws::String& value) { m_callAnalyticsStreamCategoriesHasBeenSet = true; m_callAnalyticsStreamCategories.push_back(value); return *this; }

    /**
     * <p>By default, all <code>CategoryEvents</code> are sent to the insights target.
     * If this parameter is specified, only included categories are sent to the
     * insights target. </p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& AddCallAnalyticsStreamCategories(Aws::String&& value) { m_callAnalyticsStreamCategoriesHasBeenSet = true; m_callAnalyticsStreamCategories.push_back(std::move(value)); return *this; }

    /**
     * <p>By default, all <code>CategoryEvents</code> are sent to the insights target.
     * If this parameter is specified, only included categories are sent to the
     * insights target. </p>
     */
    inline AmazonTranscribeCallAnalyticsProcessorConfiguration& AddCallAnalyticsStreamCategories(const char* value) { m_callAnalyticsStreamCategoriesHasBeenSet = true; m_callAnalyticsStreamCategories.push_back(value); return *this; }

  private:

    CallAnalyticsLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet = false;

    VocabularyFilterMethod m_vocabularyFilterMethod;
    bool m_vocabularyFilterMethodHasBeenSet = false;

    Aws::String m_languageModelName;
    bool m_languageModelNameHasBeenSet = false;

    bool m_enablePartialResultsStabilization;
    bool m_enablePartialResultsStabilizationHasBeenSet = false;

    PartialResultsStability m_partialResultsStability;
    bool m_partialResultsStabilityHasBeenSet = false;

    ContentType m_contentIdentificationType;
    bool m_contentIdentificationTypeHasBeenSet = false;

    ContentType m_contentRedactionType;
    bool m_contentRedactionTypeHasBeenSet = false;

    Aws::String m_piiEntityTypes;
    bool m_piiEntityTypesHasBeenSet = false;

    bool m_filterPartialResults;
    bool m_filterPartialResultsHasBeenSet = false;

    PostCallAnalyticsSettings m_postCallAnalyticsSettings;
    bool m_postCallAnalyticsSettingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_callAnalyticsStreamCategories;
    bool m_callAnalyticsStreamCategoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
