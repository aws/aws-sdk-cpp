/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/Job.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class BatchGetJobsResult
  {
  public:
    AWS_GLUE_API BatchGetJobsResult();
    AWS_GLUE_API BatchGetJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of job definitions.</p>
     */
    inline const Aws::Vector<Job>& GetJobs() const{ return m_jobs; }

    /**
     * <p>A list of job definitions.</p>
     */
    inline void SetJobs(const Aws::Vector<Job>& value) { m_jobs = value; }

    /**
     * <p>A list of job definitions.</p>
     */
    inline void SetJobs(Aws::Vector<Job>&& value) { m_jobs = std::move(value); }

    /**
     * <p>A list of job definitions.</p>
     */
    inline BatchGetJobsResult& WithJobs(const Aws::Vector<Job>& value) { SetJobs(value); return *this;}

    /**
     * <p>A list of job definitions.</p>
     */
    inline BatchGetJobsResult& WithJobs(Aws::Vector<Job>&& value) { SetJobs(std::move(value)); return *this;}

    /**
     * <p>A list of job definitions.</p>
     */
    inline BatchGetJobsResult& AddJobs(const Job& value) { m_jobs.push_back(value); return *this; }

    /**
     * <p>A list of job definitions.</p>
     */
    inline BatchGetJobsResult& AddJobs(Job&& value) { m_jobs.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of names of jobs not found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobsNotFound() const{ return m_jobsNotFound; }

    /**
     * <p>A list of names of jobs not found.</p>
     */
    inline void SetJobsNotFound(const Aws::Vector<Aws::String>& value) { m_jobsNotFound = value; }

    /**
     * <p>A list of names of jobs not found.</p>
     */
    inline void SetJobsNotFound(Aws::Vector<Aws::String>&& value) { m_jobsNotFound = std::move(value); }

    /**
     * <p>A list of names of jobs not found.</p>
     */
    inline BatchGetJobsResult& WithJobsNotFound(const Aws::Vector<Aws::String>& value) { SetJobsNotFound(value); return *this;}

    /**
     * <p>A list of names of jobs not found.</p>
     */
    inline BatchGetJobsResult& WithJobsNotFound(Aws::Vector<Aws::String>&& value) { SetJobsNotFound(std::move(value)); return *this;}

    /**
     * <p>A list of names of jobs not found.</p>
     */
    inline BatchGetJobsResult& AddJobsNotFound(const Aws::String& value) { m_jobsNotFound.push_back(value); return *this; }

    /**
     * <p>A list of names of jobs not found.</p>
     */
    inline BatchGetJobsResult& AddJobsNotFound(Aws::String&& value) { m_jobsNotFound.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of names of jobs not found.</p>
     */
    inline BatchGetJobsResult& AddJobsNotFound(const char* value) { m_jobsNotFound.push_back(value); return *this; }

  private:

    Aws::Vector<Job> m_jobs;

    Aws::Vector<Aws::String> m_jobsNotFound;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
