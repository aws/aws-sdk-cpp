/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/ConnectCampaignsRequest.h>
#include <aws/connectcampaigns/model/DialerConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>UpdateCampaignDialerConfigRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/UpdateCampaignDialerConfigRequest">AWS
   * API Reference</a></p>
   */
  class UpdateCampaignDialerConfigRequest : public ConnectCampaignsRequest
  {
  public:
    AWS_CONNECTCAMPAIGNS_API UpdateCampaignDialerConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCampaignDialerConfig"; }

    AWS_CONNECTCAMPAIGNS_API Aws::String SerializePayload() const override;


    
    inline const DialerConfig& GetDialerConfig() const{ return m_dialerConfig; }

    
    inline bool DialerConfigHasBeenSet() const { return m_dialerConfigHasBeenSet; }

    
    inline void SetDialerConfig(const DialerConfig& value) { m_dialerConfigHasBeenSet = true; m_dialerConfig = value; }

    
    inline void SetDialerConfig(DialerConfig&& value) { m_dialerConfigHasBeenSet = true; m_dialerConfig = std::move(value); }

    
    inline UpdateCampaignDialerConfigRequest& WithDialerConfig(const DialerConfig& value) { SetDialerConfig(value); return *this;}

    
    inline UpdateCampaignDialerConfigRequest& WithDialerConfig(DialerConfig&& value) { SetDialerConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline UpdateCampaignDialerConfigRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline UpdateCampaignDialerConfigRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline UpdateCampaignDialerConfigRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    DialerConfig m_dialerConfig;
    bool m_dialerConfigHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
