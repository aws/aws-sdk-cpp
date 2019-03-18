/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>The numbers of training jobs launched by a hyperparameter tuning job,
   * categorized by status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingJobStatusCounters">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API TrainingJobStatusCounters
  {
  public:
    TrainingJobStatusCounters();
    TrainingJobStatusCounters(Aws::Utils::Json::JsonView jsonValue);
    TrainingJobStatusCounters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of completed training jobs launched by the hyperparameter tuning
     * job.</p>
     */
    inline int GetCompleted() const{ return m_completed; }

    /**
     * <p>The number of completed training jobs launched by the hyperparameter tuning
     * job.</p>
     */
    inline bool CompletedHasBeenSet() const { return m_completedHasBeenSet; }

    /**
     * <p>The number of completed training jobs launched by the hyperparameter tuning
     * job.</p>
     */
    inline void SetCompleted(int value) { m_completedHasBeenSet = true; m_completed = value; }

    /**
     * <p>The number of completed training jobs launched by the hyperparameter tuning
     * job.</p>
     */
    inline TrainingJobStatusCounters& WithCompleted(int value) { SetCompleted(value); return *this;}


    /**
     * <p>The number of in-progress training jobs launched by a hyperparameter tuning
     * job.</p>
     */
    inline int GetInProgress() const{ return m_inProgress; }

    /**
     * <p>The number of in-progress training jobs launched by a hyperparameter tuning
     * job.</p>
     */
    inline bool InProgressHasBeenSet() const { return m_inProgressHasBeenSet; }

    /**
     * <p>The number of in-progress training jobs launched by a hyperparameter tuning
     * job.</p>
     */
    inline void SetInProgress(int value) { m_inProgressHasBeenSet = true; m_inProgress = value; }

    /**
     * <p>The number of in-progress training jobs launched by a hyperparameter tuning
     * job.</p>
     */
    inline TrainingJobStatusCounters& WithInProgress(int value) { SetInProgress(value); return *this;}


    /**
     * <p>The number of training jobs that failed, but can be retried. A failed
     * training job can be retried only if it failed because an internal service error
     * occurred.</p>
     */
    inline int GetRetryableError() const{ return m_retryableError; }

    /**
     * <p>The number of training jobs that failed, but can be retried. A failed
     * training job can be retried only if it failed because an internal service error
     * occurred.</p>
     */
    inline bool RetryableErrorHasBeenSet() const { return m_retryableErrorHasBeenSet; }

    /**
     * <p>The number of training jobs that failed, but can be retried. A failed
     * training job can be retried only if it failed because an internal service error
     * occurred.</p>
     */
    inline void SetRetryableError(int value) { m_retryableErrorHasBeenSet = true; m_retryableError = value; }

    /**
     * <p>The number of training jobs that failed, but can be retried. A failed
     * training job can be retried only if it failed because an internal service error
     * occurred.</p>
     */
    inline TrainingJobStatusCounters& WithRetryableError(int value) { SetRetryableError(value); return *this;}


    /**
     * <p>The number of training jobs that failed and can't be retried. A failed
     * training job can't be retried if it failed because a client error occurred.</p>
     */
    inline int GetNonRetryableError() const{ return m_nonRetryableError; }

    /**
     * <p>The number of training jobs that failed and can't be retried. A failed
     * training job can't be retried if it failed because a client error occurred.</p>
     */
    inline bool NonRetryableErrorHasBeenSet() const { return m_nonRetryableErrorHasBeenSet; }

    /**
     * <p>The number of training jobs that failed and can't be retried. A failed
     * training job can't be retried if it failed because a client error occurred.</p>
     */
    inline void SetNonRetryableError(int value) { m_nonRetryableErrorHasBeenSet = true; m_nonRetryableError = value; }

    /**
     * <p>The number of training jobs that failed and can't be retried. A failed
     * training job can't be retried if it failed because a client error occurred.</p>
     */
    inline TrainingJobStatusCounters& WithNonRetryableError(int value) { SetNonRetryableError(value); return *this;}


    /**
     * <p>The number of training jobs launched by a hyperparameter tuning job that were
     * manually stopped.</p>
     */
    inline int GetStopped() const{ return m_stopped; }

    /**
     * <p>The number of training jobs launched by a hyperparameter tuning job that were
     * manually stopped.</p>
     */
    inline bool StoppedHasBeenSet() const { return m_stoppedHasBeenSet; }

    /**
     * <p>The number of training jobs launched by a hyperparameter tuning job that were
     * manually stopped.</p>
     */
    inline void SetStopped(int value) { m_stoppedHasBeenSet = true; m_stopped = value; }

    /**
     * <p>The number of training jobs launched by a hyperparameter tuning job that were
     * manually stopped.</p>
     */
    inline TrainingJobStatusCounters& WithStopped(int value) { SetStopped(value); return *this;}

  private:

    int m_completed;
    bool m_completedHasBeenSet;

    int m_inProgress;
    bool m_inProgressHasBeenSet;

    int m_retryableError;
    bool m_retryableErrorHasBeenSet;

    int m_nonRetryableError;
    bool m_nonRetryableErrorHasBeenSet;

    int m_stopped;
    bool m_stoppedHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
