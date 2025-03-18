/**
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
  class BatchGetJobsResult
  {
  public:
    AWS_GLUE_API BatchGetJobsResult() = default;
    AWS_GLUE_API BatchGetJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of job definitions.</p>
     */
    inline const Aws::Vector<Job>& GetJobs() const { return m_jobs; }
    template<typename JobsT = Aws::Vector<Job>>
    void SetJobs(JobsT&& value) { m_jobsHasBeenSet = true; m_jobs = std::forward<JobsT>(value); }
    template<typename JobsT = Aws::Vector<Job>>
    BatchGetJobsResult& WithJobs(JobsT&& value) { SetJobs(std::forward<JobsT>(value)); return *this;}
    template<typename JobsT = Job>
    BatchGetJobsResult& AddJobs(JobsT&& value) { m_jobsHasBeenSet = true; m_jobs.emplace_back(std::forward<JobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of names of jobs not found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobsNotFound() const { return m_jobsNotFound; }
    template<typename JobsNotFoundT = Aws::Vector<Aws::String>>
    void SetJobsNotFound(JobsNotFoundT&& value) { m_jobsNotFoundHasBeenSet = true; m_jobsNotFound = std::forward<JobsNotFoundT>(value); }
    template<typename JobsNotFoundT = Aws::Vector<Aws::String>>
    BatchGetJobsResult& WithJobsNotFound(JobsNotFoundT&& value) { SetJobsNotFound(std::forward<JobsNotFoundT>(value)); return *this;}
    template<typename JobsNotFoundT = Aws::String>
    BatchGetJobsResult& AddJobsNotFound(JobsNotFoundT&& value) { m_jobsNotFoundHasBeenSet = true; m_jobsNotFound.emplace_back(std::forward<JobsNotFoundT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Job> m_jobs;
    bool m_jobsHasBeenSet = false;

    Aws::Vector<Aws::String> m_jobsNotFound;
    bool m_jobsNotFoundHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
