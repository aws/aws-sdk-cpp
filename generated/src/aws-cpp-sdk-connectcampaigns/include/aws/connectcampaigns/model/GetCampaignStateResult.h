/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/model/CampaignState.h>
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
   * <p>GetCampaignStateResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/GetCampaignStateResponse">AWS
   * API Reference</a></p>
   */
  class GetCampaignStateResult
  {
  public:
    AWS_CONNECTCAMPAIGNS_API GetCampaignStateResult();
    AWS_CONNECTCAMPAIGNS_API GetCampaignStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNS_API GetCampaignStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const CampaignState& GetState() const{ return m_state; }

    
    inline void SetState(const CampaignState& value) { m_state = value; }

    
    inline void SetState(CampaignState&& value) { m_state = std::move(value); }

    
    inline GetCampaignStateResult& WithState(const CampaignState& value) { SetState(value); return *this;}

    
    inline GetCampaignStateResult& WithState(CampaignState&& value) { SetState(std::move(value)); return *this;}

  private:

    CampaignState m_state;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
