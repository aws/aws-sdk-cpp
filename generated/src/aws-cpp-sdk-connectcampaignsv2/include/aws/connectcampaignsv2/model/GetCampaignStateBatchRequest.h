/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>The request for GetCampaignStateBatch API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/GetCampaignStateBatchRequest">AWS
   * API Reference</a></p>
   */
  class GetCampaignStateBatchRequest : public ConnectCampaignsV2Request
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API GetCampaignStateBatchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCampaignStateBatch"; }

    AWS_CONNECTCAMPAIGNSV2_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::Vector<Aws::String>& GetCampaignIds() const { return m_campaignIds; }
    inline bool CampaignIdsHasBeenSet() const { return m_campaignIdsHasBeenSet; }
    template<typename CampaignIdsT = Aws::Vector<Aws::String>>
    void SetCampaignIds(CampaignIdsT&& value) { m_campaignIdsHasBeenSet = true; m_campaignIds = std::forward<CampaignIdsT>(value); }
    template<typename CampaignIdsT = Aws::Vector<Aws::String>>
    GetCampaignStateBatchRequest& WithCampaignIds(CampaignIdsT&& value) { SetCampaignIds(std::forward<CampaignIdsT>(value)); return *this;}
    template<typename CampaignIdsT = Aws::String>
    GetCampaignStateBatchRequest& AddCampaignIds(CampaignIdsT&& value) { m_campaignIdsHasBeenSet = true; m_campaignIds.emplace_back(std::forward<CampaignIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_campaignIds;
    bool m_campaignIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
