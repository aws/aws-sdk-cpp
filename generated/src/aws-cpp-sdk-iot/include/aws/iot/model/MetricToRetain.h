﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/MetricDimension.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The metric you want to retain. Dimensions are optional.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/MetricToRetain">AWS
   * API Reference</a></p>
   */
  class MetricToRetain
  {
  public:
    AWS_IOT_API MetricToRetain();
    AWS_IOT_API MetricToRetain(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API MetricToRetain& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>What is measured by the behavior.</p>
     */
    inline const Aws::String& GetMetric() const{ return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    inline void SetMetric(const Aws::String& value) { m_metricHasBeenSet = true; m_metric = value; }
    inline void SetMetric(Aws::String&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }
    inline void SetMetric(const char* value) { m_metricHasBeenSet = true; m_metric.assign(value); }
    inline MetricToRetain& WithMetric(const Aws::String& value) { SetMetric(value); return *this;}
    inline MetricToRetain& WithMetric(Aws::String&& value) { SetMetric(std::move(value)); return *this;}
    inline MetricToRetain& WithMetric(const char* value) { SetMetric(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimension of a metric. This can't be used with custom metrics.</p>
     */
    inline const MetricDimension& GetMetricDimension() const{ return m_metricDimension; }
    inline bool MetricDimensionHasBeenSet() const { return m_metricDimensionHasBeenSet; }
    inline void SetMetricDimension(const MetricDimension& value) { m_metricDimensionHasBeenSet = true; m_metricDimension = value; }
    inline void SetMetricDimension(MetricDimension&& value) { m_metricDimensionHasBeenSet = true; m_metricDimension = std::move(value); }
    inline MetricToRetain& WithMetricDimension(const MetricDimension& value) { SetMetricDimension(value); return *this;}
    inline MetricToRetain& WithMetricDimension(MetricDimension&& value) { SetMetricDimension(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value indicates exporting metrics related to the <code>MetricToRetain
     * </code> when it's true.</p>
     */
    inline bool GetExportMetric() const{ return m_exportMetric; }
    inline bool ExportMetricHasBeenSet() const { return m_exportMetricHasBeenSet; }
    inline void SetExportMetric(bool value) { m_exportMetricHasBeenSet = true; m_exportMetric = value; }
    inline MetricToRetain& WithExportMetric(bool value) { SetExportMetric(value); return *this;}
    ///@}
  private:

    Aws::String m_metric;
    bool m_metricHasBeenSet = false;

    MetricDimension m_metricDimension;
    bool m_metricDimensionHasBeenSet = false;

    bool m_exportMetric;
    bool m_exportMetricHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
