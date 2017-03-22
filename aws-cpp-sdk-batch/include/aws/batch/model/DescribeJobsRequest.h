/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class AWS_BATCH_API DescribeJobsRequest : public BatchRequest
  {
  public:
    DescribeJobsRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>A space-separated list of up to 100 job IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobs() const{ return m_jobs; }

    /**
     * <p>A space-separated list of up to 100 job IDs.</p>
     */
    inline void SetJobs(const Aws::Vector<Aws::String>& value) { m_jobsHasBeenSet = true; m_jobs = value; }

    /**
     * <p>A space-separated list of up to 100 job IDs.</p>
     */
    inline void SetJobs(Aws::Vector<Aws::String>&& value) { m_jobsHasBeenSet = true; m_jobs = value; }

    /**
     * <p>A space-separated list of up to 100 job IDs.</p>
     */
    inline DescribeJobsRequest& WithJobs(const Aws::Vector<Aws::String>& value) { SetJobs(value); return *this;}

    /**
     * <p>A space-separated list of up to 100 job IDs.</p>
     */
    inline DescribeJobsRequest& WithJobs(Aws::Vector<Aws::String>&& value) { SetJobs(value); return *this;}

    /**
     * <p>A space-separated list of up to 100 job IDs.</p>
     */
    inline DescribeJobsRequest& AddJobs(const Aws::String& value) { m_jobsHasBeenSet = true; m_jobs.push_back(value); return *this; }

    /**
     * <p>A space-separated list of up to 100 job IDs.</p>
     */
    inline DescribeJobsRequest& AddJobs(Aws::String&& value) { m_jobsHasBeenSet = true; m_jobs.push_back(value); return *this; }

    /**
     * <p>A space-separated list of up to 100 job IDs.</p>
     */
    inline DescribeJobsRequest& AddJobs(const char* value) { m_jobsHasBeenSet = true; m_jobs.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_jobs;
    bool m_jobsHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
