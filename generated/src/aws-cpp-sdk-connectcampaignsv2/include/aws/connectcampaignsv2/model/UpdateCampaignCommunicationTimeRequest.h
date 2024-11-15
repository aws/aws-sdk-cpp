/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/CommunicationTimeConfig.h>
#include <utility>

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>The request for UpdateCampaignCommunicationTime API.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/UpdateCampaignCommunicationTimeRequest">AWS
   * API Reference</a></p>
   */
  class UpdateCampaignCommunicationTimeRequest : public ConnectCampaignsV2Request
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API UpdateCampaignCommunicationTimeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCampaignCommunicationTime"; }

    AWS_CONNECTCAMPAIGNSV2_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateCampaignCommunicationTimeRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateCampaignCommunicationTimeRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateCampaignCommunicationTimeRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const CommunicationTimeConfig& GetCommunicationTimeConfig() const{ return m_communicationTimeConfig; }
    inline bool CommunicationTimeConfigHasBeenSet() const { return m_communicationTimeConfigHasBeenSet; }
    inline void SetCommunicationTimeConfig(const CommunicationTimeConfig& value) { m_communicationTimeConfigHasBeenSet = true; m_communicationTimeConfig = value; }
    inline void SetCommunicationTimeConfig(CommunicationTimeConfig&& value) { m_communicationTimeConfigHasBeenSet = true; m_communicationTimeConfig = std::move(value); }
    inline UpdateCampaignCommunicationTimeRequest& WithCommunicationTimeConfig(const CommunicationTimeConfig& value) { SetCommunicationTimeConfig(value); return *this;}
    inline UpdateCampaignCommunicationTimeRequest& WithCommunicationTimeConfig(CommunicationTimeConfig&& value) { SetCommunicationTimeConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    CommunicationTimeConfig m_communicationTimeConfig;
    bool m_communicationTimeConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
