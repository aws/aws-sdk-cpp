/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/CommunicationLimitsConfig.h>
#include <utility>

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>The request for UpdateCampaignCommunicationLimits API.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/UpdateCampaignCommunicationLimitsRequest">AWS
   * API Reference</a></p>
   */
  class UpdateCampaignCommunicationLimitsRequest : public ConnectCampaignsV2Request
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API UpdateCampaignCommunicationLimitsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCampaignCommunicationLimits"; }

    AWS_CONNECTCAMPAIGNSV2_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateCampaignCommunicationLimitsRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateCampaignCommunicationLimitsRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateCampaignCommunicationLimitsRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const CommunicationLimitsConfig& GetCommunicationLimitsOverride() const{ return m_communicationLimitsOverride; }
    inline bool CommunicationLimitsOverrideHasBeenSet() const { return m_communicationLimitsOverrideHasBeenSet; }
    inline void SetCommunicationLimitsOverride(const CommunicationLimitsConfig& value) { m_communicationLimitsOverrideHasBeenSet = true; m_communicationLimitsOverride = value; }
    inline void SetCommunicationLimitsOverride(CommunicationLimitsConfig&& value) { m_communicationLimitsOverrideHasBeenSet = true; m_communicationLimitsOverride = std::move(value); }
    inline UpdateCampaignCommunicationLimitsRequest& WithCommunicationLimitsOverride(const CommunicationLimitsConfig& value) { SetCommunicationLimitsOverride(value); return *this;}
    inline UpdateCampaignCommunicationLimitsRequest& WithCommunicationLimitsOverride(CommunicationLimitsConfig&& value) { SetCommunicationLimitsOverride(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    CommunicationLimitsConfig m_communicationLimitsOverride;
    bool m_communicationLimitsOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
