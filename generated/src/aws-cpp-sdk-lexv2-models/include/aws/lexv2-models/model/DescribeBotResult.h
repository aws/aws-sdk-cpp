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
  class DescribeBotResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeBotResult();
    AWS_LEXMODELSV2_API DescribeBotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeBotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the bot.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline DescribeBotResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline DescribeBotResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline DescribeBotResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bot.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }
    inline void SetBotName(const Aws::String& value) { m_botName = value; }
    inline void SetBotName(Aws::String&& value) { m_botName = std::move(value); }
    inline void SetBotName(const char* value) { m_botName.assign(value); }
    inline DescribeBotResult& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}
    inline DescribeBotResult& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}
    inline DescribeBotResult& WithBotName(const char* value) { SetBotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the bot. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeBotResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeBotResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeBotResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the bot.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeBotResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeBotResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeBotResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for managing data privacy of the bot and its conversations with
     * users.</p>
     */
    inline const DataPrivacy& GetDataPrivacy() const{ return m_dataPrivacy; }
    inline void SetDataPrivacy(const DataPrivacy& value) { m_dataPrivacy = value; }
    inline void SetDataPrivacy(DataPrivacy&& value) { m_dataPrivacy = std::move(value); }
    inline DescribeBotResult& WithDataPrivacy(const DataPrivacy& value) { SetDataPrivacy(value); return *this;}
    inline DescribeBotResult& WithDataPrivacy(DataPrivacy&& value) { SetDataPrivacy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum time in seconds that Amazon Lex retains the data gathered in a
     * conversation.</p>
     */
    inline int GetIdleSessionTTLInSeconds() const{ return m_idleSessionTTLInSeconds; }
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSeconds = value; }
    inline DescribeBotResult& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the bot. When the status is <code>Available</code> the
     * bot is ready to be used in conversations with users.</p>
     */
    inline const BotStatus& GetBotStatus() const{ return m_botStatus; }
    inline void SetBotStatus(const BotStatus& value) { m_botStatus = value; }
    inline void SetBotStatus(BotStatus&& value) { m_botStatus = std::move(value); }
    inline DescribeBotResult& WithBotStatus(const BotStatus& value) { SetBotStatus(value); return *this;}
    inline DescribeBotResult& WithBotStatus(BotStatus&& value) { SetBotStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline DescribeBotResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline DescribeBotResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }
    inline DescribeBotResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline DescribeBotResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the bot that was described.</p>
     */
    inline const BotType& GetBotType() const{ return m_botType; }
    inline void SetBotType(const BotType& value) { m_botType = value; }
    inline void SetBotType(BotType&& value) { m_botType = std::move(value); }
    inline DescribeBotResult& WithBotType(const BotType& value) { SetBotType(value); return *this;}
    inline DescribeBotResult& WithBotType(BotType&& value) { SetBotType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of bots in the network that was described.</p>
     */
    inline const Aws::Vector<BotMember>& GetBotMembers() const{ return m_botMembers; }
    inline void SetBotMembers(const Aws::Vector<BotMember>& value) { m_botMembers = value; }
    inline void SetBotMembers(Aws::Vector<BotMember>&& value) { m_botMembers = std::move(value); }
    inline DescribeBotResult& WithBotMembers(const Aws::Vector<BotMember>& value) { SetBotMembers(value); return *this;}
    inline DescribeBotResult& WithBotMembers(Aws::Vector<BotMember>&& value) { SetBotMembers(std::move(value)); return *this;}
    inline DescribeBotResult& AddBotMembers(const BotMember& value) { m_botMembers.push_back(value); return *this; }
    inline DescribeBotResult& AddBotMembers(BotMember&& value) { m_botMembers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the <code>botStatus</code> is <code>Failed</code>, this contains a list of
     * reasons that the bot couldn't be built.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasons = value; }
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasons = std::move(value); }
    inline DescribeBotResult& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}
    inline DescribeBotResult& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}
    inline DescribeBotResult& AddFailureReasons(const Aws::String& value) { m_failureReasons.push_back(value); return *this; }
    inline DescribeBotResult& AddFailureReasons(Aws::String&& value) { m_failureReasons.push_back(std::move(value)); return *this; }
    inline DescribeBotResult& AddFailureReasons(const char* value) { m_failureReasons.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeBotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeBotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeBotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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

    Aws::Vector<Aws::String> m_failureReasons;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
