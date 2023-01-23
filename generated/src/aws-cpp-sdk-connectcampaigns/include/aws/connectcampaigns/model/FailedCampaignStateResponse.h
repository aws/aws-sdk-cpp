/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaigns/model/GetCampaignStateBatchFailureCode.h>
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
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>Failed response of campaign state</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/FailedCampaignStateResponse">AWS
   * API Reference</a></p>
   */
  class FailedCampaignStateResponse
  {
  public:
    AWS_CONNECTCAMPAIGNS_API FailedCampaignStateResponse();
    AWS_CONNECTCAMPAIGNS_API FailedCampaignStateResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API FailedCampaignStateResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetCampaignId() const{ return m_campaignId; }

    
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }

    
    inline void SetCampaignId(const Aws::String& value) { m_campaignIdHasBeenSet = true; m_campaignId = value; }

    
    inline void SetCampaignId(Aws::String&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::move(value); }

    
    inline void SetCampaignId(const char* value) { m_campaignIdHasBeenSet = true; m_campaignId.assign(value); }

    
    inline FailedCampaignStateResponse& WithCampaignId(const Aws::String& value) { SetCampaignId(value); return *this;}

    
    inline FailedCampaignStateResponse& WithCampaignId(Aws::String&& value) { SetCampaignId(std::move(value)); return *this;}

    
    inline FailedCampaignStateResponse& WithCampaignId(const char* value) { SetCampaignId(value); return *this;}


    
    inline const GetCampaignStateBatchFailureCode& GetFailureCode() const{ return m_failureCode; }

    
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }

    
    inline void SetFailureCode(const GetCampaignStateBatchFailureCode& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }

    
    inline void SetFailureCode(GetCampaignStateBatchFailureCode&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }

    
    inline FailedCampaignStateResponse& WithFailureCode(const GetCampaignStateBatchFailureCode& value) { SetFailureCode(value); return *this;}

    
    inline FailedCampaignStateResponse& WithFailureCode(GetCampaignStateBatchFailureCode&& value) { SetFailureCode(std::move(value)); return *this;}

  private:

    Aws::String m_campaignId;
    bool m_campaignIdHasBeenSet = false;

    GetCampaignStateBatchFailureCode m_failureCode;
    bool m_failureCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
