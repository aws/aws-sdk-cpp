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
   * <p>The configuration for <code>Hyperband</code>, a multi-fidelity based
   * hyperparameter tuning strategy. <code>Hyperband</code> uses the final and
   * intermediate results of a training job to dynamically allocate resources to
   * utilized hyperparameter configurations while automatically stopping
   * under-performing configurations. This parameter should be provided only if
   * <code>Hyperband</code> is selected as the <code>StrategyConfig</code> under the
   * <code>HyperParameterTuningJobConfig</code> API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperbandStrategyConfig">AWS
   * API Reference</a></p>
   */
  class HyperbandStrategyConfig
  {
  public:
    AWS_SAGEMAKER_API HyperbandStrategyConfig();
    AWS_SAGEMAKER_API HyperbandStrategyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HyperbandStrategyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum number of resources (such as epochs) that can be used by a
     * training job launched by a hyperparameter tuning job. If the value for
     * <code>MinResource</code> has not been reached, the training job will not be
     * stopped by <code>Hyperband</code>.</p>
     */
    inline int GetMinResource() const{ return m_minResource; }

    /**
     * <p>The minimum number of resources (such as epochs) that can be used by a
     * training job launched by a hyperparameter tuning job. If the value for
     * <code>MinResource</code> has not been reached, the training job will not be
     * stopped by <code>Hyperband</code>.</p>
     */
    inline bool MinResourceHasBeenSet() const { return m_minResourceHasBeenSet; }

    /**
     * <p>The minimum number of resources (such as epochs) that can be used by a
     * training job launched by a hyperparameter tuning job. If the value for
     * <code>MinResource</code> has not been reached, the training job will not be
     * stopped by <code>Hyperband</code>.</p>
     */
    inline void SetMinResource(int value) { m_minResourceHasBeenSet = true; m_minResource = value; }

    /**
     * <p>The minimum number of resources (such as epochs) that can be used by a
     * training job launched by a hyperparameter tuning job. If the value for
     * <code>MinResource</code> has not been reached, the training job will not be
     * stopped by <code>Hyperband</code>.</p>
     */
    inline HyperbandStrategyConfig& WithMinResource(int value) { SetMinResource(value); return *this;}


    /**
     * <p>The maximum number of resources (such as epochs) that can be used by a
     * training job launched by a hyperparameter tuning job. Once a job reaches the
     * <code>MaxResource</code> value, it is stopped. If a value for
     * <code>MaxResource</code> is not provided, and <code>Hyperband</code> is selected
     * as the hyperparameter tuning strategy, <code>HyperbandTrainingJ</code> attempts
     * to infer <code>MaxResource</code> from the following keys (if present) in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTrainingJobDefinition.html#sagemaker-Type-HyperParameterTrainingJobDefinition-StaticHyperParameters">StaticsHyperParameters</a>:</p>
     * <ul> <li> <p> <code>epochs</code> </p> </li> <li> <p> <code>numepochs</code>
     * </p> </li> <li> <p> <code>n-epochs</code> </p> </li> <li> <p>
     * <code>n_epochs</code> </p> </li> <li> <p> <code>num_epochs</code> </p> </li>
     * </ul> <p>If <code>HyperbandStrategyConfig</code> is unable to infer a value for
     * <code>MaxResource</code>, it generates a validation error. The maximum value is
     * 20,000 epochs. All metrics that correspond to an objective metric are used to
     * derive <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-early-stopping.html">early
     * stopping decisions</a>. For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/distributed-training.html">distributive</a>
     * training jobs, ensure that duplicate metrics are not printed in the logs across
     * the individual nodes in a training job. If multiple nodes are publishing
     * duplicate or incorrect metrics, training jobs may make an incorrect stopping
     * decision and stop the job prematurely. </p>
     */
    inline int GetMaxResource() const{ return m_maxResource; }

    /**
     * <p>The maximum number of resources (such as epochs) that can be used by a
     * training job launched by a hyperparameter tuning job. Once a job reaches the
     * <code>MaxResource</code> value, it is stopped. If a value for
     * <code>MaxResource</code> is not provided, and <code>Hyperband</code> is selected
     * as the hyperparameter tuning strategy, <code>HyperbandTrainingJ</code> attempts
     * to infer <code>MaxResource</code> from the following keys (if present) in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTrainingJobDefinition.html#sagemaker-Type-HyperParameterTrainingJobDefinition-StaticHyperParameters">StaticsHyperParameters</a>:</p>
     * <ul> <li> <p> <code>epochs</code> </p> </li> <li> <p> <code>numepochs</code>
     * </p> </li> <li> <p> <code>n-epochs</code> </p> </li> <li> <p>
     * <code>n_epochs</code> </p> </li> <li> <p> <code>num_epochs</code> </p> </li>
     * </ul> <p>If <code>HyperbandStrategyConfig</code> is unable to infer a value for
     * <code>MaxResource</code>, it generates a validation error. The maximum value is
     * 20,000 epochs. All metrics that correspond to an objective metric are used to
     * derive <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-early-stopping.html">early
     * stopping decisions</a>. For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/distributed-training.html">distributive</a>
     * training jobs, ensure that duplicate metrics are not printed in the logs across
     * the individual nodes in a training job. If multiple nodes are publishing
     * duplicate or incorrect metrics, training jobs may make an incorrect stopping
     * decision and stop the job prematurely. </p>
     */
    inline bool MaxResourceHasBeenSet() const { return m_maxResourceHasBeenSet; }

    /**
     * <p>The maximum number of resources (such as epochs) that can be used by a
     * training job launched by a hyperparameter tuning job. Once a job reaches the
     * <code>MaxResource</code> value, it is stopped. If a value for
     * <code>MaxResource</code> is not provided, and <code>Hyperband</code> is selected
     * as the hyperparameter tuning strategy, <code>HyperbandTrainingJ</code> attempts
     * to infer <code>MaxResource</code> from the following keys (if present) in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTrainingJobDefinition.html#sagemaker-Type-HyperParameterTrainingJobDefinition-StaticHyperParameters">StaticsHyperParameters</a>:</p>
     * <ul> <li> <p> <code>epochs</code> </p> </li> <li> <p> <code>numepochs</code>
     * </p> </li> <li> <p> <code>n-epochs</code> </p> </li> <li> <p>
     * <code>n_epochs</code> </p> </li> <li> <p> <code>num_epochs</code> </p> </li>
     * </ul> <p>If <code>HyperbandStrategyConfig</code> is unable to infer a value for
     * <code>MaxResource</code>, it generates a validation error. The maximum value is
     * 20,000 epochs. All metrics that correspond to an objective metric are used to
     * derive <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-early-stopping.html">early
     * stopping decisions</a>. For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/distributed-training.html">distributive</a>
     * training jobs, ensure that duplicate metrics are not printed in the logs across
     * the individual nodes in a training job. If multiple nodes are publishing
     * duplicate or incorrect metrics, training jobs may make an incorrect stopping
     * decision and stop the job prematurely. </p>
     */
    inline void SetMaxResource(int value) { m_maxResourceHasBeenSet = true; m_maxResource = value; }

    /**
     * <p>The maximum number of resources (such as epochs) that can be used by a
     * training job launched by a hyperparameter tuning job. Once a job reaches the
     * <code>MaxResource</code> value, it is stopped. If a value for
     * <code>MaxResource</code> is not provided, and <code>Hyperband</code> is selected
     * as the hyperparameter tuning strategy, <code>HyperbandTrainingJ</code> attempts
     * to infer <code>MaxResource</code> from the following keys (if present) in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTrainingJobDefinition.html#sagemaker-Type-HyperParameterTrainingJobDefinition-StaticHyperParameters">StaticsHyperParameters</a>:</p>
     * <ul> <li> <p> <code>epochs</code> </p> </li> <li> <p> <code>numepochs</code>
     * </p> </li> <li> <p> <code>n-epochs</code> </p> </li> <li> <p>
     * <code>n_epochs</code> </p> </li> <li> <p> <code>num_epochs</code> </p> </li>
     * </ul> <p>If <code>HyperbandStrategyConfig</code> is unable to infer a value for
     * <code>MaxResource</code>, it generates a validation error. The maximum value is
     * 20,000 epochs. All metrics that correspond to an objective metric are used to
     * derive <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-early-stopping.html">early
     * stopping decisions</a>. For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/distributed-training.html">distributive</a>
     * training jobs, ensure that duplicate metrics are not printed in the logs across
     * the individual nodes in a training job. If multiple nodes are publishing
     * duplicate or incorrect metrics, training jobs may make an incorrect stopping
     * decision and stop the job prematurely. </p>
     */
    inline HyperbandStrategyConfig& WithMaxResource(int value) { SetMaxResource(value); return *this;}

  private:

    int m_minResource;
    bool m_minResourceHasBeenSet = false;

    int m_maxResource;
    bool m_maxResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
