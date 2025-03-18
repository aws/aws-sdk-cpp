/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/EvaluateOnExit.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>The retry strategy that's associated with a job. For more information, see <a
   * href="https://docs.aws.amazon.com/batch/latest/userguide/job_retries.html">Automated
   * job retries</a> in the <i>Batch User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/RetryStrategy">AWS
   * API Reference</a></p>
   */
  class RetryStrategy
  {
  public:
    AWS_BATCH_API RetryStrategy() = default;
    AWS_BATCH_API RetryStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API RetryStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of times to move a job to the <code>RUNNABLE</code> status. You
     * can specify between 1 and 10 attempts. If the value of <code>attempts</code> is
     * greater than one, the job is retried on failure the same number of attempts as
     * the value.</p>
     */
    inline int GetAttempts() const { return m_attempts; }
    inline bool AttemptsHasBeenSet() const { return m_attemptsHasBeenSet; }
    inline void SetAttempts(int value) { m_attemptsHasBeenSet = true; m_attempts = value; }
    inline RetryStrategy& WithAttempts(int value) { SetAttempts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of up to 5 objects that specify the conditions where jobs are retried
     * or failed. If this parameter is specified, then the <code>attempts</code>
     * parameter must also be specified. If none of the listed conditions match, then
     * the job is retried.</p>
     */
    inline const Aws::Vector<EvaluateOnExit>& GetEvaluateOnExit() const { return m_evaluateOnExit; }
    inline bool EvaluateOnExitHasBeenSet() const { return m_evaluateOnExitHasBeenSet; }
    template<typename EvaluateOnExitT = Aws::Vector<EvaluateOnExit>>
    void SetEvaluateOnExit(EvaluateOnExitT&& value) { m_evaluateOnExitHasBeenSet = true; m_evaluateOnExit = std::forward<EvaluateOnExitT>(value); }
    template<typename EvaluateOnExitT = Aws::Vector<EvaluateOnExit>>
    RetryStrategy& WithEvaluateOnExit(EvaluateOnExitT&& value) { SetEvaluateOnExit(std::forward<EvaluateOnExitT>(value)); return *this;}
    template<typename EvaluateOnExitT = EvaluateOnExit>
    RetryStrategy& AddEvaluateOnExit(EvaluateOnExitT&& value) { m_evaluateOnExitHasBeenSet = true; m_evaluateOnExit.emplace_back(std::forward<EvaluateOnExitT>(value)); return *this; }
    ///@}
  private:

    int m_attempts{0};
    bool m_attemptsHasBeenSet = false;

    Aws::Vector<EvaluateOnExit> m_evaluateOnExit;
    bool m_evaluateOnExitHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
