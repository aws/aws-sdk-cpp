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
    AWS_DEADLINE_API SearchWorkersResult();
    AWS_DEADLINE_API SearchWorkersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API SearchWorkersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The next incremental starting point after the defined
     * <code>itemOffset</code>.</p>
     */
    inline int GetNextItemOffset() const{ return m_nextItemOffset; }

    /**
     * <p>The next incremental starting point after the defined
     * <code>itemOffset</code>.</p>
     */
    inline void SetNextItemOffset(int value) { m_nextItemOffset = value; }

    /**
     * <p>The next incremental starting point after the defined
     * <code>itemOffset</code>.</p>
     */
    inline SearchWorkersResult& WithNextItemOffset(int value) { SetNextItemOffset(value); return *this;}


    /**
     * <p>The total number of results in the search.</p>
     */
    inline int GetTotalResults() const{ return m_totalResults; }

    /**
     * <p>The total number of results in the search.</p>
     */
    inline void SetTotalResults(int value) { m_totalResults = value; }

    /**
     * <p>The total number of results in the search.</p>
     */
    inline SearchWorkersResult& WithTotalResults(int value) { SetTotalResults(value); return *this;}


    /**
     * <p>The workers for the search.</p>
     */
    inline const Aws::Vector<WorkerSearchSummary>& GetWorkers() const{ return m_workers; }

    /**
     * <p>The workers for the search.</p>
     */
    inline void SetWorkers(const Aws::Vector<WorkerSearchSummary>& value) { m_workers = value; }

    /**
     * <p>The workers for the search.</p>
     */
    inline void SetWorkers(Aws::Vector<WorkerSearchSummary>&& value) { m_workers = std::move(value); }

    /**
     * <p>The workers for the search.</p>
     */
    inline SearchWorkersResult& WithWorkers(const Aws::Vector<WorkerSearchSummary>& value) { SetWorkers(value); return *this;}

    /**
     * <p>The workers for the search.</p>
     */
    inline SearchWorkersResult& WithWorkers(Aws::Vector<WorkerSearchSummary>&& value) { SetWorkers(std::move(value)); return *this;}

    /**
     * <p>The workers for the search.</p>
     */
    inline SearchWorkersResult& AddWorkers(const WorkerSearchSummary& value) { m_workers.push_back(value); return *this; }

    /**
     * <p>The workers for the search.</p>
     */
    inline SearchWorkersResult& AddWorkers(WorkerSearchSummary&& value) { m_workers.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchWorkersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchWorkersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchWorkersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_nextItemOffset;

    int m_totalResults;

    Aws::Vector<WorkerSearchSummary> m_workers;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
