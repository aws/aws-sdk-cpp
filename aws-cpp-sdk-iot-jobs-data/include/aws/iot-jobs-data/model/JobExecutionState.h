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
  class AWS_IOTJOBSDATAPLANE_API JobExecutionState
  {
  public:
    JobExecutionState();
    JobExecutionState(Aws::Utils::Json::JsonView jsonValue);
    JobExecutionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the job execution. Can be one of: "QUEUED", "IN_PROGRESS",
     * "FAILED", "SUCCESS", "CANCELED", "REJECTED", or "REMOVED".</p>
     */
    inline const JobExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the job execution. Can be one of: "QUEUED", "IN_PROGRESS",
     * "FAILED", "SUCCESS", "CANCELED", "REJECTED", or "REMOVED".</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the job execution. Can be one of: "QUEUED", "IN_PROGRESS",
     * "FAILED", "SUCCESS", "CANCELED", "REJECTED", or "REMOVED".</p>
     */
    inline void SetStatus(const JobExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the job execution. Can be one of: "QUEUED", "IN_PROGRESS",
     * "FAILED", "SUCCESS", "CANCELED", "REJECTED", or "REMOVED".</p>
     */
    inline void SetStatus(JobExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the job execution. Can be one of: "QUEUED", "IN_PROGRESS",
     * "FAILED", "SUCCESS", "CANCELED", "REJECTED", or "REMOVED".</p>
     */
    inline JobExecutionState& WithStatus(const JobExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the job execution. Can be one of: "QUEUED", "IN_PROGRESS",
     * "FAILED", "SUCCESS", "CANCELED", "REJECTED", or "REMOVED".</p>
     */
    inline JobExecutionState& WithStatus(JobExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline void SetStatusDetails(const Aws::Map<Aws::String, Aws::String>& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline void SetStatusDetails(Aws::Map<Aws::String, Aws::String>&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::move(value); }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecutionState& WithStatusDetails(const Aws::Map<Aws::String, Aws::String>& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecutionState& WithStatusDetails(Aws::Map<Aws::String, Aws::String>&& value) { SetStatusDetails(std::move(value)); return *this;}

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecutionState& AddStatusDetails(const Aws::String& key, const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, value); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecutionState& AddStatusDetails(Aws::String&& key, const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecutionState& AddStatusDetails(const Aws::String& key, Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecutionState& AddStatusDetails(Aws::String&& key, Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecutionState& AddStatusDetails(const char* key, Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecutionState& AddStatusDetails(Aws::String&& key, const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution.</p>
     */
    inline JobExecutionState& AddStatusDetails(const char* key, const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, value); return *this; }


    /**
     * <p>The version of the job execution. Job execution versions are incremented each
     * time they are updated by a device.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>The version of the job execution. Job execution versions are incremented each
     * time they are updated by a device.</p>
     */
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }

    /**
     * <p>The version of the job execution. Job execution versions are incremented each
     * time they are updated by a device.</p>
     */
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }

    /**
     * <p>The version of the job execution. Job execution versions are incremented each
     * time they are updated by a device.</p>
     */
    inline JobExecutionState& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}

  private:

    JobExecutionStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_statusDetails;
    bool m_statusDetailsHasBeenSet;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
