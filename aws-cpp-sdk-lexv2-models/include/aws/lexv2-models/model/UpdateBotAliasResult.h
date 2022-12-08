/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/ConversationLogSettings.h>
#include <aws/lexv2-models/model/SentimentAnalysisSettings.h>
#include <aws/lexv2-models/model/BotAliasStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/BotAliasLocaleSettings.h>
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
  class UpdateBotAliasResult
  {
  public:
    AWS_LEXMODELSV2_API UpdateBotAliasResult();
    AWS_LEXMODELSV2_API UpdateBotAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API UpdateBotAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the updated bot alias.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }

    /**
     * <p>The identifier of the updated bot alias.</p>
     */
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasId = value; }

    /**
     * <p>The identifier of the updated bot alias.</p>
     */
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasId = std::move(value); }

    /**
     * <p>The identifier of the updated bot alias.</p>
     */
    inline void SetBotAliasId(const char* value) { m_botAliasId.assign(value); }

    /**
     * <p>The identifier of the updated bot alias.</p>
     */
    inline UpdateBotAliasResult& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}

    /**
     * <p>The identifier of the updated bot alias.</p>
     */
    inline UpdateBotAliasResult& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the updated bot alias.</p>
     */
    inline UpdateBotAliasResult& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}


    /**
     * <p>The updated name of the bot alias.</p>
     */
    inline const Aws::String& GetBotAliasName() const{ return m_botAliasName; }

    /**
     * <p>The updated name of the bot alias.</p>
     */
    inline void SetBotAliasName(const Aws::String& value) { m_botAliasName = value; }

    /**
     * <p>The updated name of the bot alias.</p>
     */
    inline void SetBotAliasName(Aws::String&& value) { m_botAliasName = std::move(value); }

    /**
     * <p>The updated name of the bot alias.</p>
     */
    inline void SetBotAliasName(const char* value) { m_botAliasName.assign(value); }

    /**
     * <p>The updated name of the bot alias.</p>
     */
    inline UpdateBotAliasResult& WithBotAliasName(const Aws::String& value) { SetBotAliasName(value); return *this;}

    /**
     * <p>The updated name of the bot alias.</p>
     */
    inline UpdateBotAliasResult& WithBotAliasName(Aws::String&& value) { SetBotAliasName(std::move(value)); return *this;}

    /**
     * <p>The updated name of the bot alias.</p>
     */
    inline UpdateBotAliasResult& WithBotAliasName(const char* value) { SetBotAliasName(value); return *this;}


    /**
     * <p>The updated description of the bot alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The updated description of the bot alias.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The updated description of the bot alias.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The updated description of the bot alias.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The updated description of the bot alias.</p>
     */
    inline UpdateBotAliasResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated description of the bot alias.</p>
     */
    inline UpdateBotAliasResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The updated description of the bot alias.</p>
     */
    inline UpdateBotAliasResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The updated version of the bot that the alias points to.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The updated version of the bot that the alias points to.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The updated version of the bot that the alias points to.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The updated version of the bot that the alias points to.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The updated version of the bot that the alias points to.</p>
     */
    inline UpdateBotAliasResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The updated version of the bot that the alias points to.</p>
     */
    inline UpdateBotAliasResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The updated version of the bot that the alias points to.</p>
     */
    inline UpdateBotAliasResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The updated Lambda functions to use in each locale for the bot alias.</p>
     */
    inline const Aws::Map<Aws::String, BotAliasLocaleSettings>& GetBotAliasLocaleSettings() const{ return m_botAliasLocaleSettings; }

    /**
     * <p>The updated Lambda functions to use in each locale for the bot alias.</p>
     */
    inline void SetBotAliasLocaleSettings(const Aws::Map<Aws::String, BotAliasLocaleSettings>& value) { m_botAliasLocaleSettings = value; }

    /**
     * <p>The updated Lambda functions to use in each locale for the bot alias.</p>
     */
    inline void SetBotAliasLocaleSettings(Aws::Map<Aws::String, BotAliasLocaleSettings>&& value) { m_botAliasLocaleSettings = std::move(value); }

    /**
     * <p>The updated Lambda functions to use in each locale for the bot alias.</p>
     */
    inline UpdateBotAliasResult& WithBotAliasLocaleSettings(const Aws::Map<Aws::String, BotAliasLocaleSettings>& value) { SetBotAliasLocaleSettings(value); return *this;}

    /**
     * <p>The updated Lambda functions to use in each locale for the bot alias.</p>
     */
    inline UpdateBotAliasResult& WithBotAliasLocaleSettings(Aws::Map<Aws::String, BotAliasLocaleSettings>&& value) { SetBotAliasLocaleSettings(std::move(value)); return *this;}

    /**
     * <p>The updated Lambda functions to use in each locale for the bot alias.</p>
     */
    inline UpdateBotAliasResult& AddBotAliasLocaleSettings(const Aws::String& key, const BotAliasLocaleSettings& value) { m_botAliasLocaleSettings.emplace(key, value); return *this; }

    /**
     * <p>The updated Lambda functions to use in each locale for the bot alias.</p>
     */
    inline UpdateBotAliasResult& AddBotAliasLocaleSettings(Aws::String&& key, const BotAliasLocaleSettings& value) { m_botAliasLocaleSettings.emplace(std::move(key), value); return *this; }

    /**
     * <p>The updated Lambda functions to use in each locale for the bot alias.</p>
     */
    inline UpdateBotAliasResult& AddBotAliasLocaleSettings(const Aws::String& key, BotAliasLocaleSettings&& value) { m_botAliasLocaleSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The updated Lambda functions to use in each locale for the bot alias.</p>
     */
    inline UpdateBotAliasResult& AddBotAliasLocaleSettings(Aws::String&& key, BotAliasLocaleSettings&& value) { m_botAliasLocaleSettings.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The updated Lambda functions to use in each locale for the bot alias.</p>
     */
    inline UpdateBotAliasResult& AddBotAliasLocaleSettings(const char* key, BotAliasLocaleSettings&& value) { m_botAliasLocaleSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The updated Lambda functions to use in each locale for the bot alias.</p>
     */
    inline UpdateBotAliasResult& AddBotAliasLocaleSettings(const char* key, const BotAliasLocaleSettings& value) { m_botAliasLocaleSettings.emplace(key, value); return *this; }


    /**
     * <p>The updated settings for storing conversation logs in Amazon CloudWatch Logs
     * and Amazon S3 buckets.</p>
     */
    inline const ConversationLogSettings& GetConversationLogSettings() const{ return m_conversationLogSettings; }

    /**
     * <p>The updated settings for storing conversation logs in Amazon CloudWatch Logs
     * and Amazon S3 buckets.</p>
     */
    inline void SetConversationLogSettings(const ConversationLogSettings& value) { m_conversationLogSettings = value; }

    /**
     * <p>The updated settings for storing conversation logs in Amazon CloudWatch Logs
     * and Amazon S3 buckets.</p>
     */
    inline void SetConversationLogSettings(ConversationLogSettings&& value) { m_conversationLogSettings = std::move(value); }

    /**
     * <p>The updated settings for storing conversation logs in Amazon CloudWatch Logs
     * and Amazon S3 buckets.</p>
     */
    inline UpdateBotAliasResult& WithConversationLogSettings(const ConversationLogSettings& value) { SetConversationLogSettings(value); return *this;}

    /**
     * <p>The updated settings for storing conversation logs in Amazon CloudWatch Logs
     * and Amazon S3 buckets.</p>
     */
    inline UpdateBotAliasResult& WithConversationLogSettings(ConversationLogSettings&& value) { SetConversationLogSettings(std::move(value)); return *this;}


    
    inline const SentimentAnalysisSettings& GetSentimentAnalysisSettings() const{ return m_sentimentAnalysisSettings; }

    
    inline void SetSentimentAnalysisSettings(const SentimentAnalysisSettings& value) { m_sentimentAnalysisSettings = value; }

    
    inline void SetSentimentAnalysisSettings(SentimentAnalysisSettings&& value) { m_sentimentAnalysisSettings = std::move(value); }

    
    inline UpdateBotAliasResult& WithSentimentAnalysisSettings(const SentimentAnalysisSettings& value) { SetSentimentAnalysisSettings(value); return *this;}

    
    inline UpdateBotAliasResult& WithSentimentAnalysisSettings(SentimentAnalysisSettings&& value) { SetSentimentAnalysisSettings(std::move(value)); return *this;}


    /**
     * <p>The current status of the bot alias. When the status is
     * <code>Available</code> the alias is ready for use.</p>
     */
    inline const BotAliasStatus& GetBotAliasStatus() const{ return m_botAliasStatus; }

    /**
     * <p>The current status of the bot alias. When the status is
     * <code>Available</code> the alias is ready for use.</p>
     */
    inline void SetBotAliasStatus(const BotAliasStatus& value) { m_botAliasStatus = value; }

    /**
     * <p>The current status of the bot alias. When the status is
     * <code>Available</code> the alias is ready for use.</p>
     */
    inline void SetBotAliasStatus(BotAliasStatus&& value) { m_botAliasStatus = std::move(value); }

    /**
     * <p>The current status of the bot alias. When the status is
     * <code>Available</code> the alias is ready for use.</p>
     */
    inline UpdateBotAliasResult& WithBotAliasStatus(const BotAliasStatus& value) { SetBotAliasStatus(value); return *this;}

    /**
     * <p>The current status of the bot alias. When the status is
     * <code>Available</code> the alias is ready for use.</p>
     */
    inline UpdateBotAliasResult& WithBotAliasStatus(BotAliasStatus&& value) { SetBotAliasStatus(std::move(value)); return *this;}


    /**
     * <p>The identifier of the bot with the updated alias.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot with the updated alias.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The identifier of the bot with the updated alias.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot with the updated alias.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The identifier of the bot with the updated alias.</p>
     */
    inline UpdateBotAliasResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot with the updated alias.</p>
     */
    inline UpdateBotAliasResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot with the updated alias.</p>
     */
    inline UpdateBotAliasResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>A timestamp of the date and time that the bot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>A timestamp of the date and time that the bot was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>A timestamp of the date and time that the bot was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>A timestamp of the date and time that the bot was created.</p>
     */
    inline UpdateBotAliasResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the bot was created.</p>
     */
    inline UpdateBotAliasResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp of the date and time that the bot was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>A timestamp of the date and time that the bot was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }

    /**
     * <p>A timestamp of the date and time that the bot was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>A timestamp of the date and time that the bot was last updated.</p>
     */
    inline UpdateBotAliasResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the bot was last updated.</p>
     */
    inline UpdateBotAliasResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_botAliasId;

    Aws::String m_botAliasName;

    Aws::String m_description;

    Aws::String m_botVersion;

    Aws::Map<Aws::String, BotAliasLocaleSettings> m_botAliasLocaleSettings;

    ConversationLogSettings m_conversationLogSettings;

    SentimentAnalysisSettings m_sentimentAnalysisSettings;

    BotAliasStatus m_botAliasStatus;

    Aws::String m_botId;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
