/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/SuccessfulCampaignStateResponse.h>
#include <aws/connectcampaignsv2/model/FailedCampaignStateResponse.h>
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
namespace ConnectCampaignsV2
{
namespace Model
{
  /**
   * <p>The response for GetCampaignStateBatch API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/GetCampaignStateBatchResponse">AWS
   * API Reference</a></p>
   */
  class GetCampaignStateBatchResult
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API GetCampaignStateBatchResult() = default;
    AWS_CONNECTCAMPAIGNSV2_API GetCampaignStateBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNSV2_API GetCampaignStateBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<SuccessfulCampaignStateResponse>& GetSuccessfulRequests() const { return m_successfulRequests; }
    template<typename SuccessfulRequestsT = Aws::Vector<SuccessfulCampaignStateResponse>>
    void SetSuccessfulRequests(SuccessfulRequestsT&& value) { m_successfulRequestsHasBeenSet = true; m_successfulRequests = std::forward<SuccessfulRequestsT>(value); }
    template<typename SuccessfulRequestsT = Aws::Vector<SuccessfulCampaignStateResponse>>
    GetCampaignStateBatchResult& WithSuccessfulRequests(SuccessfulRequestsT&& value) { SetSuccessfulRequests(std::forward<SuccessfulRequestsT>(value)); return *this;}
    template<typename SuccessfulRequestsT = SuccessfulCampaignStateResponse>
    GetCampaignStateBatchResult& AddSuccessfulRequests(SuccessfulRequestsT&& value) { m_successfulRequestsHasBeenSet = true; m_successfulRequests.emplace_back(std::forward<SuccessfulRequestsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<FailedCampaignStateResponse>& GetFailedRequests() const { return m_failedRequests; }
    template<typename FailedRequestsT = Aws::Vector<FailedCampaignStateResponse>>
    void SetFailedRequests(FailedRequestsT&& value) { m_failedRequestsHasBeenSet = true; m_failedRequests = std::forward<FailedRequestsT>(value); }
    template<typename FailedRequestsT = Aws::Vector<FailedCampaignStateResponse>>
    GetCampaignStateBatchResult& WithFailedRequests(FailedRequestsT&& value) { SetFailedRequests(std::forward<FailedRequestsT>(value)); return *this;}
    template<typename FailedRequestsT = FailedCampaignStateResponse>
    GetCampaignStateBatchResult& AddFailedRequests(FailedRequestsT&& value) { m_failedRequestsHasBeenSet = true; m_failedRequests.emplace_back(std::forward<FailedRequestsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCampaignStateBatchResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SuccessfulCampaignStateResponse> m_successfulRequests;
    bool m_successfulRequestsHasBeenSet = false;

    Aws::Vector<FailedCampaignStateResponse> m_failedRequests;
    bool m_failedRequestsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
