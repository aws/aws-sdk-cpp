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
    AWS_CONNECTCAMPAIGNSV2_API SuccessfulCampaignStateResponse();
    AWS_CONNECTCAMPAIGNSV2_API SuccessfulCampaignStateResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API SuccessfulCampaignStateResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetCampaignId() const{ return m_campaignId; }
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }
    inline void SetCampaignId(const Aws::String& value) { m_campaignIdHasBeenSet = true; m_campaignId = value; }
    inline void SetCampaignId(Aws::String&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::move(value); }
    inline void SetCampaignId(const char* value) { m_campaignIdHasBeenSet = true; m_campaignId.assign(value); }
    inline SuccessfulCampaignStateResponse& WithCampaignId(const Aws::String& value) { SetCampaignId(value); return *this;}
    inline SuccessfulCampaignStateResponse& WithCampaignId(Aws::String&& value) { SetCampaignId(std::move(value)); return *this;}
    inline SuccessfulCampaignStateResponse& WithCampaignId(const char* value) { SetCampaignId(value); return *this;}
    ///@}

    ///@{
    
    inline const CampaignState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const CampaignState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(CampaignState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline SuccessfulCampaignStateResponse& WithState(const CampaignState& value) { SetState(value); return *this;}
    inline SuccessfulCampaignStateResponse& WithState(CampaignState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_campaignId;
    bool m_campaignIdHasBeenSet = false;

    CampaignState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
