/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/ServiceJobEvaluateOnExit.h>
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
   * <p>The retry strategy for service jobs. This defines how many times to retry a
   * failed service job and under what conditions. For more information, see <a
   * href="https://docs.aws.amazon.com/batch/latest/userguide/service-job-retries.html">Service
   * job retry strategies</a> in the <i>Batch User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ServiceJobRetryStrategy">AWS
   * API Reference</a></p>
   */
  class ServiceJobRetryStrategy
  {
  public:
    AWS_BATCH_API ServiceJobRetryStrategy() = default;
    AWS_BATCH_API ServiceJobRetryStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ServiceJobRetryStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of times to move a service job to <code>RUNNABLE</code> status.
     * You can specify between 1 and 10 attempts.</p>
     */
    inline int GetAttempts() const { return m_attempts; }
    inline bool AttemptsHasBeenSet() const { return m_attemptsHasBeenSet; }
    inline void SetAttempts(int value) { m_attemptsHasBeenSet = true; m_attempts = value; }
    inline ServiceJobRetryStrategy& WithAttempts(int value) { SetAttempts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of <code>ServiceJobEvaluateOnExit</code> objects that specify
     * conditions under which the service job should be retried or failed.</p>
     */
    inline const Aws::Vector<ServiceJobEvaluateOnExit>& GetEvaluateOnExit() const { return m_evaluateOnExit; }
    inline bool EvaluateOnExitHasBeenSet() const { return m_evaluateOnExitHasBeenSet; }
    template<typename EvaluateOnExitT = Aws::Vector<ServiceJobEvaluateOnExit>>
    void SetEvaluateOnExit(EvaluateOnExitT&& value) { m_evaluateOnExitHasBeenSet = true; m_evaluateOnExit = std::forward<EvaluateOnExitT>(value); }
    template<typename EvaluateOnExitT = Aws::Vector<ServiceJobEvaluateOnExit>>
    ServiceJobRetryStrategy& WithEvaluateOnExit(EvaluateOnExitT&& value) { SetEvaluateOnExit(std::forward<EvaluateOnExitT>(value)); return *this;}
    template<typename EvaluateOnExitT = ServiceJobEvaluateOnExit>
    ServiceJobRetryStrategy& AddEvaluateOnExit(EvaluateOnExitT&& value) { m_evaluateOnExitHasBeenSet = true; m_evaluateOnExit.emplace_back(std::forward<EvaluateOnExitT>(value)); return *this; }
    ///@}
  private:

    int m_attempts{0};
    bool m_attemptsHasBeenSet = false;

    Aws::Vector<ServiceJobEvaluateOnExit> m_evaluateOnExit;
    bool m_evaluateOnExitHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
