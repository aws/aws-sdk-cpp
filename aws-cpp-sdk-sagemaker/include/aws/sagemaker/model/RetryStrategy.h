/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The retry strategy to use when a training job fails due to an
   * <code>InternalServerError</code>. <code>RetryStrategy</code> is specified as
   * part of the <code>CreateTrainingJob</code> and
   * <code>CreateHyperParameterTuningJob</code> requests. You can add the
   * <code>StoppingCondition</code> parameter to the request to limit the training
   * time for the complete job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RetryStrategy">AWS
   * API Reference</a></p>
   */
  class RetryStrategy
  {
  public:
    AWS_SAGEMAKER_API RetryStrategy();
    AWS_SAGEMAKER_API RetryStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RetryStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of times to retry the job. When the job is retried, it's
     * <code>SecondaryStatus</code> is changed to <code>STARTING</code>.</p>
     */
    inline int GetMaximumRetryAttempts() const{ return m_maximumRetryAttempts; }

    /**
     * <p>The number of times to retry the job. When the job is retried, it's
     * <code>SecondaryStatus</code> is changed to <code>STARTING</code>.</p>
     */
    inline bool MaximumRetryAttemptsHasBeenSet() const { return m_maximumRetryAttemptsHasBeenSet; }

    /**
     * <p>The number of times to retry the job. When the job is retried, it's
     * <code>SecondaryStatus</code> is changed to <code>STARTING</code>.</p>
     */
    inline void SetMaximumRetryAttempts(int value) { m_maximumRetryAttemptsHasBeenSet = true; m_maximumRetryAttempts = value; }

    /**
     * <p>The number of times to retry the job. When the job is retried, it's
     * <code>SecondaryStatus</code> is changed to <code>STARTING</code>.</p>
     */
    inline RetryStrategy& WithMaximumRetryAttempts(int value) { SetMaximumRetryAttempts(value); return *this;}

  private:

    int m_maximumRetryAttempts;
    bool m_maximumRetryAttemptsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
