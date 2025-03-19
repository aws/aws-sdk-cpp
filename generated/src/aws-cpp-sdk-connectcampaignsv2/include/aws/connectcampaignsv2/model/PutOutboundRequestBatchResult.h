/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/SuccessfulRequest.h>
#include <aws/connectcampaignsv2/model/FailedRequest.h>
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
   * <p>The response for PutOutboundRequestBatch API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/PutOutboundRequestBatchResponse">AWS
   * API Reference</a></p>
   */
  class PutOutboundRequestBatchResult
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API PutOutboundRequestBatchResult() = default;
    AWS_CONNECTCAMPAIGNSV2_API PutOutboundRequestBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNSV2_API PutOutboundRequestBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<SuccessfulRequest>& GetSuccessfulRequests() const { return m_successfulRequests; }
    template<typename SuccessfulRequestsT = Aws::Vector<SuccessfulRequest>>
    void SetSuccessfulRequests(SuccessfulRequestsT&& value) { m_successfulRequestsHasBeenSet = true; m_successfulRequests = std::forward<SuccessfulRequestsT>(value); }
    template<typename SuccessfulRequestsT = Aws::Vector<SuccessfulRequest>>
    PutOutboundRequestBatchResult& WithSuccessfulRequests(SuccessfulRequestsT&& value) { SetSuccessfulRequests(std::forward<SuccessfulRequestsT>(value)); return *this;}
    template<typename SuccessfulRequestsT = SuccessfulRequest>
    PutOutboundRequestBatchResult& AddSuccessfulRequests(SuccessfulRequestsT&& value) { m_successfulRequestsHasBeenSet = true; m_successfulRequests.emplace_back(std::forward<SuccessfulRequestsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<FailedRequest>& GetFailedRequests() const { return m_failedRequests; }
    template<typename FailedRequestsT = Aws::Vector<FailedRequest>>
    void SetFailedRequests(FailedRequestsT&& value) { m_failedRequestsHasBeenSet = true; m_failedRequests = std::forward<FailedRequestsT>(value); }
    template<typename FailedRequestsT = Aws::Vector<FailedRequest>>
    PutOutboundRequestBatchResult& WithFailedRequests(FailedRequestsT&& value) { SetFailedRequests(std::forward<FailedRequestsT>(value)); return *this;}
    template<typename FailedRequestsT = FailedRequest>
    PutOutboundRequestBatchResult& AddFailedRequests(FailedRequestsT&& value) { m_failedRequestsHasBeenSet = true; m_failedRequests.emplace_back(std::forward<FailedRequestsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutOutboundRequestBatchResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SuccessfulRequest> m_successfulRequests;
    bool m_successfulRequestsHasBeenSet = false;

    Aws::Vector<FailedRequest> m_failedRequests;
    bool m_failedRequestsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
