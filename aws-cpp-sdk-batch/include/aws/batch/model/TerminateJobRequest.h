/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   * <p>Contains the parameters for <code>TerminateJob</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/TerminateJobRequest">AWS
   * API Reference</a></p>
   */
  class TerminateJobRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API TerminateJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TerminateJob"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    /**
     * <p>The Batch job ID of the job to terminate.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The Batch job ID of the job to terminate.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The Batch job ID of the job to terminate.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The Batch job ID of the job to terminate.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The Batch job ID of the job to terminate.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The Batch job ID of the job to terminate.</p>
     */
    inline TerminateJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The Batch job ID of the job to terminate.</p>
     */
    inline TerminateJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The Batch job ID of the job to terminate.</p>
     */
    inline TerminateJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>A message to attach to the job that explains the reason for canceling it.
     * This message is returned by future <a>DescribeJobs</a> operations on the job.
     * This message is also recorded in the Batch activity logs.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>A message to attach to the job that explains the reason for canceling it.
     * This message is returned by future <a>DescribeJobs</a> operations on the job.
     * This message is also recorded in the Batch activity logs.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>A message to attach to the job that explains the reason for canceling it.
     * This message is returned by future <a>DescribeJobs</a> operations on the job.
     * This message is also recorded in the Batch activity logs.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A message to attach to the job that explains the reason for canceling it.
     * This message is returned by future <a>DescribeJobs</a> operations on the job.
     * This message is also recorded in the Batch activity logs.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>A message to attach to the job that explains the reason for canceling it.
     * This message is returned by future <a>DescribeJobs</a> operations on the job.
     * This message is also recorded in the Batch activity logs.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>A message to attach to the job that explains the reason for canceling it.
     * This message is returned by future <a>DescribeJobs</a> operations on the job.
     * This message is also recorded in the Batch activity logs.</p>
     */
    inline TerminateJobRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>A message to attach to the job that explains the reason for canceling it.
     * This message is returned by future <a>DescribeJobs</a> operations on the job.
     * This message is also recorded in the Batch activity logs.</p>
     */
    inline TerminateJobRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>A message to attach to the job that explains the reason for canceling it.
     * This message is returned by future <a>DescribeJobs</a> operations on the job.
     * This message is also recorded in the Batch activity logs.</p>
     */
    inline TerminateJobRequest& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
