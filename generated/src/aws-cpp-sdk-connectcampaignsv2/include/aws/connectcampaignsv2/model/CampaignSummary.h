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
    AWS_CONNECTCAMPAIGNSV2_API CampaignSummary();
    AWS_CONNECTCAMPAIGNSV2_API CampaignSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API CampaignSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CampaignSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CampaignSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CampaignSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline CampaignSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CampaignSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CampaignSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CampaignSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CampaignSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CampaignSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectInstanceId() const{ return m_connectInstanceId; }
    inline bool ConnectInstanceIdHasBeenSet() const { return m_connectInstanceIdHasBeenSet; }
    inline void SetConnectInstanceId(const Aws::String& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = value; }
    inline void SetConnectInstanceId(Aws::String&& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = std::move(value); }
    inline void SetConnectInstanceId(const char* value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId.assign(value); }
    inline CampaignSummary& WithConnectInstanceId(const Aws::String& value) { SetConnectInstanceId(value); return *this;}
    inline CampaignSummary& WithConnectInstanceId(Aws::String&& value) { SetConnectInstanceId(std::move(value)); return *this;}
    inline CampaignSummary& WithConnectInstanceId(const char* value) { SetConnectInstanceId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<ChannelSubtype>& GetChannelSubtypes() const{ return m_channelSubtypes; }
    inline bool ChannelSubtypesHasBeenSet() const { return m_channelSubtypesHasBeenSet; }
    inline void SetChannelSubtypes(const Aws::Vector<ChannelSubtype>& value) { m_channelSubtypesHasBeenSet = true; m_channelSubtypes = value; }
    inline void SetChannelSubtypes(Aws::Vector<ChannelSubtype>&& value) { m_channelSubtypesHasBeenSet = true; m_channelSubtypes = std::move(value); }
    inline CampaignSummary& WithChannelSubtypes(const Aws::Vector<ChannelSubtype>& value) { SetChannelSubtypes(value); return *this;}
    inline CampaignSummary& WithChannelSubtypes(Aws::Vector<ChannelSubtype>&& value) { SetChannelSubtypes(std::move(value)); return *this;}
    inline CampaignSummary& AddChannelSubtypes(const ChannelSubtype& value) { m_channelSubtypesHasBeenSet = true; m_channelSubtypes.push_back(value); return *this; }
    inline CampaignSummary& AddChannelSubtypes(ChannelSubtype&& value) { m_channelSubtypesHasBeenSet = true; m_channelSubtypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Schedule& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline CampaignSummary& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}
    inline CampaignSummary& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectCampaignFlowArn() const{ return m_connectCampaignFlowArn; }
    inline bool ConnectCampaignFlowArnHasBeenSet() const { return m_connectCampaignFlowArnHasBeenSet; }
    inline void SetConnectCampaignFlowArn(const Aws::String& value) { m_connectCampaignFlowArnHasBeenSet = true; m_connectCampaignFlowArn = value; }
    inline void SetConnectCampaignFlowArn(Aws::String&& value) { m_connectCampaignFlowArnHasBeenSet = true; m_connectCampaignFlowArn = std::move(value); }
    inline void SetConnectCampaignFlowArn(const char* value) { m_connectCampaignFlowArnHasBeenSet = true; m_connectCampaignFlowArn.assign(value); }
    inline CampaignSummary& WithConnectCampaignFlowArn(const Aws::String& value) { SetConnectCampaignFlowArn(value); return *this;}
    inline CampaignSummary& WithConnectCampaignFlowArn(Aws::String&& value) { SetConnectCampaignFlowArn(std::move(value)); return *this;}
    inline CampaignSummary& WithConnectCampaignFlowArn(const char* value) { SetConnectCampaignFlowArn(value); return *this;}
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
