/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>

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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>The retry strategy to use for failed jobs, if the target is an Batch job. If
   * you specify a retry strategy here, it overrides the retry strategy defined in
   * the job definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/BatchRetryStrategy">AWS
   * API Reference</a></p>
   */
  class BatchRetryStrategy
  {
  public:
    AWS_EVENTBRIDGE_API BatchRetryStrategy();
    AWS_EVENTBRIDGE_API BatchRetryStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API BatchRetryStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of times to attempt to retry, if the job fails. Valid values are
     * 1–10.</p>
     */
    inline int GetAttempts() const{ return m_attempts; }

    /**
     * <p>The number of times to attempt to retry, if the job fails. Valid values are
     * 1–10.</p>
     */
    inline bool AttemptsHasBeenSet() const { return m_attemptsHasBeenSet; }

    /**
     * <p>The number of times to attempt to retry, if the job fails. Valid values are
     * 1–10.</p>
     */
    inline void SetAttempts(int value) { m_attemptsHasBeenSet = true; m_attempts = value; }

    /**
     * <p>The number of times to attempt to retry, if the job fails. Valid values are
     * 1–10.</p>
     */
    inline BatchRetryStrategy& WithAttempts(int value) { SetAttempts(value); return *this;}

  private:

    int m_attempts;
    bool m_attemptsHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
