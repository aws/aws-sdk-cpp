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
   * <p>How long a job is allowed to run, or how many candidates a job is allowed to
   * generate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLJobCompletionCriteria">AWS
   * API Reference</a></p>
   */
  class AutoMLJobCompletionCriteria
  {
  public:
    AWS_SAGEMAKER_API AutoMLJobCompletionCriteria();
    AWS_SAGEMAKER_API AutoMLJobCompletionCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLJobCompletionCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of times a training job is allowed to run.</p>
     */
    inline int GetMaxCandidates() const{ return m_maxCandidates; }

    /**
     * <p>The maximum number of times a training job is allowed to run.</p>
     */
    inline bool MaxCandidatesHasBeenSet() const { return m_maxCandidatesHasBeenSet; }

    /**
     * <p>The maximum number of times a training job is allowed to run.</p>
     */
    inline void SetMaxCandidates(int value) { m_maxCandidatesHasBeenSet = true; m_maxCandidates = value; }

    /**
     * <p>The maximum number of times a training job is allowed to run.</p>
     */
    inline AutoMLJobCompletionCriteria& WithMaxCandidates(int value) { SetMaxCandidates(value); return *this;}


    /**
     * <p>The maximum time, in seconds, that each training job executed inside
     * hyperparameter tuning is allowed to run as part of a hyperparameter tuning job.
     * For more information, see the used by the action.</p>
     */
    inline int GetMaxRuntimePerTrainingJobInSeconds() const{ return m_maxRuntimePerTrainingJobInSeconds; }

    /**
     * <p>The maximum time, in seconds, that each training job executed inside
     * hyperparameter tuning is allowed to run as part of a hyperparameter tuning job.
     * For more information, see the used by the action.</p>
     */
    inline bool MaxRuntimePerTrainingJobInSecondsHasBeenSet() const { return m_maxRuntimePerTrainingJobInSecondsHasBeenSet; }

    /**
     * <p>The maximum time, in seconds, that each training job executed inside
     * hyperparameter tuning is allowed to run as part of a hyperparameter tuning job.
     * For more information, see the used by the action.</p>
     */
    inline void SetMaxRuntimePerTrainingJobInSeconds(int value) { m_maxRuntimePerTrainingJobInSecondsHasBeenSet = true; m_maxRuntimePerTrainingJobInSeconds = value; }

    /**
     * <p>The maximum time, in seconds, that each training job executed inside
     * hyperparameter tuning is allowed to run as part of a hyperparameter tuning job.
     * For more information, see the used by the action.</p>
     */
    inline AutoMLJobCompletionCriteria& WithMaxRuntimePerTrainingJobInSeconds(int value) { SetMaxRuntimePerTrainingJobInSeconds(value); return *this;}


    /**
     * <p>The maximum runtime, in seconds, an AutoML job has to complete.</p> <p>If an
     * AutoML job exceeds the maximum runtime, the job is stopped automatically and its
     * processing is ended gracefully. The AutoML job identifies the best model whose
     * training was completed and marks it as the best-performing model. Any unfinished
     * steps of the job, such as automatic one-click Autopilot model deployment, will
     * not be completed. </p>
     */
    inline int GetMaxAutoMLJobRuntimeInSeconds() const{ return m_maxAutoMLJobRuntimeInSeconds; }

    /**
     * <p>The maximum runtime, in seconds, an AutoML job has to complete.</p> <p>If an
     * AutoML job exceeds the maximum runtime, the job is stopped automatically and its
     * processing is ended gracefully. The AutoML job identifies the best model whose
     * training was completed and marks it as the best-performing model. Any unfinished
     * steps of the job, such as automatic one-click Autopilot model deployment, will
     * not be completed. </p>
     */
    inline bool MaxAutoMLJobRuntimeInSecondsHasBeenSet() const { return m_maxAutoMLJobRuntimeInSecondsHasBeenSet; }

    /**
     * <p>The maximum runtime, in seconds, an AutoML job has to complete.</p> <p>If an
     * AutoML job exceeds the maximum runtime, the job is stopped automatically and its
     * processing is ended gracefully. The AutoML job identifies the best model whose
     * training was completed and marks it as the best-performing model. Any unfinished
     * steps of the job, such as automatic one-click Autopilot model deployment, will
     * not be completed. </p>
     */
    inline void SetMaxAutoMLJobRuntimeInSeconds(int value) { m_maxAutoMLJobRuntimeInSecondsHasBeenSet = true; m_maxAutoMLJobRuntimeInSeconds = value; }

    /**
     * <p>The maximum runtime, in seconds, an AutoML job has to complete.</p> <p>If an
     * AutoML job exceeds the maximum runtime, the job is stopped automatically and its
     * processing is ended gracefully. The AutoML job identifies the best model whose
     * training was completed and marks it as the best-performing model. Any unfinished
     * steps of the job, such as automatic one-click Autopilot model deployment, will
     * not be completed. </p>
     */
    inline AutoMLJobCompletionCriteria& WithMaxAutoMLJobRuntimeInSeconds(int value) { SetMaxAutoMLJobRuntimeInSeconds(value); return *this;}

  private:

    int m_maxCandidates;
    bool m_maxCandidatesHasBeenSet = false;

    int m_maxRuntimePerTrainingJobInSeconds;
    bool m_maxRuntimePerTrainingJobInSecondsHasBeenSet = false;

    int m_maxAutoMLJobRuntimeInSeconds;
    bool m_maxAutoMLJobRuntimeInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
