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
    AWS_CONNECTCAMPAIGNSV2_API CreateCampaignRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCampaign"; }

    AWS_CONNECTCAMPAIGNSV2_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateCampaignRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateCampaignRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateCampaignRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectInstanceId() const{ return m_connectInstanceId; }
    inline bool ConnectInstanceIdHasBeenSet() const { return m_connectInstanceIdHasBeenSet; }
    inline void SetConnectInstanceId(const Aws::String& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = value; }
    inline void SetConnectInstanceId(Aws::String&& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = std::move(value); }
    inline void SetConnectInstanceId(const char* value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId.assign(value); }
    inline CreateCampaignRequest& WithConnectInstanceId(const Aws::String& value) { SetConnectInstanceId(value); return *this;}
    inline CreateCampaignRequest& WithConnectInstanceId(Aws::String&& value) { SetConnectInstanceId(std::move(value)); return *this;}
    inline CreateCampaignRequest& WithConnectInstanceId(const char* value) { SetConnectInstanceId(value); return *this;}
    ///@}

    ///@{
    
    inline const ChannelSubtypeConfig& GetChannelSubtypeConfig() const{ return m_channelSubtypeConfig; }
    inline bool ChannelSubtypeConfigHasBeenSet() const { return m_channelSubtypeConfigHasBeenSet; }
    inline void SetChannelSubtypeConfig(const ChannelSubtypeConfig& value) { m_channelSubtypeConfigHasBeenSet = true; m_channelSubtypeConfig = value; }
    inline void SetChannelSubtypeConfig(ChannelSubtypeConfig&& value) { m_channelSubtypeConfigHasBeenSet = true; m_channelSubtypeConfig = std::move(value); }
    inline CreateCampaignRequest& WithChannelSubtypeConfig(const ChannelSubtypeConfig& value) { SetChannelSubtypeConfig(value); return *this;}
    inline CreateCampaignRequest& WithChannelSubtypeConfig(ChannelSubtypeConfig&& value) { SetChannelSubtypeConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Source& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Source& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Source&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline CreateCampaignRequest& WithSource(const Source& value) { SetSource(value); return *this;}
    inline CreateCampaignRequest& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectCampaignFlowArn() const{ return m_connectCampaignFlowArn; }
    inline bool ConnectCampaignFlowArnHasBeenSet() const { return m_connectCampaignFlowArnHasBeenSet; }
    inline void SetConnectCampaignFlowArn(const Aws::String& value) { m_connectCampaignFlowArnHasBeenSet = true; m_connectCampaignFlowArn = value; }
    inline void SetConnectCampaignFlowArn(Aws::String&& value) { m_connectCampaignFlowArnHasBeenSet = true; m_connectCampaignFlowArn = std::move(value); }
    inline void SetConnectCampaignFlowArn(const char* value) { m_connectCampaignFlowArnHasBeenSet = true; m_connectCampaignFlowArn.assign(value); }
    inline CreateCampaignRequest& WithConnectCampaignFlowArn(const Aws::String& value) { SetConnectCampaignFlowArn(value); return *this;}
    inline CreateCampaignRequest& WithConnectCampaignFlowArn(Aws::String&& value) { SetConnectCampaignFlowArn(std::move(value)); return *this;}
    inline CreateCampaignRequest& WithConnectCampaignFlowArn(const char* value) { SetConnectCampaignFlowArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Schedule& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline CreateCampaignRequest& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}
    inline CreateCampaignRequest& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CommunicationTimeConfig& GetCommunicationTimeConfig() const{ return m_communicationTimeConfig; }
    inline bool CommunicationTimeConfigHasBeenSet() const { return m_communicationTimeConfigHasBeenSet; }
    inline void SetCommunicationTimeConfig(const CommunicationTimeConfig& value) { m_communicationTimeConfigHasBeenSet = true; m_communicationTimeConfig = value; }
    inline void SetCommunicationTimeConfig(CommunicationTimeConfig&& value) { m_communicationTimeConfigHasBeenSet = true; m_communicationTimeConfig = std::move(value); }
    inline CreateCampaignRequest& WithCommunicationTimeConfig(const CommunicationTimeConfig& value) { SetCommunicationTimeConfig(value); return *this;}
    inline CreateCampaignRequest& WithCommunicationTimeConfig(CommunicationTimeConfig&& value) { SetCommunicationTimeConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CommunicationLimitsConfig& GetCommunicationLimitsOverride() const{ return m_communicationLimitsOverride; }
    inline bool CommunicationLimitsOverrideHasBeenSet() const { return m_communicationLimitsOverrideHasBeenSet; }
    inline void SetCommunicationLimitsOverride(const CommunicationLimitsConfig& value) { m_communicationLimitsOverrideHasBeenSet = true; m_communicationLimitsOverride = value; }
    inline void SetCommunicationLimitsOverride(CommunicationLimitsConfig&& value) { m_communicationLimitsOverrideHasBeenSet = true; m_communicationLimitsOverride = std::move(value); }
    inline CreateCampaignRequest& WithCommunicationLimitsOverride(const CommunicationLimitsConfig& value) { SetCommunicationLimitsOverride(value); return *this;}
    inline CreateCampaignRequest& WithCommunicationLimitsOverride(CommunicationLimitsConfig&& value) { SetCommunicationLimitsOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateCampaignRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateCampaignRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateCampaignRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateCampaignRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateCampaignRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateCampaignRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateCampaignRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateCampaignRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateCampaignRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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
