﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Job.h>
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
namespace Glue
{
namespace Model
{
  class GetJobsResult
  {
  public:
    AWS_GLUE_API GetJobsResult();
    AWS_GLUE_API GetJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of job definitions.</p>
     */
    inline const Aws::Vector<Job>& GetJobs() const{ return m_jobs; }
    inline void SetJobs(const Aws::Vector<Job>& value) { m_jobs = value; }
    inline void SetJobs(Aws::Vector<Job>&& value) { m_jobs = std::move(value); }
    inline GetJobsResult& WithJobs(const Aws::Vector<Job>& value) { SetJobs(value); return *this;}
    inline GetJobsResult& WithJobs(Aws::Vector<Job>&& value) { SetJobs(std::move(value)); return *this;}
    inline GetJobsResult& AddJobs(const Job& value) { m_jobs.push_back(value); return *this; }
    inline GetJobsResult& AddJobs(Job&& value) { m_jobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if not all job definitions have yet been returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Job> m_jobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
