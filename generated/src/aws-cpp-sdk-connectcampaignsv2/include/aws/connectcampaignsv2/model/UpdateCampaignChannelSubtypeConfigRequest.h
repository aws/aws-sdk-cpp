/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/ChannelSubtypeConfig.h>
#include <utility>

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>The request for UpdateCampaignChannelSubtypeConfig API.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/UpdateCampaignChannelSubtypeConfigRequest">AWS
   * API Reference</a></p>
   */
  class UpdateCampaignChannelSubtypeConfigRequest : public ConnectCampaignsV2Request
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API UpdateCampaignChannelSubtypeConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCampaignChannelSubtypeConfig"; }

    AWS_CONNECTCAMPAIGNSV2_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateCampaignChannelSubtypeConfigRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateCampaignChannelSubtypeConfigRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateCampaignChannelSubtypeConfigRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const ChannelSubtypeConfig& GetChannelSubtypeConfig() const{ return m_channelSubtypeConfig; }
    inline bool ChannelSubtypeConfigHasBeenSet() const { return m_channelSubtypeConfigHasBeenSet; }
    inline void SetChannelSubtypeConfig(const ChannelSubtypeConfig& value) { m_channelSubtypeConfigHasBeenSet = true; m_channelSubtypeConfig = value; }
    inline void SetChannelSubtypeConfig(ChannelSubtypeConfig&& value) { m_channelSubtypeConfigHasBeenSet = true; m_channelSubtypeConfig = std::move(value); }
    inline UpdateCampaignChannelSubtypeConfigRequest& WithChannelSubtypeConfig(const ChannelSubtypeConfig& value) { SetChannelSubtypeConfig(value); return *this;}
    inline UpdateCampaignChannelSubtypeConfigRequest& WithChannelSubtypeConfig(ChannelSubtypeConfig&& value) { SetChannelSubtypeConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ChannelSubtypeConfig m_channelSubtypeConfig;
    bool m_channelSubtypeConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
