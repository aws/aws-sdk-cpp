/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/MetricDataQuery.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>A structure that contains metric data queries and time range information that
 * provides context for audit findings through relevant performance
 * metrics.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/MetricGraph">AWS
 * API Reference</a></p>
 */
class MetricGraph {
 public:
  AWS_APPLICATIONSIGNALS_API MetricGraph() = default;
  AWS_APPLICATIONSIGNALS_API MetricGraph(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API MetricGraph& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An array of metric data queries that define the metrics to be retrieved and
   * analyzed as part of the audit finding context.</p>
   */
  inline const Aws::Vector<MetricDataQuery>& GetMetricDataQueries() const { return m_metricDataQueries; }
  inline bool MetricDataQueriesHasBeenSet() const { return m_metricDataQueriesHasBeenSet; }
  template <typename MetricDataQueriesT = Aws::Vector<MetricDataQuery>>
  void SetMetricDataQueries(MetricDataQueriesT&& value) {
    m_metricDataQueriesHasBeenSet = true;
    m_metricDataQueries = std::forward<MetricDataQueriesT>(value);
  }
  template <typename MetricDataQueriesT = Aws::Vector<MetricDataQuery>>
  MetricGraph& WithMetricDataQueries(MetricDataQueriesT&& value) {
    SetMetricDataQueries(std::forward<MetricDataQueriesT>(value));
    return *this;
  }
  template <typename MetricDataQueriesT = MetricDataQuery>
  MetricGraph& AddMetricDataQueries(MetricDataQueriesT&& value) {
    m_metricDataQueriesHasBeenSet = true;
    m_metricDataQueries.emplace_back(std::forward<MetricDataQueriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start time for the metric data included in this graph. When used in a raw
   * HTTP Query API, it is formatted as epoch time in seconds.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  MetricGraph& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end time for the metric data included in this graph. When used in a raw
   * HTTP Query API, it is formatted as epoch time in seconds.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  MetricGraph& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MetricDataQuery> m_metricDataQueries;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};
  bool m_metricDataQueriesHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
