/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/SimulationJobBatchStatus.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about a simulation job batch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/SimulationJobBatchSummary">AWS
   * API Reference</a></p>
   */
  class SimulationJobBatchSummary
  {
  public:
    AWS_ROBOMAKER_API SimulationJobBatchSummary();
    AWS_ROBOMAKER_API SimulationJobBatchSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API SimulationJobBatchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the batch.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the batch.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the batch.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the batch.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the batch.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the batch.</p>
     */
    inline SimulationJobBatchSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the batch.</p>
     */
    inline SimulationJobBatchSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the batch.</p>
     */
    inline SimulationJobBatchSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job batch was
     * last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job batch was
     * last updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job batch was
     * last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job batch was
     * last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job batch was
     * last updated.</p>
     */
    inline SimulationJobBatchSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job batch was
     * last updated.</p>
     */
    inline SimulationJobBatchSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job batch was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job batch was
     * created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job batch was
     * created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job batch was
     * created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job batch was
     * created.</p>
     */
    inline SimulationJobBatchSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job batch was
     * created.</p>
     */
    inline SimulationJobBatchSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The status of the simulation job batch.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * simulation job batch request is pending.</p> </dd> <dt>InProgress</dt> <dd>
     * <p>The simulation job batch is in progress. </p> </dd> <dt>Failed</dt> <dd>
     * <p>The simulation job batch failed. One or more simulation job requests could
     * not be completed due to an internal failure (like
     * <code>InternalServiceError</code>). See <code>failureCode</code> and
     * <code>failureReason</code> for more information.</p> </dd> <dt>Completed</dt>
     * <dd> <p>The simulation batch job completed. A batch is complete when (1) there
     * are no pending simulation job requests in the batch and none of the failed
     * simulation job requests are due to <code>InternalServiceError</code> and (2)
     * when all created simulation jobs have reached a terminal state (for example,
     * <code>Completed</code> or <code>Failed</code>). </p> </dd> <dt>Canceled</dt>
     * <dd> <p>The simulation batch job was cancelled.</p> </dd> <dt>Canceling</dt>
     * <dd> <p>The simulation batch job is being cancelled.</p> </dd>
     * <dt>Completing</dt> <dd> <p>The simulation batch job is completing.</p> </dd>
     * <dt>TimingOut</dt> <dd> <p>The simulation job batch is timing out.</p> <p>If a
     * batch timing out, and there are pending requests that were failing due to an
     * internal failure (like <code>InternalServiceError</code>), the batch status will
     * be <code>Failed</code>. If there are no such failing request, the batch status
     * will be <code>TimedOut</code>. </p> </dd> <dt>TimedOut</dt> <dd> <p>The
     * simulation batch job timed out.</p> </dd> </dl>
     */
    inline const SimulationJobBatchStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the simulation job batch.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * simulation job batch request is pending.</p> </dd> <dt>InProgress</dt> <dd>
     * <p>The simulation job batch is in progress. </p> </dd> <dt>Failed</dt> <dd>
     * <p>The simulation job batch failed. One or more simulation job requests could
     * not be completed due to an internal failure (like
     * <code>InternalServiceError</code>). See <code>failureCode</code> and
     * <code>failureReason</code> for more information.</p> </dd> <dt>Completed</dt>
     * <dd> <p>The simulation batch job completed. A batch is complete when (1) there
     * are no pending simulation job requests in the batch and none of the failed
     * simulation job requests are due to <code>InternalServiceError</code> and (2)
     * when all created simulation jobs have reached a terminal state (for example,
     * <code>Completed</code> or <code>Failed</code>). </p> </dd> <dt>Canceled</dt>
     * <dd> <p>The simulation batch job was cancelled.</p> </dd> <dt>Canceling</dt>
     * <dd> <p>The simulation batch job is being cancelled.</p> </dd>
     * <dt>Completing</dt> <dd> <p>The simulation batch job is completing.</p> </dd>
     * <dt>TimingOut</dt> <dd> <p>The simulation job batch is timing out.</p> <p>If a
     * batch timing out, and there are pending requests that were failing due to an
     * internal failure (like <code>InternalServiceError</code>), the batch status will
     * be <code>Failed</code>. If there are no such failing request, the batch status
     * will be <code>TimedOut</code>. </p> </dd> <dt>TimedOut</dt> <dd> <p>The
     * simulation batch job timed out.</p> </dd> </dl>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the simulation job batch.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * simulation job batch request is pending.</p> </dd> <dt>InProgress</dt> <dd>
     * <p>The simulation job batch is in progress. </p> </dd> <dt>Failed</dt> <dd>
     * <p>The simulation job batch failed. One or more simulation job requests could
     * not be completed due to an internal failure (like
     * <code>InternalServiceError</code>). See <code>failureCode</code> and
     * <code>failureReason</code> for more information.</p> </dd> <dt>Completed</dt>
     * <dd> <p>The simulation batch job completed. A batch is complete when (1) there
     * are no pending simulation job requests in the batch and none of the failed
     * simulation job requests are due to <code>InternalServiceError</code> and (2)
     * when all created simulation jobs have reached a terminal state (for example,
     * <code>Completed</code> or <code>Failed</code>). </p> </dd> <dt>Canceled</dt>
     * <dd> <p>The simulation batch job was cancelled.</p> </dd> <dt>Canceling</dt>
     * <dd> <p>The simulation batch job is being cancelled.</p> </dd>
     * <dt>Completing</dt> <dd> <p>The simulation batch job is completing.</p> </dd>
     * <dt>TimingOut</dt> <dd> <p>The simulation job batch is timing out.</p> <p>If a
     * batch timing out, and there are pending requests that were failing due to an
     * internal failure (like <code>InternalServiceError</code>), the batch status will
     * be <code>Failed</code>. If there are no such failing request, the batch status
     * will be <code>TimedOut</code>. </p> </dd> <dt>TimedOut</dt> <dd> <p>The
     * simulation batch job timed out.</p> </dd> </dl>
     */
    inline void SetStatus(const SimulationJobBatchStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the simulation job batch.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * simulation job batch request is pending.</p> </dd> <dt>InProgress</dt> <dd>
     * <p>The simulation job batch is in progress. </p> </dd> <dt>Failed</dt> <dd>
     * <p>The simulation job batch failed. One or more simulation job requests could
     * not be completed due to an internal failure (like
     * <code>InternalServiceError</code>). See <code>failureCode</code> and
     * <code>failureReason</code> for more information.</p> </dd> <dt>Completed</dt>
     * <dd> <p>The simulation batch job completed. A batch is complete when (1) there
     * are no pending simulation job requests in the batch and none of the failed
     * simulation job requests are due to <code>InternalServiceError</code> and (2)
     * when all created simulation jobs have reached a terminal state (for example,
     * <code>Completed</code> or <code>Failed</code>). </p> </dd> <dt>Canceled</dt>
     * <dd> <p>The simulation batch job was cancelled.</p> </dd> <dt>Canceling</dt>
     * <dd> <p>The simulation batch job is being cancelled.</p> </dd>
     * <dt>Completing</dt> <dd> <p>The simulation batch job is completing.</p> </dd>
     * <dt>TimingOut</dt> <dd> <p>The simulation job batch is timing out.</p> <p>If a
     * batch timing out, and there are pending requests that were failing due to an
     * internal failure (like <code>InternalServiceError</code>), the batch status will
     * be <code>Failed</code>. If there are no such failing request, the batch status
     * will be <code>TimedOut</code>. </p> </dd> <dt>TimedOut</dt> <dd> <p>The
     * simulation batch job timed out.</p> </dd> </dl>
     */
    inline void SetStatus(SimulationJobBatchStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the simulation job batch.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * simulation job batch request is pending.</p> </dd> <dt>InProgress</dt> <dd>
     * <p>The simulation job batch is in progress. </p> </dd> <dt>Failed</dt> <dd>
     * <p>The simulation job batch failed. One or more simulation job requests could
     * not be completed due to an internal failure (like
     * <code>InternalServiceError</code>). See <code>failureCode</code> and
     * <code>failureReason</code> for more information.</p> </dd> <dt>Completed</dt>
     * <dd> <p>The simulation batch job completed. A batch is complete when (1) there
     * are no pending simulation job requests in the batch and none of the failed
     * simulation job requests are due to <code>InternalServiceError</code> and (2)
     * when all created simulation jobs have reached a terminal state (for example,
     * <code>Completed</code> or <code>Failed</code>). </p> </dd> <dt>Canceled</dt>
     * <dd> <p>The simulation batch job was cancelled.</p> </dd> <dt>Canceling</dt>
     * <dd> <p>The simulation batch job is being cancelled.</p> </dd>
     * <dt>Completing</dt> <dd> <p>The simulation batch job is completing.</p> </dd>
     * <dt>TimingOut</dt> <dd> <p>The simulation job batch is timing out.</p> <p>If a
     * batch timing out, and there are pending requests that were failing due to an
     * internal failure (like <code>InternalServiceError</code>), the batch status will
     * be <code>Failed</code>. If there are no such failing request, the batch status
     * will be <code>TimedOut</code>. </p> </dd> <dt>TimedOut</dt> <dd> <p>The
     * simulation batch job timed out.</p> </dd> </dl>
     */
    inline SimulationJobBatchSummary& WithStatus(const SimulationJobBatchStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the simulation job batch.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * simulation job batch request is pending.</p> </dd> <dt>InProgress</dt> <dd>
     * <p>The simulation job batch is in progress. </p> </dd> <dt>Failed</dt> <dd>
     * <p>The simulation job batch failed. One or more simulation job requests could
     * not be completed due to an internal failure (like
     * <code>InternalServiceError</code>). See <code>failureCode</code> and
     * <code>failureReason</code> for more information.</p> </dd> <dt>Completed</dt>
     * <dd> <p>The simulation batch job completed. A batch is complete when (1) there
     * are no pending simulation job requests in the batch and none of the failed
     * simulation job requests are due to <code>InternalServiceError</code> and (2)
     * when all created simulation jobs have reached a terminal state (for example,
     * <code>Completed</code> or <code>Failed</code>). </p> </dd> <dt>Canceled</dt>
     * <dd> <p>The simulation batch job was cancelled.</p> </dd> <dt>Canceling</dt>
     * <dd> <p>The simulation batch job is being cancelled.</p> </dd>
     * <dt>Completing</dt> <dd> <p>The simulation batch job is completing.</p> </dd>
     * <dt>TimingOut</dt> <dd> <p>The simulation job batch is timing out.</p> <p>If a
     * batch timing out, and there are pending requests that were failing due to an
     * internal failure (like <code>InternalServiceError</code>), the batch status will
     * be <code>Failed</code>. If there are no such failing request, the batch status
     * will be <code>TimedOut</code>. </p> </dd> <dt>TimedOut</dt> <dd> <p>The
     * simulation batch job timed out.</p> </dd> </dl>
     */
    inline SimulationJobBatchSummary& WithStatus(SimulationJobBatchStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The number of failed simulation job requests.</p>
     */
    inline int GetFailedRequestCount() const{ return m_failedRequestCount; }

    /**
     * <p>The number of failed simulation job requests.</p>
     */
    inline bool FailedRequestCountHasBeenSet() const { return m_failedRequestCountHasBeenSet; }

    /**
     * <p>The number of failed simulation job requests.</p>
     */
    inline void SetFailedRequestCount(int value) { m_failedRequestCountHasBeenSet = true; m_failedRequestCount = value; }

    /**
     * <p>The number of failed simulation job requests.</p>
     */
    inline SimulationJobBatchSummary& WithFailedRequestCount(int value) { SetFailedRequestCount(value); return *this;}


    /**
     * <p>The number of pending simulation job requests.</p>
     */
    inline int GetPendingRequestCount() const{ return m_pendingRequestCount; }

    /**
     * <p>The number of pending simulation job requests.</p>
     */
    inline bool PendingRequestCountHasBeenSet() const { return m_pendingRequestCountHasBeenSet; }

    /**
     * <p>The number of pending simulation job requests.</p>
     */
    inline void SetPendingRequestCount(int value) { m_pendingRequestCountHasBeenSet = true; m_pendingRequestCount = value; }

    /**
     * <p>The number of pending simulation job requests.</p>
     */
    inline SimulationJobBatchSummary& WithPendingRequestCount(int value) { SetPendingRequestCount(value); return *this;}


    /**
     * <p>The number of created simulation job requests.</p>
     */
    inline int GetCreatedRequestCount() const{ return m_createdRequestCount; }

    /**
     * <p>The number of created simulation job requests.</p>
     */
    inline bool CreatedRequestCountHasBeenSet() const { return m_createdRequestCountHasBeenSet; }

    /**
     * <p>The number of created simulation job requests.</p>
     */
    inline void SetCreatedRequestCount(int value) { m_createdRequestCountHasBeenSet = true; m_createdRequestCount = value; }

    /**
     * <p>The number of created simulation job requests.</p>
     */
    inline SimulationJobBatchSummary& WithCreatedRequestCount(int value) { SetCreatedRequestCount(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    SimulationJobBatchStatus m_status;
    bool m_statusHasBeenSet = false;

    int m_failedRequestCount;
    bool m_failedRequestCountHasBeenSet = false;

    int m_pendingRequestCount;
    bool m_pendingRequestCountHasBeenSet = false;

    int m_createdRequestCount;
    bool m_createdRequestCountHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
