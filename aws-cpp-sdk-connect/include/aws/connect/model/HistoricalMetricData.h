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
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/HistoricalMetric.h>
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
   * <p>A <code>HistoricalMetricData</code> object than contains a
   * <code>Metric</code> and a <code>Value</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HistoricalMetricData">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API HistoricalMetricData
  {
  public:
    HistoricalMetricData();
    HistoricalMetricData(Aws::Utils::Json::JsonView jsonValue);
    HistoricalMetricData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <code>HistoricalMetric</code> object.</p>
     */
    inline const HistoricalMetric& GetMetric() const{ return m_metric; }

    /**
     * <p>A <code>HistoricalMetric</code> object.</p>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>A <code>HistoricalMetric</code> object.</p>
     */
    inline void SetMetric(const HistoricalMetric& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>A <code>HistoricalMetric</code> object.</p>
     */
    inline void SetMetric(HistoricalMetric&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>A <code>HistoricalMetric</code> object.</p>
     */
    inline HistoricalMetricData& WithMetric(const HistoricalMetric& value) { SetMetric(value); return *this;}

    /**
     * <p>A <code>HistoricalMetric</code> object.</p>
     */
    inline HistoricalMetricData& WithMetric(HistoricalMetric&& value) { SetMetric(std::move(value)); return *this;}


    /**
     * <p>The <code>Value</code> of the metric.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The <code>Value</code> of the metric.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The <code>Value</code> of the metric.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The <code>Value</code> of the metric.</p>
     */
    inline HistoricalMetricData& WithValue(double value) { SetValue(value); return *this;}

  private:

    HistoricalMetric m_metric;
    bool m_metricHasBeenSet;

    double m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
