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
    AWS_LEXMODELSV2_API UpdateBotAliasResult() = default;
    AWS_LEXMODELSV2_API UpdateBotAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API UpdateBotAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the updated bot alias.</p>
     */
    inline const Aws::String& GetBotAliasId() const { return m_botAliasId; }
    template<typename BotAliasIdT = Aws::String>
    void SetBotAliasId(BotAliasIdT&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::forward<BotAliasIdT>(value); }
    template<typename BotAliasIdT = Aws::String>
    UpdateBotAliasResult& WithBotAliasId(BotAliasIdT&& value) { SetBotAliasId(std::forward<BotAliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated name of the bot alias.</p>
     */
    inline const Aws::String& GetBotAliasName() const { return m_botAliasName; }
    template<typename BotAliasNameT = Aws::String>
    void SetBotAliasName(BotAliasNameT&& value) { m_botAliasNameHasBeenSet = true; m_botAliasName = std::forward<BotAliasNameT>(value); }
    template<typename BotAliasNameT = Aws::String>
    UpdateBotAliasResult& WithBotAliasName(BotAliasNameT&& value) { SetBotAliasName(std::forward<BotAliasNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description of the bot alias.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateBotAliasResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated version of the bot that the alias points to.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    UpdateBotAliasResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated Lambda functions to use in each locale for the bot alias.</p>
     */
    inline const Aws::Map<Aws::String, BotAliasLocaleSettings>& GetBotAliasLocaleSettings() const { return m_botAliasLocaleSettings; }
    template<typename BotAliasLocaleSettingsT = Aws::Map<Aws::String, BotAliasLocaleSettings>>
    void SetBotAliasLocaleSettings(BotAliasLocaleSettingsT&& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings = std::forward<BotAliasLocaleSettingsT>(value); }
    template<typename BotAliasLocaleSettingsT = Aws::Map<Aws::String, BotAliasLocaleSettings>>
    UpdateBotAliasResult& WithBotAliasLocaleSettings(BotAliasLocaleSettingsT&& value) { SetBotAliasLocaleSettings(std::forward<BotAliasLocaleSettingsT>(value)); return *this;}
    template<typename BotAliasLocaleSettingsKeyT = Aws::String, typename BotAliasLocaleSettingsValueT = BotAliasLocaleSettings>
    UpdateBotAliasResult& AddBotAliasLocaleSettings(BotAliasLocaleSettingsKeyT&& key, BotAliasLocaleSettingsValueT&& value) {
      m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings.emplace(std::forward<BotAliasLocaleSettingsKeyT>(key), std::forward<BotAliasLocaleSettingsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The updated settings for storing conversation logs in Amazon CloudWatch Logs
     * and Amazon S3 buckets.</p>
     */
    inline const ConversationLogSettings& GetConversationLogSettings() const { return m_conversationLogSettings; }
    template<typename ConversationLogSettingsT = ConversationLogSettings>
    void SetConversationLogSettings(ConversationLogSettingsT&& value) { m_conversationLogSettingsHasBeenSet = true; m_conversationLogSettings = std::forward<ConversationLogSettingsT>(value); }
    template<typename ConversationLogSettingsT = ConversationLogSettings>
    UpdateBotAliasResult& WithConversationLogSettings(ConversationLogSettingsT&& value) { SetConversationLogSettings(std::forward<ConversationLogSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SentimentAnalysisSettings& GetSentimentAnalysisSettings() const { return m_sentimentAnalysisSettings; }
    template<typename SentimentAnalysisSettingsT = SentimentAnalysisSettings>
    void SetSentimentAnalysisSettings(SentimentAnalysisSettingsT&& value) { m_sentimentAnalysisSettingsHasBeenSet = true; m_sentimentAnalysisSettings = std::forward<SentimentAnalysisSettingsT>(value); }
    template<typename SentimentAnalysisSettingsT = SentimentAnalysisSettings>
    UpdateBotAliasResult& WithSentimentAnalysisSettings(SentimentAnalysisSettingsT&& value) { SetSentimentAnalysisSettings(std::forward<SentimentAnalysisSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the bot alias. When the status is
     * <code>Available</code> the alias is ready for use.</p>
     */
    inline BotAliasStatus GetBotAliasStatus() const { return m_botAliasStatus; }
    inline void SetBotAliasStatus(BotAliasStatus value) { m_botAliasStatusHasBeenSet = true; m_botAliasStatus = value; }
    inline UpdateBotAliasResult& WithBotAliasStatus(BotAliasStatus value) { SetBotAliasStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot with the updated alias.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    UpdateBotAliasResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    UpdateBotAliasResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    UpdateBotAliasResult& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateBotAliasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botAliasId;
    bool m_botAliasIdHasBeenSet = false;

    Aws::String m_botAliasName;
    bool m_botAliasNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::Map<Aws::String, BotAliasLocaleSettings> m_botAliasLocaleSettings;
    bool m_botAliasLocaleSettingsHasBeenSet = false;

    ConversationLogSettings m_conversationLogSettings;
    bool m_conversationLogSettingsHasBeenSet = false;

    SentimentAnalysisSettings m_sentimentAnalysisSettings;
    bool m_sentimentAnalysisSettingsHasBeenSet = false;

    BotAliasStatus m_botAliasStatus{BotAliasStatus::NOT_SET};
    bool m_botAliasStatusHasBeenSet = false;

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
