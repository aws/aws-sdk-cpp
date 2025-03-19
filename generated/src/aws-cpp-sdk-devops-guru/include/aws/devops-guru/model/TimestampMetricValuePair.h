/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p>A pair that contains metric values at the respective timestamp.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/TimestampMetricValuePair">AWS
   * API Reference</a></p>
   */
  class TimestampMetricValuePair
  {
  public:
    AWS_DEVOPSGURU_API TimestampMetricValuePair() = default;
    AWS_DEVOPSGURU_API TimestampMetricValuePair(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API TimestampMetricValuePair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>Timestamp</code> that specifies the time the event occurred. </p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    TimestampMetricValuePair& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Value of the anomalous metric data point at respective Timestamp.</p>
     */
    inline double GetMetricValue() const { return m_metricValue; }
    inline bool MetricValueHasBeenSet() const { return m_metricValueHasBeenSet; }
    inline void SetMetricValue(double value) { m_metricValueHasBeenSet = true; m_metricValue = value; }
    inline TimestampMetricValuePair& WithMetricValue(double value) { SetMetricValue(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    double m_metricValue{0.0};
    bool m_metricValueHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
