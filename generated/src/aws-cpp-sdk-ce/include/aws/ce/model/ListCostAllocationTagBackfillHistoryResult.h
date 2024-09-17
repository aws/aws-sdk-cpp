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
    AWS_COSTEXPLORER_API ListCostAllocationTagBackfillHistoryResult();
    AWS_COSTEXPLORER_API ListCostAllocationTagBackfillHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API ListCostAllocationTagBackfillHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of historical cost allocation tag backfill requests. </p>
     */
    inline const Aws::Vector<CostAllocationTagBackfillRequest>& GetBackfillRequests() const{ return m_backfillRequests; }
    inline void SetBackfillRequests(const Aws::Vector<CostAllocationTagBackfillRequest>& value) { m_backfillRequests = value; }
    inline void SetBackfillRequests(Aws::Vector<CostAllocationTagBackfillRequest>&& value) { m_backfillRequests = std::move(value); }
    inline ListCostAllocationTagBackfillHistoryResult& WithBackfillRequests(const Aws::Vector<CostAllocationTagBackfillRequest>& value) { SetBackfillRequests(value); return *this;}
    inline ListCostAllocationTagBackfillHistoryResult& WithBackfillRequests(Aws::Vector<CostAllocationTagBackfillRequest>&& value) { SetBackfillRequests(std::move(value)); return *this;}
    inline ListCostAllocationTagBackfillHistoryResult& AddBackfillRequests(const CostAllocationTagBackfillRequest& value) { m_backfillRequests.push_back(value); return *this; }
    inline ListCostAllocationTagBackfillHistoryResult& AddBackfillRequests(CostAllocationTagBackfillRequest&& value) { m_backfillRequests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCostAllocationTagBackfillHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCostAllocationTagBackfillHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCostAllocationTagBackfillHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCostAllocationTagBackfillHistoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCostAllocationTagBackfillHistoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCostAllocationTagBackfillHistoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CostAllocationTagBackfillRequest> m_backfillRequests;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
