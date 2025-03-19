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
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskExecutionSummary() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The execution number of the over-the-air (OTA) task execution summary.</p>
     */
    inline long long GetExecutionNumber() const { return m_executionNumber; }
    inline bool ExecutionNumberHasBeenSet() const { return m_executionNumberHasBeenSet; }
    inline void SetExecutionNumber(long long value) { m_executionNumberHasBeenSet = true; m_executionNumber = value; }
    inline OtaTaskExecutionSummary& WithExecutionNumber(long long value) { SetExecutionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the over-the-air (OTA) task execution summary was
     * last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    OtaTaskExecutionSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the over-the-air (OTA) task execution summary is
     * targeted to start.</p>
     */
    inline const Aws::Utils::DateTime& GetQueuedAt() const { return m_queuedAt; }
    inline bool QueuedAtHasBeenSet() const { return m_queuedAtHasBeenSet; }
    template<typename QueuedAtT = Aws::Utils::DateTime>
    void SetQueuedAt(QueuedAtT&& value) { m_queuedAtHasBeenSet = true; m_queuedAt = std::forward<QueuedAtT>(value); }
    template<typename QueuedAtT = Aws::Utils::DateTime>
    OtaTaskExecutionSummary& WithQueuedAt(QueuedAtT&& value) { SetQueuedAt(std::forward<QueuedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of retry attempts for starting the over-the-air (OTA) task
     * execution summary after a failed attempt.</p>
     */
    inline int GetRetryAttempt() const { return m_retryAttempt; }
    inline bool RetryAttemptHasBeenSet() const { return m_retryAttemptHasBeenSet; }
    inline void SetRetryAttempt(int value) { m_retryAttemptHasBeenSet = true; m_retryAttempt = value; }
    inline OtaTaskExecutionSummary& WithRetryAttempt(int value) { SetRetryAttempt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the over-the-air (OTA) task execution summary
     * started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    OtaTaskExecutionSummary& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the over-the-air (OTA) task execution summary.</p>
     */
    inline OtaTaskExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(OtaTaskExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline OtaTaskExecutionSummary& WithStatus(OtaTaskExecutionStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    long long m_executionNumber{0};
    bool m_executionNumberHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_queuedAt{};
    bool m_queuedAtHasBeenSet = false;

    int m_retryAttempt{0};
    bool m_retryAttemptHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    OtaTaskExecutionStatus m_status{OtaTaskExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
