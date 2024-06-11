﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/DataPrivacy.h>
#include <aws/lexv2-models/model/BotStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/BotType.h>
#include <aws/lexv2-models/model/ParentBotNetwork.h>
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
  class DescribeBotVersionResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeBotVersionResult();
    AWS_LEXMODELSV2_API DescribeBotVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeBotVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the bot that contains the version.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline DescribeBotVersionResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline DescribeBotVersionResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline DescribeBotVersionResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bot that contains the version.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }
    inline void SetBotName(const Aws::String& value) { m_botName = value; }
    inline void SetBotName(Aws::String&& value) { m_botName = std::move(value); }
    inline void SetBotName(const char* value) { m_botName.assign(value); }
    inline DescribeBotVersionResult& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}
    inline DescribeBotVersionResult& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}
    inline DescribeBotVersionResult& WithBotName(const char* value) { SetBotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that was described.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }
    inline DescribeBotVersionResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline DescribeBotVersionResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline DescribeBotVersionResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description specified for the bot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeBotVersionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeBotVersionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeBotVersionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the bot version.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeBotVersionResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeBotVersionResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeBotVersionResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data privacy settings for the bot version.</p>
     */
    inline const DataPrivacy& GetDataPrivacy() const{ return m_dataPrivacy; }
    inline void SetDataPrivacy(const DataPrivacy& value) { m_dataPrivacy = value; }
    inline void SetDataPrivacy(DataPrivacy&& value) { m_dataPrivacy = std::move(value); }
    inline DescribeBotVersionResult& WithDataPrivacy(const DataPrivacy& value) { SetDataPrivacy(value); return *this;}
    inline DescribeBotVersionResult& WithDataPrivacy(DataPrivacy&& value) { SetDataPrivacy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds that a session with the bot remains active before it is
     * discarded by Amazon Lex.</p>
     */
    inline int GetIdleSessionTTLInSeconds() const{ return m_idleSessionTTLInSeconds; }
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSeconds = value; }
    inline DescribeBotVersionResult& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the bot. When the status is <code>Available</code>, the
     * bot version is ready for use.</p>
     */
    inline const BotStatus& GetBotStatus() const{ return m_botStatus; }
    inline void SetBotStatus(const BotStatus& value) { m_botStatus = value; }
    inline void SetBotStatus(BotStatus&& value) { m_botStatus = std::move(value); }
    inline DescribeBotVersionResult& WithBotStatus(const BotStatus& value) { SetBotStatus(value); return *this;}
    inline DescribeBotVersionResult& WithBotStatus(BotStatus&& value) { SetBotStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>botStatus</code> is <code>Failed</code>, this contains a list of
     * reasons that the version couldn't be built.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasons = value; }
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasons = std::move(value); }
    inline DescribeBotVersionResult& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}
    inline DescribeBotVersionResult& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}
    inline DescribeBotVersionResult& AddFailureReasons(const Aws::String& value) { m_failureReasons.push_back(value); return *this; }
    inline DescribeBotVersionResult& AddFailureReasons(Aws::String&& value) { m_failureReasons.push_back(std::move(value)); return *this; }
    inline DescribeBotVersionResult& AddFailureReasons(const char* value) { m_failureReasons.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline DescribeBotVersionResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline DescribeBotVersionResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the networks to which the bot version you described belongs.</p>
     */
    inline const Aws::Vector<ParentBotNetwork>& GetParentBotNetworks() const{ return m_parentBotNetworks; }
    inline void SetParentBotNetworks(const Aws::Vector<ParentBotNetwork>& value) { m_parentBotNetworks = value; }
    inline void SetParentBotNetworks(Aws::Vector<ParentBotNetwork>&& value) { m_parentBotNetworks = std::move(value); }
    inline DescribeBotVersionResult& WithParentBotNetworks(const Aws::Vector<ParentBotNetwork>& value) { SetParentBotNetworks(value); return *this;}
    inline DescribeBotVersionResult& WithParentBotNetworks(Aws::Vector<ParentBotNetwork>&& value) { SetParentBotNetworks(std::move(value)); return *this;}
    inline DescribeBotVersionResult& AddParentBotNetworks(const ParentBotNetwork& value) { m_parentBotNetworks.push_back(value); return *this; }
    inline DescribeBotVersionResult& AddParentBotNetworks(ParentBotNetwork&& value) { m_parentBotNetworks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the bot in the version that was described.</p>
     */
    inline const BotType& GetBotType() const{ return m_botType; }
    inline void SetBotType(const BotType& value) { m_botType = value; }
    inline void SetBotType(BotType&& value) { m_botType = std::move(value); }
    inline DescribeBotVersionResult& WithBotType(const BotType& value) { SetBotType(value); return *this;}
    inline DescribeBotVersionResult& WithBotType(BotType&& value) { SetBotType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The members of bot network in the version that was described.</p>
     */
    inline const Aws::Vector<BotMember>& GetBotMembers() const{ return m_botMembers; }
    inline void SetBotMembers(const Aws::Vector<BotMember>& value) { m_botMembers = value; }
    inline void SetBotMembers(Aws::Vector<BotMember>&& value) { m_botMembers = std::move(value); }
    inline DescribeBotVersionResult& WithBotMembers(const Aws::Vector<BotMember>& value) { SetBotMembers(value); return *this;}
    inline DescribeBotVersionResult& WithBotMembers(Aws::Vector<BotMember>&& value) { SetBotMembers(std::move(value)); return *this;}
    inline DescribeBotVersionResult& AddBotMembers(const BotMember& value) { m_botMembers.push_back(value); return *this; }
    inline DescribeBotVersionResult& AddBotMembers(BotMember&& value) { m_botMembers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeBotVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeBotVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeBotVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;

    Aws::String m_botName;

    Aws::String m_botVersion;

    Aws::String m_description;

    Aws::String m_roleArn;

    DataPrivacy m_dataPrivacy;

    int m_idleSessionTTLInSeconds;

    BotStatus m_botStatus;

    Aws::Vector<Aws::String> m_failureReasons;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Vector<ParentBotNetwork> m_parentBotNetworks;

    BotType m_botType;

    Aws::Vector<BotMember> m_botMembers;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
