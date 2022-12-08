/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>

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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about items that were processed in all of the child workflow
   * executions that were started by a Map Run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/MapRunItemCounts">AWS
   * API Reference</a></p>
   */
  class MapRunItemCounts
  {
  public:
    AWS_SFN_API MapRunItemCounts();
    AWS_SFN_API MapRunItemCounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API MapRunItemCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of items to process in child workflow executions that
     * haven't started running yet.</p>
     */
    inline long long GetPending() const{ return m_pending; }

    /**
     * <p>The total number of items to process in child workflow executions that
     * haven't started running yet.</p>
     */
    inline bool PendingHasBeenSet() const { return m_pendingHasBeenSet; }

    /**
     * <p>The total number of items to process in child workflow executions that
     * haven't started running yet.</p>
     */
    inline void SetPending(long long value) { m_pendingHasBeenSet = true; m_pending = value; }

    /**
     * <p>The total number of items to process in child workflow executions that
     * haven't started running yet.</p>
     */
    inline MapRunItemCounts& WithPending(long long value) { SetPending(value); return *this;}


    /**
     * <p>The total number of items being processed in child workflow executions that
     * are currently in-progress.</p>
     */
    inline long long GetRunning() const{ return m_running; }

    /**
     * <p>The total number of items being processed in child workflow executions that
     * are currently in-progress.</p>
     */
    inline bool RunningHasBeenSet() const { return m_runningHasBeenSet; }

    /**
     * <p>The total number of items being processed in child workflow executions that
     * are currently in-progress.</p>
     */
    inline void SetRunning(long long value) { m_runningHasBeenSet = true; m_running = value; }

    /**
     * <p>The total number of items being processed in child workflow executions that
     * are currently in-progress.</p>
     */
    inline MapRunItemCounts& WithRunning(long long value) { SetRunning(value); return *this;}


    /**
     * <p>The total number of items processed in child workflow executions that have
     * completed successfully.</p>
     */
    inline long long GetSucceeded() const{ return m_succeeded; }

    /**
     * <p>The total number of items processed in child workflow executions that have
     * completed successfully.</p>
     */
    inline bool SucceededHasBeenSet() const { return m_succeededHasBeenSet; }

    /**
     * <p>The total number of items processed in child workflow executions that have
     * completed successfully.</p>
     */
    inline void SetSucceeded(long long value) { m_succeededHasBeenSet = true; m_succeeded = value; }

    /**
     * <p>The total number of items processed in child workflow executions that have
     * completed successfully.</p>
     */
    inline MapRunItemCounts& WithSucceeded(long long value) { SetSucceeded(value); return *this;}


    /**
     * <p>The total number of items processed in child workflow executions that have
     * failed.</p>
     */
    inline long long GetFailed() const{ return m_failed; }

    /**
     * <p>The total number of items processed in child workflow executions that have
     * failed.</p>
     */
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }

    /**
     * <p>The total number of items processed in child workflow executions that have
     * failed.</p>
     */
    inline void SetFailed(long long value) { m_failedHasBeenSet = true; m_failed = value; }

    /**
     * <p>The total number of items processed in child workflow executions that have
     * failed.</p>
     */
    inline MapRunItemCounts& WithFailed(long long value) { SetFailed(value); return *this;}


    /**
     * <p>The total number of items processed in child workflow executions that have
     * timed out.</p>
     */
    inline long long GetTimedOut() const{ return m_timedOut; }

    /**
     * <p>The total number of items processed in child workflow executions that have
     * timed out.</p>
     */
    inline bool TimedOutHasBeenSet() const { return m_timedOutHasBeenSet; }

    /**
     * <p>The total number of items processed in child workflow executions that have
     * timed out.</p>
     */
    inline void SetTimedOut(long long value) { m_timedOutHasBeenSet = true; m_timedOut = value; }

    /**
     * <p>The total number of items processed in child workflow executions that have
     * timed out.</p>
     */
    inline MapRunItemCounts& WithTimedOut(long long value) { SetTimedOut(value); return *this;}


    /**
     * <p>The total number of items processed in child workflow executions that were
     * either stopped by the user or by Step Functions, because the Map Run failed.</p>
     */
    inline long long GetAborted() const{ return m_aborted; }

    /**
     * <p>The total number of items processed in child workflow executions that were
     * either stopped by the user or by Step Functions, because the Map Run failed.</p>
     */
    inline bool AbortedHasBeenSet() const { return m_abortedHasBeenSet; }

    /**
     * <p>The total number of items processed in child workflow executions that were
     * either stopped by the user or by Step Functions, because the Map Run failed.</p>
     */
    inline void SetAborted(long long value) { m_abortedHasBeenSet = true; m_aborted = value; }

    /**
     * <p>The total number of items processed in child workflow executions that were
     * either stopped by the user or by Step Functions, because the Map Run failed.</p>
     */
    inline MapRunItemCounts& WithAborted(long long value) { SetAborted(value); return *this;}


    /**
     * <p>The total number of items processed in all the child workflow executions
     * started by a Map Run.</p>
     */
    inline long long GetTotal() const{ return m_total; }

    /**
     * <p>The total number of items processed in all the child workflow executions
     * started by a Map Run.</p>
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * <p>The total number of items processed in all the child workflow executions
     * started by a Map Run.</p>
     */
    inline void SetTotal(long long value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p>The total number of items processed in all the child workflow executions
     * started by a Map Run.</p>
     */
    inline MapRunItemCounts& WithTotal(long long value) { SetTotal(value); return *this;}


    /**
     * <p>Returns the count of items whose results were written by
     * <code>ResultWriter</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-resultwriter.html">ResultWriter</a>
     * in the <i>Step Functions Developer Guide</i>.</p>
     */
    inline long long GetResultsWritten() const{ return m_resultsWritten; }

    /**
     * <p>Returns the count of items whose results were written by
     * <code>ResultWriter</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-resultwriter.html">ResultWriter</a>
     * in the <i>Step Functions Developer Guide</i>.</p>
     */
    inline bool ResultsWrittenHasBeenSet() const { return m_resultsWrittenHasBeenSet; }

    /**
     * <p>Returns the count of items whose results were written by
     * <code>ResultWriter</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-resultwriter.html">ResultWriter</a>
     * in the <i>Step Functions Developer Guide</i>.</p>
     */
    inline void SetResultsWritten(long long value) { m_resultsWrittenHasBeenSet = true; m_resultsWritten = value; }

    /**
     * <p>Returns the count of items whose results were written by
     * <code>ResultWriter</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-resultwriter.html">ResultWriter</a>
     * in the <i>Step Functions Developer Guide</i>.</p>
     */
    inline MapRunItemCounts& WithResultsWritten(long long value) { SetResultsWritten(value); return *this;}

  private:

    long long m_pending;
    bool m_pendingHasBeenSet = false;

    long long m_running;
    bool m_runningHasBeenSet = false;

    long long m_succeeded;
    bool m_succeededHasBeenSet = false;

    long long m_failed;
    bool m_failedHasBeenSet = false;

    long long m_timedOut;
    bool m_timedOutHasBeenSet = false;

    long long m_aborted;
    bool m_abortedHasBeenSet = false;

    long long m_total;
    bool m_totalHasBeenSet = false;

    long long m_resultsWritten;
    bool m_resultsWrittenHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
