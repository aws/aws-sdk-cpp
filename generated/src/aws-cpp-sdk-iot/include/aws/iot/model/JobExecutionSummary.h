﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JobExecutionSummary
  {
  public:
    AWS_IOT_API JobExecutionSummary();
    AWS_IOT_API JobExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API JobExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the job execution.</p>
     */
    inline const JobExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const JobExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(JobExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline JobExecutionSummary& WithStatus(const JobExecutionStatus& value) { SetStatus(value); return *this;}
    inline JobExecutionSummary& WithStatus(JobExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job execution was queued.</p>
     */
    inline const Aws::Utils::DateTime& GetQueuedAt() const{ return m_queuedAt; }
    inline bool QueuedAtHasBeenSet() const { return m_queuedAtHasBeenSet; }
    inline void SetQueuedAt(const Aws::Utils::DateTime& value) { m_queuedAtHasBeenSet = true; m_queuedAt = value; }
    inline void SetQueuedAt(Aws::Utils::DateTime&& value) { m_queuedAtHasBeenSet = true; m_queuedAt = std::move(value); }
    inline JobExecutionSummary& WithQueuedAt(const Aws::Utils::DateTime& value) { SetQueuedAt(value); return *this;}
    inline JobExecutionSummary& WithQueuedAt(Aws::Utils::DateTime&& value) { SetQueuedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }
    inline JobExecutionSummary& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline JobExecutionSummary& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job execution was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline JobExecutionSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline JobExecutionSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string (consisting of the digits "0" through "9") which identifies this
     * particular job execution on this particular device. It can be used later in
     * commands which return or update job execution information.</p>
     */
    inline long long GetExecutionNumber() const{ return m_executionNumber; }
    inline bool ExecutionNumberHasBeenSet() const { return m_executionNumberHasBeenSet; }
    inline void SetExecutionNumber(long long value) { m_executionNumberHasBeenSet = true; m_executionNumber = value; }
    inline JobExecutionSummary& WithExecutionNumber(long long value) { SetExecutionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number that indicates how many retry attempts have been completed for
     * this job on this device.</p>
     */
    inline int GetRetryAttempt() const{ return m_retryAttempt; }
    inline bool RetryAttemptHasBeenSet() const { return m_retryAttemptHasBeenSet; }
    inline void SetRetryAttempt(int value) { m_retryAttemptHasBeenSet = true; m_retryAttempt = value; }
    inline JobExecutionSummary& WithRetryAttempt(int value) { SetRetryAttempt(value); return *this;}
    ///@}
  private:

    JobExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_queuedAt;
    bool m_queuedAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    long long m_executionNumber;
    bool m_executionNumberHasBeenSet = false;

    int m_retryAttempt;
    bool m_retryAttemptHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
