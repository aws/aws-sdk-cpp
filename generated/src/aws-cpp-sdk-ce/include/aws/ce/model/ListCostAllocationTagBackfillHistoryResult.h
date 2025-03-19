/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/CostAllocationTagBackfillRequest.h>
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
namespace CostExplorer
{
namespace Model
{
  class ListCostAllocationTagBackfillHistoryResult
  {
  public:
    AWS_COSTEXPLORER_API ListCostAllocationTagBackfillHistoryResult() = default;
    AWS_COSTEXPLORER_API ListCostAllocationTagBackfillHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API ListCostAllocationTagBackfillHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of historical cost allocation tag backfill requests. </p>
     */
    inline const Aws::Vector<CostAllocationTagBackfillRequest>& GetBackfillRequests() const { return m_backfillRequests; }
    template<typename BackfillRequestsT = Aws::Vector<CostAllocationTagBackfillRequest>>
    void SetBackfillRequests(BackfillRequestsT&& value) { m_backfillRequestsHasBeenSet = true; m_backfillRequests = std::forward<BackfillRequestsT>(value); }
    template<typename BackfillRequestsT = Aws::Vector<CostAllocationTagBackfillRequest>>
    ListCostAllocationTagBackfillHistoryResult& WithBackfillRequests(BackfillRequestsT&& value) { SetBackfillRequests(std::forward<BackfillRequestsT>(value)); return *this;}
    template<typename BackfillRequestsT = CostAllocationTagBackfillRequest>
    ListCostAllocationTagBackfillHistoryResult& AddBackfillRequests(BackfillRequestsT&& value) { m_backfillRequestsHasBeenSet = true; m_backfillRequests.emplace_back(std::forward<BackfillRequestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCostAllocationTagBackfillHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCostAllocationTagBackfillHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CostAllocationTagBackfillRequest> m_backfillRequests;
    bool m_backfillRequestsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
