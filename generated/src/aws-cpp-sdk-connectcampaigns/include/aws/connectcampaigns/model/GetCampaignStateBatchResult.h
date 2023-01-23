/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcampaigns/model/FailedCampaignStateResponse.h>
#include <aws/connectcampaigns/model/SuccessfulCampaignStateResponse.h>
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
   * <p>GetCampaignStateBatchResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/GetCampaignStateBatchResponse">AWS
   * API Reference</a></p>
   */
  class GetCampaignStateBatchResult
  {
  public:
    AWS_CONNECTCAMPAIGNS_API GetCampaignStateBatchResult();
    AWS_CONNECTCAMPAIGNS_API GetCampaignStateBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNS_API GetCampaignStateBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<FailedCampaignStateResponse>& GetFailedRequests() const{ return m_failedRequests; }

    
    inline void SetFailedRequests(const Aws::Vector<FailedCampaignStateResponse>& value) { m_failedRequests = value; }

    
    inline void SetFailedRequests(Aws::Vector<FailedCampaignStateResponse>&& value) { m_failedRequests = std::move(value); }

    
    inline GetCampaignStateBatchResult& WithFailedRequests(const Aws::Vector<FailedCampaignStateResponse>& value) { SetFailedRequests(value); return *this;}

    
    inline GetCampaignStateBatchResult& WithFailedRequests(Aws::Vector<FailedCampaignStateResponse>&& value) { SetFailedRequests(std::move(value)); return *this;}

    
    inline GetCampaignStateBatchResult& AddFailedRequests(const FailedCampaignStateResponse& value) { m_failedRequests.push_back(value); return *this; }

    
    inline GetCampaignStateBatchResult& AddFailedRequests(FailedCampaignStateResponse&& value) { m_failedRequests.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<SuccessfulCampaignStateResponse>& GetSuccessfulRequests() const{ return m_successfulRequests; }

    
    inline void SetSuccessfulRequests(const Aws::Vector<SuccessfulCampaignStateResponse>& value) { m_successfulRequests = value; }

    
    inline void SetSuccessfulRequests(Aws::Vector<SuccessfulCampaignStateResponse>&& value) { m_successfulRequests = std::move(value); }

    
    inline GetCampaignStateBatchResult& WithSuccessfulRequests(const Aws::Vector<SuccessfulCampaignStateResponse>& value) { SetSuccessfulRequests(value); return *this;}

    
    inline GetCampaignStateBatchResult& WithSuccessfulRequests(Aws::Vector<SuccessfulCampaignStateResponse>&& value) { SetSuccessfulRequests(std::move(value)); return *this;}

    
    inline GetCampaignStateBatchResult& AddSuccessfulRequests(const SuccessfulCampaignStateResponse& value) { m_successfulRequests.push_back(value); return *this; }

    
    inline GetCampaignStateBatchResult& AddSuccessfulRequests(SuccessfulCampaignStateResponse&& value) { m_successfulRequests.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FailedCampaignStateResponse> m_failedRequests;

    Aws::Vector<SuccessfulCampaignStateResponse> m_successfulRequests;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
