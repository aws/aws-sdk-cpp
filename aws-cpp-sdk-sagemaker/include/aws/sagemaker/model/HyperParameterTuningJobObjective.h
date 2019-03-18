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
#include <aws/sagemaker/model/HyperParameterTuningJobObjectiveType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Defines the objective metric for a hyperparameter tuning job. Hyperparameter
   * tuning uses the value of this metric to evaluate the training jobs it launches,
   * and returns the training job that results in either the highest or lowest value
   * for this metric, depending on the value you specify for the <code>Type</code>
   * parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterTuningJobObjective">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API HyperParameterTuningJobObjective
  {
  public:
    HyperParameterTuningJobObjective();
    HyperParameterTuningJobObjective(Aws::Utils::Json::JsonView jsonValue);
    HyperParameterTuningJobObjective& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether to minimize or maximize the objective metric.</p>
     */
    inline const HyperParameterTuningJobObjectiveType& GetType() const{ return m_type; }

    /**
     * <p>Whether to minimize or maximize the objective metric.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Whether to minimize or maximize the objective metric.</p>
     */
    inline void SetType(const HyperParameterTuningJobObjectiveType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Whether to minimize or maximize the objective metric.</p>
     */
    inline void SetType(HyperParameterTuningJobObjectiveType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Whether to minimize or maximize the objective metric.</p>
     */
    inline HyperParameterTuningJobObjective& WithType(const HyperParameterTuningJobObjectiveType& value) { SetType(value); return *this;}

    /**
     * <p>Whether to minimize or maximize the objective metric.</p>
     */
    inline HyperParameterTuningJobObjective& WithType(HyperParameterTuningJobObjectiveType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the metric to use for the objective metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric to use for the objective metric.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the metric to use for the objective metric.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metric to use for the objective metric.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the metric to use for the objective metric.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the metric to use for the objective metric.</p>
     */
    inline HyperParameterTuningJobObjective& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric to use for the objective metric.</p>
     */
    inline HyperParameterTuningJobObjective& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric to use for the objective metric.</p>
     */
    inline HyperParameterTuningJobObjective& WithMetricName(const char* value) { SetMetricName(value); return *this;}

  private:

    HyperParameterTuningJobObjectiveType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
