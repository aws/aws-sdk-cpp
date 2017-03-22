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
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class AWS_BATCH_API TerminateJobRequest : public BatchRequest
  {
  public:
    TerminateJobRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>Job IDs to be terminated. Up to 100 jobs can be specified.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>Job IDs to be terminated. Up to 100 jobs can be specified.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>Job IDs to be terminated. Up to 100 jobs can be specified.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>Job IDs to be terminated. Up to 100 jobs can be specified.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>Job IDs to be terminated. Up to 100 jobs can be specified.</p>
     */
    inline TerminateJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>Job IDs to be terminated. Up to 100 jobs can be specified.</p>
     */
    inline TerminateJobRequest& WithJobId(Aws::String&& value) { SetJobId(value); return *this;}

    /**
     * <p>Job IDs to be terminated. Up to 100 jobs can be specified.</p>
     */
    inline TerminateJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}

    /**
     * <p>A message to attach to the job that explains the reason for cancelling it.
     * This message is returned by future <a>DescribeJobs</a> operations on the job.
     * This message is also recorded in the AWS Batch activity logs. </p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>A message to attach to the job that explains the reason for cancelling it.
     * This message is returned by future <a>DescribeJobs</a> operations on the job.
     * This message is also recorded in the AWS Batch activity logs. </p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A message to attach to the job that explains the reason for cancelling it.
     * This message is returned by future <a>DescribeJobs</a> operations on the job.
     * This message is also recorded in the AWS Batch activity logs. </p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A message to attach to the job that explains the reason for cancelling it.
     * This message is returned by future <a>DescribeJobs</a> operations on the job.
     * This message is also recorded in the AWS Batch activity logs. </p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>A message to attach to the job that explains the reason for cancelling it.
     * This message is returned by future <a>DescribeJobs</a> operations on the job.
     * This message is also recorded in the AWS Batch activity logs. </p>
     */
    inline TerminateJobRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>A message to attach to the job that explains the reason for cancelling it.
     * This message is returned by future <a>DescribeJobs</a> operations on the job.
     * This message is also recorded in the AWS Batch activity logs. </p>
     */
    inline TerminateJobRequest& WithReason(Aws::String&& value) { SetReason(value); return *this;}

    /**
     * <p>A message to attach to the job that explains the reason for cancelling it.
     * This message is returned by future <a>DescribeJobs</a> operations on the job.
     * This message is also recorded in the AWS Batch activity logs. </p>
     */
    inline TerminateJobRequest& WithReason(const char* value) { SetReason(value); return *this;}

  private:
    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;
    Aws::String m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
