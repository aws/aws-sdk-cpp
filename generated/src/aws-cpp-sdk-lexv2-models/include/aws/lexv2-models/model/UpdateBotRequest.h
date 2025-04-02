/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/DataPrivacy.h>
#include <aws/lexv2-models/model/BotType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/ErrorLogSettings.h>
#include <aws/lexv2-models/model/BotMember.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class UpdateBotRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API UpdateBotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBot"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the bot to update. This identifier is returned by
     * the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_CreateBot.html">CreateBot</a>
     * operation.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    UpdateBotRequest& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name of the bot. The name must be unique in the account that creates
     * the bot.</p>
     */
    inline const Aws::String& GetBotName() const { return m_botName; }
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }
    template<typename BotNameT = Aws::String>
    void SetBotName(BotNameT&& value) { m_botNameHasBeenSet = true; m_botName = std::forward<BotNameT>(value); }
    template<typename BotNameT = Aws::String>
    UpdateBotRequest& WithBotName(BotNameT&& value) { SetBotName(std::forward<BotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the bot.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateBotRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the bot.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateBotRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on additional privacy protections Amazon Lex should use
     * with the bot's data.</p>
     */
    inline const DataPrivacy& GetDataPrivacy() const { return m_dataPrivacy; }
    inline bool DataPrivacyHasBeenSet() const { return m_dataPrivacyHasBeenSet; }
    template<typename DataPrivacyT = DataPrivacy>
    void SetDataPrivacy(DataPrivacyT&& value) { m_dataPrivacyHasBeenSet = true; m_dataPrivacy = std::forward<DataPrivacyT>(value); }
    template<typename DataPrivacyT = DataPrivacy>
    UpdateBotRequest& WithDataPrivacy(DataPrivacyT&& value) { SetDataPrivacy(std::forward<DataPrivacyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds, that Amazon Lex should keep information about a user's
     * conversation with the bot.</p> <p>A user interaction remains active for the
     * amount of time specified. If no conversation occurs during this time, the
     * session expires and Amazon Lex deletes any data provided before the timeout.</p>
     * <p>You can specify between 60 (1 minute) and 86,400 (24 hours) seconds.</p>
     */
    inline int GetIdleSessionTTLInSeconds() const { return m_idleSessionTTLInSeconds; }
    inline bool IdleSessionTTLInSecondsHasBeenSet() const { return m_idleSessionTTLInSecondsHasBeenSet; }
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSecondsHasBeenSet = true; m_idleSessionTTLInSeconds = value; }
    inline UpdateBotRequest& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the bot to be updated.</p>
     */
    inline BotType GetBotType() const { return m_botType; }
    inline bool BotTypeHasBeenSet() const { return m_botTypeHasBeenSet; }
    inline void SetBotType(BotType value) { m_botTypeHasBeenSet = true; m_botType = value; }
    inline UpdateBotRequest& WithBotType(BotType value) { SetBotType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of bot members in the network associated with the update action.</p>
     */
    inline const Aws::Vector<BotMember>& GetBotMembers() const { return m_botMembers; }
    inline bool BotMembersHasBeenSet() const { return m_botMembersHasBeenSet; }
    template<typename BotMembersT = Aws::Vector<BotMember>>
    void SetBotMembers(BotMembersT&& value) { m_botMembersHasBeenSet = true; m_botMembers = std::forward<BotMembersT>(value); }
    template<typename BotMembersT = Aws::Vector<BotMember>>
    UpdateBotRequest& WithBotMembers(BotMembersT&& value) { SetBotMembers(std::forward<BotMembersT>(value)); return *this;}
    template<typename BotMembersT = BotMember>
    UpdateBotRequest& AddBotMembers(BotMembersT&& value) { m_botMembersHasBeenSet = true; m_botMembers.emplace_back(std::forward<BotMembersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Allows you to modify how Amazon Lex logs errors during bot interactions,
     * including destinations for error logs and the types of errors to be
     * captured.</p>
     */
    inline const ErrorLogSettings& GetErrorLogSettings() const { return m_errorLogSettings; }
    inline bool ErrorLogSettingsHasBeenSet() const { return m_errorLogSettingsHasBeenSet; }
    template<typename ErrorLogSettingsT = ErrorLogSettings>
    void SetErrorLogSettings(ErrorLogSettingsT&& value) { m_errorLogSettingsHasBeenSet = true; m_errorLogSettings = std::forward<ErrorLogSettingsT>(value); }
    template<typename ErrorLogSettingsT = ErrorLogSettings>
    UpdateBotRequest& WithErrorLogSettings(ErrorLogSettingsT&& value) { SetErrorLogSettings(std::forward<ErrorLogSettingsT>(value)); return *this;}
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

    BotType m_botType{BotType::NOT_SET};
    bool m_botTypeHasBeenSet = false;

    Aws::Vector<BotMember> m_botMembers;
    bool m_botMembersHasBeenSet = false;

    ErrorLogSettings m_errorLogSettings;
    bool m_errorLogSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
