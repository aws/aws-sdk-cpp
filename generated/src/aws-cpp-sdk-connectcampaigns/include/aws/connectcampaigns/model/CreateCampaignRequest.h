/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/ConnectCampaignsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaigns/model/DialerConfig.h>
#include <aws/connectcampaigns/model/OutboundCallConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>The request for Create Campaign API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/CreateCampaignRequest">AWS
   * API Reference</a></p>
   */
  class CreateCampaignRequest : public ConnectCampaignsRequest
  {
  public:
    AWS_CONNECTCAMPAIGNS_API CreateCampaignRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCampaign"; }

    AWS_CONNECTCAMPAIGNS_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetConnectInstanceId() const{ return m_connectInstanceId; }

    
    inline bool ConnectInstanceIdHasBeenSet() const { return m_connectInstanceIdHasBeenSet; }

    
    inline void SetConnectInstanceId(const Aws::String& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = value; }

    
    inline void SetConnectInstanceId(Aws::String&& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = std::move(value); }

    
    inline void SetConnectInstanceId(const char* value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId.assign(value); }

    
    inline CreateCampaignRequest& WithConnectInstanceId(const Aws::String& value) { SetConnectInstanceId(value); return *this;}

    
    inline CreateCampaignRequest& WithConnectInstanceId(Aws::String&& value) { SetConnectInstanceId(std::move(value)); return *this;}

    
    inline CreateCampaignRequest& WithConnectInstanceId(const char* value) { SetConnectInstanceId(value); return *this;}


    
    inline const DialerConfig& GetDialerConfig() const{ return m_dialerConfig; }

    
    inline bool DialerConfigHasBeenSet() const { return m_dialerConfigHasBeenSet; }

    
    inline void SetDialerConfig(const DialerConfig& value) { m_dialerConfigHasBeenSet = true; m_dialerConfig = value; }

    
    inline void SetDialerConfig(DialerConfig&& value) { m_dialerConfigHasBeenSet = true; m_dialerConfig = std::move(value); }

    
    inline CreateCampaignRequest& WithDialerConfig(const DialerConfig& value) { SetDialerConfig(value); return *this;}

    
    inline CreateCampaignRequest& WithDialerConfig(DialerConfig&& value) { SetDialerConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CreateCampaignRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateCampaignRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CreateCampaignRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const OutboundCallConfig& GetOutboundCallConfig() const{ return m_outboundCallConfig; }

    
    inline bool OutboundCallConfigHasBeenSet() const { return m_outboundCallConfigHasBeenSet; }

    
    inline void SetOutboundCallConfig(const OutboundCallConfig& value) { m_outboundCallConfigHasBeenSet = true; m_outboundCallConfig = value; }

    
    inline void SetOutboundCallConfig(OutboundCallConfig&& value) { m_outboundCallConfigHasBeenSet = true; m_outboundCallConfig = std::move(value); }

    
    inline CreateCampaignRequest& WithOutboundCallConfig(const OutboundCallConfig& value) { SetOutboundCallConfig(value); return *this;}

    
    inline CreateCampaignRequest& WithOutboundCallConfig(OutboundCallConfig&& value) { SetOutboundCallConfig(std::move(value)); return *this;}


    
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

  private:

    Aws::String m_connectInstanceId;
    bool m_connectInstanceIdHasBeenSet = false;

    DialerConfig m_dialerConfig;
    bool m_dialerConfigHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    OutboundCallConfig m_outboundCallConfig;
    bool m_outboundCallConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
