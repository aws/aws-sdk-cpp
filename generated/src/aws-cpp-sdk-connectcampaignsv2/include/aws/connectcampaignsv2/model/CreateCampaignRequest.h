/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/ChannelSubtypeConfig.h>
#include <aws/connectcampaignsv2/model/Source.h>
#include <aws/connectcampaignsv2/model/Schedule.h>
#include <aws/connectcampaignsv2/model/CommunicationTimeConfig.h>
#include <aws/connectcampaignsv2/model/CommunicationLimitsConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>The request for CreateCampaign API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/CreateCampaignRequest">AWS
   * API Reference</a></p>
   */
  class CreateCampaignRequest : public ConnectCampaignsV2Request
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API CreateCampaignRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCampaign"; }

    AWS_CONNECTCAMPAIGNSV2_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateCampaignRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectInstanceId() const { return m_connectInstanceId; }
    inline bool ConnectInstanceIdHasBeenSet() const { return m_connectInstanceIdHasBeenSet; }
    template<typename ConnectInstanceIdT = Aws::String>
    void SetConnectInstanceId(ConnectInstanceIdT&& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = std::forward<ConnectInstanceIdT>(value); }
    template<typename ConnectInstanceIdT = Aws::String>
    CreateCampaignRequest& WithConnectInstanceId(ConnectInstanceIdT&& value) { SetConnectInstanceId(std::forward<ConnectInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ChannelSubtypeConfig& GetChannelSubtypeConfig() const { return m_channelSubtypeConfig; }
    inline bool ChannelSubtypeConfigHasBeenSet() const { return m_channelSubtypeConfigHasBeenSet; }
    template<typename ChannelSubtypeConfigT = ChannelSubtypeConfig>
    void SetChannelSubtypeConfig(ChannelSubtypeConfigT&& value) { m_channelSubtypeConfigHasBeenSet = true; m_channelSubtypeConfig = std::forward<ChannelSubtypeConfigT>(value); }
    template<typename ChannelSubtypeConfigT = ChannelSubtypeConfig>
    CreateCampaignRequest& WithChannelSubtypeConfig(ChannelSubtypeConfigT&& value) { SetChannelSubtypeConfig(std::forward<ChannelSubtypeConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Source& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Source>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Source>
    CreateCampaignRequest& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectCampaignFlowArn() const { return m_connectCampaignFlowArn; }
    inline bool ConnectCampaignFlowArnHasBeenSet() const { return m_connectCampaignFlowArnHasBeenSet; }
    template<typename ConnectCampaignFlowArnT = Aws::String>
    void SetConnectCampaignFlowArn(ConnectCampaignFlowArnT&& value) { m_connectCampaignFlowArnHasBeenSet = true; m_connectCampaignFlowArn = std::forward<ConnectCampaignFlowArnT>(value); }
    template<typename ConnectCampaignFlowArnT = Aws::String>
    CreateCampaignRequest& WithConnectCampaignFlowArn(ConnectCampaignFlowArnT&& value) { SetConnectCampaignFlowArn(std::forward<ConnectCampaignFlowArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Schedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Schedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Schedule>
    CreateCampaignRequest& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CommunicationTimeConfig& GetCommunicationTimeConfig() const { return m_communicationTimeConfig; }
    inline bool CommunicationTimeConfigHasBeenSet() const { return m_communicationTimeConfigHasBeenSet; }
    template<typename CommunicationTimeConfigT = CommunicationTimeConfig>
    void SetCommunicationTimeConfig(CommunicationTimeConfigT&& value) { m_communicationTimeConfigHasBeenSet = true; m_communicationTimeConfig = std::forward<CommunicationTimeConfigT>(value); }
    template<typename CommunicationTimeConfigT = CommunicationTimeConfig>
    CreateCampaignRequest& WithCommunicationTimeConfig(CommunicationTimeConfigT&& value) { SetCommunicationTimeConfig(std::forward<CommunicationTimeConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CommunicationLimitsConfig& GetCommunicationLimitsOverride() const { return m_communicationLimitsOverride; }
    inline bool CommunicationLimitsOverrideHasBeenSet() const { return m_communicationLimitsOverrideHasBeenSet; }
    template<typename CommunicationLimitsOverrideT = CommunicationLimitsConfig>
    void SetCommunicationLimitsOverride(CommunicationLimitsOverrideT&& value) { m_communicationLimitsOverrideHasBeenSet = true; m_communicationLimitsOverride = std::forward<CommunicationLimitsOverrideT>(value); }
    template<typename CommunicationLimitsOverrideT = CommunicationLimitsConfig>
    CreateCampaignRequest& WithCommunicationLimitsOverride(CommunicationLimitsOverrideT&& value) { SetCommunicationLimitsOverride(std::forward<CommunicationLimitsOverrideT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateCampaignRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateCampaignRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_connectInstanceId;
    bool m_connectInstanceIdHasBeenSet = false;

    ChannelSubtypeConfig m_channelSubtypeConfig;
    bool m_channelSubtypeConfigHasBeenSet = false;

    Source m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_connectCampaignFlowArn;
    bool m_connectCampaignFlowArnHasBeenSet = false;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    CommunicationTimeConfig m_communicationTimeConfig;
    bool m_communicationTimeConfigHasBeenSet = false;

    CommunicationLimitsConfig m_communicationLimitsOverride;
    bool m_communicationLimitsOverrideHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
