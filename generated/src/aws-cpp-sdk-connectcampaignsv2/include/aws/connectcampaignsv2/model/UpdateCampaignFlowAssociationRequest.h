/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>The request for UpdateCampaignFlowAssociation API.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/UpdateCampaignFlowAssociationRequest">AWS
   * API Reference</a></p>
   */
  class UpdateCampaignFlowAssociationRequest : public ConnectCampaignsV2Request
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API UpdateCampaignFlowAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCampaignFlowAssociation"; }

    AWS_CONNECTCAMPAIGNSV2_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateCampaignFlowAssociationRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateCampaignFlowAssociationRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateCampaignFlowAssociationRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectCampaignFlowArn() const{ return m_connectCampaignFlowArn; }
    inline bool ConnectCampaignFlowArnHasBeenSet() const { return m_connectCampaignFlowArnHasBeenSet; }
    inline void SetConnectCampaignFlowArn(const Aws::String& value) { m_connectCampaignFlowArnHasBeenSet = true; m_connectCampaignFlowArn = value; }
    inline void SetConnectCampaignFlowArn(Aws::String&& value) { m_connectCampaignFlowArnHasBeenSet = true; m_connectCampaignFlowArn = std::move(value); }
    inline void SetConnectCampaignFlowArn(const char* value) { m_connectCampaignFlowArnHasBeenSet = true; m_connectCampaignFlowArn.assign(value); }
    inline UpdateCampaignFlowAssociationRequest& WithConnectCampaignFlowArn(const Aws::String& value) { SetConnectCampaignFlowArn(value); return *this;}
    inline UpdateCampaignFlowAssociationRequest& WithConnectCampaignFlowArn(Aws::String&& value) { SetConnectCampaignFlowArn(std::move(value)); return *this;}
    inline UpdateCampaignFlowAssociationRequest& WithConnectCampaignFlowArn(const char* value) { SetConnectCampaignFlowArn(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_connectCampaignFlowArn;
    bool m_connectCampaignFlowArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
