/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   * <p>Contains the parameters for <code>DescribeJobs</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeJobsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeJobsRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API DescribeJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeJobs"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    /**
     * <p>A list of up to 100 job IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobs() const{ return m_jobs; }

    /**
     * <p>A list of up to 100 job IDs.</p>
     */
    inline bool JobsHasBeenSet() const { return m_jobsHasBeenSet; }

    /**
     * <p>A list of up to 100 job IDs.</p>
     */
    inline void SetJobs(const Aws::Vector<Aws::String>& value) { m_jobsHasBeenSet = true; m_jobs = value; }

    /**
     * <p>A list of up to 100 job IDs.</p>
     */
    inline void SetJobs(Aws::Vector<Aws::String>&& value) { m_jobsHasBeenSet = true; m_jobs = std::move(value); }

    /**
     * <p>A list of up to 100 job IDs.</p>
     */
    inline DescribeJobsRequest& WithJobs(const Aws::Vector<Aws::String>& value) { SetJobs(value); return *this;}

    /**
     * <p>A list of up to 100 job IDs.</p>
     */
    inline DescribeJobsRequest& WithJobs(Aws::Vector<Aws::String>&& value) { SetJobs(std::move(value)); return *this;}

    /**
     * <p>A list of up to 100 job IDs.</p>
     */
    inline DescribeJobsRequest& AddJobs(const Aws::String& value) { m_jobsHasBeenSet = true; m_jobs.push_back(value); return *this; }

    /**
     * <p>A list of up to 100 job IDs.</p>
     */
    inline DescribeJobsRequest& AddJobs(Aws::String&& value) { m_jobsHasBeenSet = true; m_jobs.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of up to 100 job IDs.</p>
     */
    inline DescribeJobsRequest& AddJobs(const char* value) { m_jobsHasBeenSet = true; m_jobs.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_jobs;
    bool m_jobsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
