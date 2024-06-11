﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/JobSummary.h>
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
namespace Braket
{
namespace Model
{
  class SearchJobsResult
  {
  public:
    AWS_BRAKET_API SearchJobsResult();
    AWS_BRAKET_API SearchJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BRAKET_API SearchJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>JobSummary</code> objects for devices that match the
     * specified filter values.</p>
     */
    inline const Aws::Vector<JobSummary>& GetJobs() const{ return m_jobs; }
    inline void SetJobs(const Aws::Vector<JobSummary>& value) { m_jobs = value; }
    inline void SetJobs(Aws::Vector<JobSummary>&& value) { m_jobs = std::move(value); }
    inline SearchJobsResult& WithJobs(const Aws::Vector<JobSummary>& value) { SetJobs(value); return *this;}
    inline SearchJobsResult& WithJobs(Aws::Vector<JobSummary>&& value) { SetJobs(std::move(value)); return *this;}
    inline SearchJobsResult& AddJobs(const JobSummary& value) { m_jobs.push_back(value); return *this; }
    inline SearchJobsResult& AddJobs(JobSummary&& value) { m_jobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token used for pagination of results, or <code>null</code> if there are no
     * additional results. Use the token value in a subsequent request to continue
     * results where the previous request ended.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<JobSummary> m_jobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
