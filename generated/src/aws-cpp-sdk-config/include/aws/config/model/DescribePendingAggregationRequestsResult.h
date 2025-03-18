/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/PendingAggregationRequest.h>
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
namespace ConfigService
{
namespace Model
{
  class DescribePendingAggregationRequestsResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribePendingAggregationRequestsResult() = default;
    AWS_CONFIGSERVICE_API DescribePendingAggregationRequestsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribePendingAggregationRequestsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a PendingAggregationRequests object.</p>
     */
    inline const Aws::Vector<PendingAggregationRequest>& GetPendingAggregationRequests() const { return m_pendingAggregationRequests; }
    template<typename PendingAggregationRequestsT = Aws::Vector<PendingAggregationRequest>>
    void SetPendingAggregationRequests(PendingAggregationRequestsT&& value) { m_pendingAggregationRequestsHasBeenSet = true; m_pendingAggregationRequests = std::forward<PendingAggregationRequestsT>(value); }
    template<typename PendingAggregationRequestsT = Aws::Vector<PendingAggregationRequest>>
    DescribePendingAggregationRequestsResult& WithPendingAggregationRequests(PendingAggregationRequestsT&& value) { SetPendingAggregationRequests(std::forward<PendingAggregationRequestsT>(value)); return *this;}
    template<typename PendingAggregationRequestsT = PendingAggregationRequest>
    DescribePendingAggregationRequestsResult& AddPendingAggregationRequests(PendingAggregationRequestsT&& value) { m_pendingAggregationRequestsHasBeenSet = true; m_pendingAggregationRequests.emplace_back(std::forward<PendingAggregationRequestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribePendingAggregationRequestsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePendingAggregationRequestsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PendingAggregationRequest> m_pendingAggregationRequests;
    bool m_pendingAggregationRequestsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
