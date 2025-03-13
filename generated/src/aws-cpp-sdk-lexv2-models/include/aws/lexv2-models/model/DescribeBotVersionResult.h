/**
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
    AWS_LEXMODELSV2_API DescribeBotVersionResult() = default;
    AWS_LEXMODELSV2_API DescribeBotVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeBotVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the bot that contains the version.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    DescribeBotVersionResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bot that contains the version.</p>
     */
    inline const Aws::String& GetBotName() const { return m_botName; }
    template<typename BotNameT = Aws::String>
    void SetBotName(BotNameT&& value) { m_botNameHasBeenSet = true; m_botName = std::forward<BotNameT>(value); }
    template<typename BotNameT = Aws::String>
    DescribeBotVersionResult& WithBotName(BotNameT&& value) { SetBotName(std::forward<BotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that was described.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    DescribeBotVersionResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description specified for the bot.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeBotVersionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permission to access
     * the bot version.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeBotVersionResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data privacy settings for the bot version.</p>
     */
    inline const DataPrivacy& GetDataPrivacy() const { return m_dataPrivacy; }
    template<typename DataPrivacyT = DataPrivacy>
    void SetDataPrivacy(DataPrivacyT&& value) { m_dataPrivacyHasBeenSet = true; m_dataPrivacy = std::forward<DataPrivacyT>(value); }
    template<typename DataPrivacyT = DataPrivacy>
    DescribeBotVersionResult& WithDataPrivacy(DataPrivacyT&& value) { SetDataPrivacy(std::forward<DataPrivacyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds that a session with the bot remains active before it is
     * discarded by Amazon Lex.</p>
     */
    inline int GetIdleSessionTTLInSeconds() const { return m_idleSessionTTLInSeconds; }
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSecondsHasBeenSet = true; m_idleSessionTTLInSeconds = value; }
    inline DescribeBotVersionResult& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the bot. When the status is <code>Available</code>, the
     * bot version is ready for use.</p>
     */
    inline BotStatus GetBotStatus() const { return m_botStatus; }
    inline void SetBotStatus(BotStatus value) { m_botStatusHasBeenSet = true; m_botStatus = value; }
    inline DescribeBotVersionResult& WithBotStatus(BotStatus value) { SetBotStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>botStatus</code> is <code>Failed</code>, this contains a list of
     * reasons that the version couldn't be built.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const { return m_failureReasons; }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    void SetFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::forward<FailureReasonsT>(value); }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    DescribeBotVersionResult& WithFailureReasons(FailureReasonsT&& value) { SetFailureReasons(std::forward<FailureReasonsT>(value)); return *this;}
    template<typename FailureReasonsT = Aws::String>
    DescribeBotVersionResult& AddFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.emplace_back(std::forward<FailureReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    DescribeBotVersionResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the networks to which the bot version you described belongs.</p>
     */
    inline const Aws::Vector<ParentBotNetwork>& GetParentBotNetworks() const { return m_parentBotNetworks; }
    template<typename ParentBotNetworksT = Aws::Vector<ParentBotNetwork>>
    void SetParentBotNetworks(ParentBotNetworksT&& value) { m_parentBotNetworksHasBeenSet = true; m_parentBotNetworks = std::forward<ParentBotNetworksT>(value); }
    template<typename ParentBotNetworksT = Aws::Vector<ParentBotNetwork>>
    DescribeBotVersionResult& WithParentBotNetworks(ParentBotNetworksT&& value) { SetParentBotNetworks(std::forward<ParentBotNetworksT>(value)); return *this;}
    template<typename ParentBotNetworksT = ParentBotNetwork>
    DescribeBotVersionResult& AddParentBotNetworks(ParentBotNetworksT&& value) { m_parentBotNetworksHasBeenSet = true; m_parentBotNetworks.emplace_back(std::forward<ParentBotNetworksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the bot in the version that was described.</p>
     */
    inline BotType GetBotType() const { return m_botType; }
    inline void SetBotType(BotType value) { m_botTypeHasBeenSet = true; m_botType = value; }
    inline DescribeBotVersionResult& WithBotType(BotType value) { SetBotType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The members of bot network in the version that was described.</p>
     */
    inline const Aws::Vector<BotMember>& GetBotMembers() const { return m_botMembers; }
    template<typename BotMembersT = Aws::Vector<BotMember>>
    void SetBotMembers(BotMembersT&& value) { m_botMembersHasBeenSet = true; m_botMembers = std::forward<BotMembersT>(value); }
    template<typename BotMembersT = Aws::Vector<BotMember>>
    DescribeBotVersionResult& WithBotMembers(BotMembersT&& value) { SetBotMembers(std::forward<BotMembersT>(value)); return *this;}
    template<typename BotMembersT = BotMember>
    DescribeBotVersionResult& AddBotMembers(BotMembersT&& value) { m_botMembersHasBeenSet = true; m_botMembers.emplace_back(std::forward<BotMembersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBotVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    DataPrivacy m_dataPrivacy;
    bool m_dataPrivacyHasBeenSet = false;

    int m_idleSessionTTLInSeconds{0};
    bool m_idleSessionTTLInSecondsHasBeenSet = false;

    BotStatus m_botStatus{BotStatus::NOT_SET};
    bool m_botStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Vector<ParentBotNetwork> m_parentBotNetworks;
    bool m_parentBotNetworksHasBeenSet = false;

    BotType m_botType{BotType::NOT_SET};
    bool m_botTypeHasBeenSet = false;

    Aws::Vector<BotMember> m_botMembers;
    bool m_botMembersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
