/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/DataPrivacy.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/BotType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateBotRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API CreateBotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBot"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the bot. The bot name must be unique in the account that creates
     * the bot.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }
    inline CreateBotRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}
    inline CreateBotRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}
    inline CreateBotRequest& WithBotName(const char* value) { SetBotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the bot. It appears in lists to help you identify a
     * particular bot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateBotRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateBotRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateBotRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the bot.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateBotRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateBotRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateBotRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on additional privacy protections Amazon Lex should use
     * with the bot's data.</p>
     */
    inline const DataPrivacy& GetDataPrivacy() const{ return m_dataPrivacy; }
    inline bool DataPrivacyHasBeenSet() const { return m_dataPrivacyHasBeenSet; }
    inline void SetDataPrivacy(const DataPrivacy& value) { m_dataPrivacyHasBeenSet = true; m_dataPrivacy = value; }
    inline void SetDataPrivacy(DataPrivacy&& value) { m_dataPrivacyHasBeenSet = true; m_dataPrivacy = std::move(value); }
    inline CreateBotRequest& WithDataPrivacy(const DataPrivacy& value) { SetDataPrivacy(value); return *this;}
    inline CreateBotRequest& WithDataPrivacy(DataPrivacy&& value) { SetDataPrivacy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds, that Amazon Lex should keep information about a user's
     * conversation with the bot. </p> <p>A user interaction remains active for the
     * amount of time specified. If no conversation occurs during this time, the
     * session expires and Amazon Lex deletes any data provided before the timeout.</p>
     * <p>You can specify between 60 (1 minute) and 86,400 (24 hours) seconds.</p>
     */
    inline int GetIdleSessionTTLInSeconds() const{ return m_idleSessionTTLInSeconds; }
    inline bool IdleSessionTTLInSecondsHasBeenSet() const { return m_idleSessionTTLInSecondsHasBeenSet; }
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSecondsHasBeenSet = true; m_idleSessionTTLInSeconds = value; }
    inline CreateBotRequest& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot. You can't use the <code>UpdateBot</code> operation to update tags. To
     * update tags, use the <code>TagResource</code> operation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBotTags() const{ return m_botTags; }
    inline bool BotTagsHasBeenSet() const { return m_botTagsHasBeenSet; }
    inline void SetBotTags(const Aws::Map<Aws::String, Aws::String>& value) { m_botTagsHasBeenSet = true; m_botTags = value; }
    inline void SetBotTags(Aws::Map<Aws::String, Aws::String>&& value) { m_botTagsHasBeenSet = true; m_botTags = std::move(value); }
    inline CreateBotRequest& WithBotTags(const Aws::Map<Aws::String, Aws::String>& value) { SetBotTags(value); return *this;}
    inline CreateBotRequest& WithBotTags(Aws::Map<Aws::String, Aws::String>&& value) { SetBotTags(std::move(value)); return *this;}
    inline CreateBotRequest& AddBotTags(const Aws::String& key, const Aws::String& value) { m_botTagsHasBeenSet = true; m_botTags.emplace(key, value); return *this; }
    inline CreateBotRequest& AddBotTags(Aws::String&& key, const Aws::String& value) { m_botTagsHasBeenSet = true; m_botTags.emplace(std::move(key), value); return *this; }
    inline CreateBotRequest& AddBotTags(const Aws::String& key, Aws::String&& value) { m_botTagsHasBeenSet = true; m_botTags.emplace(key, std::move(value)); return *this; }
    inline CreateBotRequest& AddBotTags(Aws::String&& key, Aws::String&& value) { m_botTagsHasBeenSet = true; m_botTags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateBotRequest& AddBotTags(const char* key, Aws::String&& value) { m_botTagsHasBeenSet = true; m_botTags.emplace(key, std::move(value)); return *this; }
    inline CreateBotRequest& AddBotTags(Aws::String&& key, const char* value) { m_botTagsHasBeenSet = true; m_botTags.emplace(std::move(key), value); return *this; }
    inline CreateBotRequest& AddBotTags(const char* key, const char* value) { m_botTagsHasBeenSet = true; m_botTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags to add to the test alias for a bot. You can only add tags when
     * you create a bot. You can't use the <code>UpdateAlias</code> operation to update
     * tags. To update tags on the test alias, use the <code>TagResource</code>
     * operation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTestBotAliasTags() const{ return m_testBotAliasTags; }
    inline bool TestBotAliasTagsHasBeenSet() const { return m_testBotAliasTagsHasBeenSet; }
    inline void SetTestBotAliasTags(const Aws::Map<Aws::String, Aws::String>& value) { m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags = value; }
    inline void SetTestBotAliasTags(Aws::Map<Aws::String, Aws::String>&& value) { m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags = std::move(value); }
    inline CreateBotRequest& WithTestBotAliasTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTestBotAliasTags(value); return *this;}
    inline CreateBotRequest& WithTestBotAliasTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTestBotAliasTags(std::move(value)); return *this;}
    inline CreateBotRequest& AddTestBotAliasTags(const Aws::String& key, const Aws::String& value) { m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags.emplace(key, value); return *this; }
    inline CreateBotRequest& AddTestBotAliasTags(Aws::String&& key, const Aws::String& value) { m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags.emplace(std::move(key), value); return *this; }
    inline CreateBotRequest& AddTestBotAliasTags(const Aws::String& key, Aws::String&& value) { m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags.emplace(key, std::move(value)); return *this; }
    inline CreateBotRequest& AddTestBotAliasTags(Aws::String&& key, Aws::String&& value) { m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateBotRequest& AddTestBotAliasTags(const char* key, Aws::String&& value) { m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags.emplace(key, std::move(value)); return *this; }
    inline CreateBotRequest& AddTestBotAliasTags(Aws::String&& key, const char* value) { m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags.emplace(std::move(key), value); return *this; }
    inline CreateBotRequest& AddTestBotAliasTags(const char* key, const char* value) { m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of a bot to create.</p>
     */
    inline const BotType& GetBotType() const{ return m_botType; }
    inline bool BotTypeHasBeenSet() const { return m_botTypeHasBeenSet; }
    inline void SetBotType(const BotType& value) { m_botTypeHasBeenSet = true; m_botType = value; }
    inline void SetBotType(BotType&& value) { m_botTypeHasBeenSet = true; m_botType = std::move(value); }
    inline CreateBotRequest& WithBotType(const BotType& value) { SetBotType(value); return *this;}
    inline CreateBotRequest& WithBotType(BotType&& value) { SetBotType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of bot members in a network to be created.</p>
     */
    inline const Aws::Vector<BotMember>& GetBotMembers() const{ return m_botMembers; }
    inline bool BotMembersHasBeenSet() const { return m_botMembersHasBeenSet; }
    inline void SetBotMembers(const Aws::Vector<BotMember>& value) { m_botMembersHasBeenSet = true; m_botMembers = value; }
    inline void SetBotMembers(Aws::Vector<BotMember>&& value) { m_botMembersHasBeenSet = true; m_botMembers = std::move(value); }
    inline CreateBotRequest& WithBotMembers(const Aws::Vector<BotMember>& value) { SetBotMembers(value); return *this;}
    inline CreateBotRequest& WithBotMembers(Aws::Vector<BotMember>&& value) { SetBotMembers(std::move(value)); return *this;}
    inline CreateBotRequest& AddBotMembers(const BotMember& value) { m_botMembersHasBeenSet = true; m_botMembers.push_back(value); return *this; }
    inline CreateBotRequest& AddBotMembers(BotMember&& value) { m_botMembersHasBeenSet = true; m_botMembers.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    DataPrivacy m_dataPrivacy;
    bool m_dataPrivacyHasBeenSet = false;

    int m_idleSessionTTLInSeconds;
    bool m_idleSessionTTLInSecondsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_botTags;
    bool m_botTagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_testBotAliasTags;
    bool m_testBotAliasTagsHasBeenSet = false;

    BotType m_botType;
    bool m_botTypeHasBeenSet = false;

    Aws::Vector<BotMember> m_botMembers;
    bool m_botMembersHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
