/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/ConversationLogSettings.h>
#include <aws/lexv2-models/model/SentimentAnalysisSettings.h>
#include <aws/lexv2-models/model/BotAliasLocaleSettings.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class CreateBotAliasRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API CreateBotAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBotAlias"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The alias to create. The name must be unique for the bot.</p>
     */
    inline const Aws::String& GetBotAliasName() const{ return m_botAliasName; }

    /**
     * <p>The alias to create. The name must be unique for the bot.</p>
     */
    inline bool BotAliasNameHasBeenSet() const { return m_botAliasNameHasBeenSet; }

    /**
     * <p>The alias to create. The name must be unique for the bot.</p>
     */
    inline void SetBotAliasName(const Aws::String& value) { m_botAliasNameHasBeenSet = true; m_botAliasName = value; }

    /**
     * <p>The alias to create. The name must be unique for the bot.</p>
     */
    inline void SetBotAliasName(Aws::String&& value) { m_botAliasNameHasBeenSet = true; m_botAliasName = std::move(value); }

    /**
     * <p>The alias to create. The name must be unique for the bot.</p>
     */
    inline void SetBotAliasName(const char* value) { m_botAliasNameHasBeenSet = true; m_botAliasName.assign(value); }

    /**
     * <p>The alias to create. The name must be unique for the bot.</p>
     */
    inline CreateBotAliasRequest& WithBotAliasName(const Aws::String& value) { SetBotAliasName(value); return *this;}

    /**
     * <p>The alias to create. The name must be unique for the bot.</p>
     */
    inline CreateBotAliasRequest& WithBotAliasName(Aws::String&& value) { SetBotAliasName(std::move(value)); return *this;}

    /**
     * <p>The alias to create. The name must be unique for the bot.</p>
     */
    inline CreateBotAliasRequest& WithBotAliasName(const char* value) { SetBotAliasName(value); return *this;}


    /**
     * <p>A description of the alias. Use this description to help identify the
     * alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the alias. Use this description to help identify the
     * alias.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the alias. Use this description to help identify the
     * alias.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the alias. Use this description to help identify the
     * alias.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the alias. Use this description to help identify the
     * alias.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the alias. Use this description to help identify the
     * alias.</p>
     */
    inline CreateBotAliasRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the alias. Use this description to help identify the
     * alias.</p>
     */
    inline CreateBotAliasRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the alias. Use this description to help identify the
     * alias.</p>
     */
    inline CreateBotAliasRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The version of the bot that this alias points to. You can use the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_UpdateBotAlias.html">UpdateBotAlias</a>
     * operation to change the bot version associated with the alias.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that this alias points to. You can use the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_UpdateBotAlias.html">UpdateBotAlias</a>
     * operation to change the bot version associated with the alias.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot that this alias points to. You can use the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_UpdateBotAlias.html">UpdateBotAlias</a>
     * operation to change the bot version associated with the alias.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot that this alias points to. You can use the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_UpdateBotAlias.html">UpdateBotAlias</a>
     * operation to change the bot version associated with the alias.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that this alias points to. You can use the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_UpdateBotAlias.html">UpdateBotAlias</a>
     * operation to change the bot version associated with the alias.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that this alias points to. You can use the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_UpdateBotAlias.html">UpdateBotAlias</a>
     * operation to change the bot version associated with the alias.</p>
     */
    inline CreateBotAliasRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that this alias points to. You can use the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_UpdateBotAlias.html">UpdateBotAlias</a>
     * operation to change the bot version associated with the alias.</p>
     */
    inline CreateBotAliasRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that this alias points to. You can use the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_UpdateBotAlias.html">UpdateBotAlias</a>
     * operation to change the bot version associated with the alias.</p>
     */
    inline CreateBotAliasRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>Maps configuration information to a specific locale. You can use this
     * parameter to specify a specific Lambda function to run different functions in
     * different locales.</p>
     */
    inline const Aws::Map<Aws::String, BotAliasLocaleSettings>& GetBotAliasLocaleSettings() const{ return m_botAliasLocaleSettings; }

    /**
     * <p>Maps configuration information to a specific locale. You can use this
     * parameter to specify a specific Lambda function to run different functions in
     * different locales.</p>
     */
    inline bool BotAliasLocaleSettingsHasBeenSet() const { return m_botAliasLocaleSettingsHasBeenSet; }

    /**
     * <p>Maps configuration information to a specific locale. You can use this
     * parameter to specify a specific Lambda function to run different functions in
     * different locales.</p>
     */
    inline void SetBotAliasLocaleSettings(const Aws::Map<Aws::String, BotAliasLocaleSettings>& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings = value; }

    /**
     * <p>Maps configuration information to a specific locale. You can use this
     * parameter to specify a specific Lambda function to run different functions in
     * different locales.</p>
     */
    inline void SetBotAliasLocaleSettings(Aws::Map<Aws::String, BotAliasLocaleSettings>&& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings = std::move(value); }

    /**
     * <p>Maps configuration information to a specific locale. You can use this
     * parameter to specify a specific Lambda function to run different functions in
     * different locales.</p>
     */
    inline CreateBotAliasRequest& WithBotAliasLocaleSettings(const Aws::Map<Aws::String, BotAliasLocaleSettings>& value) { SetBotAliasLocaleSettings(value); return *this;}

    /**
     * <p>Maps configuration information to a specific locale. You can use this
     * parameter to specify a specific Lambda function to run different functions in
     * different locales.</p>
     */
    inline CreateBotAliasRequest& WithBotAliasLocaleSettings(Aws::Map<Aws::String, BotAliasLocaleSettings>&& value) { SetBotAliasLocaleSettings(std::move(value)); return *this;}

    /**
     * <p>Maps configuration information to a specific locale. You can use this
     * parameter to specify a specific Lambda function to run different functions in
     * different locales.</p>
     */
    inline CreateBotAliasRequest& AddBotAliasLocaleSettings(const Aws::String& key, const BotAliasLocaleSettings& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings.emplace(key, value); return *this; }

    /**
     * <p>Maps configuration information to a specific locale. You can use this
     * parameter to specify a specific Lambda function to run different functions in
     * different locales.</p>
     */
    inline CreateBotAliasRequest& AddBotAliasLocaleSettings(Aws::String&& key, const BotAliasLocaleSettings& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings.emplace(std::move(key), value); return *this; }

    /**
     * <p>Maps configuration information to a specific locale. You can use this
     * parameter to specify a specific Lambda function to run different functions in
     * different locales.</p>
     */
    inline CreateBotAliasRequest& AddBotAliasLocaleSettings(const Aws::String& key, BotAliasLocaleSettings&& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Maps configuration information to a specific locale. You can use this
     * parameter to specify a specific Lambda function to run different functions in
     * different locales.</p>
     */
    inline CreateBotAliasRequest& AddBotAliasLocaleSettings(Aws::String&& key, BotAliasLocaleSettings&& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Maps configuration information to a specific locale. You can use this
     * parameter to specify a specific Lambda function to run different functions in
     * different locales.</p>
     */
    inline CreateBotAliasRequest& AddBotAliasLocaleSettings(const char* key, BotAliasLocaleSettings&& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Maps configuration information to a specific locale. You can use this
     * parameter to specify a specific Lambda function to run different functions in
     * different locales.</p>
     */
    inline CreateBotAliasRequest& AddBotAliasLocaleSettings(const char* key, const BotAliasLocaleSettings& value) { m_botAliasLocaleSettingsHasBeenSet = true; m_botAliasLocaleSettings.emplace(key, value); return *this; }


    /**
     * <p>Specifies whether Amazon Lex logs text and audio for a conversation with the
     * bot. When you enable conversation logs, text logs store text input, transcripts
     * of audio input, and associated metadata in Amazon CloudWatch Logs. Audio logs
     * store audio input in Amazon S3.</p>
     */
    inline const ConversationLogSettings& GetConversationLogSettings() const{ return m_conversationLogSettings; }

    /**
     * <p>Specifies whether Amazon Lex logs text and audio for a conversation with the
     * bot. When you enable conversation logs, text logs store text input, transcripts
     * of audio input, and associated metadata in Amazon CloudWatch Logs. Audio logs
     * store audio input in Amazon S3.</p>
     */
    inline bool ConversationLogSettingsHasBeenSet() const { return m_conversationLogSettingsHasBeenSet; }

    /**
     * <p>Specifies whether Amazon Lex logs text and audio for a conversation with the
     * bot. When you enable conversation logs, text logs store text input, transcripts
     * of audio input, and associated metadata in Amazon CloudWatch Logs. Audio logs
     * store audio input in Amazon S3.</p>
     */
    inline void SetConversationLogSettings(const ConversationLogSettings& value) { m_conversationLogSettingsHasBeenSet = true; m_conversationLogSettings = value; }

    /**
     * <p>Specifies whether Amazon Lex logs text and audio for a conversation with the
     * bot. When you enable conversation logs, text logs store text input, transcripts
     * of audio input, and associated metadata in Amazon CloudWatch Logs. Audio logs
     * store audio input in Amazon S3.</p>
     */
    inline void SetConversationLogSettings(ConversationLogSettings&& value) { m_conversationLogSettingsHasBeenSet = true; m_conversationLogSettings = std::move(value); }

    /**
     * <p>Specifies whether Amazon Lex logs text and audio for a conversation with the
     * bot. When you enable conversation logs, text logs store text input, transcripts
     * of audio input, and associated metadata in Amazon CloudWatch Logs. Audio logs
     * store audio input in Amazon S3.</p>
     */
    inline CreateBotAliasRequest& WithConversationLogSettings(const ConversationLogSettings& value) { SetConversationLogSettings(value); return *this;}

    /**
     * <p>Specifies whether Amazon Lex logs text and audio for a conversation with the
     * bot. When you enable conversation logs, text logs store text input, transcripts
     * of audio input, and associated metadata in Amazon CloudWatch Logs. Audio logs
     * store audio input in Amazon S3.</p>
     */
    inline CreateBotAliasRequest& WithConversationLogSettings(ConversationLogSettings&& value) { SetConversationLogSettings(std::move(value)); return *this;}


    
    inline const SentimentAnalysisSettings& GetSentimentAnalysisSettings() const{ return m_sentimentAnalysisSettings; }

    
    inline bool SentimentAnalysisSettingsHasBeenSet() const { return m_sentimentAnalysisSettingsHasBeenSet; }

    
    inline void SetSentimentAnalysisSettings(const SentimentAnalysisSettings& value) { m_sentimentAnalysisSettingsHasBeenSet = true; m_sentimentAnalysisSettings = value; }

    
    inline void SetSentimentAnalysisSettings(SentimentAnalysisSettings&& value) { m_sentimentAnalysisSettingsHasBeenSet = true; m_sentimentAnalysisSettings = std::move(value); }

    
    inline CreateBotAliasRequest& WithSentimentAnalysisSettings(const SentimentAnalysisSettings& value) { SetSentimentAnalysisSettings(value); return *this;}

    
    inline CreateBotAliasRequest& WithSentimentAnalysisSettings(SentimentAnalysisSettings&& value) { SetSentimentAnalysisSettings(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the bot that the alias applies to.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot that the alias applies to.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The unique identifier of the bot that the alias applies to.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The unique identifier of the bot that the alias applies to.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot that the alias applies to.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot that the alias applies to.</p>
     */
    inline CreateBotAliasRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot that the alias applies to.</p>
     */
    inline CreateBotAliasRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot that the alias applies to.</p>
     */
    inline CreateBotAliasRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>A list of tags to add to the bot alias. You can only add tags when you create
     * an alias, you can't use the <code>UpdateBotAlias</code> operation to update the
     * tags on a bot alias. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to add to the bot alias. You can only add tags when you create
     * an alias, you can't use the <code>UpdateBotAlias</code> operation to update the
     * tags on a bot alias. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to add to the bot alias. You can only add tags when you create
     * an alias, you can't use the <code>UpdateBotAlias</code> operation to update the
     * tags on a bot alias. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to add to the bot alias. You can only add tags when you create
     * an alias, you can't use the <code>UpdateBotAlias</code> operation to update the
     * tags on a bot alias. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to add to the bot alias. You can only add tags when you create
     * an alias, you can't use the <code>UpdateBotAlias</code> operation to update the
     * tags on a bot alias. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline CreateBotAliasRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to add to the bot alias. You can only add tags when you create
     * an alias, you can't use the <code>UpdateBotAlias</code> operation to update the
     * tags on a bot alias. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline CreateBotAliasRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to add to the bot alias. You can only add tags when you create
     * an alias, you can't use the <code>UpdateBotAlias</code> operation to update the
     * tags on a bot alias. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline CreateBotAliasRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of tags to add to the bot alias. You can only add tags when you create
     * an alias, you can't use the <code>UpdateBotAlias</code> operation to update the
     * tags on a bot alias. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline CreateBotAliasRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags to add to the bot alias. You can only add tags when you create
     * an alias, you can't use the <code>UpdateBotAlias</code> operation to update the
     * tags on a bot alias. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline CreateBotAliasRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags to add to the bot alias. You can only add tags when you create
     * an alias, you can't use the <code>UpdateBotAlias</code> operation to update the
     * tags on a bot alias. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline CreateBotAliasRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags to add to the bot alias. You can only add tags when you create
     * an alias, you can't use the <code>UpdateBotAlias</code> operation to update the
     * tags on a bot alias. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline CreateBotAliasRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags to add to the bot alias. You can only add tags when you create
     * an alias, you can't use the <code>UpdateBotAlias</code> operation to update the
     * tags on a bot alias. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline CreateBotAliasRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags to add to the bot alias. You can only add tags when you create
     * an alias, you can't use the <code>UpdateBotAlias</code> operation to update the
     * tags on a bot alias. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline CreateBotAliasRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

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

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
