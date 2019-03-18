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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/JobExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The job execution summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/JobExecutionSummary">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API JobExecutionSummary
  {
  public:
    JobExecutionSummary();
    JobExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    JobExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the job execution.</p>
     */
    inline const JobExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the job execution.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the job execution.</p>
     */
    inline void SetStatus(const JobExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the job execution.</p>
     */
    inline void SetStatus(JobExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the job execution.</p>
     */
    inline JobExecutionSummary& WithStatus(const JobExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the job execution.</p>
     */
    inline JobExecutionSummary& WithStatus(JobExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time, in seconds since the epoch, when the job execution was queued.</p>
     */
    inline const Aws::Utils::DateTime& GetQueuedAt() const{ return m_queuedAt; }

    /**
     * <p>The time, in seconds since the epoch, when the job execution was queued.</p>
     */
    inline bool QueuedAtHasBeenSet() const { return m_queuedAtHasBeenSet; }

    /**
     * <p>The time, in seconds since the epoch, when the job execution was queued.</p>
     */
    inline void SetQueuedAt(const Aws::Utils::DateTime& value) { m_queuedAtHasBeenSet = true; m_queuedAt = value; }

    /**
     * <p>The time, in seconds since the epoch, when the job execution was queued.</p>
     */
    inline void SetQueuedAt(Aws::Utils::DateTime&& value) { m_queuedAtHasBeenSet = true; m_queuedAt = std::move(value); }

    /**
     * <p>The time, in seconds since the epoch, when the job execution was queued.</p>
     */
    inline JobExecutionSummary& WithQueuedAt(const Aws::Utils::DateTime& value) { SetQueuedAt(value); return *this;}

    /**
     * <p>The time, in seconds since the epoch, when the job execution was queued.</p>
     */
    inline JobExecutionSummary& WithQueuedAt(Aws::Utils::DateTime&& value) { SetQueuedAt(std::move(value)); return *this;}


    /**
     * <p>The time, in seconds since the epoch, when the job execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The time, in seconds since the epoch, when the job execution started.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The time, in seconds since the epoch, when the job execution started.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The time, in seconds since the epoch, when the job execution started.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p>The time, in seconds since the epoch, when the job execution started.</p>
     */
    inline JobExecutionSummary& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The time, in seconds since the epoch, when the job execution started.</p>
     */
    inline JobExecutionSummary& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The time, in seconds since the epoch, when the job execution was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time, in seconds since the epoch, when the job execution was last
     * updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The time, in seconds since the epoch, when the job execution was last
     * updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The time, in seconds since the epoch, when the job execution was last
     * updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time, in seconds since the epoch, when the job execution was last
     * updated.</p>
     */
    inline JobExecutionSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time, in seconds since the epoch, when the job execution was last
     * updated.</p>
     */
    inline JobExecutionSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>A string (consisting of the digits "0" through "9") which identifies this
     * particular job execution on this particular device. It can be used later in
     * commands which return or update job execution information.</p>
     */
    inline long long GetExecutionNumber() const{ return m_executionNumber; }

    /**
     * <p>A string (consisting of the digits "0" through "9") which identifies this
     * particular job execution on this particular device. It can be used later in
     * commands which return or update job execution information.</p>
     */
    inline bool ExecutionNumberHasBeenSet() const { return m_executionNumberHasBeenSet; }

    /**
     * <p>A string (consisting of the digits "0" through "9") which identifies this
     * particular job execution on this particular device. It can be used later in
     * commands which return or update job execution information.</p>
     */
    inline void SetExecutionNumber(long long value) { m_executionNumberHasBeenSet = true; m_executionNumber = value; }

    /**
     * <p>A string (consisting of the digits "0" through "9") which identifies this
     * particular job execution on this particular device. It can be used later in
     * commands which return or update job execution information.</p>
     */
    inline JobExecutionSummary& WithExecutionNumber(long long value) { SetExecutionNumber(value); return *this;}

  private:

    JobExecutionStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_queuedAt;
    bool m_queuedAtHasBeenSet;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet;

    long long m_executionNumber;
    bool m_executionNumberHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
