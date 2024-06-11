﻿/**
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
    AWS_LEXMODELSV2_API UpdateBotResult();
    AWS_LEXMODELSV2_API UpdateBotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API UpdateBotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the bot that was updated.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline UpdateBotResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline UpdateBotResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline UpdateBotResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bot after the update.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }
    inline void SetBotName(const Aws::String& value) { m_botName = value; }
    inline void SetBotName(Aws::String&& value) { m_botName = std::move(value); }
    inline void SetBotName(const char* value) { m_botName.assign(value); }
    inline UpdateBotResult& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}
    inline UpdateBotResult& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}
    inline UpdateBotResult& WithBotName(const char* value) { SetBotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the bot after the update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateBotResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateBotResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateBotResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the bot after the
     * update.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline UpdateBotResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline UpdateBotResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline UpdateBotResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data privacy settings for the bot after the update.</p>
     */
    inline const DataPrivacy& GetDataPrivacy() const{ return m_dataPrivacy; }
    inline void SetDataPrivacy(const DataPrivacy& value) { m_dataPrivacy = value; }
    inline void SetDataPrivacy(DataPrivacy&& value) { m_dataPrivacy = std::move(value); }
    inline UpdateBotResult& WithDataPrivacy(const DataPrivacy& value) { SetDataPrivacy(value); return *this;}
    inline UpdateBotResult& WithDataPrivacy(DataPrivacy&& value) { SetDataPrivacy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session timeout, in seconds, for the bot after the update.</p>
     */
    inline int GetIdleSessionTTLInSeconds() const{ return m_idleSessionTTLInSeconds; }
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSeconds = value; }
    inline UpdateBotResult& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the current status of the bot. The bot is first in the
     * <code>Creating</code> status. Once the bot is read for use, it changes to the
     * <code>Available</code> status. After the bot is created, you can use the
     * <code>DRAFT</code> version of the bot.</p>
     */
    inline const BotStatus& GetBotStatus() const{ return m_botStatus; }
    inline void SetBotStatus(const BotStatus& value) { m_botStatus = value; }
    inline void SetBotStatus(BotStatus&& value) { m_botStatus = std::move(value); }
    inline UpdateBotResult& WithBotStatus(const BotStatus& value) { SetBotStatus(value); return *this;}
    inline UpdateBotResult& WithBotStatus(BotStatus&& value) { SetBotStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline UpdateBotResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline UpdateBotResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }
    inline UpdateBotResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline UpdateBotResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the bot that was updated.</p>
     */
    inline const BotType& GetBotType() const{ return m_botType; }
    inline void SetBotType(const BotType& value) { m_botType = value; }
    inline void SetBotType(BotType&& value) { m_botType = std::move(value); }
    inline UpdateBotResult& WithBotType(const BotType& value) { SetBotType(value); return *this;}
    inline UpdateBotResult& WithBotType(BotType&& value) { SetBotType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of bot members in the network that was updated.</p>
     */
    inline const Aws::Vector<BotMember>& GetBotMembers() const{ return m_botMembers; }
    inline void SetBotMembers(const Aws::Vector<BotMember>& value) { m_botMembers = value; }
    inline void SetBotMembers(Aws::Vector<BotMember>&& value) { m_botMembers = std::move(value); }
    inline UpdateBotResult& WithBotMembers(const Aws::Vector<BotMember>& value) { SetBotMembers(value); return *this;}
    inline UpdateBotResult& WithBotMembers(Aws::Vector<BotMember>&& value) { SetBotMembers(std::move(value)); return *this;}
    inline UpdateBotResult& AddBotMembers(const BotMember& value) { m_botMembers.push_back(value); return *this; }
    inline UpdateBotResult& AddBotMembers(BotMember&& value) { m_botMembers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateBotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateBotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateBotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;

    Aws::String m_botName;

    Aws::String m_description;

    Aws::String m_roleArn;

    DataPrivacy m_dataPrivacy;

    int m_idleSessionTTLInSeconds;

    BotStatus m_botStatus;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_lastUpdatedDateTime;

    BotType m_botType;

    Aws::Vector<BotMember> m_botMembers;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
