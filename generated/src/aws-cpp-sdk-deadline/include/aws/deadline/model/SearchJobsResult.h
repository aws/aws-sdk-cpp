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
    AWS_DEADLINE_API SearchJobsResult() = default;
    AWS_DEADLINE_API SearchJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API SearchJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The jobs in the search.</p>
     */
    inline const Aws::Vector<JobSearchSummary>& GetJobs() const { return m_jobs; }
    template<typename JobsT = Aws::Vector<JobSearchSummary>>
    void SetJobs(JobsT&& value) { m_jobsHasBeenSet = true; m_jobs = std::forward<JobsT>(value); }
    template<typename JobsT = Aws::Vector<JobSearchSummary>>
    SearchJobsResult& WithJobs(JobsT&& value) { SetJobs(std::forward<JobsT>(value)); return *this;}
    template<typename JobsT = JobSearchSummary>
    SearchJobsResult& AddJobs(JobsT&& value) { m_jobsHasBeenSet = true; m_jobs.emplace_back(std::forward<JobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next incremental starting point after the defined
     * <code>itemOffset</code>.</p>
     */
    inline int GetNextItemOffset() const { return m_nextItemOffset; }
    inline void SetNextItemOffset(int value) { m_nextItemOffsetHasBeenSet = true; m_nextItemOffset = value; }
    inline SearchJobsResult& WithNextItemOffset(int value) { SetNextItemOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of results in the search.</p>
     */
    inline int GetTotalResults() const { return m_totalResults; }
    inline void SetTotalResults(int value) { m_totalResultsHasBeenSet = true; m_totalResults = value; }
    inline SearchJobsResult& WithTotalResults(int value) { SetTotalResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<JobSearchSummary> m_jobs;
    bool m_jobsHasBeenSet = false;

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
