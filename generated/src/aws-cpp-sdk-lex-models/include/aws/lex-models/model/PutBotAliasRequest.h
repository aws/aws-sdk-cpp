/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/ConversationLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/model/Tag.h>
#include <utility>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class PutBotAliasRequest : public LexModelBuildingServiceRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API PutBotAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutBotAlias"; }

    AWS_LEXMODELBUILDINGSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the alias. The name is <i>not</i> case sensitive.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PutBotAliasRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PutBotAliasRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PutBotAliasRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PutBotAliasRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PutBotAliasRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PutBotAliasRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }
    inline PutBotAliasRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline PutBotAliasRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline PutBotAliasRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bot.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }
    inline PutBotAliasRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}
    inline PutBotAliasRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}
    inline PutBotAliasRequest& WithBotName(const char* value) { SetBotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new bot alias, leave the <code>checksum</code> field blank.
     * If you specify a checksum you get a <code>BadRequestException</code>
     * exception.</p> <p>When you want to update a bot alias, set the
     * <code>checksum</code> field to the checksum of the most recent revision of the
     * <code>$LATEST</code> version. If you don't specify the <code> checksum</code>
     * field, or if the checksum does not match the <code>$LATEST</code> version, you
     * get a <code>PreconditionFailedException</code> exception.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }
    inline void SetChecksum(const Aws::String& value) { m_checksumHasBeenSet = true; m_checksum = value; }
    inline void SetChecksum(Aws::String&& value) { m_checksumHasBeenSet = true; m_checksum = std::move(value); }
    inline void SetChecksum(const char* value) { m_checksumHasBeenSet = true; m_checksum.assign(value); }
    inline PutBotAliasRequest& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}
    inline PutBotAliasRequest& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}
    inline PutBotAliasRequest& WithChecksum(const char* value) { SetChecksum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for conversation logs for the alias.</p>
     */
    inline const ConversationLogsRequest& GetConversationLogs() const{ return m_conversationLogs; }
    inline bool ConversationLogsHasBeenSet() const { return m_conversationLogsHasBeenSet; }
    inline void SetConversationLogs(const ConversationLogsRequest& value) { m_conversationLogsHasBeenSet = true; m_conversationLogs = value; }
    inline void SetConversationLogs(ConversationLogsRequest&& value) { m_conversationLogsHasBeenSet = true; m_conversationLogs = std::move(value); }
    inline PutBotAliasRequest& WithConversationLogs(const ConversationLogsRequest& value) { SetConversationLogs(value); return *this;}
    inline PutBotAliasRequest& WithConversationLogs(ConversationLogsRequest&& value) { SetConversationLogs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to add to the bot alias. You can only add tags when you create
     * an alias, you can't use the <code>PutBotAlias</code> operation to update the
     * tags on a bot alias. To update tags, use the <code>TagResource</code>
     * operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PutBotAliasRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline PutBotAliasRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline PutBotAliasRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline PutBotAliasRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    ConversationLogsRequest m_conversationLogs;
    bool m_conversationLogsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
