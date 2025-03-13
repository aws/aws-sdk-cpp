/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotRecommendationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/TranscriptSourceSetting.h>
#include <aws/lexv2-models/model/EncryptionSetting.h>
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
  class UpdateBotRecommendationResult
  {
  public:
    AWS_LEXMODELSV2_API UpdateBotRecommendationResult() = default;
    AWS_LEXMODELSV2_API UpdateBotRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API UpdateBotRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the bot containing the bot recommendation that has
     * been updated.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    UpdateBotRecommendationResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot containing the bot recommendation that has been
     * updated.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    UpdateBotRecommendationResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale of the bot recommendation to
     * update. The string must match one of the supported locales. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    UpdateBotRecommendationResult& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the bot recommendation.</p> <p>If the status is Failed, then
     * the reasons for the failure are listed in the failureReasons field. </p>
     */
    inline BotRecommendationStatus GetBotRecommendationStatus() const { return m_botRecommendationStatus; }
    inline void SetBotRecommendationStatus(BotRecommendationStatus value) { m_botRecommendationStatusHasBeenSet = true; m_botRecommendationStatus = value; }
    inline UpdateBotRecommendationResult& WithBotRecommendationStatus(BotRecommendationStatus value) { SetBotRecommendationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the bot recommendation to be updated.</p>
     */
    inline const Aws::String& GetBotRecommendationId() const { return m_botRecommendationId; }
    template<typename BotRecommendationIdT = Aws::String>
    void SetBotRecommendationId(BotRecommendationIdT&& value) { m_botRecommendationIdHasBeenSet = true; m_botRecommendationId = std::forward<BotRecommendationIdT>(value); }
    template<typename BotRecommendationIdT = Aws::String>
    UpdateBotRecommendationResult& WithBotRecommendationId(BotRecommendationIdT&& value) { SetBotRecommendationId(std::forward<BotRecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot recommendation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    UpdateBotRecommendationResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot recommendation was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    UpdateBotRecommendationResult& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
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
    UpdateBotRecommendationResult& WithTranscriptSourceSetting(TranscriptSourceSettingT&& value) { SetTranscriptSourceSetting(std::forward<TranscriptSourceSettingT>(value)); return *this;}
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
    UpdateBotRecommendationResult& WithEncryptionSetting(EncryptionSettingT&& value) { SetEncryptionSetting(std::forward<EncryptionSettingT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateBotRecommendationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    TranscriptSourceSetting m_transcriptSourceSetting;
    bool m_transcriptSourceSettingHasBeenSet = false;

    EncryptionSetting m_encryptionSetting;
    bool m_encryptionSettingHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
