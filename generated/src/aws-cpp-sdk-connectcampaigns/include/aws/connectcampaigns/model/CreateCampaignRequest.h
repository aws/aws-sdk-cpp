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
    AWS_CONNECTCAMPAIGNS_API CreateCampaignRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCampaign"; }

    AWS_CONNECTCAMPAIGNS_API Aws::String SerializePayload() const override;


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
    
    inline const DialerConfig& GetDialerConfig() const { return m_dialerConfig; }
    inline bool DialerConfigHasBeenSet() const { return m_dialerConfigHasBeenSet; }
    template<typename DialerConfigT = DialerConfig>
    void SetDialerConfig(DialerConfigT&& value) { m_dialerConfigHasBeenSet = true; m_dialerConfig = std::forward<DialerConfigT>(value); }
    template<typename DialerConfigT = DialerConfig>
    CreateCampaignRequest& WithDialerConfig(DialerConfigT&& value) { SetDialerConfig(std::forward<DialerConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OutboundCallConfig& GetOutboundCallConfig() const { return m_outboundCallConfig; }
    inline bool OutboundCallConfigHasBeenSet() const { return m_outboundCallConfigHasBeenSet; }
    template<typename OutboundCallConfigT = OutboundCallConfig>
    void SetOutboundCallConfig(OutboundCallConfigT&& value) { m_outboundCallConfigHasBeenSet = true; m_outboundCallConfig = std::forward<OutboundCallConfigT>(value); }
    template<typename OutboundCallConfigT = OutboundCallConfig>
    CreateCampaignRequest& WithOutboundCallConfig(OutboundCallConfigT&& value) { SetOutboundCallConfig(std::forward<OutboundCallConfigT>(value)); return *this;}
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

    DialerConfig m_dialerConfig;
    bool m_dialerConfigHasBeenSet = false;

    OutboundCallConfig m_outboundCallConfig;
    bool m_outboundCallConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
