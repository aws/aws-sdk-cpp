/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>

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
   * <p>Information about the batch policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/BatchPolicy">AWS
   * API Reference</a></p>
   */
  class BatchPolicy
  {
  public:
    AWS_ROBOMAKER_API BatchPolicy();
    AWS_ROBOMAKER_API BatchPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API BatchPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of time, in seconds, to wait for the batch to complete. </p> <p>If
     * a batch times out, and there are pending requests that were failing due to an
     * internal failure (like <code>InternalServiceError</code>), they will be moved to
     * the failed list and the batch status will be <code>Failed</code>. If the pending
     * requests were failing for any other reason, the failed pending requests will be
     * moved to the failed list and the batch status will be <code>TimedOut</code>.
     * </p>
     */
    inline long long GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>The amount of time, in seconds, to wait for the batch to complete. </p> <p>If
     * a batch times out, and there are pending requests that were failing due to an
     * internal failure (like <code>InternalServiceError</code>), they will be moved to
     * the failed list and the batch status will be <code>Failed</code>. If the pending
     * requests were failing for any other reason, the failed pending requests will be
     * moved to the failed list and the batch status will be <code>TimedOut</code>.
     * </p>
     */
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, to wait for the batch to complete. </p> <p>If
     * a batch times out, and there are pending requests that were failing due to an
     * internal failure (like <code>InternalServiceError</code>), they will be moved to
     * the failed list and the batch status will be <code>Failed</code>. If the pending
     * requests were failing for any other reason, the failed pending requests will be
     * moved to the failed list and the batch status will be <code>TimedOut</code>.
     * </p>
     */
    inline void SetTimeoutInSeconds(long long value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>The amount of time, in seconds, to wait for the batch to complete. </p> <p>If
     * a batch times out, and there are pending requests that were failing due to an
     * internal failure (like <code>InternalServiceError</code>), they will be moved to
     * the failed list and the batch status will be <code>Failed</code>. If the pending
     * requests were failing for any other reason, the failed pending requests will be
     * moved to the failed list and the batch status will be <code>TimedOut</code>.
     * </p>
     */
    inline BatchPolicy& WithTimeoutInSeconds(long long value) { SetTimeoutInSeconds(value); return *this;}


    /**
     * <p>The number of active simulation jobs create as part of the batch that can be
     * in an active state at the same time. </p> <p>Active states include:
     * <code>Pending</code>,<code>Preparing</code>, <code>Running</code>,
     * <code>Restarting</code>, <code>RunningFailed</code> and
     * <code>Terminating</code>. All other states are terminal states. </p>
     */
    inline int GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>The number of active simulation jobs create as part of the batch that can be
     * in an active state at the same time. </p> <p>Active states include:
     * <code>Pending</code>,<code>Preparing</code>, <code>Running</code>,
     * <code>Restarting</code>, <code>RunningFailed</code> and
     * <code>Terminating</code>. All other states are terminal states. </p>
     */
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }

    /**
     * <p>The number of active simulation jobs create as part of the batch that can be
     * in an active state at the same time. </p> <p>Active states include:
     * <code>Pending</code>,<code>Preparing</code>, <code>Running</code>,
     * <code>Restarting</code>, <code>RunningFailed</code> and
     * <code>Terminating</code>. All other states are terminal states. </p>
     */
    inline void SetMaxConcurrency(int value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

    /**
     * <p>The number of active simulation jobs create as part of the batch that can be
     * in an active state at the same time. </p> <p>Active states include:
     * <code>Pending</code>,<code>Preparing</code>, <code>Running</code>,
     * <code>Restarting</code>, <code>RunningFailed</code> and
     * <code>Terminating</code>. All other states are terminal states. </p>
     */
    inline BatchPolicy& WithMaxConcurrency(int value) { SetMaxConcurrency(value); return *this;}

  private:

    long long m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet = false;

    int m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
