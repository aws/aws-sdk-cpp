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
#include <aws/sagemaker/model/HyperParameterTuningJobStrategyType.h>
#include <aws/sagemaker/model/HyperParameterTuningJobObjective.h>
#include <aws/sagemaker/model/ResourceLimits.h>
#include <aws/sagemaker/model/ParameterRanges.h>
#include <aws/sagemaker/model/TrainingJobEarlyStoppingType.h>
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
   * <p>Configures a hyperparameter tuning job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterTuningJobConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API HyperParameterTuningJobConfig
  {
  public:
    HyperParameterTuningJobConfig();
    HyperParameterTuningJobConfig(Aws::Utils::Json::JsonView jsonValue);
    HyperParameterTuningJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies how hyperparameter tuning chooses the combinations of
     * hyperparameter values to use for the training job it launches. To use the
     * Bayesian search stategy, set this to <code>Bayesian</code>. To randomly search,
     * set it to <code>Random</code>. For information about search strategies, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-how-it-works.html">How
     * Hyperparameter Tuning Works</a>.</p>
     */
    inline const HyperParameterTuningJobStrategyType& GetStrategy() const{ return m_strategy; }

    /**
     * <p>Specifies how hyperparameter tuning chooses the combinations of
     * hyperparameter values to use for the training job it launches. To use the
     * Bayesian search stategy, set this to <code>Bayesian</code>. To randomly search,
     * set it to <code>Random</code>. For information about search strategies, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-how-it-works.html">How
     * Hyperparameter Tuning Works</a>.</p>
     */
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }

    /**
     * <p>Specifies how hyperparameter tuning chooses the combinations of
     * hyperparameter values to use for the training job it launches. To use the
     * Bayesian search stategy, set this to <code>Bayesian</code>. To randomly search,
     * set it to <code>Random</code>. For information about search strategies, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-how-it-works.html">How
     * Hyperparameter Tuning Works</a>.</p>
     */
    inline void SetStrategy(const HyperParameterTuningJobStrategyType& value) { m_strategyHasBeenSet = true; m_strategy = value; }

    /**
     * <p>Specifies how hyperparameter tuning chooses the combinations of
     * hyperparameter values to use for the training job it launches. To use the
     * Bayesian search stategy, set this to <code>Bayesian</code>. To randomly search,
     * set it to <code>Random</code>. For information about search strategies, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-how-it-works.html">How
     * Hyperparameter Tuning Works</a>.</p>
     */
    inline void SetStrategy(HyperParameterTuningJobStrategyType&& value) { m_strategyHasBeenSet = true; m_strategy = std::move(value); }

    /**
     * <p>Specifies how hyperparameter tuning chooses the combinations of
     * hyperparameter values to use for the training job it launches. To use the
     * Bayesian search stategy, set this to <code>Bayesian</code>. To randomly search,
     * set it to <code>Random</code>. For information about search strategies, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-how-it-works.html">How
     * Hyperparameter Tuning Works</a>.</p>
     */
    inline HyperParameterTuningJobConfig& WithStrategy(const HyperParameterTuningJobStrategyType& value) { SetStrategy(value); return *this;}

    /**
     * <p>Specifies how hyperparameter tuning chooses the combinations of
     * hyperparameter values to use for the training job it launches. To use the
     * Bayesian search stategy, set this to <code>Bayesian</code>. To randomly search,
     * set it to <code>Random</code>. For information about search strategies, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-how-it-works.html">How
     * Hyperparameter Tuning Works</a>.</p>
     */
    inline HyperParameterTuningJobConfig& WithStrategy(HyperParameterTuningJobStrategyType&& value) { SetStrategy(std::move(value)); return *this;}


    /**
     * <p>The <a>HyperParameterTuningJobObjective</a> object that specifies the
     * objective metric for this tuning job.</p>
     */
    inline const HyperParameterTuningJobObjective& GetHyperParameterTuningJobObjective() const{ return m_hyperParameterTuningJobObjective; }

    /**
     * <p>The <a>HyperParameterTuningJobObjective</a> object that specifies the
     * objective metric for this tuning job.</p>
     */
    inline bool HyperParameterTuningJobObjectiveHasBeenSet() const { return m_hyperParameterTuningJobObjectiveHasBeenSet; }

    /**
     * <p>The <a>HyperParameterTuningJobObjective</a> object that specifies the
     * objective metric for this tuning job.</p>
     */
    inline void SetHyperParameterTuningJobObjective(const HyperParameterTuningJobObjective& value) { m_hyperParameterTuningJobObjectiveHasBeenSet = true; m_hyperParameterTuningJobObjective = value; }

    /**
     * <p>The <a>HyperParameterTuningJobObjective</a> object that specifies the
     * objective metric for this tuning job.</p>
     */
    inline void SetHyperParameterTuningJobObjective(HyperParameterTuningJobObjective&& value) { m_hyperParameterTuningJobObjectiveHasBeenSet = true; m_hyperParameterTuningJobObjective = std::move(value); }

    /**
     * <p>The <a>HyperParameterTuningJobObjective</a> object that specifies the
     * objective metric for this tuning job.</p>
     */
    inline HyperParameterTuningJobConfig& WithHyperParameterTuningJobObjective(const HyperParameterTuningJobObjective& value) { SetHyperParameterTuningJobObjective(value); return *this;}

    /**
     * <p>The <a>HyperParameterTuningJobObjective</a> object that specifies the
     * objective metric for this tuning job.</p>
     */
    inline HyperParameterTuningJobConfig& WithHyperParameterTuningJobObjective(HyperParameterTuningJobObjective&& value) { SetHyperParameterTuningJobObjective(std::move(value)); return *this;}


    /**
     * <p>The <a>ResourceLimits</a> object that specifies the maximum number of
     * training jobs and parallel training jobs for this tuning job.</p>
     */
    inline const ResourceLimits& GetResourceLimits() const{ return m_resourceLimits; }

    /**
     * <p>The <a>ResourceLimits</a> object that specifies the maximum number of
     * training jobs and parallel training jobs for this tuning job.</p>
     */
    inline bool ResourceLimitsHasBeenSet() const { return m_resourceLimitsHasBeenSet; }

    /**
     * <p>The <a>ResourceLimits</a> object that specifies the maximum number of
     * training jobs and parallel training jobs for this tuning job.</p>
     */
    inline void SetResourceLimits(const ResourceLimits& value) { m_resourceLimitsHasBeenSet = true; m_resourceLimits = value; }

    /**
     * <p>The <a>ResourceLimits</a> object that specifies the maximum number of
     * training jobs and parallel training jobs for this tuning job.</p>
     */
    inline void SetResourceLimits(ResourceLimits&& value) { m_resourceLimitsHasBeenSet = true; m_resourceLimits = std::move(value); }

    /**
     * <p>The <a>ResourceLimits</a> object that specifies the maximum number of
     * training jobs and parallel training jobs for this tuning job.</p>
     */
    inline HyperParameterTuningJobConfig& WithResourceLimits(const ResourceLimits& value) { SetResourceLimits(value); return *this;}

    /**
     * <p>The <a>ResourceLimits</a> object that specifies the maximum number of
     * training jobs and parallel training jobs for this tuning job.</p>
     */
    inline HyperParameterTuningJobConfig& WithResourceLimits(ResourceLimits&& value) { SetResourceLimits(std::move(value)); return *this;}


    /**
     * <p>The <a>ParameterRanges</a> object that specifies the ranges of
     * hyperparameters that this tuning job searches.</p>
     */
    inline const ParameterRanges& GetParameterRanges() const{ return m_parameterRanges; }

    /**
     * <p>The <a>ParameterRanges</a> object that specifies the ranges of
     * hyperparameters that this tuning job searches.</p>
     */
    inline bool ParameterRangesHasBeenSet() const { return m_parameterRangesHasBeenSet; }

    /**
     * <p>The <a>ParameterRanges</a> object that specifies the ranges of
     * hyperparameters that this tuning job searches.</p>
     */
    inline void SetParameterRanges(const ParameterRanges& value) { m_parameterRangesHasBeenSet = true; m_parameterRanges = value; }

    /**
     * <p>The <a>ParameterRanges</a> object that specifies the ranges of
     * hyperparameters that this tuning job searches.</p>
     */
    inline void SetParameterRanges(ParameterRanges&& value) { m_parameterRangesHasBeenSet = true; m_parameterRanges = std::move(value); }

    /**
     * <p>The <a>ParameterRanges</a> object that specifies the ranges of
     * hyperparameters that this tuning job searches.</p>
     */
    inline HyperParameterTuningJobConfig& WithParameterRanges(const ParameterRanges& value) { SetParameterRanges(value); return *this;}

    /**
     * <p>The <a>ParameterRanges</a> object that specifies the ranges of
     * hyperparameters that this tuning job searches.</p>
     */
    inline HyperParameterTuningJobConfig& WithParameterRanges(ParameterRanges&& value) { SetParameterRanges(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to use early stopping for training jobs launched by the
     * hyperparameter tuning job. This can be one of the following values (the default
     * value is <code>OFF</code>):</p> <dl> <dt>OFF</dt> <dd> <p>Training jobs launched
     * by the hyperparameter tuning job do not use early stopping.</p> </dd>
     * <dt>AUTO</dt> <dd> <p>Amazon SageMaker stops training jobs launched by the
     * hyperparameter tuning job when they are unlikely to perform better than
     * previously completed training jobs. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-early-stopping.html">Stop
     * Training Jobs Early</a>.</p> </dd> </dl>
     */
    inline const TrainingJobEarlyStoppingType& GetTrainingJobEarlyStoppingType() const{ return m_trainingJobEarlyStoppingType; }

    /**
     * <p>Specifies whether to use early stopping for training jobs launched by the
     * hyperparameter tuning job. This can be one of the following values (the default
     * value is <code>OFF</code>):</p> <dl> <dt>OFF</dt> <dd> <p>Training jobs launched
     * by the hyperparameter tuning job do not use early stopping.</p> </dd>
     * <dt>AUTO</dt> <dd> <p>Amazon SageMaker stops training jobs launched by the
     * hyperparameter tuning job when they are unlikely to perform better than
     * previously completed training jobs. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-early-stopping.html">Stop
     * Training Jobs Early</a>.</p> </dd> </dl>
     */
    inline bool TrainingJobEarlyStoppingTypeHasBeenSet() const { return m_trainingJobEarlyStoppingTypeHasBeenSet; }

    /**
     * <p>Specifies whether to use early stopping for training jobs launched by the
     * hyperparameter tuning job. This can be one of the following values (the default
     * value is <code>OFF</code>):</p> <dl> <dt>OFF</dt> <dd> <p>Training jobs launched
     * by the hyperparameter tuning job do not use early stopping.</p> </dd>
     * <dt>AUTO</dt> <dd> <p>Amazon SageMaker stops training jobs launched by the
     * hyperparameter tuning job when they are unlikely to perform better than
     * previously completed training jobs. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-early-stopping.html">Stop
     * Training Jobs Early</a>.</p> </dd> </dl>
     */
    inline void SetTrainingJobEarlyStoppingType(const TrainingJobEarlyStoppingType& value) { m_trainingJobEarlyStoppingTypeHasBeenSet = true; m_trainingJobEarlyStoppingType = value; }

    /**
     * <p>Specifies whether to use early stopping for training jobs launched by the
     * hyperparameter tuning job. This can be one of the following values (the default
     * value is <code>OFF</code>):</p> <dl> <dt>OFF</dt> <dd> <p>Training jobs launched
     * by the hyperparameter tuning job do not use early stopping.</p> </dd>
     * <dt>AUTO</dt> <dd> <p>Amazon SageMaker stops training jobs launched by the
     * hyperparameter tuning job when they are unlikely to perform better than
     * previously completed training jobs. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-early-stopping.html">Stop
     * Training Jobs Early</a>.</p> </dd> </dl>
     */
    inline void SetTrainingJobEarlyStoppingType(TrainingJobEarlyStoppingType&& value) { m_trainingJobEarlyStoppingTypeHasBeenSet = true; m_trainingJobEarlyStoppingType = std::move(value); }

    /**
     * <p>Specifies whether to use early stopping for training jobs launched by the
     * hyperparameter tuning job. This can be one of the following values (the default
     * value is <code>OFF</code>):</p> <dl> <dt>OFF</dt> <dd> <p>Training jobs launched
     * by the hyperparameter tuning job do not use early stopping.</p> </dd>
     * <dt>AUTO</dt> <dd> <p>Amazon SageMaker stops training jobs launched by the
     * hyperparameter tuning job when they are unlikely to perform better than
     * previously completed training jobs. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-early-stopping.html">Stop
     * Training Jobs Early</a>.</p> </dd> </dl>
     */
    inline HyperParameterTuningJobConfig& WithTrainingJobEarlyStoppingType(const TrainingJobEarlyStoppingType& value) { SetTrainingJobEarlyStoppingType(value); return *this;}

    /**
     * <p>Specifies whether to use early stopping for training jobs launched by the
     * hyperparameter tuning job. This can be one of the following values (the default
     * value is <code>OFF</code>):</p> <dl> <dt>OFF</dt> <dd> <p>Training jobs launched
     * by the hyperparameter tuning job do not use early stopping.</p> </dd>
     * <dt>AUTO</dt> <dd> <p>Amazon SageMaker stops training jobs launched by the
     * hyperparameter tuning job when they are unlikely to perform better than
     * previously completed training jobs. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-early-stopping.html">Stop
     * Training Jobs Early</a>.</p> </dd> </dl>
     */
    inline HyperParameterTuningJobConfig& WithTrainingJobEarlyStoppingType(TrainingJobEarlyStoppingType&& value) { SetTrainingJobEarlyStoppingType(std::move(value)); return *this;}

  private:

    HyperParameterTuningJobStrategyType m_strategy;
    bool m_strategyHasBeenSet;

    HyperParameterTuningJobObjective m_hyperParameterTuningJobObjective;
    bool m_hyperParameterTuningJobObjectiveHasBeenSet;

    ResourceLimits m_resourceLimits;
    bool m_resourceLimitsHasBeenSet;

    ParameterRanges m_parameterRanges;
    bool m_parameterRangesHasBeenSet;

    TrainingJobEarlyStoppingType m_trainingJobEarlyStoppingType;
    bool m_trainingJobEarlyStoppingTypeHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
