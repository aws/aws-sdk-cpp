/**
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
    AWS_BATCH_API ListJobsResult();
    AWS_BATCH_API ListJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API ListJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of job summaries that match the request.</p>
     */
    inline const Aws::Vector<JobSummary>& GetJobSummaryList() const{ return m_jobSummaryList; }
    inline void SetJobSummaryList(const Aws::Vector<JobSummary>& value) { m_jobSummaryList = value; }
    inline void SetJobSummaryList(Aws::Vector<JobSummary>&& value) { m_jobSummaryList = std::move(value); }
    inline ListJobsResult& WithJobSummaryList(const Aws::Vector<JobSummary>& value) { SetJobSummaryList(value); return *this;}
    inline ListJobsResult& WithJobSummaryList(Aws::Vector<JobSummary>&& value) { SetJobSummaryList(std::move(value)); return *this;}
    inline ListJobsResult& AddJobSummaryList(const JobSummary& value) { m_jobSummaryList.push_back(value); return *this; }
    inline ListJobsResult& AddJobSummaryList(JobSummary&& value) { m_jobSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future <code>ListJobs</code>
     * request. When the results of a <code>ListJobs</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<JobSummary> m_jobSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
