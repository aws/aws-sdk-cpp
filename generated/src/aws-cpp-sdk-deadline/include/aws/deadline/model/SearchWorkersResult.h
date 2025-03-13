/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/WorkerSearchSummary.h>
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
namespace deadline
{
namespace Model
{
  class SearchWorkersResult
  {
  public:
    AWS_DEADLINE_API SearchWorkersResult() = default;
    AWS_DEADLINE_API SearchWorkersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API SearchWorkersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The workers for the search.</p>
     */
    inline const Aws::Vector<WorkerSearchSummary>& GetWorkers() const { return m_workers; }
    template<typename WorkersT = Aws::Vector<WorkerSearchSummary>>
    void SetWorkers(WorkersT&& value) { m_workersHasBeenSet = true; m_workers = std::forward<WorkersT>(value); }
    template<typename WorkersT = Aws::Vector<WorkerSearchSummary>>
    SearchWorkersResult& WithWorkers(WorkersT&& value) { SetWorkers(std::forward<WorkersT>(value)); return *this;}
    template<typename WorkersT = WorkerSearchSummary>
    SearchWorkersResult& AddWorkers(WorkersT&& value) { m_workersHasBeenSet = true; m_workers.emplace_back(std::forward<WorkersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next incremental starting point after the defined
     * <code>itemOffset</code>.</p>
     */
    inline int GetNextItemOffset() const { return m_nextItemOffset; }
    inline void SetNextItemOffset(int value) { m_nextItemOffsetHasBeenSet = true; m_nextItemOffset = value; }
    inline SearchWorkersResult& WithNextItemOffset(int value) { SetNextItemOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of results in the search.</p>
     */
    inline int GetTotalResults() const { return m_totalResults; }
    inline void SetTotalResults(int value) { m_totalResultsHasBeenSet = true; m_totalResults = value; }
    inline SearchWorkersResult& WithTotalResults(int value) { SetTotalResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchWorkersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WorkerSearchSummary> m_workers;
    bool m_workersHasBeenSet = false;

    int m_nextItemOffset{0};
    bool m_nextItemOffsetHasBeenSet = false;

    int m_totalResults{0};
    bool m_totalResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
