﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/JobSummary.h>
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
namespace EntityResolution
{
namespace Model
{
  class ListMatchingJobsResult
  {
  public:
    AWS_ENTITYRESOLUTION_API ListMatchingJobsResult();
    AWS_ENTITYRESOLUTION_API ListMatchingJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API ListMatchingJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>JobSummary</code> objects, each of which contain the ID,
     * status, start time, and end time of a job.</p>
     */
    inline const Aws::Vector<JobSummary>& GetJobs() const{ return m_jobs; }

    /**
     * <p>A list of <code>JobSummary</code> objects, each of which contain the ID,
     * status, start time, and end time of a job.</p>
     */
    inline void SetJobs(const Aws::Vector<JobSummary>& value) { m_jobs = value; }

    /**
     * <p>A list of <code>JobSummary</code> objects, each of which contain the ID,
     * status, start time, and end time of a job.</p>
     */
    inline void SetJobs(Aws::Vector<JobSummary>&& value) { m_jobs = std::move(value); }

    /**
     * <p>A list of <code>JobSummary</code> objects, each of which contain the ID,
     * status, start time, and end time of a job.</p>
     */
    inline ListMatchingJobsResult& WithJobs(const Aws::Vector<JobSummary>& value) { SetJobs(value); return *this;}

    /**
     * <p>A list of <code>JobSummary</code> objects, each of which contain the ID,
     * status, start time, and end time of a job.</p>
     */
    inline ListMatchingJobsResult& WithJobs(Aws::Vector<JobSummary>&& value) { SetJobs(std::move(value)); return *this;}

    /**
     * <p>A list of <code>JobSummary</code> objects, each of which contain the ID,
     * status, start time, and end time of a job.</p>
     */
    inline ListMatchingJobsResult& AddJobs(const JobSummary& value) { m_jobs.push_back(value); return *this; }

    /**
     * <p>A list of <code>JobSummary</code> objects, each of which contain the ID,
     * status, start time, and end time of a job.</p>
     */
    inline ListMatchingJobsResult& AddJobs(JobSummary&& value) { m_jobs.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token from the previous <code>ListSchemaMappings</code> API
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from the previous <code>ListSchemaMappings</code> API
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token from the previous <code>ListSchemaMappings</code> API
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from the previous <code>ListSchemaMappings</code> API
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token from the previous <code>ListSchemaMappings</code> API
     * call.</p>
     */
    inline ListMatchingJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the previous <code>ListSchemaMappings</code> API
     * call.</p>
     */
    inline ListMatchingJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the previous <code>ListSchemaMappings</code> API
     * call.</p>
     */
    inline ListMatchingJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListMatchingJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListMatchingJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListMatchingJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<JobSummary> m_jobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
