/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>

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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>A <code>RetryPolicy</code> object that includes information about the retry
   * policy settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/RetryPolicy">AWS
   * API Reference</a></p>
   */
  class RetryPolicy
  {
  public:
    AWS_CLOUDWATCHEVENTS_API RetryPolicy();
    AWS_CLOUDWATCHEVENTS_API RetryPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API RetryPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of retry attempts to make before the request fails. Retry
     * attempts continue until either the maximum number of attempts is made or until
     * the duration of the <code>MaximumEventAgeInSeconds</code> is met.</p>
     */
    inline int GetMaximumRetryAttempts() const{ return m_maximumRetryAttempts; }

    /**
     * <p>The maximum number of retry attempts to make before the request fails. Retry
     * attempts continue until either the maximum number of attempts is made or until
     * the duration of the <code>MaximumEventAgeInSeconds</code> is met.</p>
     */
    inline bool MaximumRetryAttemptsHasBeenSet() const { return m_maximumRetryAttemptsHasBeenSet; }

    /**
     * <p>The maximum number of retry attempts to make before the request fails. Retry
     * attempts continue until either the maximum number of attempts is made or until
     * the duration of the <code>MaximumEventAgeInSeconds</code> is met.</p>
     */
    inline void SetMaximumRetryAttempts(int value) { m_maximumRetryAttemptsHasBeenSet = true; m_maximumRetryAttempts = value; }

    /**
     * <p>The maximum number of retry attempts to make before the request fails. Retry
     * attempts continue until either the maximum number of attempts is made or until
     * the duration of the <code>MaximumEventAgeInSeconds</code> is met.</p>
     */
    inline RetryPolicy& WithMaximumRetryAttempts(int value) { SetMaximumRetryAttempts(value); return *this;}


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

  private:

    int m_maximumRetryAttempts;
    bool m_maximumRetryAttemptsHasBeenSet = false;

    int m_maximumEventAgeInSeconds;
    bool m_maximumEventAgeInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
