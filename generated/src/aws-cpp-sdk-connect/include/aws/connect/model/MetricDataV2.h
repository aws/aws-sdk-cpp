/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/MetricV2.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains the name, thresholds, and metric filters.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MetricDataV2">AWS
   * API Reference</a></p>
   */
  class MetricDataV2
  {
  public:
    AWS_CONNECT_API MetricDataV2();
    AWS_CONNECT_API MetricDataV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API MetricDataV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metric name, thresholds, and metric filters of the returned metric.</p>
     */
    inline const MetricV2& GetMetric() const{ return m_metric; }

    /**
     * <p>The metric name, thresholds, and metric filters of the returned metric.</p>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>The metric name, thresholds, and metric filters of the returned metric.</p>
     */
    inline void SetMetric(const MetricV2& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>The metric name, thresholds, and metric filters of the returned metric.</p>
     */
    inline void SetMetric(MetricV2&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>The metric name, thresholds, and metric filters of the returned metric.</p>
     */
    inline MetricDataV2& WithMetric(const MetricV2& value) { SetMetric(value); return *this;}

    /**
     * <p>The metric name, thresholds, and metric filters of the returned metric.</p>
     */
    inline MetricDataV2& WithMetric(MetricV2&& value) { SetMetric(std::move(value)); return *this;}


    /**
     * <p>The corresponding value of the metric returned in the response.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The corresponding value of the metric returned in the response.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The corresponding value of the metric returned in the response.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The corresponding value of the metric returned in the response.</p>
     */
    inline MetricDataV2& WithValue(double value) { SetValue(value); return *this;}

  private:

    MetricV2 m_metric;
    bool m_metricHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
