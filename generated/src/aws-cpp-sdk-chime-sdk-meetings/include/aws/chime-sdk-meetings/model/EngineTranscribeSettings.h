/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/model/TranscribeLanguageCode.h>
#include <aws/chime-sdk-meetings/model/TranscribeVocabularyFilterMethod.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-meetings/model/TranscribeRegion.h>
#include <aws/chime-sdk-meetings/model/TranscribePartialResultsStability.h>
#include <aws/chime-sdk-meetings/model/TranscribeContentIdentificationType.h>
#include <aws/chime-sdk-meetings/model/TranscribeContentRedactionType.h>
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
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   * <p>Settings specific to the Amazon Transcribe engine.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/EngineTranscribeSettings">AWS
   * API Reference</a></p>
   */
  class EngineTranscribeSettings
  {
  public:
    AWS_CHIMESDKMEETINGS_API EngineTranscribeSettings();
    AWS_CHIMESDKMEETINGS_API EngineTranscribeSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API EngineTranscribeSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The language code specified for the Amazon Transcribe engine.</p>
     */
    inline const TranscribeLanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code specified for the Amazon Transcribe engine.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code specified for the Amazon Transcribe engine.</p>
     */
    inline void SetLanguageCode(const TranscribeLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code specified for the Amazon Transcribe engine.</p>
     */
    inline void SetLanguageCode(TranscribeLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code specified for the Amazon Transcribe engine.</p>
     */
    inline EngineTranscribeSettings& WithLanguageCode(const TranscribeLanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code specified for the Amazon Transcribe engine.</p>
     */
    inline EngineTranscribeSettings& WithLanguageCode(TranscribeLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The filtering method passed to Amazon Transcribe.</p>
     */
    inline const TranscribeVocabularyFilterMethod& GetVocabularyFilterMethod() const{ return m_vocabularyFilterMethod; }

    /**
     * <p>The filtering method passed to Amazon Transcribe.</p>
     */
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }

    /**
     * <p>The filtering method passed to Amazon Transcribe.</p>
     */
    inline void SetVocabularyFilterMethod(const TranscribeVocabularyFilterMethod& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }

    /**
     * <p>The filtering method passed to Amazon Transcribe.</p>
     */
    inline void SetVocabularyFilterMethod(TranscribeVocabularyFilterMethod&& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = std::move(value); }

    /**
     * <p>The filtering method passed to Amazon Transcribe.</p>
     */
    inline EngineTranscribeSettings& WithVocabularyFilterMethod(const TranscribeVocabularyFilterMethod& value) { SetVocabularyFilterMethod(value); return *this;}

    /**
     * <p>The filtering method passed to Amazon Transcribe.</p>
     */
    inline EngineTranscribeSettings& WithVocabularyFilterMethod(TranscribeVocabularyFilterMethod&& value) { SetVocabularyFilterMethod(std::move(value)); return *this;}


    /**
     * <p>The name of the vocabulary filter passed to Amazon Transcribe.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>The name of the vocabulary filter passed to Amazon Transcribe.</p>
     */
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }

    /**
     * <p>The name of the vocabulary filter passed to Amazon Transcribe.</p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }

    /**
     * <p>The name of the vocabulary filter passed to Amazon Transcribe.</p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }

    /**
     * <p>The name of the vocabulary filter passed to Amazon Transcribe.</p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }

    /**
     * <p>The name of the vocabulary filter passed to Amazon Transcribe.</p>
     */
    inline EngineTranscribeSettings& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>The name of the vocabulary filter passed to Amazon Transcribe.</p>
     */
    inline EngineTranscribeSettings& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary filter passed to Amazon Transcribe.</p>
     */
    inline EngineTranscribeSettings& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe.</p>
     */
    inline EngineTranscribeSettings& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe.</p>
     */
    inline EngineTranscribeSettings& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary passed to Amazon Transcribe.</p>
     */
    inline EngineTranscribeSettings& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The AWS Region passed to Amazon Transcribe. If you don't specify a Region,
     * Amazon Chime uses the meeting's Region.</p>
     */
    inline const TranscribeRegion& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region passed to Amazon Transcribe. If you don't specify a Region,
     * Amazon Chime uses the meeting's Region.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The AWS Region passed to Amazon Transcribe. If you don't specify a Region,
     * Amazon Chime uses the meeting's Region.</p>
     */
    inline void SetRegion(const TranscribeRegion& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS Region passed to Amazon Transcribe. If you don't specify a Region,
     * Amazon Chime uses the meeting's Region.</p>
     */
    inline void SetRegion(TranscribeRegion&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS Region passed to Amazon Transcribe. If you don't specify a Region,
     * Amazon Chime uses the meeting's Region.</p>
     */
    inline EngineTranscribeSettings& WithRegion(const TranscribeRegion& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region passed to Amazon Transcribe. If you don't specify a Region,
     * Amazon Chime uses the meeting's Region.</p>
     */
    inline EngineTranscribeSettings& WithRegion(TranscribeRegion&& value) { SetRegion(std::move(value)); return *this;}


    /**
     * <p>Generates partial transcription results that are less likely to change as
     * meeting attendees speak. It does so by only allowing the last few words from the
     * partial results to change.</p>
     */
    inline bool GetEnablePartialResultsStabilization() const{ return m_enablePartialResultsStabilization; }

    /**
     * <p>Generates partial transcription results that are less likely to change as
     * meeting attendees speak. It does so by only allowing the last few words from the
     * partial results to change.</p>
     */
    inline bool EnablePartialResultsStabilizationHasBeenSet() const { return m_enablePartialResultsStabilizationHasBeenSet; }

    /**
     * <p>Generates partial transcription results that are less likely to change as
     * meeting attendees speak. It does so by only allowing the last few words from the
     * partial results to change.</p>
     */
    inline void SetEnablePartialResultsStabilization(bool value) { m_enablePartialResultsStabilizationHasBeenSet = true; m_enablePartialResultsStabilization = value; }

    /**
     * <p>Generates partial transcription results that are less likely to change as
     * meeting attendees speak. It does so by only allowing the last few words from the
     * partial results to change.</p>
     */
    inline EngineTranscribeSettings& WithEnablePartialResultsStabilization(bool value) { SetEnablePartialResultsStabilization(value); return *this;}


    /**
     * <p>The stabity level of a partial results transcription. Determines how stable
     * you want the transcription results to be. A higher level means the transcription
     * results are less likely to change.</p>
     */
    inline const TranscribePartialResultsStability& GetPartialResultsStability() const{ return m_partialResultsStability; }

    /**
     * <p>The stabity level of a partial results transcription. Determines how stable
     * you want the transcription results to be. A higher level means the transcription
     * results are less likely to change.</p>
     */
    inline bool PartialResultsStabilityHasBeenSet() const { return m_partialResultsStabilityHasBeenSet; }

    /**
     * <p>The stabity level of a partial results transcription. Determines how stable
     * you want the transcription results to be. A higher level means the transcription
     * results are less likely to change.</p>
     */
    inline void SetPartialResultsStability(const TranscribePartialResultsStability& value) { m_partialResultsStabilityHasBeenSet = true; m_partialResultsStability = value; }

    /**
     * <p>The stabity level of a partial results transcription. Determines how stable
     * you want the transcription results to be. A higher level means the transcription
     * results are less likely to change.</p>
     */
    inline void SetPartialResultsStability(TranscribePartialResultsStability&& value) { m_partialResultsStabilityHasBeenSet = true; m_partialResultsStability = std::move(value); }

    /**
     * <p>The stabity level of a partial results transcription. Determines how stable
     * you want the transcription results to be. A higher level means the transcription
     * results are less likely to change.</p>
     */
    inline EngineTranscribeSettings& WithPartialResultsStability(const TranscribePartialResultsStability& value) { SetPartialResultsStability(value); return *this;}

    /**
     * <p>The stabity level of a partial results transcription. Determines how stable
     * you want the transcription results to be. A higher level means the transcription
     * results are less likely to change.</p>
     */
    inline EngineTranscribeSettings& WithPartialResultsStability(TranscribePartialResultsStability&& value) { SetPartialResultsStability(std::move(value)); return *this;}


    /**
     * <p>Set this field to <code>PII</code> to identify personally identifiable
     * information in the transcription output.</p>
     */
    inline const TranscribeContentIdentificationType& GetContentIdentificationType() const{ return m_contentIdentificationType; }

    /**
     * <p>Set this field to <code>PII</code> to identify personally identifiable
     * information in the transcription output.</p>
     */
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }

    /**
     * <p>Set this field to <code>PII</code> to identify personally identifiable
     * information in the transcription output.</p>
     */
    inline void SetContentIdentificationType(const TranscribeContentIdentificationType& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }

    /**
     * <p>Set this field to <code>PII</code> to identify personally identifiable
     * information in the transcription output.</p>
     */
    inline void SetContentIdentificationType(TranscribeContentIdentificationType&& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = std::move(value); }

    /**
     * <p>Set this field to <code>PII</code> to identify personally identifiable
     * information in the transcription output.</p>
     */
    inline EngineTranscribeSettings& WithContentIdentificationType(const TranscribeContentIdentificationType& value) { SetContentIdentificationType(value); return *this;}

    /**
     * <p>Set this field to <code>PII</code> to identify personally identifiable
     * information in the transcription output.</p>
     */
    inline EngineTranscribeSettings& WithContentIdentificationType(TranscribeContentIdentificationType&& value) { SetContentIdentificationType(std::move(value)); return *this;}


    /**
     * <p>Set this field to <code>PII</code> to redact personally identifiable
     * information in the transcription output. Content redaction is performed only
     * upon complete transcription of the audio segments.</p> <p>You can’t set
     * <code>ContentRedactionType</code> and <code>ContentIdentificationType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline const TranscribeContentRedactionType& GetContentRedactionType() const{ return m_contentRedactionType; }

    /**
     * <p>Set this field to <code>PII</code> to redact personally identifiable
     * information in the transcription output. Content redaction is performed only
     * upon complete transcription of the audio segments.</p> <p>You can’t set
     * <code>ContentRedactionType</code> and <code>ContentIdentificationType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline bool ContentRedactionTypeHasBeenSet() const { return m_contentRedactionTypeHasBeenSet; }

    /**
     * <p>Set this field to <code>PII</code> to redact personally identifiable
     * information in the transcription output. Content redaction is performed only
     * upon complete transcription of the audio segments.</p> <p>You can’t set
     * <code>ContentRedactionType</code> and <code>ContentIdentificationType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline void SetContentRedactionType(const TranscribeContentRedactionType& value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = value; }

    /**
     * <p>Set this field to <code>PII</code> to redact personally identifiable
     * information in the transcription output. Content redaction is performed only
     * upon complete transcription of the audio segments.</p> <p>You can’t set
     * <code>ContentRedactionType</code> and <code>ContentIdentificationType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline void SetContentRedactionType(TranscribeContentRedactionType&& value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = std::move(value); }

    /**
     * <p>Set this field to <code>PII</code> to redact personally identifiable
     * information in the transcription output. Content redaction is performed only
     * upon complete transcription of the audio segments.</p> <p>You can’t set
     * <code>ContentRedactionType</code> and <code>ContentIdentificationType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline EngineTranscribeSettings& WithContentRedactionType(const TranscribeContentRedactionType& value) { SetContentRedactionType(value); return *this;}

    /**
     * <p>Set this field to <code>PII</code> to redact personally identifiable
     * information in the transcription output. Content redaction is performed only
     * upon complete transcription of the audio segments.</p> <p>You can’t set
     * <code>ContentRedactionType</code> and <code>ContentIdentificationType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p>
     */
    inline EngineTranscribeSettings& WithContentRedactionType(TranscribeContentRedactionType&& value) { SetContentRedactionType(std::move(value)); return *this;}


    /**
     * <p>Lists the PII entity types you want to identify or redact. To specify entity
     * types, you must enable <code>ContentIdentificationType</code> or
     * <code>ContentRedactionType</code>.</p> <p> <code>PIIEntityTypes</code> must be
     * comma-separated. The available values are: <code>BANK_ACCOUNT_NUMBER</code>,
     * <code>BANK_ROUTING, CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * and <code>ALL</code>.</p> <p> <code>PiiEntityTypes</code> is an optional
     * parameter with a default value of <code>ALL</code>.</p>
     */
    inline const Aws::String& GetPiiEntityTypes() const{ return m_piiEntityTypes; }

    /**
     * <p>Lists the PII entity types you want to identify or redact. To specify entity
     * types, you must enable <code>ContentIdentificationType</code> or
     * <code>ContentRedactionType</code>.</p> <p> <code>PIIEntityTypes</code> must be
     * comma-separated. The available values are: <code>BANK_ACCOUNT_NUMBER</code>,
     * <code>BANK_ROUTING, CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * and <code>ALL</code>.</p> <p> <code>PiiEntityTypes</code> is an optional
     * parameter with a default value of <code>ALL</code>.</p>
     */
    inline bool PiiEntityTypesHasBeenSet() const { return m_piiEntityTypesHasBeenSet; }

    /**
     * <p>Lists the PII entity types you want to identify or redact. To specify entity
     * types, you must enable <code>ContentIdentificationType</code> or
     * <code>ContentRedactionType</code>.</p> <p> <code>PIIEntityTypes</code> must be
     * comma-separated. The available values are: <code>BANK_ACCOUNT_NUMBER</code>,
     * <code>BANK_ROUTING, CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * and <code>ALL</code>.</p> <p> <code>PiiEntityTypes</code> is an optional
     * parameter with a default value of <code>ALL</code>.</p>
     */
    inline void SetPiiEntityTypes(const Aws::String& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = value; }

    /**
     * <p>Lists the PII entity types you want to identify or redact. To specify entity
     * types, you must enable <code>ContentIdentificationType</code> or
     * <code>ContentRedactionType</code>.</p> <p> <code>PIIEntityTypes</code> must be
     * comma-separated. The available values are: <code>BANK_ACCOUNT_NUMBER</code>,
     * <code>BANK_ROUTING, CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * and <code>ALL</code>.</p> <p> <code>PiiEntityTypes</code> is an optional
     * parameter with a default value of <code>ALL</code>.</p>
     */
    inline void SetPiiEntityTypes(Aws::String&& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = std::move(value); }

    /**
     * <p>Lists the PII entity types you want to identify or redact. To specify entity
     * types, you must enable <code>ContentIdentificationType</code> or
     * <code>ContentRedactionType</code>.</p> <p> <code>PIIEntityTypes</code> must be
     * comma-separated. The available values are: <code>BANK_ACCOUNT_NUMBER</code>,
     * <code>BANK_ROUTING, CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * and <code>ALL</code>.</p> <p> <code>PiiEntityTypes</code> is an optional
     * parameter with a default value of <code>ALL</code>.</p>
     */
    inline void SetPiiEntityTypes(const char* value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes.assign(value); }

    /**
     * <p>Lists the PII entity types you want to identify or redact. To specify entity
     * types, you must enable <code>ContentIdentificationType</code> or
     * <code>ContentRedactionType</code>.</p> <p> <code>PIIEntityTypes</code> must be
     * comma-separated. The available values are: <code>BANK_ACCOUNT_NUMBER</code>,
     * <code>BANK_ROUTING, CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * and <code>ALL</code>.</p> <p> <code>PiiEntityTypes</code> is an optional
     * parameter with a default value of <code>ALL</code>.</p>
     */
    inline EngineTranscribeSettings& WithPiiEntityTypes(const Aws::String& value) { SetPiiEntityTypes(value); return *this;}

    /**
     * <p>Lists the PII entity types you want to identify or redact. To specify entity
     * types, you must enable <code>ContentIdentificationType</code> or
     * <code>ContentRedactionType</code>.</p> <p> <code>PIIEntityTypes</code> must be
     * comma-separated. The available values are: <code>BANK_ACCOUNT_NUMBER</code>,
     * <code>BANK_ROUTING, CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * and <code>ALL</code>.</p> <p> <code>PiiEntityTypes</code> is an optional
     * parameter with a default value of <code>ALL</code>.</p>
     */
    inline EngineTranscribeSettings& WithPiiEntityTypes(Aws::String&& value) { SetPiiEntityTypes(std::move(value)); return *this;}

    /**
     * <p>Lists the PII entity types you want to identify or redact. To specify entity
     * types, you must enable <code>ContentIdentificationType</code> or
     * <code>ContentRedactionType</code>.</p> <p> <code>PIIEntityTypes</code> must be
     * comma-separated. The available values are: <code>BANK_ACCOUNT_NUMBER</code>,
     * <code>BANK_ROUTING, CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * and <code>ALL</code>.</p> <p> <code>PiiEntityTypes</code> is an optional
     * parameter with a default value of <code>ALL</code>.</p>
     */
    inline EngineTranscribeSettings& WithPiiEntityTypes(const char* value) { SetPiiEntityTypes(value); return *this;}


    /**
     * <p>The name of the language model used during transcription.</p>
     */
    inline const Aws::String& GetLanguageModelName() const{ return m_languageModelName; }

    /**
     * <p>The name of the language model used during transcription.</p>
     */
    inline bool LanguageModelNameHasBeenSet() const { return m_languageModelNameHasBeenSet; }

    /**
     * <p>The name of the language model used during transcription.</p>
     */
    inline void SetLanguageModelName(const Aws::String& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = value; }

    /**
     * <p>The name of the language model used during transcription.</p>
     */
    inline void SetLanguageModelName(Aws::String&& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = std::move(value); }

    /**
     * <p>The name of the language model used during transcription.</p>
     */
    inline void SetLanguageModelName(const char* value) { m_languageModelNameHasBeenSet = true; m_languageModelName.assign(value); }

    /**
     * <p>The name of the language model used during transcription.</p>
     */
    inline EngineTranscribeSettings& WithLanguageModelName(const Aws::String& value) { SetLanguageModelName(value); return *this;}

    /**
     * <p>The name of the language model used during transcription.</p>
     */
    inline EngineTranscribeSettings& WithLanguageModelName(Aws::String&& value) { SetLanguageModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the language model used during transcription.</p>
     */
    inline EngineTranscribeSettings& WithLanguageModelName(const char* value) { SetLanguageModelName(value); return *this;}


    /**
     * <p>Automatically identifies the language spoken in media files.</p>
     */
    inline bool GetIdentifyLanguage() const{ return m_identifyLanguage; }

    /**
     * <p>Automatically identifies the language spoken in media files.</p>
     */
    inline bool IdentifyLanguageHasBeenSet() const { return m_identifyLanguageHasBeenSet; }

    /**
     * <p>Automatically identifies the language spoken in media files.</p>
     */
    inline void SetIdentifyLanguage(bool value) { m_identifyLanguageHasBeenSet = true; m_identifyLanguage = value; }

    /**
     * <p>Automatically identifies the language spoken in media files.</p>
     */
    inline EngineTranscribeSettings& WithIdentifyLanguage(bool value) { SetIdentifyLanguage(value); return *this;}


    /**
     * <p>Language codes for the languages that you want to identify. You must provide
     * at least 2 codes.</p>
     */
    inline const Aws::String& GetLanguageOptions() const{ return m_languageOptions; }

    /**
     * <p>Language codes for the languages that you want to identify. You must provide
     * at least 2 codes.</p>
     */
    inline bool LanguageOptionsHasBeenSet() const { return m_languageOptionsHasBeenSet; }

    /**
     * <p>Language codes for the languages that you want to identify. You must provide
     * at least 2 codes.</p>
     */
    inline void SetLanguageOptions(const Aws::String& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = value; }

    /**
     * <p>Language codes for the languages that you want to identify. You must provide
     * at least 2 codes.</p>
     */
    inline void SetLanguageOptions(Aws::String&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = std::move(value); }

    /**
     * <p>Language codes for the languages that you want to identify. You must provide
     * at least 2 codes.</p>
     */
    inline void SetLanguageOptions(const char* value) { m_languageOptionsHasBeenSet = true; m_languageOptions.assign(value); }

    /**
     * <p>Language codes for the languages that you want to identify. You must provide
     * at least 2 codes.</p>
     */
    inline EngineTranscribeSettings& WithLanguageOptions(const Aws::String& value) { SetLanguageOptions(value); return *this;}

    /**
     * <p>Language codes for the languages that you want to identify. You must provide
     * at least 2 codes.</p>
     */
    inline EngineTranscribeSettings& WithLanguageOptions(Aws::String&& value) { SetLanguageOptions(std::move(value)); return *this;}

    /**
     * <p>Language codes for the languages that you want to identify. You must provide
     * at least 2 codes.</p>
     */
    inline EngineTranscribeSettings& WithLanguageOptions(const char* value) { SetLanguageOptions(value); return *this;}


    /**
     * <p>Language code for the preferred language.</p>
     */
    inline const TranscribeLanguageCode& GetPreferredLanguage() const{ return m_preferredLanguage; }

    /**
     * <p>Language code for the preferred language.</p>
     */
    inline bool PreferredLanguageHasBeenSet() const { return m_preferredLanguageHasBeenSet; }

    /**
     * <p>Language code for the preferred language.</p>
     */
    inline void SetPreferredLanguage(const TranscribeLanguageCode& value) { m_preferredLanguageHasBeenSet = true; m_preferredLanguage = value; }

    /**
     * <p>Language code for the preferred language.</p>
     */
    inline void SetPreferredLanguage(TranscribeLanguageCode&& value) { m_preferredLanguageHasBeenSet = true; m_preferredLanguage = std::move(value); }

    /**
     * <p>Language code for the preferred language.</p>
     */
    inline EngineTranscribeSettings& WithPreferredLanguage(const TranscribeLanguageCode& value) { SetPreferredLanguage(value); return *this;}

    /**
     * <p>Language code for the preferred language.</p>
     */
    inline EngineTranscribeSettings& WithPreferredLanguage(TranscribeLanguageCode&& value) { SetPreferredLanguage(std::move(value)); return *this;}

  private:

    TranscribeLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    TranscribeVocabularyFilterMethod m_vocabularyFilterMethod;
    bool m_vocabularyFilterMethodHasBeenSet = false;

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    TranscribeRegion m_region;
    bool m_regionHasBeenSet = false;

    bool m_enablePartialResultsStabilization;
    bool m_enablePartialResultsStabilizationHasBeenSet = false;

    TranscribePartialResultsStability m_partialResultsStability;
    bool m_partialResultsStabilityHasBeenSet = false;

    TranscribeContentIdentificationType m_contentIdentificationType;
    bool m_contentIdentificationTypeHasBeenSet = false;

    TranscribeContentRedactionType m_contentRedactionType;
    bool m_contentRedactionTypeHasBeenSet = false;

    Aws::String m_piiEntityTypes;
    bool m_piiEntityTypesHasBeenSet = false;

    Aws::String m_languageModelName;
    bool m_languageModelNameHasBeenSet = false;

    bool m_identifyLanguage;
    bool m_identifyLanguageHasBeenSet = false;

    Aws::String m_languageOptions;
    bool m_languageOptionsHasBeenSet = false;

    TranscribeLanguageCode m_preferredLanguage;
    bool m_preferredLanguageHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
