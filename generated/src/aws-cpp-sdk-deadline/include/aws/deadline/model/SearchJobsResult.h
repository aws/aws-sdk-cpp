/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/JobSearchSummary.h>
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
  class SearchJobsResult
  {
  public:
    AWS_DEADLINE_API SearchJobsResult();
    AWS_DEADLINE_API SearchJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API SearchJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The jobs in the search.</p>
     */
    inline const Aws::Vector<JobSearchSummary>& GetJobs() const{ return m_jobs; }

    /**
     * <p>The jobs in the search.</p>
     */
    inline void SetJobs(const Aws::Vector<JobSearchSummary>& value) { m_jobs = value; }

    /**
     * <p>The jobs in the search.</p>
     */
    inline void SetJobs(Aws::Vector<JobSearchSummary>&& value) { m_jobs = std::move(value); }

    /**
     * <p>The jobs in the search.</p>
     */
    inline SearchJobsResult& WithJobs(const Aws::Vector<JobSearchSummary>& value) { SetJobs(value); return *this;}

    /**
     * <p>The jobs in the search.</p>
     */
    inline SearchJobsResult& WithJobs(Aws::Vector<JobSearchSummary>&& value) { SetJobs(std::move(value)); return *this;}

    /**
     * <p>The jobs in the search.</p>
     */
    inline SearchJobsResult& AddJobs(const JobSearchSummary& value) { m_jobs.push_back(value); return *this; }

    /**
     * <p>The jobs in the search.</p>
     */
    inline SearchJobsResult& AddJobs(JobSearchSummary&& value) { m_jobs.push_back(std::move(value)); return *this; }


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
    inline SearchJobsResult& WithNextItemOffset(int value) { SetNextItemOffset(value); return *this;}


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
    inline SearchJobsResult& WithTotalResults(int value) { SetTotalResults(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<JobSearchSummary> m_jobs;

    int m_nextItemOffset;

    int m_totalResults;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
