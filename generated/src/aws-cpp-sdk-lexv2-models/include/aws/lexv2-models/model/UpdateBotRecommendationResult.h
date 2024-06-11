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
    AWS_LEXMODELSV2_API UpdateBotRecommendationResult();
    AWS_LEXMODELSV2_API UpdateBotRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API UpdateBotRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the bot containing the bot recommendation that has
     * been updated.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline UpdateBotRecommendationResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline UpdateBotRecommendationResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline UpdateBotRecommendationResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot containing the bot recommendation that has been
     * updated.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }
    inline UpdateBotRecommendationResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline UpdateBotRecommendationResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline UpdateBotRecommendationResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale of the bot recommendation to
     * update. The string must match one of the supported locales. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }
    inline UpdateBotRecommendationResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline UpdateBotRecommendationResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline UpdateBotRecommendationResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the bot recommendation.</p> <p>If the status is Failed, then
     * the reasons for the failure are listed in the failureReasons field. </p>
     */
    inline const BotRecommendationStatus& GetBotRecommendationStatus() const{ return m_botRecommendationStatus; }
    inline void SetBotRecommendationStatus(const BotRecommendationStatus& value) { m_botRecommendationStatus = value; }
    inline void SetBotRecommendationStatus(BotRecommendationStatus&& value) { m_botRecommendationStatus = std::move(value); }
    inline UpdateBotRecommendationResult& WithBotRecommendationStatus(const BotRecommendationStatus& value) { SetBotRecommendationStatus(value); return *this;}
    inline UpdateBotRecommendationResult& WithBotRecommendationStatus(BotRecommendationStatus&& value) { SetBotRecommendationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the bot recommendation to be updated.</p>
     */
    inline const Aws::String& GetBotRecommendationId() const{ return m_botRecommendationId; }
    inline void SetBotRecommendationId(const Aws::String& value) { m_botRecommendationId = value; }
    inline void SetBotRecommendationId(Aws::String&& value) { m_botRecommendationId = std::move(value); }
    inline void SetBotRecommendationId(const char* value) { m_botRecommendationId.assign(value); }
    inline UpdateBotRecommendationResult& WithBotRecommendationId(const Aws::String& value) { SetBotRecommendationId(value); return *this;}
    inline UpdateBotRecommendationResult& WithBotRecommendationId(Aws::String&& value) { SetBotRecommendationId(std::move(value)); return *this;}
    inline UpdateBotRecommendationResult& WithBotRecommendationId(const char* value) { SetBotRecommendationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot recommendation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline UpdateBotRecommendationResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline UpdateBotRecommendationResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot recommendation was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }
    inline UpdateBotRecommendationResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline UpdateBotRecommendationResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object representing the Amazon S3 bucket containing the transcript, as
     * well as the associated metadata.</p>
     */
    inline const TranscriptSourceSetting& GetTranscriptSourceSetting() const{ return m_transcriptSourceSetting; }
    inline void SetTranscriptSourceSetting(const TranscriptSourceSetting& value) { m_transcriptSourceSetting = value; }
    inline void SetTranscriptSourceSetting(TranscriptSourceSetting&& value) { m_transcriptSourceSetting = std::move(value); }
    inline UpdateBotRecommendationResult& WithTranscriptSourceSetting(const TranscriptSourceSetting& value) { SetTranscriptSourceSetting(value); return *this;}
    inline UpdateBotRecommendationResult& WithTranscriptSourceSetting(TranscriptSourceSetting&& value) { SetTranscriptSourceSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object representing the passwords that were used to encrypt the data
     * related to the bot recommendation results, as well as the KMS key ARN used to
     * encrypt the associated metadata.</p>
     */
    inline const EncryptionSetting& GetEncryptionSetting() const{ return m_encryptionSetting; }
    inline void SetEncryptionSetting(const EncryptionSetting& value) { m_encryptionSetting = value; }
    inline void SetEncryptionSetting(EncryptionSetting&& value) { m_encryptionSetting = std::move(value); }
    inline UpdateBotRecommendationResult& WithEncryptionSetting(const EncryptionSetting& value) { SetEncryptionSetting(value); return *this;}
    inline UpdateBotRecommendationResult& WithEncryptionSetting(EncryptionSetting&& value) { SetEncryptionSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateBotRecommendationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateBotRecommendationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateBotRecommendationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    BotRecommendationStatus m_botRecommendationStatus;

    Aws::String m_botRecommendationId;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_lastUpdatedDateTime;

    TranscriptSourceSetting m_transcriptSourceSetting;

    EncryptionSetting m_encryptionSetting;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
