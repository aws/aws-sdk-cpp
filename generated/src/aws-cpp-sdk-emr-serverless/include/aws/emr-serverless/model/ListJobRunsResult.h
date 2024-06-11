﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-serverless/model/JobRunSummary.h>
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
namespace EMRServerless
{
namespace Model
{
  class ListJobRunsResult
  {
  public:
    AWS_EMRSERVERLESS_API ListJobRunsResult();
    AWS_EMRSERVERLESS_API ListJobRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRSERVERLESS_API ListJobRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The output lists information about the specified job runs.</p>
     */
    inline const Aws::Vector<JobRunSummary>& GetJobRuns() const{ return m_jobRuns; }
    inline void SetJobRuns(const Aws::Vector<JobRunSummary>& value) { m_jobRuns = value; }
    inline void SetJobRuns(Aws::Vector<JobRunSummary>&& value) { m_jobRuns = std::move(value); }
    inline ListJobRunsResult& WithJobRuns(const Aws::Vector<JobRunSummary>& value) { SetJobRuns(value); return *this;}
    inline ListJobRunsResult& WithJobRuns(Aws::Vector<JobRunSummary>&& value) { SetJobRuns(std::move(value)); return *this;}
    inline ListJobRunsResult& AddJobRuns(const JobRunSummary& value) { m_jobRuns.push_back(value); return *this; }
    inline ListJobRunsResult& AddJobRuns(JobRunSummary&& value) { m_jobRuns.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The output displays the token for the next set of job run results. This is
     * required for pagination and is available as a response of the previous
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListJobRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListJobRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListJobRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListJobRunsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListJobRunsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListJobRunsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<JobRunSummary> m_jobRuns;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
