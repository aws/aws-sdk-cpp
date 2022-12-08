/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/JobDetail.h>
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
  class DescribeJobsResult
  {
  public:
    AWS_BATCH_API DescribeJobsResult();
    AWS_BATCH_API DescribeJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API DescribeJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of jobs.</p>
     */
    inline const Aws::Vector<JobDetail>& GetJobs() const{ return m_jobs; }

    /**
     * <p>The list of jobs.</p>
     */
    inline void SetJobs(const Aws::Vector<JobDetail>& value) { m_jobs = value; }

    /**
     * <p>The list of jobs.</p>
     */
    inline void SetJobs(Aws::Vector<JobDetail>&& value) { m_jobs = std::move(value); }

    /**
     * <p>The list of jobs.</p>
     */
    inline DescribeJobsResult& WithJobs(const Aws::Vector<JobDetail>& value) { SetJobs(value); return *this;}

    /**
     * <p>The list of jobs.</p>
     */
    inline DescribeJobsResult& WithJobs(Aws::Vector<JobDetail>&& value) { SetJobs(std::move(value)); return *this;}

    /**
     * <p>The list of jobs.</p>
     */
    inline DescribeJobsResult& AddJobs(const JobDetail& value) { m_jobs.push_back(value); return *this; }

    /**
     * <p>The list of jobs.</p>
     */
    inline DescribeJobsResult& AddJobs(JobDetail&& value) { m_jobs.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<JobDetail> m_jobs;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
