/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lex-models/model/ConversationLogsResponse.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Provides information about a bot alias.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/BotAliasMetadata">AWS
   * API Reference</a></p>
   */
  class BotAliasMetadata
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API BotAliasMetadata();
    AWS_LEXMODELBUILDINGSERVICE_API BotAliasMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API BotAliasMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the bot alias.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline BotAliasMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline BotAliasMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline BotAliasMetadata& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the bot alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline BotAliasMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline BotAliasMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline BotAliasMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Amazon Lex bot to which the alias points.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }
    inline BotAliasMetadata& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline BotAliasMetadata& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline BotAliasMetadata& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bot to which the alias points.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }
    inline BotAliasMetadata& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}
    inline BotAliasMetadata& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}
    inline BotAliasMetadata& WithBotName(const char* value) { SetBotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the bot alias was updated. When you create a resource, the
     * creation date and last updated date are the same.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::move(value); }
    inline BotAliasMetadata& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}
    inline BotAliasMetadata& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the bot alias was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline BotAliasMetadata& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline BotAliasMetadata& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checksum of the bot alias.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }
    inline void SetChecksum(const Aws::String& value) { m_checksumHasBeenSet = true; m_checksum = value; }
    inline void SetChecksum(Aws::String&& value) { m_checksumHasBeenSet = true; m_checksum = std::move(value); }
    inline void SetChecksum(const char* value) { m_checksumHasBeenSet = true; m_checksum.assign(value); }
    inline BotAliasMetadata& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}
    inline BotAliasMetadata& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}
    inline BotAliasMetadata& WithChecksum(const char* value) { SetChecksum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings that determine how Amazon Lex uses conversation logs for the
     * alias.</p>
     */
    inline const ConversationLogsResponse& GetConversationLogs() const{ return m_conversationLogs; }
    inline bool ConversationLogsHasBeenSet() const { return m_conversationLogsHasBeenSet; }
    inline void SetConversationLogs(const ConversationLogsResponse& value) { m_conversationLogsHasBeenSet = true; m_conversationLogs = value; }
    inline void SetConversationLogs(ConversationLogsResponse&& value) { m_conversationLogsHasBeenSet = true; m_conversationLogs = std::move(value); }
    inline BotAliasMetadata& WithConversationLogs(const ConversationLogsResponse& value) { SetConversationLogs(value); return *this;}
    inline BotAliasMetadata& WithConversationLogs(ConversationLogsResponse&& value) { SetConversationLogs(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_lastUpdatedDate;
    bool m_lastUpdatedDateHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    ConversationLogsResponse m_conversationLogs;
    bool m_conversationLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
