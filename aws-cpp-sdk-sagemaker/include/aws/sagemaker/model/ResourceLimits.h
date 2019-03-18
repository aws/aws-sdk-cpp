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
   * <p>Specifies the maximum number of training jobs and parallel training jobs that
   * a hyperparameter tuning job can launch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ResourceLimits">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ResourceLimits
  {
  public:
    ResourceLimits();
    ResourceLimits(Aws::Utils::Json::JsonView jsonValue);
    ResourceLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_maxNumberOfTrainingJobsHasBeenSet;

    int m_maxParallelTrainingJobs;
    bool m_maxParallelTrainingJobsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
