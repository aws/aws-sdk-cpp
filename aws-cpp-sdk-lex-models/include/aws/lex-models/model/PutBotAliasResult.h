/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lex-models/model/ConversationLogsResponse.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/model/Tag.h>
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
namespace LexModelBuildingService
{
namespace Model
{
  class PutBotAliasResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API PutBotAliasResult();
    AWS_LEXMODELBUILDINGSERVICE_API PutBotAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API PutBotAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the alias.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the alias.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the alias.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the alias.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the alias.</p>
     */
    inline PutBotAliasResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the alias.</p>
     */
    inline PutBotAliasResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the alias.</p>
     */
    inline PutBotAliasResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the alias.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the alias.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the alias.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the alias.</p>
     */
    inline PutBotAliasResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the alias.</p>
     */
    inline PutBotAliasResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the alias.</p>
     */
    inline PutBotAliasResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The version of the bot that the alias points to.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that the alias points to.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot that the alias points to.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that the alias points to.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that the alias points to.</p>
     */
    inline PutBotAliasResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that the alias points to.</p>
     */
    inline PutBotAliasResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that the alias points to.</p>
     */
    inline PutBotAliasResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The name of the bot that the alias points to.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the bot that the alias points to.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botName = value; }

    /**
     * <p>The name of the bot that the alias points to.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botName = std::move(value); }

    /**
     * <p>The name of the bot that the alias points to.</p>
     */
    inline void SetBotName(const char* value) { m_botName.assign(value); }

    /**
     * <p>The name of the bot that the alias points to.</p>
     */
    inline PutBotAliasResult& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the bot that the alias points to.</p>
     */
    inline PutBotAliasResult& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot that the alias points to.</p>
     */
    inline PutBotAliasResult& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>The date that the bot alias was updated. When you create a resource, the
     * creation date and the last updated date are the same.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The date that the bot alias was updated. When you create a resource, the
     * creation date and the last updated date are the same.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }

    /**
     * <p>The date that the bot alias was updated. When you create a resource, the
     * creation date and the last updated date are the same.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The date that the bot alias was updated. When you create a resource, the
     * creation date and the last updated date are the same.</p>
     */
    inline PutBotAliasResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The date that the bot alias was updated. When you create a resource, the
     * creation date and the last updated date are the same.</p>
     */
    inline PutBotAliasResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}


    /**
     * <p>The date that the bot alias was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date that the bot alias was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date that the bot alias was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date that the bot alias was created.</p>
     */
    inline PutBotAliasResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date that the bot alias was created.</p>
     */
    inline PutBotAliasResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The checksum for the current version of the alias.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * <p>The checksum for the current version of the alias.</p>
     */
    inline void SetChecksum(const Aws::String& value) { m_checksum = value; }

    /**
     * <p>The checksum for the current version of the alias.</p>
     */
    inline void SetChecksum(Aws::String&& value) { m_checksum = std::move(value); }

    /**
     * <p>The checksum for the current version of the alias.</p>
     */
    inline void SetChecksum(const char* value) { m_checksum.assign(value); }

    /**
     * <p>The checksum for the current version of the alias.</p>
     */
    inline PutBotAliasResult& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * <p>The checksum for the current version of the alias.</p>
     */
    inline PutBotAliasResult& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * <p>The checksum for the current version of the alias.</p>
     */
    inline PutBotAliasResult& WithChecksum(const char* value) { SetChecksum(value); return *this;}


    /**
     * <p>The settings that determine how Amazon Lex uses conversation logs for the
     * alias.</p>
     */
    inline const ConversationLogsResponse& GetConversationLogs() const{ return m_conversationLogs; }

    /**
     * <p>The settings that determine how Amazon Lex uses conversation logs for the
     * alias.</p>
     */
    inline void SetConversationLogs(const ConversationLogsResponse& value) { m_conversationLogs = value; }

    /**
     * <p>The settings that determine how Amazon Lex uses conversation logs for the
     * alias.</p>
     */
    inline void SetConversationLogs(ConversationLogsResponse&& value) { m_conversationLogs = std::move(value); }

    /**
     * <p>The settings that determine how Amazon Lex uses conversation logs for the
     * alias.</p>
     */
    inline PutBotAliasResult& WithConversationLogs(const ConversationLogsResponse& value) { SetConversationLogs(value); return *this;}

    /**
     * <p>The settings that determine how Amazon Lex uses conversation logs for the
     * alias.</p>
     */
    inline PutBotAliasResult& WithConversationLogs(ConversationLogsResponse&& value) { SetConversationLogs(std::move(value)); return *this;}


    /**
     * <p>A list of tags associated with a bot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags associated with a bot.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>A list of tags associated with a bot.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>A list of tags associated with a bot.</p>
     */
    inline PutBotAliasResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags associated with a bot.</p>
     */
    inline PutBotAliasResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags associated with a bot.</p>
     */
    inline PutBotAliasResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags associated with a bot.</p>
     */
    inline PutBotAliasResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_botVersion;

    Aws::String m_botName;

    Aws::Utils::DateTime m_lastUpdatedDate;

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_checksum;

    ConversationLogsResponse m_conversationLogs;

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
