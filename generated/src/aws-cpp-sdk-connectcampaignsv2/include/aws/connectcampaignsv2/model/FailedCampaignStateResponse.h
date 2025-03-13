/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/GetCampaignStateBatchFailureCode.h>
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
   * <p>Failed response of campaign state</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/FailedCampaignStateResponse">AWS
   * API Reference</a></p>
   */
  class FailedCampaignStateResponse
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API FailedCampaignStateResponse() = default;
    AWS_CONNECTCAMPAIGNSV2_API FailedCampaignStateResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API FailedCampaignStateResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetCampaignId() const { return m_campaignId; }
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }
    template<typename CampaignIdT = Aws::String>
    void SetCampaignId(CampaignIdT&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::forward<CampaignIdT>(value); }
    template<typename CampaignIdT = Aws::String>
    FailedCampaignStateResponse& WithCampaignId(CampaignIdT&& value) { SetCampaignId(std::forward<CampaignIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline GetCampaignStateBatchFailureCode GetFailureCode() const { return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(GetCampaignStateBatchFailureCode value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline FailedCampaignStateResponse& WithFailureCode(GetCampaignStateBatchFailureCode value) { SetFailureCode(value); return *this;}
    ///@}
  private:

    Aws::String m_campaignId;
    bool m_campaignIdHasBeenSet = false;

    GetCampaignStateBatchFailureCode m_failureCode{GetCampaignStateBatchFailureCode::NOT_SET};
    bool m_failureCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
