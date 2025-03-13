/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-jobs-data/model/JobExecutionStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace IoTJobsDataPlane
{
namespace Model
{

  /**
   */
  class UpdateJobExecutionRequest : public IoTJobsDataPlaneRequest
  {
  public:
    AWS_IOTJOBSDATAPLANE_API UpdateJobExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJobExecution"; }

    AWS_IOTJOBSDATAPLANE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier assigned to this job when it was created.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    UpdateJobExecutionRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the thing associated with the device.</p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    UpdateJobExecutionRequest& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new status for the job execution (IN_PROGRESS, FAILED, SUCCESS, or
     * REJECTED). This must be specified on every update.</p>
     */
    inline JobExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(JobExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateJobExecutionRequest& WithStatus(JobExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Optional. A collection of name/value pairs that describe the status of the
     * job execution. If not specified, the statusDetails are unchanged.</p> <p>The
     * maximum length of the value in the name/value pair is 1,024 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStatusDetails() const { return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    template<typename StatusDetailsT = Aws::Map<Aws::String, Aws::String>>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = Aws::Map<Aws::String, Aws::String>>
    UpdateJobExecutionRequest& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    template<typename StatusDetailsKeyT = Aws::String, typename StatusDetailsValueT = Aws::String>
    UpdateJobExecutionRequest& AddStatusDetails(StatusDetailsKeyT&& key, StatusDetailsValueT&& value) {
      m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::forward<StatusDetailsKeyT>(key), std::forward<StatusDetailsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the amount of time this device has to finish execution of this job.
     * If the job execution status is not set to a terminal state before this timer
     * expires, or before the timer is reset (by again calling
     * <code>UpdateJobExecution</code>, setting the status to <code>IN_PROGRESS</code>,
     * and specifying a new timeout value in this field) the job execution status will
     * be automatically set to <code>TIMED_OUT</code>. Note that setting or resetting
     * the step timeout has no effect on the in progress timeout that may have been
     * specified when the job was created (<code>CreateJob</code> using field
     * <code>timeoutConfig</code>).</p> <p>Valid values for this parameter range from 1
     * to 10080 (1 minute to 7 days). A value of -1 is also valid and will cancel the
     * current step timer (created by an earlier use of
     * <code>UpdateJobExecutionRequest</code>).</p>
     */
    inline long long GetStepTimeoutInMinutes() const { return m_stepTimeoutInMinutes; }
    inline bool StepTimeoutInMinutesHasBeenSet() const { return m_stepTimeoutInMinutesHasBeenSet; }
    inline void SetStepTimeoutInMinutes(long long value) { m_stepTimeoutInMinutesHasBeenSet = true; m_stepTimeoutInMinutes = value; }
    inline UpdateJobExecutionRequest& WithStepTimeoutInMinutes(long long value) { SetStepTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. The expected current version of the job execution. Each time you
     * update the job execution, its version is incremented. If the version of the job
     * execution stored in Jobs does not match, the update is rejected with a
     * VersionMismatch error, and an ErrorResponse that contains the current job
     * execution status data is returned. (This makes it unnecessary to perform a
     * separate DescribeJobExecution request in order to obtain the job execution
     * status data.)</p>
     */
    inline long long GetExpectedVersion() const { return m_expectedVersion; }
    inline bool ExpectedVersionHasBeenSet() const { return m_expectedVersionHasBeenSet; }
    inline void SetExpectedVersion(long long value) { m_expectedVersionHasBeenSet = true; m_expectedVersion = value; }
    inline UpdateJobExecutionRequest& WithExpectedVersion(long long value) { SetExpectedVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. When included and set to true, the response contains the
     * JobExecutionState data. The default is false.</p>
     */
    inline bool GetIncludeJobExecutionState() const { return m_includeJobExecutionState; }
    inline bool IncludeJobExecutionStateHasBeenSet() const { return m_includeJobExecutionStateHasBeenSet; }
    inline void SetIncludeJobExecutionState(bool value) { m_includeJobExecutionStateHasBeenSet = true; m_includeJobExecutionState = value; }
    inline UpdateJobExecutionRequest& WithIncludeJobExecutionState(bool value) { SetIncludeJobExecutionState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. When set to true, the response contains the job document. The
     * default is false.</p>
     */
    inline bool GetIncludeJobDocument() const { return m_includeJobDocument; }
    inline bool IncludeJobDocumentHasBeenSet() const { return m_includeJobDocumentHasBeenSet; }
    inline void SetIncludeJobDocument(bool value) { m_includeJobDocumentHasBeenSet = true; m_includeJobDocument = value; }
    inline UpdateJobExecutionRequest& WithIncludeJobDocument(bool value) { SetIncludeJobDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. A number that identifies a particular job execution on a particular
     * device.</p>
     */
    inline long long GetExecutionNumber() const { return m_executionNumber; }
    inline bool ExecutionNumberHasBeenSet() const { return m_executionNumberHasBeenSet; }
    inline void SetExecutionNumber(long long value) { m_executionNumberHasBeenSet = true; m_executionNumber = value; }
    inline UpdateJobExecutionRequest& WithExecutionNumber(long long value) { SetExecutionNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    JobExecutionStatus m_status{JobExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    long long m_stepTimeoutInMinutes{0};
    bool m_stepTimeoutInMinutesHasBeenSet = false;

    long long m_expectedVersion{0};
    bool m_expectedVersionHasBeenSet = false;

    bool m_includeJobExecutionState{false};
    bool m_includeJobExecutionStateHasBeenSet = false;

    bool m_includeJobDocument{false};
    bool m_includeJobDocumentHasBeenSet = false;

    long long m_executionNumber{0};
    bool m_executionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
