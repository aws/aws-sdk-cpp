/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The best candidate result from an AutoML training job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FinalAutoMLJobObjectiveMetric">AWS
   * API Reference</a></p>
   */
  class FinalAutoMLJobObjectiveMetric
  {
  public:
    AWS_SAGEMAKER_API FinalAutoMLJobObjectiveMetric();
    AWS_SAGEMAKER_API FinalAutoMLJobObjectiveMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FinalAutoMLJobObjectiveMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of metric with the best result.</p>
     */
    inline const AutoMLJobObjectiveType& GetType() const{ return m_type; }

    /**
     * <p>The type of metric with the best result.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of metric with the best result.</p>
     */
    inline void SetType(const AutoMLJobObjectiveType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of metric with the best result.</p>
     */
    inline void SetType(AutoMLJobObjectiveType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of metric with the best result.</p>
     */
    inline FinalAutoMLJobObjectiveMetric& WithType(const AutoMLJobObjectiveType& value) { SetType(value); return *this;}

    /**
     * <p>The type of metric with the best result.</p>
     */
    inline FinalAutoMLJobObjectiveMetric& WithType(AutoMLJobObjectiveType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the metric with the best result. For a description of the
     * possible objective metrics, see <a>AutoMLJobObjective$MetricName</a>.</p>
     */
    inline const AutoMLMetricEnum& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric with the best result. For a description of the
     * possible objective metrics, see <a>AutoMLJobObjective$MetricName</a>.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the metric with the best result. For a description of the
     * possible objective metrics, see <a>AutoMLJobObjective$MetricName</a>.</p>
     */
    inline void SetMetricName(const AutoMLMetricEnum& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metric with the best result. For a description of the
     * possible objective metrics, see <a>AutoMLJobObjective$MetricName</a>.</p>
     */
    inline void SetMetricName(AutoMLMetricEnum&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the metric with the best result. For a description of the
     * possible objective metrics, see <a>AutoMLJobObjective$MetricName</a>.</p>
     */
    inline FinalAutoMLJobObjectiveMetric& WithMetricName(const AutoMLMetricEnum& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric with the best result. For a description of the
     * possible objective metrics, see <a>AutoMLJobObjective$MetricName</a>.</p>
     */
    inline FinalAutoMLJobObjectiveMetric& WithMetricName(AutoMLMetricEnum&& value) { SetMetricName(std::move(value)); return *this;}


    /**
     * <p>The value of the metric with the best result.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value of the metric with the best result.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the metric with the best result.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the metric with the best result.</p>
     */
    inline FinalAutoMLJobObjectiveMetric& WithValue(double value) { SetValue(value); return *this;}

  private:

    AutoMLJobObjectiveType m_type;
    bool m_typeHasBeenSet = false;

    AutoMLMetricEnum m_metricName;
    bool m_metricNameHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
