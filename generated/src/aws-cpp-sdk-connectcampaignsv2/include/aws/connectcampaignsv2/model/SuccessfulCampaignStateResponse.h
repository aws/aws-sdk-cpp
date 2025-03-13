/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/CampaignState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>Successful response of campaign state</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/SuccessfulCampaignStateResponse">AWS
   * API Reference</a></p>
   */
  class SuccessfulCampaignStateResponse
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API SuccessfulCampaignStateResponse() = default;
    AWS_CONNECTCAMPAIGNSV2_API SuccessfulCampaignStateResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API SuccessfulCampaignStateResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetCampaignId() const { return m_campaignId; }
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }
    template<typename CampaignIdT = Aws::String>
    void SetCampaignId(CampaignIdT&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::forward<CampaignIdT>(value); }
    template<typename CampaignIdT = Aws::String>
    SuccessfulCampaignStateResponse& WithCampaignId(CampaignIdT&& value) { SetCampaignId(std::forward<CampaignIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline CampaignState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CampaignState value) { m_stateHasBeenSet = true; m_state = value; }
    inline SuccessfulCampaignStateResponse& WithState(CampaignState value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_campaignId;
    bool m_campaignIdHasBeenSet = false;

    CampaignState m_state{CampaignState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
