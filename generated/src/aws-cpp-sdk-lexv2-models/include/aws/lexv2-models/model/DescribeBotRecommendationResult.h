/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotRecommendationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/TranscriptSourceSetting.h>
#include <aws/lexv2-models/model/EncryptionSetting.h>
#include <aws/lexv2-models/model/BotRecommendationResults.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{
  class DescribeBotRecommendationResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeBotRecommendationResult() = default;
    AWS_LEXMODELSV2_API DescribeBotRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeBotRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the bot associated with the bot recommendation.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    DescribeBotRecommendationResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot associated with the bot recommendation.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    DescribeBotRecommendationResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale of the bot recommendation to
     * describe.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    DescribeBotRecommendationResult& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the bot recommendation. If the status is Failed, then the
     * reasons for the failure are listed in the failureReasons field. </p>
     */
    inline BotRecommendationStatus GetBotRecommendationStatus() const { return m_botRecommendationStatus; }
    inline void SetBotRecommendationStatus(BotRecommendationStatus value) { m_botRecommendationStatusHasBeenSet = true; m_botRecommendationStatus = value; }
    inline DescribeBotRecommendationResult& WithBotRecommendationStatus(BotRecommendationStatus value) { SetBotRecommendationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot recommendation being described.</p>
     */
    inline const Aws::String& GetBotRecommendationId() const { return m_botRecommendationId; }
    template<typename BotRecommendationIdT = Aws::String>
    void SetBotRecommendationId(BotRecommendationIdT&& value) { m_botRecommendationIdHasBeenSet = true; m_botRecommendationId = std::forward<BotRecommendationIdT>(value); }
    template<typename BotRecommendationIdT = Aws::String>
    DescribeBotRecommendationResult& WithBotRecommendationId(BotRecommendationIdT&& value) { SetBotRecommendationId(std::forward<BotRecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If botRecommendationStatus is Failed, Amazon Lex explains why.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const { return m_failureReasons; }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    void SetFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::forward<FailureReasonsT>(value); }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    DescribeBotRecommendationResult& WithFailureReasons(FailureReasonsT&& value) { SetFailureReasons(std::forward<FailureReasonsT>(value)); return *this;}
    template<typename FailureReasonsT = Aws::String>
    DescribeBotRecommendationResult& AddFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.emplace_back(std::forward<FailureReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time that the bot recommendation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    DescribeBotRecommendationResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the bot recommendation was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    DescribeBotRecommendationResult& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object representing the Amazon S3 bucket containing the transcript, as
     * well as the associated metadata.</p>
     */
    inline const TranscriptSourceSetting& GetTranscriptSourceSetting() const { return m_transcriptSourceSetting; }
    template<typename TranscriptSourceSettingT = TranscriptSourceSetting>
    void SetTranscriptSourceSetting(TranscriptSourceSettingT&& value) { m_transcriptSourceSettingHasBeenSet = true; m_transcriptSourceSetting = std::forward<TranscriptSourceSettingT>(value); }
    template<typename TranscriptSourceSettingT = TranscriptSourceSetting>
    DescribeBotRecommendationResult& WithTranscriptSourceSetting(TranscriptSourceSettingT&& value) { SetTranscriptSourceSetting(std::forward<TranscriptSourceSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object representing the passwords that were used to encrypt the data
     * related to the bot recommendation results, as well as the KMS key ARN used to
     * encrypt the associated metadata.</p>
     */
    inline const EncryptionSetting& GetEncryptionSetting() const { return m_encryptionSetting; }
    template<typename EncryptionSettingT = EncryptionSetting>
    void SetEncryptionSetting(EncryptionSettingT&& value) { m_encryptionSettingHasBeenSet = true; m_encryptionSetting = std::forward<EncryptionSettingT>(value); }
    template<typename EncryptionSettingT = EncryptionSetting>
    DescribeBotRecommendationResult& WithEncryptionSetting(EncryptionSettingT&& value) { SetEncryptionSetting(std::forward<EncryptionSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object representing the URL of the bot definition, the URL of the
     * associated transcript and a statistical summary of the bot recommendation
     * results.</p>
     */
    inline const BotRecommendationResults& GetBotRecommendationResults() const { return m_botRecommendationResults; }
    template<typename BotRecommendationResultsT = BotRecommendationResults>
    void SetBotRecommendationResults(BotRecommendationResultsT&& value) { m_botRecommendationResultsHasBeenSet = true; m_botRecommendationResults = std::forward<BotRecommendationResultsT>(value); }
    template<typename BotRecommendationResultsT = BotRecommendationResults>
    DescribeBotRecommendationResult& WithBotRecommendationResults(BotRecommendationResultsT&& value) { SetBotRecommendationResults(std::forward<BotRecommendationResultsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBotRecommendationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    BotRecommendationStatus m_botRecommendationStatus{BotRecommendationStatus::NOT_SET};
    bool m_botRecommendationStatusHasBeenSet = false;

    Aws::String m_botRecommendationId;
    bool m_botRecommendationIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    TranscriptSourceSetting m_transcriptSourceSetting;
    bool m_transcriptSourceSettingHasBeenSet = false;

    EncryptionSetting m_encryptionSetting;
    bool m_encryptionSettingHasBeenSet = false;

    BotRecommendationResults m_botRecommendationResults;
    bool m_botRecommendationResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
