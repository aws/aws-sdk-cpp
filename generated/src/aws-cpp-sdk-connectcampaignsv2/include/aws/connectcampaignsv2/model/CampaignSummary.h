/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcampaignsv2/model/Schedule.h>
#include <aws/connectcampaignsv2/model/ChannelSubtype.h>
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
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>An Amazon Connect campaign summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/CampaignSummary">AWS
   * API Reference</a></p>
   */
  class CampaignSummary
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API CampaignSummary() = default;
    AWS_CONNECTCAMPAIGNSV2_API CampaignSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API CampaignSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CampaignSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CampaignSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CampaignSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectInstanceId() const { return m_connectInstanceId; }
    inline bool ConnectInstanceIdHasBeenSet() const { return m_connectInstanceIdHasBeenSet; }
    template<typename ConnectInstanceIdT = Aws::String>
    void SetConnectInstanceId(ConnectInstanceIdT&& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = std::forward<ConnectInstanceIdT>(value); }
    template<typename ConnectInstanceIdT = Aws::String>
    CampaignSummary& WithConnectInstanceId(ConnectInstanceIdT&& value) { SetConnectInstanceId(std::forward<ConnectInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<ChannelSubtype>& GetChannelSubtypes() const { return m_channelSubtypes; }
    inline bool ChannelSubtypesHasBeenSet() const { return m_channelSubtypesHasBeenSet; }
    template<typename ChannelSubtypesT = Aws::Vector<ChannelSubtype>>
    void SetChannelSubtypes(ChannelSubtypesT&& value) { m_channelSubtypesHasBeenSet = true; m_channelSubtypes = std::forward<ChannelSubtypesT>(value); }
    template<typename ChannelSubtypesT = Aws::Vector<ChannelSubtype>>
    CampaignSummary& WithChannelSubtypes(ChannelSubtypesT&& value) { SetChannelSubtypes(std::forward<ChannelSubtypesT>(value)); return *this;}
    inline CampaignSummary& AddChannelSubtypes(ChannelSubtype value) { m_channelSubtypesHasBeenSet = true; m_channelSubtypes.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Schedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Schedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Schedule>
    CampaignSummary& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectCampaignFlowArn() const { return m_connectCampaignFlowArn; }
    inline bool ConnectCampaignFlowArnHasBeenSet() const { return m_connectCampaignFlowArnHasBeenSet; }
    template<typename ConnectCampaignFlowArnT = Aws::String>
    void SetConnectCampaignFlowArn(ConnectCampaignFlowArnT&& value) { m_connectCampaignFlowArnHasBeenSet = true; m_connectCampaignFlowArn = std::forward<ConnectCampaignFlowArnT>(value); }
    template<typename ConnectCampaignFlowArnT = Aws::String>
    CampaignSummary& WithConnectCampaignFlowArn(ConnectCampaignFlowArnT&& value) { SetConnectCampaignFlowArn(std::forward<ConnectCampaignFlowArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_connectInstanceId;
    bool m_connectInstanceIdHasBeenSet = false;

    Aws::Vector<ChannelSubtype> m_channelSubtypes;
    bool m_channelSubtypesHasBeenSet = false;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_connectCampaignFlowArn;
    bool m_connectCampaignFlowArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
