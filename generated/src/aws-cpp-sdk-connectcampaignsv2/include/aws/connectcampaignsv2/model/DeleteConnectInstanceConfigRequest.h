/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/CampaignDeletionPolicy.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>The request for DeleteConnectInstanceConfig API.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/DeleteConnectInstanceConfigRequest">AWS
   * API Reference</a></p>
   */
  class DeleteConnectInstanceConfigRequest : public ConnectCampaignsV2Request
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API DeleteConnectInstanceConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConnectInstanceConfig"; }

    AWS_CONNECTCAMPAIGNSV2_API Aws::String SerializePayload() const override;

    AWS_CONNECTCAMPAIGNSV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    
    inline const Aws::String& GetConnectInstanceId() const { return m_connectInstanceId; }
    inline bool ConnectInstanceIdHasBeenSet() const { return m_connectInstanceIdHasBeenSet; }
    template<typename ConnectInstanceIdT = Aws::String>
    void SetConnectInstanceId(ConnectInstanceIdT&& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = std::forward<ConnectInstanceIdT>(value); }
    template<typename ConnectInstanceIdT = Aws::String>
    DeleteConnectInstanceConfigRequest& WithConnectInstanceId(ConnectInstanceIdT&& value) { SetConnectInstanceId(std::forward<ConnectInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline CampaignDeletionPolicy GetCampaignDeletionPolicy() const { return m_campaignDeletionPolicy; }
    inline bool CampaignDeletionPolicyHasBeenSet() const { return m_campaignDeletionPolicyHasBeenSet; }
    inline void SetCampaignDeletionPolicy(CampaignDeletionPolicy value) { m_campaignDeletionPolicyHasBeenSet = true; m_campaignDeletionPolicy = value; }
    inline DeleteConnectInstanceConfigRequest& WithCampaignDeletionPolicy(CampaignDeletionPolicy value) { SetCampaignDeletionPolicy(value); return *this;}
    ///@}
  private:

    Aws::String m_connectInstanceId;
    bool m_connectInstanceIdHasBeenSet = false;

    CampaignDeletionPolicy m_campaignDeletionPolicy{CampaignDeletionPolicy::NOT_SET};
    bool m_campaignDeletionPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
