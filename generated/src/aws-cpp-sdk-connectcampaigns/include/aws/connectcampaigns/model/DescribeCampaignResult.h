/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/model/Campaign.h>
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
namespace ConnectCampaigns
{
namespace Model
{
  /**
   * <p>DescribeCampaignResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/DescribeCampaignResponse">AWS
   * API Reference</a></p>
   */
  class DescribeCampaignResult
  {
  public:
    AWS_CONNECTCAMPAIGNS_API DescribeCampaignResult();
    AWS_CONNECTCAMPAIGNS_API DescribeCampaignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNS_API DescribeCampaignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Campaign& GetCampaign() const{ return m_campaign; }

    
    inline void SetCampaign(const Campaign& value) { m_campaign = value; }

    
    inline void SetCampaign(Campaign&& value) { m_campaign = std::move(value); }

    
    inline DescribeCampaignResult& WithCampaign(const Campaign& value) { SetCampaign(value); return *this;}

    
    inline DescribeCampaignResult& WithCampaign(Campaign&& value) { SetCampaign(std::move(value)); return *this;}

  private:

    Campaign m_campaign;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
