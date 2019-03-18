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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/HyperParameterTuningJobWarmStartType.h>
#include <aws/sagemaker/model/ParentHyperParameterTuningJob.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies the configuration for a hyperparameter tuning job that uses one or
   * more previous hyperparameter tuning jobs as a starting point. The results of
   * previous tuning jobs are used to inform which combinations of hyperparameters to
   * search over in the new tuning job.</p> <p>All training jobs launched by the new
   * hyperparameter tuning job are evaluated by using the objective metric, and the
   * training job that performs the best is compared to the best training jobs from
   * the parent tuning jobs. From these, the training job that performs the best as
   * measured by the objective metric is returned as the overall best training
   * job.</p> <note> <p>All training jobs launched by parent hyperparameter tuning
   * jobs and the new hyperparameter tuning jobs count against the limit of training
   * jobs for the tuning job.</p> </note><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterTuningJobWarmStartConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API HyperParameterTuningJobWarmStartConfig
  {
  public:
    HyperParameterTuningJobWarmStartConfig();
    HyperParameterTuningJobWarmStartConfig(Aws::Utils::Json::JsonView jsonValue);
    HyperParameterTuningJobWarmStartConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of hyperparameter tuning jobs that are used as the starting point
     * for the new hyperparameter tuning job. For more information about warm starting
     * a hyperparameter tuning job, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-warm-start.html">Using
     * a Previous Hyperparameter Tuning Job as a Starting Point</a>.</p>
     * <p>Hyperparameter tuning jobs created before October 1, 2018 cannot be used as
     * parent jobs for warm start tuning jobs.</p>
     */
    inline const Aws::Vector<ParentHyperParameterTuningJob>& GetParentHyperParameterTuningJobs() const{ return m_parentHyperParameterTuningJobs; }

    /**
     * <p>An array of hyperparameter tuning jobs that are used as the starting point
     * for the new hyperparameter tuning job. For more information about warm starting
     * a hyperparameter tuning job, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-warm-start.html">Using
     * a Previous Hyperparameter Tuning Job as a Starting Point</a>.</p>
     * <p>Hyperparameter tuning jobs created before October 1, 2018 cannot be used as
     * parent jobs for warm start tuning jobs.</p>
     */
    inline bool ParentHyperParameterTuningJobsHasBeenSet() const { return m_parentHyperParameterTuningJobsHasBeenSet; }

    /**
     * <p>An array of hyperparameter tuning jobs that are used as the starting point
     * for the new hyperparameter tuning job. For more information about warm starting
     * a hyperparameter tuning job, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-warm-start.html">Using
     * a Previous Hyperparameter Tuning Job as a Starting Point</a>.</p>
     * <p>Hyperparameter tuning jobs created before October 1, 2018 cannot be used as
     * parent jobs for warm start tuning jobs.</p>
     */
    inline void SetParentHyperParameterTuningJobs(const Aws::Vector<ParentHyperParameterTuningJob>& value) { m_parentHyperParameterTuningJobsHasBeenSet = true; m_parentHyperParameterTuningJobs = value; }

    /**
     * <p>An array of hyperparameter tuning jobs that are used as the starting point
     * for the new hyperparameter tuning job. For more information about warm starting
     * a hyperparameter tuning job, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-warm-start.html">Using
     * a Previous Hyperparameter Tuning Job as a Starting Point</a>.</p>
     * <p>Hyperparameter tuning jobs created before October 1, 2018 cannot be used as
     * parent jobs for warm start tuning jobs.</p>
     */
    inline void SetParentHyperParameterTuningJobs(Aws::Vector<ParentHyperParameterTuningJob>&& value) { m_parentHyperParameterTuningJobsHasBeenSet = true; m_parentHyperParameterTuningJobs = std::move(value); }

    /**
     * <p>An array of hyperparameter tuning jobs that are used as the starting point
     * for the new hyperparameter tuning job. For more information about warm starting
     * a hyperparameter tuning job, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-warm-start.html">Using
     * a Previous Hyperparameter Tuning Job as a Starting Point</a>.</p>
     * <p>Hyperparameter tuning jobs created before October 1, 2018 cannot be used as
     * parent jobs for warm start tuning jobs.</p>
     */
    inline HyperParameterTuningJobWarmStartConfig& WithParentHyperParameterTuningJobs(const Aws::Vector<ParentHyperParameterTuningJob>& value) { SetParentHyperParameterTuningJobs(value); return *this;}

    /**
     * <p>An array of hyperparameter tuning jobs that are used as the starting point
     * for the new hyperparameter tuning job. For more information about warm starting
     * a hyperparameter tuning job, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-warm-start.html">Using
     * a Previous Hyperparameter Tuning Job as a Starting Point</a>.</p>
     * <p>Hyperparameter tuning jobs created before October 1, 2018 cannot be used as
     * parent jobs for warm start tuning jobs.</p>
     */
    inline HyperParameterTuningJobWarmStartConfig& WithParentHyperParameterTuningJobs(Aws::Vector<ParentHyperParameterTuningJob>&& value) { SetParentHyperParameterTuningJobs(std::move(value)); return *this;}

    /**
     * <p>An array of hyperparameter tuning jobs that are used as the starting point
     * for the new hyperparameter tuning job. For more information about warm starting
     * a hyperparameter tuning job, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-warm-start.html">Using
     * a Previous Hyperparameter Tuning Job as a Starting Point</a>.</p>
     * <p>Hyperparameter tuning jobs created before October 1, 2018 cannot be used as
     * parent jobs for warm start tuning jobs.</p>
     */
    inline HyperParameterTuningJobWarmStartConfig& AddParentHyperParameterTuningJobs(const ParentHyperParameterTuningJob& value) { m_parentHyperParameterTuningJobsHasBeenSet = true; m_parentHyperParameterTuningJobs.push_back(value); return *this; }

    /**
     * <p>An array of hyperparameter tuning jobs that are used as the starting point
     * for the new hyperparameter tuning job. For more information about warm starting
     * a hyperparameter tuning job, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-warm-start.html">Using
     * a Previous Hyperparameter Tuning Job as a Starting Point</a>.</p>
     * <p>Hyperparameter tuning jobs created before October 1, 2018 cannot be used as
     * parent jobs for warm start tuning jobs.</p>
     */
    inline HyperParameterTuningJobWarmStartConfig& AddParentHyperParameterTuningJobs(ParentHyperParameterTuningJob&& value) { m_parentHyperParameterTuningJobsHasBeenSet = true; m_parentHyperParameterTuningJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies one of the following:</p> <dl>
     * <dt>IDENTICAL_DATA_AND_ALGORITHM</dt> <dd> <p>The new hyperparameter tuning job
     * uses the same input data and training image as the parent tuning jobs. You can
     * change the hyperparameter ranges to search and the maximum number of training
     * jobs that the hyperparameter tuning job launches. You cannot use a new version
     * of the training algorithm, unless the changes in the new version do not affect
     * the algorithm itself. For example, changes that improve logging or adding
     * support for a different data format are allowed. You can also change
     * hyperparameters from tunable to static, and from static to tunable, but the
     * total number of static plus tunable hyperparameters must remain the same as it
     * is in all parent jobs. The objective metric for the new tuning job must be the
     * same as for all parent jobs.</p> </dd> <dt>TRANSFER_LEARNING</dt> <dd> <p>The
     * new hyperparameter tuning job can include input data, hyperparameter ranges,
     * maximum number of concurrent training jobs, and maximum number of training jobs
     * that are different than those of its parent hyperparameter tuning jobs. The
     * training image can also be a different version from the version used in the
     * parent hyperparameter tuning job. You can also change hyperparameters from
     * tunable to static, and from static to tunable, but the total number of static
     * plus tunable hyperparameters must remain the same as it is in all parent jobs.
     * The objective metric for the new tuning job must be the same as for all parent
     * jobs.</p> </dd> </dl>
     */
    inline const HyperParameterTuningJobWarmStartType& GetWarmStartType() const{ return m_warmStartType; }

    /**
     * <p>Specifies one of the following:</p> <dl>
     * <dt>IDENTICAL_DATA_AND_ALGORITHM</dt> <dd> <p>The new hyperparameter tuning job
     * uses the same input data and training image as the parent tuning jobs. You can
     * change the hyperparameter ranges to search and the maximum number of training
     * jobs that the hyperparameter tuning job launches. You cannot use a new version
     * of the training algorithm, unless the changes in the new version do not affect
     * the algorithm itself. For example, changes that improve logging or adding
     * support for a different data format are allowed. You can also change
     * hyperparameters from tunable to static, and from static to tunable, but the
     * total number of static plus tunable hyperparameters must remain the same as it
     * is in all parent jobs. The objective metric for the new tuning job must be the
     * same as for all parent jobs.</p> </dd> <dt>TRANSFER_LEARNING</dt> <dd> <p>The
     * new hyperparameter tuning job can include input data, hyperparameter ranges,
     * maximum number of concurrent training jobs, and maximum number of training jobs
     * that are different than those of its parent hyperparameter tuning jobs. The
     * training image can also be a different version from the version used in the
     * parent hyperparameter tuning job. You can also change hyperparameters from
     * tunable to static, and from static to tunable, but the total number of static
     * plus tunable hyperparameters must remain the same as it is in all parent jobs.
     * The objective metric for the new tuning job must be the same as for all parent
     * jobs.</p> </dd> </dl>
     */
    inline bool WarmStartTypeHasBeenSet() const { return m_warmStartTypeHasBeenSet; }

    /**
     * <p>Specifies one of the following:</p> <dl>
     * <dt>IDENTICAL_DATA_AND_ALGORITHM</dt> <dd> <p>The new hyperparameter tuning job
     * uses the same input data and training image as the parent tuning jobs. You can
     * change the hyperparameter ranges to search and the maximum number of training
     * jobs that the hyperparameter tuning job launches. You cannot use a new version
     * of the training algorithm, unless the changes in the new version do not affect
     * the algorithm itself. For example, changes that improve logging or adding
     * support for a different data format are allowed. You can also change
     * hyperparameters from tunable to static, and from static to tunable, but the
     * total number of static plus tunable hyperparameters must remain the same as it
     * is in all parent jobs. The objective metric for the new tuning job must be the
     * same as for all parent jobs.</p> </dd> <dt>TRANSFER_LEARNING</dt> <dd> <p>The
     * new hyperparameter tuning job can include input data, hyperparameter ranges,
     * maximum number of concurrent training jobs, and maximum number of training jobs
     * that are different than those of its parent hyperparameter tuning jobs. The
     * training image can also be a different version from the version used in the
     * parent hyperparameter tuning job. You can also change hyperparameters from
     * tunable to static, and from static to tunable, but the total number of static
     * plus tunable hyperparameters must remain the same as it is in all parent jobs.
     * The objective metric for the new tuning job must be the same as for all parent
     * jobs.</p> </dd> </dl>
     */
    inline void SetWarmStartType(const HyperParameterTuningJobWarmStartType& value) { m_warmStartTypeHasBeenSet = true; m_warmStartType = value; }

    /**
     * <p>Specifies one of the following:</p> <dl>
     * <dt>IDENTICAL_DATA_AND_ALGORITHM</dt> <dd> <p>The new hyperparameter tuning job
     * uses the same input data and training image as the parent tuning jobs. You can
     * change the hyperparameter ranges to search and the maximum number of training
     * jobs that the hyperparameter tuning job launches. You cannot use a new version
     * of the training algorithm, unless the changes in the new version do not affect
     * the algorithm itself. For example, changes that improve logging or adding
     * support for a different data format are allowed. You can also change
     * hyperparameters from tunable to static, and from static to tunable, but the
     * total number of static plus tunable hyperparameters must remain the same as it
     * is in all parent jobs. The objective metric for the new tuning job must be the
     * same as for all parent jobs.</p> </dd> <dt>TRANSFER_LEARNING</dt> <dd> <p>The
     * new hyperparameter tuning job can include input data, hyperparameter ranges,
     * maximum number of concurrent training jobs, and maximum number of training jobs
     * that are different than those of its parent hyperparameter tuning jobs. The
     * training image can also be a different version from the version used in the
     * parent hyperparameter tuning job. You can also change hyperparameters from
     * tunable to static, and from static to tunable, but the total number of static
     * plus tunable hyperparameters must remain the same as it is in all parent jobs.
     * The objective metric for the new tuning job must be the same as for all parent
     * jobs.</p> </dd> </dl>
     */
    inline void SetWarmStartType(HyperParameterTuningJobWarmStartType&& value) { m_warmStartTypeHasBeenSet = true; m_warmStartType = std::move(value); }

    /**
     * <p>Specifies one of the following:</p> <dl>
     * <dt>IDENTICAL_DATA_AND_ALGORITHM</dt> <dd> <p>The new hyperparameter tuning job
     * uses the same input data and training image as the parent tuning jobs. You can
     * change the hyperparameter ranges to search and the maximum number of training
     * jobs that the hyperparameter tuning job launches. You cannot use a new version
     * of the training algorithm, unless the changes in the new version do not affect
     * the algorithm itself. For example, changes that improve logging or adding
     * support for a different data format are allowed. You can also change
     * hyperparameters from tunable to static, and from static to tunable, but the
     * total number of static plus tunable hyperparameters must remain the same as it
     * is in all parent jobs. The objective metric for the new tuning job must be the
     * same as for all parent jobs.</p> </dd> <dt>TRANSFER_LEARNING</dt> <dd> <p>The
     * new hyperparameter tuning job can include input data, hyperparameter ranges,
     * maximum number of concurrent training jobs, and maximum number of training jobs
     * that are different than those of its parent hyperparameter tuning jobs. The
     * training image can also be a different version from the version used in the
     * parent hyperparameter tuning job. You can also change hyperparameters from
     * tunable to static, and from static to tunable, but the total number of static
     * plus tunable hyperparameters must remain the same as it is in all parent jobs.
     * The objective metric for the new tuning job must be the same as for all parent
     * jobs.</p> </dd> </dl>
     */
    inline HyperParameterTuningJobWarmStartConfig& WithWarmStartType(const HyperParameterTuningJobWarmStartType& value) { SetWarmStartType(value); return *this;}

    /**
     * <p>Specifies one of the following:</p> <dl>
     * <dt>IDENTICAL_DATA_AND_ALGORITHM</dt> <dd> <p>The new hyperparameter tuning job
     * uses the same input data and training image as the parent tuning jobs. You can
     * change the hyperparameter ranges to search and the maximum number of training
     * jobs that the hyperparameter tuning job launches. You cannot use a new version
     * of the training algorithm, unless the changes in the new version do not affect
     * the algorithm itself. For example, changes that improve logging or adding
     * support for a different data format are allowed. You can also change
     * hyperparameters from tunable to static, and from static to tunable, but the
     * total number of static plus tunable hyperparameters must remain the same as it
     * is in all parent jobs. The objective metric for the new tuning job must be the
     * same as for all parent jobs.</p> </dd> <dt>TRANSFER_LEARNING</dt> <dd> <p>The
     * new hyperparameter tuning job can include input data, hyperparameter ranges,
     * maximum number of concurrent training jobs, and maximum number of training jobs
     * that are different than those of its parent hyperparameter tuning jobs. The
     * training image can also be a different version from the version used in the
     * parent hyperparameter tuning job. You can also change hyperparameters from
     * tunable to static, and from static to tunable, but the total number of static
     * plus tunable hyperparameters must remain the same as it is in all parent jobs.
     * The objective metric for the new tuning job must be the same as for all parent
     * jobs.</p> </dd> </dl>
     */
    inline HyperParameterTuningJobWarmStartConfig& WithWarmStartType(HyperParameterTuningJobWarmStartType&& value) { SetWarmStartType(std::move(value)); return *this;}

  private:

    Aws::Vector<ParentHyperParameterTuningJob> m_parentHyperParameterTuningJobs;
    bool m_parentHyperParameterTuningJobsHasBeenSet;

    HyperParameterTuningJobWarmStartType m_warmStartType;
    bool m_warmStartTypeHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
