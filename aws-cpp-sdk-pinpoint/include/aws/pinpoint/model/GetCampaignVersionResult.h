/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/CampaignResponse.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{
  class GetCampaignVersionResult
  {
  public:
    AWS_PINPOINT_API GetCampaignVersionResult();
    AWS_PINPOINT_API GetCampaignVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetCampaignVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const CampaignResponse& GetCampaignResponse() const{ return m_campaignResponse; }

    
    inline void SetCampaignResponse(const CampaignResponse& value) { m_campaignResponse = value; }

    
    inline void SetCampaignResponse(CampaignResponse&& value) { m_campaignResponse = std::move(value); }

    
    inline GetCampaignVersionResult& WithCampaignResponse(const CampaignResponse& value) { SetCampaignResponse(value); return *this;}

    
    inline GetCampaignVersionResult& WithCampaignResponse(CampaignResponse&& value) { SetCampaignResponse(std::move(value)); return *this;}

  private:

    CampaignResponse m_campaignResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
