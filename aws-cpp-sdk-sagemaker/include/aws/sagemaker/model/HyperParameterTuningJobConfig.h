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
     * <p>Specifies the search strategy for hyperparameters. Currently, the only valid
     * value is <code>Bayesian</code>.</p>
     */
    inline const HyperParameterTuningJobStrategyType& GetStrategy() const{ return m_strategy; }

    /**
     * <p>Specifies the search strategy for hyperparameters. Currently, the only valid
     * value is <code>Bayesian</code>.</p>
     */
    inline void SetStrategy(const HyperParameterTuningJobStrategyType& value) { m_strategyHasBeenSet = true; m_strategy = value; }

    /**
     * <p>Specifies the search strategy for hyperparameters. Currently, the only valid
     * value is <code>Bayesian</code>.</p>
     */
    inline void SetStrategy(HyperParameterTuningJobStrategyType&& value) { m_strategyHasBeenSet = true; m_strategy = std::move(value); }

    /**
     * <p>Specifies the search strategy for hyperparameters. Currently, the only valid
     * value is <code>Bayesian</code>.</p>
     */
    inline HyperParameterTuningJobConfig& WithStrategy(const HyperParameterTuningJobStrategyType& value) { SetStrategy(value); return *this;}

    /**
     * <p>Specifies the search strategy for hyperparameters. Currently, the only valid
     * value is <code>Bayesian</code>.</p>
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

  private:

    HyperParameterTuningJobStrategyType m_strategy;
    bool m_strategyHasBeenSet;

    HyperParameterTuningJobObjective m_hyperParameterTuningJobObjective;
    bool m_hyperParameterTuningJobObjectiveHasBeenSet;

    ResourceLimits m_resourceLimits;
    bool m_resourceLimitsHasBeenSet;

    ParameterRanges m_parameterRanges;
    bool m_parameterRangesHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
