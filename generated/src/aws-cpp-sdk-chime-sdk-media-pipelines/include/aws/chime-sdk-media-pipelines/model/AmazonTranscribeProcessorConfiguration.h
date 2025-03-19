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
   * processor.</p>  <p>Calls to this API must include a
   * <code>LanguageCode</code>, <code>IdentifyLanguage</code>, or
   * <code>IdentifyMultipleLanguages</code> parameter. If you include more than one
   * of those parameters, your transcription job fails.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/AmazonTranscribeProcessorConfiguration">AWS
   * API Reference</a></p>
   */
  class AmazonTranscribeProcessorConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API AmazonTranscribeProcessorConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API AmazonTranscribeProcessorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API AmazonTranscribeProcessorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The language code that represents the language spoken in your audio.</p>
     * <p>If you're unsure of the language spoken in your audio, consider using
     * <code>IdentifyLanguage</code> to enable automatic language identification.</p>
     * <p>For a list of languages that real-time Call Analytics supports, see the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages table</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline CallAnalyticsLanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(CallAnalyticsLanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline AmazonTranscribeProcessorConfiguration& WithLanguageCode(CallAnalyticsLanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom vocabulary that you specified in your Call Analytics
     * request.</p> <p>Length Constraints: Minimum length of 1. Maximum length of
     * 200.</p>
     */
    inline const Aws::String& GetVocabularyName() const { return m_vocabularyName; }
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }
    template<typename VocabularyNameT = Aws::String>
    void SetVocabularyName(VocabularyNameT&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::forward<VocabularyNameT>(value); }
    template<typename VocabularyNameT = Aws::String>
    AmazonTranscribeProcessorConfiguration& WithVocabularyName(VocabularyNameT&& value) { SetVocabularyName(std::forward<VocabularyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom vocabulary filter that you specified in your Call
     * Analytics request.</p> <p>Length Constraints: Minimum length of 1. Maximum
     * length of 200.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const { return m_vocabularyFilterName; }
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }
    template<typename VocabularyFilterNameT = Aws::String>
    void SetVocabularyFilterName(VocabularyFilterNameT&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::forward<VocabularyFilterNameT>(value); }
    template<typename VocabularyFilterNameT = Aws::String>
    AmazonTranscribeProcessorConfiguration& WithVocabularyFilterName(VocabularyFilterNameT&& value) { SetVocabularyFilterName(std::forward<VocabularyFilterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vocabulary filtering method used in your Call Analytics
     * transcription.</p>
     */
    inline VocabularyFilterMethod GetVocabularyFilterMethod() const { return m_vocabularyFilterMethod; }
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }
    inline void SetVocabularyFilterMethod(VocabularyFilterMethod value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }
    inline AmazonTranscribeProcessorConfiguration& WithVocabularyFilterMethod(VocabularyFilterMethod value) { SetVocabularyFilterMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables speaker partitioning (diarization) in your transcription output.
     * Speaker partitioning labels the speech from individual speakers in your media
     * file.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/diarization.html">Partitioning
     * speakers (diarization)</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline bool GetShowSpeakerLabel() const { return m_showSpeakerLabel; }
    inline bool ShowSpeakerLabelHasBeenSet() const { return m_showSpeakerLabelHasBeenSet; }
    inline void SetShowSpeakerLabel(bool value) { m_showSpeakerLabelHasBeenSet = true; m_showSpeakerLabel = value; }
    inline AmazonTranscribeProcessorConfiguration& WithShowSpeakerLabel(bool value) { SetShowSpeakerLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables partial result stabilization for your transcription. Partial result
     * stabilization can reduce latency in your output, but may impact accuracy.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline bool GetEnablePartialResultsStabilization() const { return m_enablePartialResultsStabilization; }
    inline bool EnablePartialResultsStabilizationHasBeenSet() const { return m_enablePartialResultsStabilizationHasBeenSet; }
    inline void SetEnablePartialResultsStabilization(bool value) { m_enablePartialResultsStabilizationHasBeenSet = true; m_enablePartialResultsStabilization = value; }
    inline AmazonTranscribeProcessorConfiguration& WithEnablePartialResultsStabilization(bool value) { SetEnablePartialResultsStabilization(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of stability to use when you enable partial results stabilization
     * (<code>EnablePartialResultsStabilization</code>).</p> <p>Low stability provides
     * the highest accuracy. High stability transcribes faster, but with slightly lower
     * accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline PartialResultsStability GetPartialResultsStability() const { return m_partialResultsStability; }
    inline bool PartialResultsStabilityHasBeenSet() const { return m_partialResultsStabilityHasBeenSet; }
    inline void SetPartialResultsStability(PartialResultsStability value) { m_partialResultsStabilityHasBeenSet = true; m_partialResultsStability = value; }
    inline AmazonTranscribeProcessorConfiguration& WithPartialResultsStability(PartialResultsStability value) { SetPartialResultsStability(value); return *this;}
    ///@}

    ///@{
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
    inline ContentType GetContentIdentificationType() const { return m_contentIdentificationType; }
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }
    inline void SetContentIdentificationType(ContentType value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }
    inline AmazonTranscribeProcessorConfiguration& WithContentIdentificationType(ContentType value) { SetContentIdentificationType(value); return *this;}
    ///@}

    ///@{
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
    inline ContentType GetContentRedactionType() const { return m_contentRedactionType; }
    inline bool ContentRedactionTypeHasBeenSet() const { return m_contentRedactionTypeHasBeenSet; }
    inline void SetContentRedactionType(ContentType value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = value; }
    inline AmazonTranscribeProcessorConfiguration& WithContentRedactionType(ContentType value) { SetContentRedactionType(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetPiiEntityTypes() const { return m_piiEntityTypes; }
    inline bool PiiEntityTypesHasBeenSet() const { return m_piiEntityTypesHasBeenSet; }
    template<typename PiiEntityTypesT = Aws::String>
    void SetPiiEntityTypes(PiiEntityTypesT&& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = std::forward<PiiEntityTypesT>(value); }
    template<typename PiiEntityTypesT = Aws::String>
    AmazonTranscribeProcessorConfiguration& WithPiiEntityTypes(PiiEntityTypesT&& value) { SetPiiEntityTypes(std::forward<PiiEntityTypesT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetLanguageModelName() const { return m_languageModelName; }
    inline bool LanguageModelNameHasBeenSet() const { return m_languageModelNameHasBeenSet; }
    template<typename LanguageModelNameT = Aws::String>
    void SetLanguageModelName(LanguageModelNameT&& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = std::forward<LanguageModelNameT>(value); }
    template<typename LanguageModelNameT = Aws::String>
    AmazonTranscribeProcessorConfiguration& WithLanguageModelName(LanguageModelNameT&& value) { SetLanguageModelName(std::forward<LanguageModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, <code>TranscriptEvents</code> with <code>IsPartial: true</code> are
     * filtered out of the insights target.</p>
     */
    inline bool GetFilterPartialResults() const { return m_filterPartialResults; }
    inline bool FilterPartialResultsHasBeenSet() const { return m_filterPartialResultsHasBeenSet; }
    inline void SetFilterPartialResults(bool value) { m_filterPartialResultsHasBeenSet = true; m_filterPartialResults = value; }
    inline AmazonTranscribeProcessorConfiguration& WithFilterPartialResults(bool value) { SetFilterPartialResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Turns language identification on or off.</p>
     */
    inline bool GetIdentifyLanguage() const { return m_identifyLanguage; }
    inline bool IdentifyLanguageHasBeenSet() const { return m_identifyLanguageHasBeenSet; }
    inline void SetIdentifyLanguage(bool value) { m_identifyLanguageHasBeenSet = true; m_identifyLanguage = value; }
    inline AmazonTranscribeProcessorConfiguration& WithIdentifyLanguage(bool value) { SetIdentifyLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Turns language identification on or off for multiple languages.</p> 
     * <p>Calls to this API must include a <code>LanguageCode</code>,
     * <code>IdentifyLanguage</code>, or <code>IdentifyMultipleLanguages</code>
     * parameter. If you include more than one of those parameters, your transcription
     * job fails.</p> 
     */
    inline bool GetIdentifyMultipleLanguages() const { return m_identifyMultipleLanguages; }
    inline bool IdentifyMultipleLanguagesHasBeenSet() const { return m_identifyMultipleLanguagesHasBeenSet; }
    inline void SetIdentifyMultipleLanguages(bool value) { m_identifyMultipleLanguagesHasBeenSet = true; m_identifyMultipleLanguages = value; }
    inline AmazonTranscribeProcessorConfiguration& WithIdentifyMultipleLanguages(bool value) { SetIdentifyMultipleLanguages(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language options for the transcription, such as automatic language
     * detection.</p>
     */
    inline const Aws::String& GetLanguageOptions() const { return m_languageOptions; }
    inline bool LanguageOptionsHasBeenSet() const { return m_languageOptionsHasBeenSet; }
    template<typename LanguageOptionsT = Aws::String>
    void SetLanguageOptions(LanguageOptionsT&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = std::forward<LanguageOptionsT>(value); }
    template<typename LanguageOptionsT = Aws::String>
    AmazonTranscribeProcessorConfiguration& WithLanguageOptions(LanguageOptionsT&& value) { SetLanguageOptions(std::forward<LanguageOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preferred language for the transcription.</p>
     */
    inline CallAnalyticsLanguageCode GetPreferredLanguage() const { return m_preferredLanguage; }
    inline bool PreferredLanguageHasBeenSet() const { return m_preferredLanguageHasBeenSet; }
    inline void SetPreferredLanguage(CallAnalyticsLanguageCode value) { m_preferredLanguageHasBeenSet = true; m_preferredLanguage = value; }
    inline AmazonTranscribeProcessorConfiguration& WithPreferredLanguage(CallAnalyticsLanguageCode value) { SetPreferredLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the custom vocabulary or vocabularies used during
     * transcription.</p>
     */
    inline const Aws::String& GetVocabularyNames() const { return m_vocabularyNames; }
    inline bool VocabularyNamesHasBeenSet() const { return m_vocabularyNamesHasBeenSet; }
    template<typename VocabularyNamesT = Aws::String>
    void SetVocabularyNames(VocabularyNamesT&& value) { m_vocabularyNamesHasBeenSet = true; m_vocabularyNames = std::forward<VocabularyNamesT>(value); }
    template<typename VocabularyNamesT = Aws::String>
    AmazonTranscribeProcessorConfiguration& WithVocabularyNames(VocabularyNamesT&& value) { SetVocabularyNames(std::forward<VocabularyNamesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the custom vocabulary filter or filters using during
     * transcription.</p>
     */
    inline const Aws::String& GetVocabularyFilterNames() const { return m_vocabularyFilterNames; }
    inline bool VocabularyFilterNamesHasBeenSet() const { return m_vocabularyFilterNamesHasBeenSet; }
    template<typename VocabularyFilterNamesT = Aws::String>
    void SetVocabularyFilterNames(VocabularyFilterNamesT&& value) { m_vocabularyFilterNamesHasBeenSet = true; m_vocabularyFilterNames = std::forward<VocabularyFilterNamesT>(value); }
    template<typename VocabularyFilterNamesT = Aws::String>
    AmazonTranscribeProcessorConfiguration& WithVocabularyFilterNames(VocabularyFilterNamesT&& value) { SetVocabularyFilterNames(std::forward<VocabularyFilterNamesT>(value)); return *this;}
    ///@}
  private:

    CallAnalyticsLanguageCode m_languageCode{CallAnalyticsLanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet = false;

    VocabularyFilterMethod m_vocabularyFilterMethod{VocabularyFilterMethod::NOT_SET};
    bool m_vocabularyFilterMethodHasBeenSet = false;

    bool m_showSpeakerLabel{false};
    bool m_showSpeakerLabelHasBeenSet = false;

    bool m_enablePartialResultsStabilization{false};
    bool m_enablePartialResultsStabilizationHasBeenSet = false;

    PartialResultsStability m_partialResultsStability{PartialResultsStability::NOT_SET};
    bool m_partialResultsStabilityHasBeenSet = false;

    ContentType m_contentIdentificationType{ContentType::NOT_SET};
    bool m_contentIdentificationTypeHasBeenSet = false;

    ContentType m_contentRedactionType{ContentType::NOT_SET};
    bool m_contentRedactionTypeHasBeenSet = false;

    Aws::String m_piiEntityTypes;
    bool m_piiEntityTypesHasBeenSet = false;

    Aws::String m_languageModelName;
    bool m_languageModelNameHasBeenSet = false;

    bool m_filterPartialResults{false};
    bool m_filterPartialResultsHasBeenSet = false;

    bool m_identifyLanguage{false};
    bool m_identifyLanguageHasBeenSet = false;

    bool m_identifyMultipleLanguages{false};
    bool m_identifyMultipleLanguagesHasBeenSet = false;

    Aws::String m_languageOptions;
    bool m_languageOptionsHasBeenSet = false;

    CallAnalyticsLanguageCode m_preferredLanguage{CallAnalyticsLanguageCode::NOT_SET};
    bool m_preferredLanguageHasBeenSet = false;

    Aws::String m_vocabularyNames;
    bool m_vocabularyNamesHasBeenSet = false;

    Aws::String m_vocabularyFilterNames;
    bool m_vocabularyFilterNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
