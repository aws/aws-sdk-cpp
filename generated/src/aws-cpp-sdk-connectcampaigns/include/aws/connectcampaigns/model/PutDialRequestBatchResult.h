/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaigns/model/SuccessfulRequest.h>
#include <aws/connectcampaigns/model/FailedRequest.h>
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
   * <p>PutDialRequestBatchResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/PutDialRequestBatchResponse">AWS
   * API Reference</a></p>
   */
  class PutDialRequestBatchResult
  {
  public:
    AWS_CONNECTCAMPAIGNS_API PutDialRequestBatchResult() = default;
    AWS_CONNECTCAMPAIGNS_API PutDialRequestBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNS_API PutDialRequestBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<SuccessfulRequest>& GetSuccessfulRequests() const { return m_successfulRequests; }
    template<typename SuccessfulRequestsT = Aws::Vector<SuccessfulRequest>>
    void SetSuccessfulRequests(SuccessfulRequestsT&& value) { m_successfulRequestsHasBeenSet = true; m_successfulRequests = std::forward<SuccessfulRequestsT>(value); }
    template<typename SuccessfulRequestsT = Aws::Vector<SuccessfulRequest>>
    PutDialRequestBatchResult& WithSuccessfulRequests(SuccessfulRequestsT&& value) { SetSuccessfulRequests(std::forward<SuccessfulRequestsT>(value)); return *this;}
    template<typename SuccessfulRequestsT = SuccessfulRequest>
    PutDialRequestBatchResult& AddSuccessfulRequests(SuccessfulRequestsT&& value) { m_successfulRequestsHasBeenSet = true; m_successfulRequests.emplace_back(std::forward<SuccessfulRequestsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<FailedRequest>& GetFailedRequests() const { return m_failedRequests; }
    template<typename FailedRequestsT = Aws::Vector<FailedRequest>>
    void SetFailedRequests(FailedRequestsT&& value) { m_failedRequestsHasBeenSet = true; m_failedRequests = std::forward<FailedRequestsT>(value); }
    template<typename FailedRequestsT = Aws::Vector<FailedRequest>>
    PutDialRequestBatchResult& WithFailedRequests(FailedRequestsT&& value) { SetFailedRequests(std::forward<FailedRequestsT>(value)); return *this;}
    template<typename FailedRequestsT = FailedRequest>
    PutDialRequestBatchResult& AddFailedRequests(FailedRequestsT&& value) { m_failedRequestsHasBeenSet = true; m_failedRequests.emplace_back(std::forward<FailedRequestsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutDialRequestBatchResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
} // namespace ConnectCampaigns
} // namespace Aws
