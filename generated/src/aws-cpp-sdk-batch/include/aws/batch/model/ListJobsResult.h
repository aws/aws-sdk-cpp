﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/JobSummary.h>
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
namespace Batch
{
namespace Model
{
  class ListJobsResult
  {
  public:
    AWS_BATCH_API ListJobsResult() = default;
    AWS_BATCH_API ListJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API ListJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of job summaries that match the request.</p>
     */
    inline const Aws::Vector<JobSummary>& GetJobSummaryList() const { return m_jobSummaryList; }
    template<typename JobSummaryListT = Aws::Vector<JobSummary>>
    void SetJobSummaryList(JobSummaryListT&& value) { m_jobSummaryListHasBeenSet = true; m_jobSummaryList = std::forward<JobSummaryListT>(value); }
    template<typename JobSummaryListT = Aws::Vector<JobSummary>>
    ListJobsResult& WithJobSummaryList(JobSummaryListT&& value) { SetJobSummaryList(std::forward<JobSummaryListT>(value)); return *this;}
    template<typename JobSummaryListT = JobSummary>
    ListJobsResult& AddJobSummaryList(JobSummaryListT&& value) { m_jobSummaryListHasBeenSet = true; m_jobSummaryList.emplace_back(std::forward<JobSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future <code>ListJobs</code>
     * request. When the results of a <code>ListJobs</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<JobSummary> m_jobSummaryList;
    bool m_jobSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
