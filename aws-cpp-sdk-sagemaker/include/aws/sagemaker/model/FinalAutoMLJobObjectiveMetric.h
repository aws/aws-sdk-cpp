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
#include <aws/sagemaker/model/AutoMLJobObjectiveType.h>
#include <aws/sagemaker/model/AutoMLMetricEnum.h>
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
   * <p>The candidate result from a job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FinalAutoMLJobObjectiveMetric">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API FinalAutoMLJobObjectiveMetric
  {
  public:
    FinalAutoMLJobObjectiveMetric();
    FinalAutoMLJobObjectiveMetric(Aws::Utils::Json::JsonView jsonValue);
    FinalAutoMLJobObjectiveMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metric type used.</p>
     */
    inline const AutoMLJobObjectiveType& GetType() const{ return m_type; }

    /**
     * <p>The metric type used.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The metric type used.</p>
     */
    inline void SetType(const AutoMLJobObjectiveType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The metric type used.</p>
     */
    inline void SetType(AutoMLJobObjectiveType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The metric type used.</p>
     */
    inline FinalAutoMLJobObjectiveMetric& WithType(const AutoMLJobObjectiveType& value) { SetType(value); return *this;}

    /**
     * <p>The metric type used.</p>
     */
    inline FinalAutoMLJobObjectiveMetric& WithType(AutoMLJobObjectiveType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the metric.</p>
     */
    inline const AutoMLMetricEnum& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(const AutoMLMetricEnum& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(AutoMLMetricEnum&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline FinalAutoMLJobObjectiveMetric& WithMetricName(const AutoMLMetricEnum& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline FinalAutoMLJobObjectiveMetric& WithMetricName(AutoMLMetricEnum&& value) { SetMetricName(std::move(value)); return *this;}


    /**
     * <p>The value of the metric.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value of the metric.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the metric.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the metric.</p>
     */
    inline FinalAutoMLJobObjectiveMetric& WithValue(double value) { SetValue(value); return *this;}

  private:

    AutoMLJobObjectiveType m_type;
    bool m_typeHasBeenSet;

    AutoMLMetricEnum m_metricName;
    bool m_metricNameHasBeenSet;

    double m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
