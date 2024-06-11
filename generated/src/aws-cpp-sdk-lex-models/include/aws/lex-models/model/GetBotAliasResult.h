﻿/**
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
  class GetBotAliasResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetBotAliasResult();
    AWS_LEXMODELBUILDINGSERVICE_API GetBotAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetBotAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the bot alias.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetBotAliasResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetBotAliasResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetBotAliasResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the bot alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetBotAliasResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetBotAliasResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetBotAliasResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that the alias points to.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }
    inline GetBotAliasResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline GetBotAliasResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline GetBotAliasResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bot that the alias points to.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }
    inline void SetBotName(const Aws::String& value) { m_botName = value; }
    inline void SetBotName(Aws::String&& value) { m_botName = std::move(value); }
    inline void SetBotName(const char* value) { m_botName.assign(value); }
    inline GetBotAliasResult& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}
    inline GetBotAliasResult& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}
    inline GetBotAliasResult& WithBotName(const char* value) { SetBotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the bot alias was updated. When you create a resource, the
     * creation date and the last updated date are the same.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }
    inline GetBotAliasResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}
    inline GetBotAliasResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the bot alias was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline GetBotAliasResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline GetBotAliasResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checksum of the bot alias.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }
    inline void SetChecksum(const Aws::String& value) { m_checksum = value; }
    inline void SetChecksum(Aws::String&& value) { m_checksum = std::move(value); }
    inline void SetChecksum(const char* value) { m_checksum.assign(value); }
    inline GetBotAliasResult& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}
    inline GetBotAliasResult& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}
    inline GetBotAliasResult& WithChecksum(const char* value) { SetChecksum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings that determine how Amazon Lex uses conversation logs for the
     * alias.</p>
     */
    inline const ConversationLogsResponse& GetConversationLogs() const{ return m_conversationLogs; }
    inline void SetConversationLogs(const ConversationLogsResponse& value) { m_conversationLogs = value; }
    inline void SetConversationLogs(ConversationLogsResponse&& value) { m_conversationLogs = std::move(value); }
    inline GetBotAliasResult& WithConversationLogs(const ConversationLogsResponse& value) { SetConversationLogs(value); return *this;}
    inline GetBotAliasResult& WithConversationLogs(ConversationLogsResponse&& value) { SetConversationLogs(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBotAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBotAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBotAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_botVersion;

    Aws::String m_botName;

    Aws::Utils::DateTime m_lastUpdatedDate;

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_checksum;

    ConversationLogsResponse m_conversationLogs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
