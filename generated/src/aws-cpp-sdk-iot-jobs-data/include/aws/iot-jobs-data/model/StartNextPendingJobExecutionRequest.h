/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class StartNextPendingJobExecutionRequest : public IoTJobsDataPlaneRequest
  {
  public:
    AWS_IOTJOBSDATAPLANE_API StartNextPendingJobExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartNextPendingJobExecution"; }

    AWS_IOTJOBSDATAPLANE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the thing associated with the device.</p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    StartNextPendingJobExecutionRequest& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged.</p> <p>The maximum
     * length of the value in the name/value pair is 1,024 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStatusDetails() const { return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    template<typename StatusDetailsT = Aws::Map<Aws::String, Aws::String>>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = Aws::Map<Aws::String, Aws::String>>
    StartNextPendingJobExecutionRequest& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    template<typename StatusDetailsKeyT = Aws::String, typename StatusDetailsValueT = Aws::String>
    StartNextPendingJobExecutionRequest& AddStatusDetails(StatusDetailsKeyT&& key, StatusDetailsValueT&& value) {
      m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::forward<StatusDetailsKeyT>(key), std::forward<StatusDetailsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the amount of time this device has to finish execution of this job.
     * If the job execution status is not set to a terminal state before this timer
     * expires, or before the timer is reset (by calling
     * <code>UpdateJobExecution</code>, setting the status to <code>IN_PROGRESS</code>,
     * and specifying a new timeout value in field <code>stepTimeoutInMinutes</code>)
     * the job execution status will be automatically set to <code>TIMED_OUT</code>.
     * Note that setting the step timeout has no effect on the in progress timeout that
     * may have been specified when the job was created (<code>CreateJob</code> using
     * field <code>timeoutConfig</code>).</p> <p>Valid values for this parameter range
     * from 1 to 10080 (1 minute to 7 days).</p>
     */
    inline long long GetStepTimeoutInMinutes() const { return m_stepTimeoutInMinutes; }
    inline bool StepTimeoutInMinutesHasBeenSet() const { return m_stepTimeoutInMinutesHasBeenSet; }
    inline void SetStepTimeoutInMinutes(long long value) { m_stepTimeoutInMinutesHasBeenSet = true; m_stepTimeoutInMinutes = value; }
    inline StartNextPendingJobExecutionRequest& WithStepTimeoutInMinutes(long long value) { SetStepTimeoutInMinutes(value); return *this;}
    ///@}
  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    long long m_stepTimeoutInMinutes{0};
    bool m_stepTimeoutInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
