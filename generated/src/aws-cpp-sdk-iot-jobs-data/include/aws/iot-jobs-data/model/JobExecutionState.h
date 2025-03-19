/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/iot-jobs-data/model/JobExecutionStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTJobsDataPlane
{
namespace Model
{

  /**
   * <p>Contains data about the state of a job execution.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-jobs-data-2017-09-29/JobExecutionState">AWS
   * API Reference</a></p>
   */
  class JobExecutionState
  {
  public:
    AWS_IOTJOBSDATAPLANE_API JobExecutionState() = default;
    AWS_IOTJOBSDATAPLANE_API JobExecutionState(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTJOBSDATAPLANE_API JobExecutionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTJOBSDATAPLANE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the job execution. Can be one of: "QUEUED", "IN_PROGRESS",
     * "FAILED", "SUCCESS", "CANCELED", "TIMED_OUT", "REJECTED", or "REMOVED".</p>
     */
    inline JobExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(JobExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline JobExecutionState& WithStatus(JobExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p> <p>The maximum length of the value in the name/value pair is
     * 1,024 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStatusDetails() const { return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    template<typename StatusDetailsT = Aws::Map<Aws::String, Aws::String>>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = Aws::Map<Aws::String, Aws::String>>
    JobExecutionState& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    template<typename StatusDetailsKeyT = Aws::String, typename StatusDetailsValueT = Aws::String>
    JobExecutionState& AddStatusDetails(StatusDetailsKeyT&& key, StatusDetailsValueT&& value) {
      m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::forward<StatusDetailsKeyT>(key), std::forward<StatusDetailsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The version of the job execution. Job execution versions are incremented each
     * time they are updated by a device.</p>
     */
    inline long long GetVersionNumber() const { return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline JobExecutionState& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}
  private:

    JobExecutionStatus m_status{JobExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
