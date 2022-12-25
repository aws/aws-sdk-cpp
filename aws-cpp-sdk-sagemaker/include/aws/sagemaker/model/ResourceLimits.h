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
   * <p>Specifies the maximum number of training jobs and parallel training jobs that
   * a hyperparameter tuning job can launch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ResourceLimits">AWS
   * API Reference</a></p>
   */
  class ResourceLimits
  {
  public:
    AWS_SAGEMAKER_API ResourceLimits();
    AWS_SAGEMAKER_API ResourceLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ResourceLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of training jobs that a hyperparameter tuning job can
     * launch.</p>
     */
    inline int GetMaxNumberOfTrainingJobs() const{ return m_maxNumberOfTrainingJobs; }

    /**
     * <p>The maximum number of training jobs that a hyperparameter tuning job can
     * launch.</p>
     */
    inline bool MaxNumberOfTrainingJobsHasBeenSet() const { return m_maxNumberOfTrainingJobsHasBeenSet; }

    /**
     * <p>The maximum number of training jobs that a hyperparameter tuning job can
     * launch.</p>
     */
    inline void SetMaxNumberOfTrainingJobs(int value) { m_maxNumberOfTrainingJobsHasBeenSet = true; m_maxNumberOfTrainingJobs = value; }

    /**
     * <p>The maximum number of training jobs that a hyperparameter tuning job can
     * launch.</p>
     */
    inline ResourceLimits& WithMaxNumberOfTrainingJobs(int value) { SetMaxNumberOfTrainingJobs(value); return *this;}


    /**
     * <p>The maximum number of concurrent training jobs that a hyperparameter tuning
     * job can launch.</p>
     */
    inline int GetMaxParallelTrainingJobs() const{ return m_maxParallelTrainingJobs; }

    /**
     * <p>The maximum number of concurrent training jobs that a hyperparameter tuning
     * job can launch.</p>
     */
    inline bool MaxParallelTrainingJobsHasBeenSet() const { return m_maxParallelTrainingJobsHasBeenSet; }

    /**
     * <p>The maximum number of concurrent training jobs that a hyperparameter tuning
     * job can launch.</p>
     */
    inline void SetMaxParallelTrainingJobs(int value) { m_maxParallelTrainingJobsHasBeenSet = true; m_maxParallelTrainingJobs = value; }

    /**
     * <p>The maximum number of concurrent training jobs that a hyperparameter tuning
     * job can launch.</p>
     */
    inline ResourceLimits& WithMaxParallelTrainingJobs(int value) { SetMaxParallelTrainingJobs(value); return *this;}

  private:

    int m_maxNumberOfTrainingJobs;
    bool m_maxNumberOfTrainingJobsHasBeenSet = false;

    int m_maxParallelTrainingJobs;
    bool m_maxParallelTrainingJobsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
