/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/JobStatus.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class UpdateClassificationJobRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API UpdateClassificationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateClassificationJob"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the classification job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The unique identifier for the classification job.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The unique identifier for the classification job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The unique identifier for the classification job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The unique identifier for the classification job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The unique identifier for the classification job.</p>
     */
    inline UpdateClassificationJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique identifier for the classification job.</p>
     */
    inline UpdateClassificationJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the classification job.</p>
     */
    inline UpdateClassificationJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The new status for the job. Valid values are:</p> <ul><li><p>CANCELLED -
     * Stops the job permanently and cancels it. This value is valid only if the job's
     * current status is IDLE, PAUSED, RUNNING, or USER_PAUSED.</p> <p>If you specify
     * this value and the job's current status is RUNNING, Amazon Macie immediately
     * begins to stop all processing tasks for the job. You can't resume or restart a
     * job after you cancel it.</p></li> <li><p>RUNNING - Resumes the job. This value
     * is valid only if the job's current status is USER_PAUSED.</p> <p>If you paused
     * the job while it was actively running and you specify this value less than 30
     * days after you paused the job, Macie immediately resumes processing from the
     * point where you paused the job. Otherwise, Macie resumes the job according to
     * the schedule and other settings for the job.</p></li> <li><p>USER_PAUSED -
     * Pauses the job temporarily. This value is valid only if the job's current status
     * is IDLE, PAUSED, or RUNNING. If you specify this value and the job's current
     * status is RUNNING, Macie immediately begins to pause all processing tasks for
     * the job.</p> <p>If you pause a one-time job and you don't resume it within 30
     * days, the job expires and Macie cancels the job. If you pause a recurring job
     * when its status is RUNNING and you don't resume it within 30 days, the job run
     * expires and Macie cancels the run. To check the expiration date, refer to the
     * UserPausedDetails.jobExpiresAt property.</p></li></ul>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The new status for the job. Valid values are:</p> <ul><li><p>CANCELLED -
     * Stops the job permanently and cancels it. This value is valid only if the job's
     * current status is IDLE, PAUSED, RUNNING, or USER_PAUSED.</p> <p>If you specify
     * this value and the job's current status is RUNNING, Amazon Macie immediately
     * begins to stop all processing tasks for the job. You can't resume or restart a
     * job after you cancel it.</p></li> <li><p>RUNNING - Resumes the job. This value
     * is valid only if the job's current status is USER_PAUSED.</p> <p>If you paused
     * the job while it was actively running and you specify this value less than 30
     * days after you paused the job, Macie immediately resumes processing from the
     * point where you paused the job. Otherwise, Macie resumes the job according to
     * the schedule and other settings for the job.</p></li> <li><p>USER_PAUSED -
     * Pauses the job temporarily. This value is valid only if the job's current status
     * is IDLE, PAUSED, or RUNNING. If you specify this value and the job's current
     * status is RUNNING, Macie immediately begins to pause all processing tasks for
     * the job.</p> <p>If you pause a one-time job and you don't resume it within 30
     * days, the job expires and Macie cancels the job. If you pause a recurring job
     * when its status is RUNNING and you don't resume it within 30 days, the job run
     * expires and Macie cancels the run. To check the expiration date, refer to the
     * UserPausedDetails.jobExpiresAt property.</p></li></ul>
     */
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }

    /**
     * <p>The new status for the job. Valid values are:</p> <ul><li><p>CANCELLED -
     * Stops the job permanently and cancels it. This value is valid only if the job's
     * current status is IDLE, PAUSED, RUNNING, or USER_PAUSED.</p> <p>If you specify
     * this value and the job's current status is RUNNING, Amazon Macie immediately
     * begins to stop all processing tasks for the job. You can't resume or restart a
     * job after you cancel it.</p></li> <li><p>RUNNING - Resumes the job. This value
     * is valid only if the job's current status is USER_PAUSED.</p> <p>If you paused
     * the job while it was actively running and you specify this value less than 30
     * days after you paused the job, Macie immediately resumes processing from the
     * point where you paused the job. Otherwise, Macie resumes the job according to
     * the schedule and other settings for the job.</p></li> <li><p>USER_PAUSED -
     * Pauses the job temporarily. This value is valid only if the job's current status
     * is IDLE, PAUSED, or RUNNING. If you specify this value and the job's current
     * status is RUNNING, Macie immediately begins to pause all processing tasks for
     * the job.</p> <p>If you pause a one-time job and you don't resume it within 30
     * days, the job expires and Macie cancels the job. If you pause a recurring job
     * when its status is RUNNING and you don't resume it within 30 days, the job run
     * expires and Macie cancels the run. To check the expiration date, refer to the
     * UserPausedDetails.jobExpiresAt property.</p></li></ul>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p>The new status for the job. Valid values are:</p> <ul><li><p>CANCELLED -
     * Stops the job permanently and cancels it. This value is valid only if the job's
     * current status is IDLE, PAUSED, RUNNING, or USER_PAUSED.</p> <p>If you specify
     * this value and the job's current status is RUNNING, Amazon Macie immediately
     * begins to stop all processing tasks for the job. You can't resume or restart a
     * job after you cancel it.</p></li> <li><p>RUNNING - Resumes the job. This value
     * is valid only if the job's current status is USER_PAUSED.</p> <p>If you paused
     * the job while it was actively running and you specify this value less than 30
     * days after you paused the job, Macie immediately resumes processing from the
     * point where you paused the job. Otherwise, Macie resumes the job according to
     * the schedule and other settings for the job.</p></li> <li><p>USER_PAUSED -
     * Pauses the job temporarily. This value is valid only if the job's current status
     * is IDLE, PAUSED, or RUNNING. If you specify this value and the job's current
     * status is RUNNING, Macie immediately begins to pause all processing tasks for
     * the job.</p> <p>If you pause a one-time job and you don't resume it within 30
     * days, the job expires and Macie cancels the job. If you pause a recurring job
     * when its status is RUNNING and you don't resume it within 30 days, the job run
     * expires and Macie cancels the run. To check the expiration date, refer to the
     * UserPausedDetails.jobExpiresAt property.</p></li></ul>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    /**
     * <p>The new status for the job. Valid values are:</p> <ul><li><p>CANCELLED -
     * Stops the job permanently and cancels it. This value is valid only if the job's
     * current status is IDLE, PAUSED, RUNNING, or USER_PAUSED.</p> <p>If you specify
     * this value and the job's current status is RUNNING, Amazon Macie immediately
     * begins to stop all processing tasks for the job. You can't resume or restart a
     * job after you cancel it.</p></li> <li><p>RUNNING - Resumes the job. This value
     * is valid only if the job's current status is USER_PAUSED.</p> <p>If you paused
     * the job while it was actively running and you specify this value less than 30
     * days after you paused the job, Macie immediately resumes processing from the
     * point where you paused the job. Otherwise, Macie resumes the job according to
     * the schedule and other settings for the job.</p></li> <li><p>USER_PAUSED -
     * Pauses the job temporarily. This value is valid only if the job's current status
     * is IDLE, PAUSED, or RUNNING. If you specify this value and the job's current
     * status is RUNNING, Macie immediately begins to pause all processing tasks for
     * the job.</p> <p>If you pause a one-time job and you don't resume it within 30
     * days, the job expires and Macie cancels the job. If you pause a recurring job
     * when its status is RUNNING and you don't resume it within 30 days, the job run
     * expires and Macie cancels the run. To check the expiration date, refer to the
     * UserPausedDetails.jobExpiresAt property.</p></li></ul>
     */
    inline UpdateClassificationJobRequest& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The new status for the job. Valid values are:</p> <ul><li><p>CANCELLED -
     * Stops the job permanently and cancels it. This value is valid only if the job's
     * current status is IDLE, PAUSED, RUNNING, or USER_PAUSED.</p> <p>If you specify
     * this value and the job's current status is RUNNING, Amazon Macie immediately
     * begins to stop all processing tasks for the job. You can't resume or restart a
     * job after you cancel it.</p></li> <li><p>RUNNING - Resumes the job. This value
     * is valid only if the job's current status is USER_PAUSED.</p> <p>If you paused
     * the job while it was actively running and you specify this value less than 30
     * days after you paused the job, Macie immediately resumes processing from the
     * point where you paused the job. Otherwise, Macie resumes the job according to
     * the schedule and other settings for the job.</p></li> <li><p>USER_PAUSED -
     * Pauses the job temporarily. This value is valid only if the job's current status
     * is IDLE, PAUSED, or RUNNING. If you specify this value and the job's current
     * status is RUNNING, Macie immediately begins to pause all processing tasks for
     * the job.</p> <p>If you pause a one-time job and you don't resume it within 30
     * days, the job expires and Macie cancels the job. If you pause a recurring job
     * when its status is RUNNING and you don't resume it within 30 days, the job run
     * expires and Macie cancels the run. To check the expiration date, refer to the
     * UserPausedDetails.jobExpiresAt property.</p></li></ul>
     */
    inline UpdateClassificationJobRequest& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    JobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
