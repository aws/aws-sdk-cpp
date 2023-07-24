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
   * processor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/AmazonTranscribeProcessorConfiguration">AWS
   * API Reference</a></p>
   */
  class AmazonTranscribeProcessorConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API AmazonTranscribeProcessorConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API AmazonTranscribeProcessorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API AmazonTranscribeProcessorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The language code that represents the language spoken in your audio.</p>
     * <p>If you're unsure of the language spoken in your audio, consider using
     * <code>IdentifyLanguage</code> to enable automatic language identification.</p>
     * <p>For a list of languages that real-time Call Analytics supports, see the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages table</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline const CallAnalyticsLanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code that represents the language spoken in your audio.</p>
     * <p>If you're unsure of the language spoken in your audio, consider using
     * <code>IdentifyLanguage</code> to enable automatic language identification.</p>
     * <p>For a list of languages that real-time Call Analytics supports, see the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages table</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code that represents the language spoken in your audio.</p>
     * <p>If you're unsure of the language spoken in your audio, consider using
     * <code>IdentifyLanguage</code> to enable automatic language identification.</p>
     * <p>For a list of languages that real-time Call Analytics supports, see the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages table</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline void SetLanguageCode(const CallAnalyticsLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code that represents the language spoken in your audio.</p>
     * <p>If you're unsure of the language spoken in your audio, consider using
     * <code>IdentifyLanguage</code> to enable automatic language identification.</p>
     * <p>For a list of languages that real-time Call Analytics supports, see the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages table</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline void SetLanguageCode(CallAnalyticsLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code that represents the language spoken in your audio.</p>
     * <p>If you're unsure of the language spoken in your audio, consider using
     * <code>IdentifyLanguage</code> to enable automatic language identification.</p>
     * <p>For a list of languages that real-time Call Analytics supports, see the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages table</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithLanguageCode(const CallAnalyticsLanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code that represents the language spoken in your audio.</p>
     * <p>If you're unsure of the language spoken in your audio, consider using
     * <code>IdentifyLanguage</code> to enable automatic language identification.</p>
     * <p>For a list of languages that real-time Call Analytics supports, see the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages table</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithLanguageCode(CallAnalyticsLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The name of the custom vocabulary that you specified in your Call Analytics
     * request.</p> <p>Length Constraints: Minimum length of 1. Maximum length of
     * 200.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the custom vocabulary that you specified in your Call Analytics
     * request.</p> <p>Length Constraints: Minimum length of 1. Maximum length of
     * 200.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of the custom vocabulary that you specified in your Call Analytics
     * request.</p> <p>Length Constraints: Minimum length of 1. Maximum length of
     * 200.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of the custom vocabulary that you specified in your Call Analytics
     * request.</p> <p>Length Constraints: Minimum length of 1. Maximum length of
     * 200.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the custom vocabulary that you specified in your Call Analytics
     * request.</p> <p>Length Constraints: Minimum length of 1. Maximum length of
     * 200.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of the custom vocabulary that you specified in your Call Analytics
     * request.</p> <p>Length Constraints: Minimum length of 1. Maximum length of
     * 200.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the custom vocabulary that you specified in your Call Analytics
     * request.</p> <p>Length Constraints: Minimum length of 1. Maximum length of
     * 200.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom vocabulary that you specified in your Call Analytics
     * request.</p> <p>Length Constraints: Minimum length of 1. Maximum length of
     * 200.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The name of the custom vocabulary filter that you specified in your Call
     * Analytics request.</p> <p>Length Constraints: Minimum length of 1. Maximum
     * length of 200.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>The name of the custom vocabulary filter that you specified in your Call
     * Analytics request.</p> <p>Length Constraints: Minimum length of 1. Maximum
     * length of 200.</p>
     */
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }

    /**
     * <p>The name of the custom vocabulary filter that you specified in your Call
     * Analytics request.</p> <p>Length Constraints: Minimum length of 1. Maximum
     * length of 200.</p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }

    /**
     * <p>The name of the custom vocabulary filter that you specified in your Call
     * Analytics request.</p> <p>Length Constraints: Minimum length of 1. Maximum
     * length of 200.</p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }

    /**
     * <p>The name of the custom vocabulary filter that you specified in your Call
     * Analytics request.</p> <p>Length Constraints: Minimum length of 1. Maximum
     * length of 200.</p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }

    /**
     * <p>The name of the custom vocabulary filter that you specified in your Call
     * Analytics request.</p> <p>Length Constraints: Minimum length of 1. Maximum
     * length of 200.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>The name of the custom vocabulary filter that you specified in your Call
     * Analytics request.</p> <p>Length Constraints: Minimum length of 1. Maximum
     * length of 200.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom vocabulary filter that you specified in your Call
     * Analytics request.</p> <p>Length Constraints: Minimum length of 1. Maximum
     * length of 200.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


    /**
     * <p>The vocabulary filtering method used in your Call Analytics
     * transcription.</p>
     */
    inline const VocabularyFilterMethod& GetVocabularyFilterMethod() const{ return m_vocabularyFilterMethod; }

    /**
     * <p>The vocabulary filtering method used in your Call Analytics
     * transcription.</p>
     */
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }

    /**
     * <p>The vocabulary filtering method used in your Call Analytics
     * transcription.</p>
     */
    inline void SetVocabularyFilterMethod(const VocabularyFilterMethod& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }

    /**
     * <p>The vocabulary filtering method used in your Call Analytics
     * transcription.</p>
     */
    inline void SetVocabularyFilterMethod(VocabularyFilterMethod&& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = std::move(value); }

    /**
     * <p>The vocabulary filtering method used in your Call Analytics
     * transcription.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithVocabularyFilterMethod(const VocabularyFilterMethod& value) { SetVocabularyFilterMethod(value); return *this;}

    /**
     * <p>The vocabulary filtering method used in your Call Analytics
     * transcription.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithVocabularyFilterMethod(VocabularyFilterMethod&& value) { SetVocabularyFilterMethod(std::move(value)); return *this;}


    /**
     * <p>Enables speaker partitioning (diarization) in your transcription output.
     * Speaker partitioning labels the speech from individual speakers in your media
     * file.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/diarization.html">Partitioning
     * speakers (diarization)</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline bool GetShowSpeakerLabel() const{ return m_showSpeakerLabel; }

    /**
     * <p>Enables speaker partitioning (diarization) in your transcription output.
     * Speaker partitioning labels the speech from individual speakers in your media
     * file.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/diarization.html">Partitioning
     * speakers (diarization)</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline bool ShowSpeakerLabelHasBeenSet() const { return m_showSpeakerLabelHasBeenSet; }

    /**
     * <p>Enables speaker partitioning (diarization) in your transcription output.
     * Speaker partitioning labels the speech from individual speakers in your media
     * file.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/diarization.html">Partitioning
     * speakers (diarization)</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline void SetShowSpeakerLabel(bool value) { m_showSpeakerLabelHasBeenSet = true; m_showSpeakerLabel = value; }

    /**
     * <p>Enables speaker partitioning (diarization) in your transcription output.
     * Speaker partitioning labels the speech from individual speakers in your media
     * file.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/diarization.html">Partitioning
     * speakers (diarization)</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithShowSpeakerLabel(bool value) { SetShowSpeakerLabel(value); return *this;}


    /**
     * <p>Enables partial result stabilization for your transcription. Partial result
     * stabilization can reduce latency in your output, but may impact accuracy.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline bool GetEnablePartialResultsStabilization() const{ return m_enablePartialResultsStabilization; }

    /**
     * <p>Enables partial result stabilization for your transcription. Partial result
     * stabilization can reduce latency in your output, but may impact accuracy.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline bool EnablePartialResultsStabilizationHasBeenSet() const { return m_enablePartialResultsStabilizationHasBeenSet; }

    /**
     * <p>Enables partial result stabilization for your transcription. Partial result
     * stabilization can reduce latency in your output, but may impact accuracy.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline void SetEnablePartialResultsStabilization(bool value) { m_enablePartialResultsStabilizationHasBeenSet = true; m_enablePartialResultsStabilization = value; }

    /**
     * <p>Enables partial result stabilization for your transcription. Partial result
     * stabilization can reduce latency in your output, but may impact accuracy.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithEnablePartialResultsStabilization(bool value) { SetEnablePartialResultsStabilization(value); return *this;}


    /**
     * <p>The level of stability to use when you enable partial results stabilization
     * (<code>EnablePartialResultsStabilization</code>).</p> <p>Low stability provides
     * the highest accuracy. High stability transcribes faster, but with slightly lower
     * accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline const PartialResultsStability& GetPartialResultsStability() const{ return m_partialResultsStability; }

    /**
     * <p>The level of stability to use when you enable partial results stabilization
     * (<code>EnablePartialResultsStabilization</code>).</p> <p>Low stability provides
     * the highest accuracy. High stability transcribes faster, but with slightly lower
     * accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline bool PartialResultsStabilityHasBeenSet() const { return m_partialResultsStabilityHasBeenSet; }

    /**
     * <p>The level of stability to use when you enable partial results stabilization
     * (<code>EnablePartialResultsStabilization</code>).</p> <p>Low stability provides
     * the highest accuracy. High stability transcribes faster, but with slightly lower
     * accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline void SetPartialResultsStability(const PartialResultsStability& value) { m_partialResultsStabilityHasBeenSet = true; m_partialResultsStability = value; }

    /**
     * <p>The level of stability to use when you enable partial results stabilization
     * (<code>EnablePartialResultsStabilization</code>).</p> <p>Low stability provides
     * the highest accuracy. High stability transcribes faster, but with slightly lower
     * accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline void SetPartialResultsStability(PartialResultsStability&& value) { m_partialResultsStabilityHasBeenSet = true; m_partialResultsStability = std::move(value); }

    /**
     * <p>The level of stability to use when you enable partial results stabilization
     * (<code>EnablePartialResultsStabilization</code>).</p> <p>Low stability provides
     * the highest accuracy. High stability transcribes faster, but with slightly lower
     * accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithPartialResultsStability(const PartialResultsStability& value) { SetPartialResultsStability(value); return *this;}

    /**
     * <p>The level of stability to use when you enable partial results stabilization
     * (<code>EnablePartialResultsStabilization</code>).</p> <p>Low stability provides
     * the highest accuracy. High stability transcribes faster, but with slightly lower
     * accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithPartialResultsStability(PartialResultsStability&& value) { SetPartialResultsStability(std::move(value)); return *this;}


    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you set both, your
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
     * and <code>ContentRedactionType</code> in the same request. If you set both, your
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
     * and <code>ContentRedactionType</code> in the same request. If you set both, your
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
     * and <code>ContentRedactionType</code> in the same request. If you set both, your
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
     * and <code>ContentRedactionType</code> in the same request. If you set both, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithContentIdentificationType(const ContentType& value) { SetContentIdentificationType(value); return *this;}

    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you set both, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithContentIdentificationType(ContentType&& value) { SetContentIdentificationType(std::move(value)); return *this;}


    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in PiiEntityTypes is redacted upon complete transcription of an audio
     * segment.</p> <p>You can’t set ContentRedactionType and ContentIdentificationType
     * in the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline const ContentType& GetContentRedactionType() const{ return m_contentRedactionType; }

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in PiiEntityTypes is redacted upon complete transcription of an audio
     * segment.</p> <p>You can’t set ContentRedactionType and ContentIdentificationType
     * in the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline bool ContentRedactionTypeHasBeenSet() const { return m_contentRedactionTypeHasBeenSet; }

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in PiiEntityTypes is redacted upon complete transcription of an audio
     * segment.</p> <p>You can’t set ContentRedactionType and ContentIdentificationType
     * in the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline void SetContentRedactionType(const ContentType& value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = value; }

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in PiiEntityTypes is redacted upon complete transcription of an audio
     * segment.</p> <p>You can’t set ContentRedactionType and ContentIdentificationType
     * in the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline void SetContentRedactionType(ContentType&& value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = std::move(value); }

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in PiiEntityTypes is redacted upon complete transcription of an audio
     * segment.</p> <p>You can’t set ContentRedactionType and ContentIdentificationType
     * in the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithContentRedactionType(const ContentType& value) { SetContentRedactionType(value); return *this;}

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in PiiEntityTypes is redacted upon complete transcription of an audio
     * segment.</p> <p>You can’t set ContentRedactionType and ContentIdentificationType
     * in the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a> in the <i>Amazon
     * Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithContentRedactionType(ContentType&& value) { SetContentRedactionType(std::move(value)); return *this;}


    /**
     * <p>The types of personally identifiable information (PII) to redact from a
     * transcript. You can include as many types as you'd like, or you can select
     * <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in your Call
     * Analytics request, you must also include <code>ContentIdentificationType</code>
     * or <code>ContentRedactionType</code>, but you can't include both.</p> <p>Values
     * must be comma-separated and can include: <code>ADDRESS</code>,
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_CVV</code>, <code>CREDIT_DEBIT_EXPIRY</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>EMAIL</code>, <code>NAME</code>,
     * <code>PHONE</code>, <code>PIN</code>, <code>SSN</code>, or <code>ALL</code>.</p>
     * <p>If you leave this parameter empty, the default behavior is equivalent to
     * <code>ALL</code>.</p>
     */
    inline const Aws::String& GetPiiEntityTypes() const{ return m_piiEntityTypes; }

    /**
     * <p>The types of personally identifiable information (PII) to redact from a
     * transcript. You can include as many types as you'd like, or you can select
     * <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in your Call
     * Analytics request, you must also include <code>ContentIdentificationType</code>
     * or <code>ContentRedactionType</code>, but you can't include both.</p> <p>Values
     * must be comma-separated and can include: <code>ADDRESS</code>,
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_CVV</code>, <code>CREDIT_DEBIT_EXPIRY</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>EMAIL</code>, <code>NAME</code>,
     * <code>PHONE</code>, <code>PIN</code>, <code>SSN</code>, or <code>ALL</code>.</p>
     * <p>If you leave this parameter empty, the default behavior is equivalent to
     * <code>ALL</code>.</p>
     */
    inline bool PiiEntityTypesHasBeenSet() const { return m_piiEntityTypesHasBeenSet; }

    /**
     * <p>The types of personally identifiable information (PII) to redact from a
     * transcript. You can include as many types as you'd like, or you can select
     * <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in your Call
     * Analytics request, you must also include <code>ContentIdentificationType</code>
     * or <code>ContentRedactionType</code>, but you can't include both.</p> <p>Values
     * must be comma-separated and can include: <code>ADDRESS</code>,
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_CVV</code>, <code>CREDIT_DEBIT_EXPIRY</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>EMAIL</code>, <code>NAME</code>,
     * <code>PHONE</code>, <code>PIN</code>, <code>SSN</code>, or <code>ALL</code>.</p>
     * <p>If you leave this parameter empty, the default behavior is equivalent to
     * <code>ALL</code>.</p>
     */
    inline void SetPiiEntityTypes(const Aws::String& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = value; }

    /**
     * <p>The types of personally identifiable information (PII) to redact from a
     * transcript. You can include as many types as you'd like, or you can select
     * <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in your Call
     * Analytics request, you must also include <code>ContentIdentificationType</code>
     * or <code>ContentRedactionType</code>, but you can't include both.</p> <p>Values
     * must be comma-separated and can include: <code>ADDRESS</code>,
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_CVV</code>, <code>CREDIT_DEBIT_EXPIRY</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>EMAIL</code>, <code>NAME</code>,
     * <code>PHONE</code>, <code>PIN</code>, <code>SSN</code>, or <code>ALL</code>.</p>
     * <p>If you leave this parameter empty, the default behavior is equivalent to
     * <code>ALL</code>.</p>
     */
    inline void SetPiiEntityTypes(Aws::String&& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = std::move(value); }

    /**
     * <p>The types of personally identifiable information (PII) to redact from a
     * transcript. You can include as many types as you'd like, or you can select
     * <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in your Call
     * Analytics request, you must also include <code>ContentIdentificationType</code>
     * or <code>ContentRedactionType</code>, but you can't include both.</p> <p>Values
     * must be comma-separated and can include: <code>ADDRESS</code>,
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_CVV</code>, <code>CREDIT_DEBIT_EXPIRY</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>EMAIL</code>, <code>NAME</code>,
     * <code>PHONE</code>, <code>PIN</code>, <code>SSN</code>, or <code>ALL</code>.</p>
     * <p>If you leave this parameter empty, the default behavior is equivalent to
     * <code>ALL</code>.</p>
     */
    inline void SetPiiEntityTypes(const char* value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes.assign(value); }

    /**
     * <p>The types of personally identifiable information (PII) to redact from a
     * transcript. You can include as many types as you'd like, or you can select
     * <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in your Call
     * Analytics request, you must also include <code>ContentIdentificationType</code>
     * or <code>ContentRedactionType</code>, but you can't include both.</p> <p>Values
     * must be comma-separated and can include: <code>ADDRESS</code>,
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_CVV</code>, <code>CREDIT_DEBIT_EXPIRY</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>EMAIL</code>, <code>NAME</code>,
     * <code>PHONE</code>, <code>PIN</code>, <code>SSN</code>, or <code>ALL</code>.</p>
     * <p>If you leave this parameter empty, the default behavior is equivalent to
     * <code>ALL</code>.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithPiiEntityTypes(const Aws::String& value) { SetPiiEntityTypes(value); return *this;}

    /**
     * <p>The types of personally identifiable information (PII) to redact from a
     * transcript. You can include as many types as you'd like, or you can select
     * <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in your Call
     * Analytics request, you must also include <code>ContentIdentificationType</code>
     * or <code>ContentRedactionType</code>, but you can't include both.</p> <p>Values
     * must be comma-separated and can include: <code>ADDRESS</code>,
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_CVV</code>, <code>CREDIT_DEBIT_EXPIRY</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>EMAIL</code>, <code>NAME</code>,
     * <code>PHONE</code>, <code>PIN</code>, <code>SSN</code>, or <code>ALL</code>.</p>
     * <p>If you leave this parameter empty, the default behavior is equivalent to
     * <code>ALL</code>.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithPiiEntityTypes(Aws::String&& value) { SetPiiEntityTypes(std::move(value)); return *this;}

    /**
     * <p>The types of personally identifiable information (PII) to redact from a
     * transcript. You can include as many types as you'd like, or you can select
     * <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in your Call
     * Analytics request, you must also include <code>ContentIdentificationType</code>
     * or <code>ContentRedactionType</code>, but you can't include both.</p> <p>Values
     * must be comma-separated and can include: <code>ADDRESS</code>,
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_CVV</code>, <code>CREDIT_DEBIT_EXPIRY</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>EMAIL</code>, <code>NAME</code>,
     * <code>PHONE</code>, <code>PIN</code>, <code>SSN</code>, or <code>ALL</code>.</p>
     * <p>If you leave this parameter empty, the default behavior is equivalent to
     * <code>ALL</code>.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithPiiEntityTypes(const char* value) { SetPiiEntityTypes(value); return *this;}


    /**
     * <p>The name of the custom language model that you want to use when processing
     * your transcription. Note that language model names are case sensitive.</p>
     * <p>The language of the specified language model must match the language code you
     * specify in your transcription request. If the languages don't match, the custom
     * language model isn't applied. There are no errors or warnings associated with a
     * language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline const Aws::String& GetLanguageModelName() const{ return m_languageModelName; }

    /**
     * <p>The name of the custom language model that you want to use when processing
     * your transcription. Note that language model names are case sensitive.</p>
     * <p>The language of the specified language model must match the language code you
     * specify in your transcription request. If the languages don't match, the custom
     * language model isn't applied. There are no errors or warnings associated with a
     * language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline bool LanguageModelNameHasBeenSet() const { return m_languageModelNameHasBeenSet; }

    /**
     * <p>The name of the custom language model that you want to use when processing
     * your transcription. Note that language model names are case sensitive.</p>
     * <p>The language of the specified language model must match the language code you
     * specify in your transcription request. If the languages don't match, the custom
     * language model isn't applied. There are no errors or warnings associated with a
     * language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline void SetLanguageModelName(const Aws::String& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = value; }

    /**
     * <p>The name of the custom language model that you want to use when processing
     * your transcription. Note that language model names are case sensitive.</p>
     * <p>The language of the specified language model must match the language code you
     * specify in your transcription request. If the languages don't match, the custom
     * language model isn't applied. There are no errors or warnings associated with a
     * language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline void SetLanguageModelName(Aws::String&& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = std::move(value); }

    /**
     * <p>The name of the custom language model that you want to use when processing
     * your transcription. Note that language model names are case sensitive.</p>
     * <p>The language of the specified language model must match the language code you
     * specify in your transcription request. If the languages don't match, the custom
     * language model isn't applied. There are no errors or warnings associated with a
     * language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline void SetLanguageModelName(const char* value) { m_languageModelNameHasBeenSet = true; m_languageModelName.assign(value); }

    /**
     * <p>The name of the custom language model that you want to use when processing
     * your transcription. Note that language model names are case sensitive.</p>
     * <p>The language of the specified language model must match the language code you
     * specify in your transcription request. If the languages don't match, the custom
     * language model isn't applied. There are no errors or warnings associated with a
     * language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithLanguageModelName(const Aws::String& value) { SetLanguageModelName(value); return *this;}

    /**
     * <p>The name of the custom language model that you want to use when processing
     * your transcription. Note that language model names are case sensitive.</p>
     * <p>The language of the specified language model must match the language code you
     * specify in your transcription request. If the languages don't match, the custom
     * language model isn't applied. There are no errors or warnings associated with a
     * language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithLanguageModelName(Aws::String&& value) { SetLanguageModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom language model that you want to use when processing
     * your transcription. Note that language model names are case sensitive.</p>
     * <p>The language of the specified language model must match the language code you
     * specify in your transcription request. If the languages don't match, the custom
     * language model isn't applied. There are no errors or warnings associated with a
     * language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithLanguageModelName(const char* value) { SetLanguageModelName(value); return *this;}


    /**
     * <p>If true, <code>TranscriptEvents</code> with <code>IsPartial: true</code> are
     * filtered out of the insights target.</p>
     */
    inline bool GetFilterPartialResults() const{ return m_filterPartialResults; }

    /**
     * <p>If true, <code>TranscriptEvents</code> with <code>IsPartial: true</code> are
     * filtered out of the insights target.</p>
     */
    inline bool FilterPartialResultsHasBeenSet() const { return m_filterPartialResultsHasBeenSet; }

    /**
     * <p>If true, <code>TranscriptEvents</code> with <code>IsPartial: true</code> are
     * filtered out of the insights target.</p>
     */
    inline void SetFilterPartialResults(bool value) { m_filterPartialResultsHasBeenSet = true; m_filterPartialResults = value; }

    /**
     * <p>If true, <code>TranscriptEvents</code> with <code>IsPartial: true</code> are
     * filtered out of the insights target.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithFilterPartialResults(bool value) { SetFilterPartialResults(value); return *this;}


    /**
     * <p>Turns language identification on or off.</p>
     */
    inline bool GetIdentifyLanguage() const{ return m_identifyLanguage; }

    /**
     * <p>Turns language identification on or off.</p>
     */
    inline bool IdentifyLanguageHasBeenSet() const { return m_identifyLanguageHasBeenSet; }

    /**
     * <p>Turns language identification on or off.</p>
     */
    inline void SetIdentifyLanguage(bool value) { m_identifyLanguageHasBeenSet = true; m_identifyLanguage = value; }

    /**
     * <p>Turns language identification on or off.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithIdentifyLanguage(bool value) { SetIdentifyLanguage(value); return *this;}


    /**
     * <p>The language options for the transcription, such as automatic language
     * detection.</p>
     */
    inline const Aws::String& GetLanguageOptions() const{ return m_languageOptions; }

    /**
     * <p>The language options for the transcription, such as automatic language
     * detection.</p>
     */
    inline bool LanguageOptionsHasBeenSet() const { return m_languageOptionsHasBeenSet; }

    /**
     * <p>The language options for the transcription, such as automatic language
     * detection.</p>
     */
    inline void SetLanguageOptions(const Aws::String& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = value; }

    /**
     * <p>The language options for the transcription, such as automatic language
     * detection.</p>
     */
    inline void SetLanguageOptions(Aws::String&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = std::move(value); }

    /**
     * <p>The language options for the transcription, such as automatic language
     * detection.</p>
     */
    inline void SetLanguageOptions(const char* value) { m_languageOptionsHasBeenSet = true; m_languageOptions.assign(value); }

    /**
     * <p>The language options for the transcription, such as automatic language
     * detection.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithLanguageOptions(const Aws::String& value) { SetLanguageOptions(value); return *this;}

    /**
     * <p>The language options for the transcription, such as automatic language
     * detection.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithLanguageOptions(Aws::String&& value) { SetLanguageOptions(std::move(value)); return *this;}

    /**
     * <p>The language options for the transcription, such as automatic language
     * detection.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithLanguageOptions(const char* value) { SetLanguageOptions(value); return *this;}


    /**
     * <p>The preferred language for the transcription.</p>
     */
    inline const CallAnalyticsLanguageCode& GetPreferredLanguage() const{ return m_preferredLanguage; }

    /**
     * <p>The preferred language for the transcription.</p>
     */
    inline bool PreferredLanguageHasBeenSet() const { return m_preferredLanguageHasBeenSet; }

    /**
     * <p>The preferred language for the transcription.</p>
     */
    inline void SetPreferredLanguage(const CallAnalyticsLanguageCode& value) { m_preferredLanguageHasBeenSet = true; m_preferredLanguage = value; }

    /**
     * <p>The preferred language for the transcription.</p>
     */
    inline void SetPreferredLanguage(CallAnalyticsLanguageCode&& value) { m_preferredLanguageHasBeenSet = true; m_preferredLanguage = std::move(value); }

    /**
     * <p>The preferred language for the transcription.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithPreferredLanguage(const CallAnalyticsLanguageCode& value) { SetPreferredLanguage(value); return *this;}

    /**
     * <p>The preferred language for the transcription.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithPreferredLanguage(CallAnalyticsLanguageCode&& value) { SetPreferredLanguage(std::move(value)); return *this;}


    /**
     * <p>The names of the custom vocabulary or vocabularies used during
     * transcription.</p>
     */
    inline const Aws::String& GetVocabularyNames() const{ return m_vocabularyNames; }

    /**
     * <p>The names of the custom vocabulary or vocabularies used during
     * transcription.</p>
     */
    inline bool VocabularyNamesHasBeenSet() const { return m_vocabularyNamesHasBeenSet; }

    /**
     * <p>The names of the custom vocabulary or vocabularies used during
     * transcription.</p>
     */
    inline void SetVocabularyNames(const Aws::String& value) { m_vocabularyNamesHasBeenSet = true; m_vocabularyNames = value; }

    /**
     * <p>The names of the custom vocabulary or vocabularies used during
     * transcription.</p>
     */
    inline void SetVocabularyNames(Aws::String&& value) { m_vocabularyNamesHasBeenSet = true; m_vocabularyNames = std::move(value); }

    /**
     * <p>The names of the custom vocabulary or vocabularies used during
     * transcription.</p>
     */
    inline void SetVocabularyNames(const char* value) { m_vocabularyNamesHasBeenSet = true; m_vocabularyNames.assign(value); }

    /**
     * <p>The names of the custom vocabulary or vocabularies used during
     * transcription.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithVocabularyNames(const Aws::String& value) { SetVocabularyNames(value); return *this;}

    /**
     * <p>The names of the custom vocabulary or vocabularies used during
     * transcription.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithVocabularyNames(Aws::String&& value) { SetVocabularyNames(std::move(value)); return *this;}

    /**
     * <p>The names of the custom vocabulary or vocabularies used during
     * transcription.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithVocabularyNames(const char* value) { SetVocabularyNames(value); return *this;}


    /**
     * <p>The names of the custom vocabulary filter or filters using during
     * transcription.</p>
     */
    inline const Aws::String& GetVocabularyFilterNames() const{ return m_vocabularyFilterNames; }

    /**
     * <p>The names of the custom vocabulary filter or filters using during
     * transcription.</p>
     */
    inline bool VocabularyFilterNamesHasBeenSet() const { return m_vocabularyFilterNamesHasBeenSet; }

    /**
     * <p>The names of the custom vocabulary filter or filters using during
     * transcription.</p>
     */
    inline void SetVocabularyFilterNames(const Aws::String& value) { m_vocabularyFilterNamesHasBeenSet = true; m_vocabularyFilterNames = value; }

    /**
     * <p>The names of the custom vocabulary filter or filters using during
     * transcription.</p>
     */
    inline void SetVocabularyFilterNames(Aws::String&& value) { m_vocabularyFilterNamesHasBeenSet = true; m_vocabularyFilterNames = std::move(value); }

    /**
     * <p>The names of the custom vocabulary filter or filters using during
     * transcription.</p>
     */
    inline void SetVocabularyFilterNames(const char* value) { m_vocabularyFilterNamesHasBeenSet = true; m_vocabularyFilterNames.assign(value); }

    /**
     * <p>The names of the custom vocabulary filter or filters using during
     * transcription.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithVocabularyFilterNames(const Aws::String& value) { SetVocabularyFilterNames(value); return *this;}

    /**
     * <p>The names of the custom vocabulary filter or filters using during
     * transcription.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithVocabularyFilterNames(Aws::String&& value) { SetVocabularyFilterNames(std::move(value)); return *this;}

    /**
     * <p>The names of the custom vocabulary filter or filters using during
     * transcription.</p>
     */
    inline AmazonTranscribeProcessorConfiguration& WithVocabularyFilterNames(const char* value) { SetVocabularyFilterNames(value); return *this;}

  private:

    CallAnalyticsLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet = false;

    VocabularyFilterMethod m_vocabularyFilterMethod;
    bool m_vocabularyFilterMethodHasBeenSet = false;

    bool m_showSpeakerLabel;
    bool m_showSpeakerLabelHasBeenSet = false;

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

    Aws::String m_languageModelName;
    bool m_languageModelNameHasBeenSet = false;

    bool m_filterPartialResults;
    bool m_filterPartialResultsHasBeenSet = false;

    bool m_identifyLanguage;
    bool m_identifyLanguageHasBeenSet = false;

    Aws::String m_languageOptions;
    bool m_languageOptionsHasBeenSet = false;

    CallAnalyticsLanguageCode m_preferredLanguage;
    bool m_preferredLanguageHasBeenSet = false;

    Aws::String m_vocabularyNames;
    bool m_vocabularyNamesHasBeenSet = false;

    Aws::String m_vocabularyFilterNames;
    bool m_vocabularyFilterNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
