/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/CurrentMetric.h>
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
   * <p>Contains the data for a real-time metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CurrentMetricData">AWS
   * API Reference</a></p>
   */
  class CurrentMetricData
  {
  public:
    AWS_CONNECT_API CurrentMetricData();
    AWS_CONNECT_API CurrentMetricData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API CurrentMetricData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the metric.</p>
     */
    inline const CurrentMetric& GetMetric() const{ return m_metric; }

    /**
     * <p>Information about the metric.</p>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>Information about the metric.</p>
     */
    inline void SetMetric(const CurrentMetric& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>Information about the metric.</p>
     */
    inline void SetMetric(CurrentMetric&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>Information about the metric.</p>
     */
    inline CurrentMetricData& WithMetric(const CurrentMetric& value) { SetMetric(value); return *this;}

    /**
     * <p>Information about the metric.</p>
     */
    inline CurrentMetricData& WithMetric(CurrentMetric&& value) { SetMetric(std::move(value)); return *this;}


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
    inline CurrentMetricData& WithValue(double value) { SetValue(value); return *this;}

  private:

    CurrentMetric m_metric;
    bool m_metricHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
