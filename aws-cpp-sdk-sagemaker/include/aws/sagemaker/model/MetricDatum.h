﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLMetricEnum.h>
#include <aws/sagemaker/model/MetricSetSource.h>
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
   * <p>Information about the metric for a candidate produced by an AutoML
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MetricDatum">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API MetricDatum
  {
  public:
    MetricDatum();
    MetricDatum(Aws::Utils::Json::JsonView jsonValue);
    MetricDatum& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline MetricDatum& WithMetricName(const AutoMLMetricEnum& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline MetricDatum& WithMetricName(AutoMLMetricEnum&& value) { SetMetricName(std::move(value)); return *this;}


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
    inline MetricDatum& WithValue(double value) { SetValue(value); return *this;}


    /**
     * <p>The dataset split from which the AutoML job produced the metric.</p>
     */
    inline const MetricSetSource& GetSet() const{ return m_set; }

    /**
     * <p>The dataset split from which the AutoML job produced the metric.</p>
     */
    inline bool SetHasBeenSet() const { return m_setHasBeenSet; }

    /**
     * <p>The dataset split from which the AutoML job produced the metric.</p>
     */
    inline void SetSet(const MetricSetSource& value) { m_setHasBeenSet = true; m_set = value; }

    /**
     * <p>The dataset split from which the AutoML job produced the metric.</p>
     */
    inline void SetSet(MetricSetSource&& value) { m_setHasBeenSet = true; m_set = std::move(value); }

    /**
     * <p>The dataset split from which the AutoML job produced the metric.</p>
     */
    inline MetricDatum& WithSet(const MetricSetSource& value) { SetSet(value); return *this;}

    /**
     * <p>The dataset split from which the AutoML job produced the metric.</p>
     */
    inline MetricDatum& WithSet(MetricSetSource&& value) { SetSet(std::move(value)); return *this;}

  private:

    AutoMLMetricEnum m_metricName;
    bool m_metricNameHasBeenSet;

    double m_value;
    bool m_valueHasBeenSet;

    MetricSetSource m_set;
    bool m_setHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
