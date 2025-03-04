/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot-managed-integrations/model/OtaTaskExecutionStatus.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Structure representing one over-the-air (OTA) task execution
   * summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/OtaTaskExecutionSummary">AWS
   * API Reference</a></p>
   */
  class OtaTaskExecutionSummary
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskExecutionSummary();
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The execution number of the over-the-air (OTA) task execution summary.</p>
     */
    inline long long GetExecutionNumber() const{ return m_executionNumber; }
    inline bool ExecutionNumberHasBeenSet() const { return m_executionNumberHasBeenSet; }
    inline void SetExecutionNumber(long long value) { m_executionNumberHasBeenSet = true; m_executionNumber = value; }
    inline OtaTaskExecutionSummary& WithExecutionNumber(long long value) { SetExecutionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the over-the-air (OTA) task execution summary was
     * last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline OtaTaskExecutionSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline OtaTaskExecutionSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the over-the-air (OTA) task execution summary is
     * targeted to start.</p>
     */
    inline const Aws::Utils::DateTime& GetQueuedAt() const{ return m_queuedAt; }
    inline bool QueuedAtHasBeenSet() const { return m_queuedAtHasBeenSet; }
    inline void SetQueuedAt(const Aws::Utils::DateTime& value) { m_queuedAtHasBeenSet = true; m_queuedAt = value; }
    inline void SetQueuedAt(Aws::Utils::DateTime&& value) { m_queuedAtHasBeenSet = true; m_queuedAt = std::move(value); }
    inline OtaTaskExecutionSummary& WithQueuedAt(const Aws::Utils::DateTime& value) { SetQueuedAt(value); return *this;}
    inline OtaTaskExecutionSummary& WithQueuedAt(Aws::Utils::DateTime&& value) { SetQueuedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of retry attempts for starting the over-the-air (OTA) task
     * execution summary after a failed attempt.</p>
     */
    inline int GetRetryAttempt() const{ return m_retryAttempt; }
    inline bool RetryAttemptHasBeenSet() const { return m_retryAttemptHasBeenSet; }
    inline void SetRetryAttempt(int value) { m_retryAttemptHasBeenSet = true; m_retryAttempt = value; }
    inline OtaTaskExecutionSummary& WithRetryAttempt(int value) { SetRetryAttempt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the over-the-air (OTA) task execution summary
     * started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }
    inline OtaTaskExecutionSummary& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline OtaTaskExecutionSummary& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the over-the-air (OTA) task execution summary.</p>
     */
    inline const OtaTaskExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OtaTaskExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OtaTaskExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline OtaTaskExecutionSummary& WithStatus(const OtaTaskExecutionStatus& value) { SetStatus(value); return *this;}
    inline OtaTaskExecutionSummary& WithStatus(OtaTaskExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    long long m_executionNumber;
    bool m_executionNumberHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_queuedAt;
    bool m_queuedAtHasBeenSet = false;

    int m_retryAttempt;
    bool m_retryAttemptHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    OtaTaskExecutionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
