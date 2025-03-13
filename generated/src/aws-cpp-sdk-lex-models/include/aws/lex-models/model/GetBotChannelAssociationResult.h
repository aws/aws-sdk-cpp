/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lex-models/model/ChannelType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lex-models/model/ChannelStatus.h>
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
  class GetBotChannelAssociationResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetBotChannelAssociationResult() = default;
    AWS_LEXMODELBUILDINGSERVICE_API GetBotChannelAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetBotChannelAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the association between the bot and the channel.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetBotChannelAssociationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the association between the bot and the channel.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetBotChannelAssociationResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline const Aws::String& GetBotAlias() const { return m_botAlias; }
    template<typename BotAliasT = Aws::String>
    void SetBotAlias(BotAliasT&& value) { m_botAliasHasBeenSet = true; m_botAlias = std::forward<BotAliasT>(value); }
    template<typename BotAliasT = Aws::String>
    GetBotChannelAssociationResult& WithBotAlias(BotAliasT&& value) { SetBotAlias(std::forward<BotAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline const Aws::String& GetBotName() const { return m_botName; }
    template<typename BotNameT = Aws::String>
    void SetBotName(BotNameT&& value) { m_botNameHasBeenSet = true; m_botName = std::forward<BotNameT>(value); }
    template<typename BotNameT = Aws::String>
    GetBotChannelAssociationResult& WithBotName(BotNameT&& value) { SetBotName(std::forward<BotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the association between the bot and the channel was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    GetBotChannelAssociationResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the messaging platform.</p>
     */
    inline ChannelType GetType() const { return m_type; }
    inline void SetType(ChannelType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetBotChannelAssociationResult& WithType(ChannelType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information that the messaging platform needs to communicate with
     * the Amazon Lex bot.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBotConfiguration() const { return m_botConfiguration; }
    template<typename BotConfigurationT = Aws::Map<Aws::String, Aws::String>>
    void SetBotConfiguration(BotConfigurationT&& value) { m_botConfigurationHasBeenSet = true; m_botConfiguration = std::forward<BotConfigurationT>(value); }
    template<typename BotConfigurationT = Aws::Map<Aws::String, Aws::String>>
    GetBotChannelAssociationResult& WithBotConfiguration(BotConfigurationT&& value) { SetBotConfiguration(std::forward<BotConfigurationT>(value)); return *this;}
    template<typename BotConfigurationKeyT = Aws::String, typename BotConfigurationValueT = Aws::String>
    GetBotChannelAssociationResult& AddBotConfiguration(BotConfigurationKeyT&& key, BotConfigurationValueT&& value) {
      m_botConfigurationHasBeenSet = true; m_botConfiguration.emplace(std::forward<BotConfigurationKeyT>(key), std::forward<BotConfigurationValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the bot channel. </p> <ul> <li> <p> <code>CREATED</code> - The
     * channel has been created and is ready for use.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code> - Channel creation is in progress.</p> </li> <li> <p>
     * <code>FAILED</code> - There was an error creating the channel. For information
     * about the reason for the failure, see the <code>failureReason</code> field.</p>
     * </li> </ul>
     */
    inline ChannelStatus GetStatus() const { return m_status; }
    inline void SetStatus(ChannelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetBotChannelAssociationResult& WithStatus(ChannelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to create the association.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    GetBotChannelAssociationResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBotChannelAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_botAlias;
    bool m_botAliasHasBeenSet = false;

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    ChannelType m_type{ChannelType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_botConfiguration;
    bool m_botConfigurationHasBeenSet = false;

    ChannelStatus m_status{ChannelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
