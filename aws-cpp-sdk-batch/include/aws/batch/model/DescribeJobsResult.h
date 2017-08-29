/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_BATCH_API DescribeJobsResult
  {
  public:
    DescribeJobsResult();
    DescribeJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of jobs. </p>
     */
    inline const Aws::Vector<JobDetail>& GetJobs() const{ return m_jobs; }

    /**
     * <p>The list of jobs. </p>
     */
    inline void SetJobs(const Aws::Vector<JobDetail>& value) { m_jobs = value; }

    /**
     * <p>The list of jobs. </p>
     */
    inline void SetJobs(Aws::Vector<JobDetail>&& value) { m_jobs = std::move(value); }

    /**
     * <p>The list of jobs. </p>
     */
    inline DescribeJobsResult& WithJobs(const Aws::Vector<JobDetail>& value) { SetJobs(value); return *this;}

    /**
     * <p>The list of jobs. </p>
     */
    inline DescribeJobsResult& WithJobs(Aws::Vector<JobDetail>&& value) { SetJobs(std::move(value)); return *this;}

    /**
     * <p>The list of jobs. </p>
     */
    inline DescribeJobsResult& AddJobs(const JobDetail& value) { m_jobs.push_back(value); return *this; }

    /**
     * <p>The list of jobs. </p>
     */
    inline DescribeJobsResult& AddJobs(JobDetail&& value) { m_jobs.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<JobDetail> m_jobs;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
