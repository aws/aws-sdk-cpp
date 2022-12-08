/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>

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
namespace Scheduler
{
namespace Model
{

  /**
   * <p>A <code>RetryPolicy</code> object that includes information about the retry
   * policy settings, including the maximum age of an event, and the maximum number
   * of times EventBridge Scheduler will try to deliver the event to a
   * target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/RetryPolicy">AWS
   * API Reference</a></p>
   */
  class RetryPolicy
  {
  public:
    AWS_SCHEDULER_API RetryPolicy();
    AWS_SCHEDULER_API RetryPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API RetryPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum amount of time, in seconds, to continue to make retry
     * attempts.</p>
     */
    inline int GetMaximumEventAgeInSeconds() const{ return m_maximumEventAgeInSeconds; }

    /**
     * <p>The maximum amount of time, in seconds, to continue to make retry
     * attempts.</p>
     */
    inline bool MaximumEventAgeInSecondsHasBeenSet() const { return m_maximumEventAgeInSecondsHasBeenSet; }

    /**
     * <p>The maximum amount of time, in seconds, to continue to make retry
     * attempts.</p>
     */
    inline void SetMaximumEventAgeInSeconds(int value) { m_maximumEventAgeInSecondsHasBeenSet = true; m_maximumEventAgeInSeconds = value; }

    /**
     * <p>The maximum amount of time, in seconds, to continue to make retry
     * attempts.</p>
     */
    inline RetryPolicy& WithMaximumEventAgeInSeconds(int value) { SetMaximumEventAgeInSeconds(value); return *this;}


    /**
     * <p>The maximum number of retry attempts to make before the request fails. Retry
     * attempts with exponential backoff continue until either the maximum number of
     * attempts is made or until the duration of the
     * <code>MaximumEventAgeInSeconds</code> is reached.</p>
     */
    inline int GetMaximumRetryAttempts() const{ return m_maximumRetryAttempts; }

    /**
     * <p>The maximum number of retry attempts to make before the request fails. Retry
     * attempts with exponential backoff continue until either the maximum number of
     * attempts is made or until the duration of the
     * <code>MaximumEventAgeInSeconds</code> is reached.</p>
     */
    inline bool MaximumRetryAttemptsHasBeenSet() const { return m_maximumRetryAttemptsHasBeenSet; }

    /**
     * <p>The maximum number of retry attempts to make before the request fails. Retry
     * attempts with exponential backoff continue until either the maximum number of
     * attempts is made or until the duration of the
     * <code>MaximumEventAgeInSeconds</code> is reached.</p>
     */
    inline void SetMaximumRetryAttempts(int value) { m_maximumRetryAttemptsHasBeenSet = true; m_maximumRetryAttempts = value; }

    /**
     * <p>The maximum number of retry attempts to make before the request fails. Retry
     * attempts with exponential backoff continue until either the maximum number of
     * attempts is made or until the duration of the
     * <code>MaximumEventAgeInSeconds</code> is reached.</p>
     */
    inline RetryPolicy& WithMaximumRetryAttempts(int value) { SetMaximumRetryAttempts(value); return *this;}

  private:

    int m_maximumEventAgeInSeconds;
    bool m_maximumEventAgeInSecondsHasBeenSet = false;

    int m_maximumRetryAttempts;
    bool m_maximumRetryAttemptsHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
