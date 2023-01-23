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


    /**
     * <p>The name of the bot. The bot name must be unique in the account that creates
     * the bot.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the bot. The bot name must be unique in the account that creates
     * the bot.</p>
     */
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }

    /**
     * <p>The name of the bot. The bot name must be unique in the account that creates
     * the bot.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>The name of the bot. The bot name must be unique in the account that creates
     * the bot.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }

    /**
     * <p>The name of the bot. The bot name must be unique in the account that creates
     * the bot.</p>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>The name of the bot. The bot name must be unique in the account that creates
     * the bot.</p>
     */
    inline CreateBotRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the bot. The bot name must be unique in the account that creates
     * the bot.</p>
     */
    inline CreateBotRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot. The bot name must be unique in the account that creates
     * the bot.</p>
     */
    inline CreateBotRequest& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>A description of the bot. It appears in lists to help you identify a
     * particular bot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the bot. It appears in lists to help you identify a
     * particular bot.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the bot. It appears in lists to help you identify a
     * particular bot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the bot. It appears in lists to help you identify a
     * particular bot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the bot. It appears in lists to help you identify a
     * particular bot.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the bot. It appears in lists to help you identify a
     * particular bot.</p>
     */
    inline CreateBotRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the bot. It appears in lists to help you identify a
     * particular bot.</p>
     */
    inline CreateBotRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the bot. It appears in lists to help you identify a
     * particular bot.</p>
     */
    inline CreateBotRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the bot.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the bot.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the bot.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the bot.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the bot.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the bot.</p>
     */
    inline CreateBotRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the bot.</p>
     */
    inline CreateBotRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the bot.</p>
     */
    inline CreateBotRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Provides information on additional privacy protections Amazon Lex should use
     * with the bot's data.</p>
     */
    inline const DataPrivacy& GetDataPrivacy() const{ return m_dataPrivacy; }

    /**
     * <p>Provides information on additional privacy protections Amazon Lex should use
     * with the bot's data.</p>
     */
    inline bool DataPrivacyHasBeenSet() const { return m_dataPrivacyHasBeenSet; }

    /**
     * <p>Provides information on additional privacy protections Amazon Lex should use
     * with the bot's data.</p>
     */
    inline void SetDataPrivacy(const DataPrivacy& value) { m_dataPrivacyHasBeenSet = true; m_dataPrivacy = value; }

    /**
     * <p>Provides information on additional privacy protections Amazon Lex should use
     * with the bot's data.</p>
     */
    inline void SetDataPrivacy(DataPrivacy&& value) { m_dataPrivacyHasBeenSet = true; m_dataPrivacy = std::move(value); }

    /**
     * <p>Provides information on additional privacy protections Amazon Lex should use
     * with the bot's data.</p>
     */
    inline CreateBotRequest& WithDataPrivacy(const DataPrivacy& value) { SetDataPrivacy(value); return *this;}

    /**
     * <p>Provides information on additional privacy protections Amazon Lex should use
     * with the bot's data.</p>
     */
    inline CreateBotRequest& WithDataPrivacy(DataPrivacy&& value) { SetDataPrivacy(std::move(value)); return *this;}


    /**
     * <p>The time, in seconds, that Amazon Lex should keep information about a user's
     * conversation with the bot. </p> <p>A user interaction remains active for the
     * amount of time specified. If no conversation occurs during this time, the
     * session expires and Amazon Lex deletes any data provided before the timeout.</p>
     * <p>You can specify between 60 (1 minute) and 86,400 (24 hours) seconds.</p>
     */
    inline int GetIdleSessionTTLInSeconds() const{ return m_idleSessionTTLInSeconds; }

    /**
     * <p>The time, in seconds, that Amazon Lex should keep information about a user's
     * conversation with the bot. </p> <p>A user interaction remains active for the
     * amount of time specified. If no conversation occurs during this time, the
     * session expires and Amazon Lex deletes any data provided before the timeout.</p>
     * <p>You can specify between 60 (1 minute) and 86,400 (24 hours) seconds.</p>
     */
    inline bool IdleSessionTTLInSecondsHasBeenSet() const { return m_idleSessionTTLInSecondsHasBeenSet; }

    /**
     * <p>The time, in seconds, that Amazon Lex should keep information about a user's
     * conversation with the bot. </p> <p>A user interaction remains active for the
     * amount of time specified. If no conversation occurs during this time, the
     * session expires and Amazon Lex deletes any data provided before the timeout.</p>
     * <p>You can specify between 60 (1 minute) and 86,400 (24 hours) seconds.</p>
     */
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSecondsHasBeenSet = true; m_idleSessionTTLInSeconds = value; }

    /**
     * <p>The time, in seconds, that Amazon Lex should keep information about a user's
     * conversation with the bot. </p> <p>A user interaction remains active for the
     * amount of time specified. If no conversation occurs during this time, the
     * session expires and Amazon Lex deletes any data provided before the timeout.</p>
     * <p>You can specify between 60 (1 minute) and 86,400 (24 hours) seconds.</p>
     */
    inline CreateBotRequest& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}


    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot. You can't use the <code>UpdateBot</code> operation to update tags. To
     * update tags, use the <code>TagResource</code> operation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBotTags() const{ return m_botTags; }

    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot. You can't use the <code>UpdateBot</code> operation to update tags. To
     * update tags, use the <code>TagResource</code> operation.</p>
     */
    inline bool BotTagsHasBeenSet() const { return m_botTagsHasBeenSet; }

    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot. You can't use the <code>UpdateBot</code> operation to update tags. To
     * update tags, use the <code>TagResource</code> operation.</p>
     */
    inline void SetBotTags(const Aws::Map<Aws::String, Aws::String>& value) { m_botTagsHasBeenSet = true; m_botTags = value; }

    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot. You can't use the <code>UpdateBot</code> operation to update tags. To
     * update tags, use the <code>TagResource</code> operation.</p>
     */
    inline void SetBotTags(Aws::Map<Aws::String, Aws::String>&& value) { m_botTagsHasBeenSet = true; m_botTags = std::move(value); }

    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot. You can't use the <code>UpdateBot</code> operation to update tags. To
     * update tags, use the <code>TagResource</code> operation.</p>
     */
    inline CreateBotRequest& WithBotTags(const Aws::Map<Aws::String, Aws::String>& value) { SetBotTags(value); return *this;}

    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot. You can't use the <code>UpdateBot</code> operation to update tags. To
     * update tags, use the <code>TagResource</code> operation.</p>
     */
    inline CreateBotRequest& WithBotTags(Aws::Map<Aws::String, Aws::String>&& value) { SetBotTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot. You can't use the <code>UpdateBot</code> operation to update tags. To
     * update tags, use the <code>TagResource</code> operation.</p>
     */
    inline CreateBotRequest& AddBotTags(const Aws::String& key, const Aws::String& value) { m_botTagsHasBeenSet = true; m_botTags.emplace(key, value); return *this; }

    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot. You can't use the <code>UpdateBot</code> operation to update tags. To
     * update tags, use the <code>TagResource</code> operation.</p>
     */
    inline CreateBotRequest& AddBotTags(Aws::String&& key, const Aws::String& value) { m_botTagsHasBeenSet = true; m_botTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot. You can't use the <code>UpdateBot</code> operation to update tags. To
     * update tags, use the <code>TagResource</code> operation.</p>
     */
    inline CreateBotRequest& AddBotTags(const Aws::String& key, Aws::String&& value) { m_botTagsHasBeenSet = true; m_botTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot. You can't use the <code>UpdateBot</code> operation to update tags. To
     * update tags, use the <code>TagResource</code> operation.</p>
     */
    inline CreateBotRequest& AddBotTags(Aws::String&& key, Aws::String&& value) { m_botTagsHasBeenSet = true; m_botTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot. You can't use the <code>UpdateBot</code> operation to update tags. To
     * update tags, use the <code>TagResource</code> operation.</p>
     */
    inline CreateBotRequest& AddBotTags(const char* key, Aws::String&& value) { m_botTagsHasBeenSet = true; m_botTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot. You can't use the <code>UpdateBot</code> operation to update tags. To
     * update tags, use the <code>TagResource</code> operation.</p>
     */
    inline CreateBotRequest& AddBotTags(Aws::String&& key, const char* value) { m_botTagsHasBeenSet = true; m_botTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags to add to the bot. You can only add tags when you create a
     * bot. You can't use the <code>UpdateBot</code> operation to update tags. To
     * update tags, use the <code>TagResource</code> operation.</p>
     */
    inline CreateBotRequest& AddBotTags(const char* key, const char* value) { m_botTagsHasBeenSet = true; m_botTags.emplace(key, value); return *this; }


    /**
     * <p>A list of tags to add to the test alias for a bot. You can only add tags when
     * you create a bot. You can't use the <code>UpdateAlias</code> operation to update
     * tags. To update tags on the test alias, use the <code>TagResource</code>
     * operation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTestBotAliasTags() const{ return m_testBotAliasTags; }

    /**
     * <p>A list of tags to add to the test alias for a bot. You can only add tags when
     * you create a bot. You can't use the <code>UpdateAlias</code> operation to update
     * tags. To update tags on the test alias, use the <code>TagResource</code>
     * operation.</p>
     */
    inline bool TestBotAliasTagsHasBeenSet() const { return m_testBotAliasTagsHasBeenSet; }

    /**
     * <p>A list of tags to add to the test alias for a bot. You can only add tags when
     * you create a bot. You can't use the <code>UpdateAlias</code> operation to update
     * tags. To update tags on the test alias, use the <code>TagResource</code>
     * operation.</p>
     */
    inline void SetTestBotAliasTags(const Aws::Map<Aws::String, Aws::String>& value) { m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags = value; }

    /**
     * <p>A list of tags to add to the test alias for a bot. You can only add tags when
     * you create a bot. You can't use the <code>UpdateAlias</code> operation to update
     * tags. To update tags on the test alias, use the <code>TagResource</code>
     * operation.</p>
     */
    inline void SetTestBotAliasTags(Aws::Map<Aws::String, Aws::String>&& value) { m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags = std::move(value); }

    /**
     * <p>A list of tags to add to the test alias for a bot. You can only add tags when
     * you create a bot. You can't use the <code>UpdateAlias</code> operation to update
     * tags. To update tags on the test alias, use the <code>TagResource</code>
     * operation.</p>
     */
    inline CreateBotRequest& WithTestBotAliasTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTestBotAliasTags(value); return *this;}

    /**
     * <p>A list of tags to add to the test alias for a bot. You can only add tags when
     * you create a bot. You can't use the <code>UpdateAlias</code> operation to update
     * tags. To update tags on the test alias, use the <code>TagResource</code>
     * operation.</p>
     */
    inline CreateBotRequest& WithTestBotAliasTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTestBotAliasTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to add to the test alias for a bot. You can only add tags when
     * you create a bot. You can't use the <code>UpdateAlias</code> operation to update
     * tags. To update tags on the test alias, use the <code>TagResource</code>
     * operation.</p>
     */
    inline CreateBotRequest& AddTestBotAliasTags(const Aws::String& key, const Aws::String& value) { m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags.emplace(key, value); return *this; }

    /**
     * <p>A list of tags to add to the test alias for a bot. You can only add tags when
     * you create a bot. You can't use the <code>UpdateAlias</code> operation to update
     * tags. To update tags on the test alias, use the <code>TagResource</code>
     * operation.</p>
     */
    inline CreateBotRequest& AddTestBotAliasTags(Aws::String&& key, const Aws::String& value) { m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags to add to the test alias for a bot. You can only add tags when
     * you create a bot. You can't use the <code>UpdateAlias</code> operation to update
     * tags. To update tags on the test alias, use the <code>TagResource</code>
     * operation.</p>
     */
    inline CreateBotRequest& AddTestBotAliasTags(const Aws::String& key, Aws::String&& value) { m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags to add to the test alias for a bot. You can only add tags when
     * you create a bot. You can't use the <code>UpdateAlias</code> operation to update
     * tags. To update tags on the test alias, use the <code>TagResource</code>
     * operation.</p>
     */
    inline CreateBotRequest& AddTestBotAliasTags(Aws::String&& key, Aws::String&& value) { m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags to add to the test alias for a bot. You can only add tags when
     * you create a bot. You can't use the <code>UpdateAlias</code> operation to update
     * tags. To update tags on the test alias, use the <code>TagResource</code>
     * operation.</p>
     */
    inline CreateBotRequest& AddTestBotAliasTags(const char* key, Aws::String&& value) { m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags to add to the test alias for a bot. You can only add tags when
     * you create a bot. You can't use the <code>UpdateAlias</code> operation to update
     * tags. To update tags on the test alias, use the <code>TagResource</code>
     * operation.</p>
     */
    inline CreateBotRequest& AddTestBotAliasTags(Aws::String&& key, const char* value) { m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags to add to the test alias for a bot. You can only add tags when
     * you create a bot. You can't use the <code>UpdateAlias</code> operation to update
     * tags. To update tags on the test alias, use the <code>TagResource</code>
     * operation.</p>
     */
    inline CreateBotRequest& AddTestBotAliasTags(const char* key, const char* value) { m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags.emplace(key, value); return *this; }

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
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
