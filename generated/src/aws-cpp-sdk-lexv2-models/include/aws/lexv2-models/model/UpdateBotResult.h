/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/DataPrivacy.h>
#include <aws/lexv2-models/model/BotStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/BotType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/ErrorLogSettings.h>
#include <aws/lexv2-models/model/BotMember.h>
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
  class UpdateBotResult
  {
  public:
    AWS_LEXMODELSV2_API UpdateBotResult() = default;
    AWS_LEXMODELSV2_API UpdateBotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API UpdateBotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the bot that was updated.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    UpdateBotResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bot after the update.</p>
     */
    inline const Aws::String& GetBotName() const { return m_botName; }
    template<typename BotNameT = Aws::String>
    void SetBotName(BotNameT&& value) { m_botNameHasBeenSet = true; m_botName = std::forward<BotNameT>(value); }
    template<typename BotNameT = Aws::String>
    UpdateBotResult& WithBotName(BotNameT&& value) { SetBotName(std::forward<BotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the bot after the update.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateBotResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the bot after the
     * update.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateBotResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data privacy settings for the bot after the update.</p>
     */
    inline const DataPrivacy& GetDataPrivacy() const { return m_dataPrivacy; }
    template<typename DataPrivacyT = DataPrivacy>
    void SetDataPrivacy(DataPrivacyT&& value) { m_dataPrivacyHasBeenSet = true; m_dataPrivacy = std::forward<DataPrivacyT>(value); }
    template<typename DataPrivacyT = DataPrivacy>
    UpdateBotResult& WithDataPrivacy(DataPrivacyT&& value) { SetDataPrivacy(std::forward<DataPrivacyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session timeout, in seconds, for the bot after the update.</p>
     */
    inline int GetIdleSessionTTLInSeconds() const { return m_idleSessionTTLInSeconds; }
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSecondsHasBeenSet = true; m_idleSessionTTLInSeconds = value; }
    inline UpdateBotResult& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the current status of the bot. The bot is first in the
     * <code>Creating</code> status. Once the bot is read for use, it changes to the
     * <code>Available</code> status. After the bot is created, you can use the
     * <code>DRAFT</code> version of the bot.</p>
     */
    inline BotStatus GetBotStatus() const { return m_botStatus; }
    inline void SetBotStatus(BotStatus value) { m_botStatusHasBeenSet = true; m_botStatus = value; }
    inline UpdateBotResult& WithBotStatus(BotStatus value) { SetBotStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    UpdateBotResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    UpdateBotResult& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the bot that was updated.</p>
     */
    inline BotType GetBotType() const { return m_botType; }
    inline void SetBotType(BotType value) { m_botTypeHasBeenSet = true; m_botType = value; }
    inline UpdateBotResult& WithBotType(BotType value) { SetBotType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of bot members in the network that was updated.</p>
     */
    inline const Aws::Vector<BotMember>& GetBotMembers() const { return m_botMembers; }
    template<typename BotMembersT = Aws::Vector<BotMember>>
    void SetBotMembers(BotMembersT&& value) { m_botMembersHasBeenSet = true; m_botMembers = std::forward<BotMembersT>(value); }
    template<typename BotMembersT = Aws::Vector<BotMember>>
    UpdateBotResult& WithBotMembers(BotMembersT&& value) { SetBotMembers(std::forward<BotMembersT>(value)); return *this;}
    template<typename BotMembersT = BotMember>
    UpdateBotResult& AddBotMembers(BotMembersT&& value) { m_botMembersHasBeenSet = true; m_botMembers.emplace_back(std::forward<BotMembersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Settings for managing error logs within the response of an update bot
     * operation.</p>
     */
    inline const ErrorLogSettings& GetErrorLogSettings() const { return m_errorLogSettings; }
    template<typename ErrorLogSettingsT = ErrorLogSettings>
    void SetErrorLogSettings(ErrorLogSettingsT&& value) { m_errorLogSettingsHasBeenSet = true; m_errorLogSettings = std::forward<ErrorLogSettingsT>(value); }
    template<typename ErrorLogSettingsT = ErrorLogSettings>
    UpdateBotResult& WithErrorLogSettings(ErrorLogSettingsT&& value) { SetErrorLogSettings(std::forward<ErrorLogSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateBotResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    DataPrivacy m_dataPrivacy;
    bool m_dataPrivacyHasBeenSet = false;

    int m_idleSessionTTLInSeconds{0};
    bool m_idleSessionTTLInSecondsHasBeenSet = false;

    BotStatus m_botStatus{BotStatus::NOT_SET};
    bool m_botStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    BotType m_botType{BotType::NOT_SET};
    bool m_botTypeHasBeenSet = false;

    Aws::Vector<BotMember> m_botMembers;
    bool m_botMembersHasBeenSet = false;

    ErrorLogSettings m_errorLogSettings;
    bool m_errorLogSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
