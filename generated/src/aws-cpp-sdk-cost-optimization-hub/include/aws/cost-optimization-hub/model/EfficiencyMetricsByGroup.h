/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/MetricsByTime.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CostOptimizationHub {
namespace Model {

/**
 * <p>Contains cost efficiency metrics for a specific group over time. The group is
 * defined by the grouping dimension specified in the request, such as account ID,
 * Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/EfficiencyMetricsByGroup">AWS
 * API Reference</a></p>
 */
class EfficiencyMetricsByGroup {
 public:
  AWS_COSTOPTIMIZATIONHUB_API EfficiencyMetricsByGroup() = default;
  AWS_COSTOPTIMIZATIONHUB_API EfficiencyMetricsByGroup(Aws::Utils::Json::JsonView jsonValue);
  AWS_COSTOPTIMIZATIONHUB_API EfficiencyMetricsByGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of time-series data points containing efficiency metrics for this
   * group. Each data point includes an efficiency score, estimated savings,
   * spending, and a timestamp corresponding to the specified granularity. This field
   * is null when efficiency metrics cannot be calculated for the group, in which
   * case the message field provides an explanation.</p>
   */
  inline const Aws::Vector<MetricsByTime>& GetMetricsByTime() const { return m_metricsByTime; }
  inline bool MetricsByTimeHasBeenSet() const { return m_metricsByTimeHasBeenSet; }
  template <typename MetricsByTimeT = Aws::Vector<MetricsByTime>>
  void SetMetricsByTime(MetricsByTimeT&& value) {
    m_metricsByTimeHasBeenSet = true;
    m_metricsByTime = std::forward<MetricsByTimeT>(value);
  }
  template <typename MetricsByTimeT = Aws::Vector<MetricsByTime>>
  EfficiencyMetricsByGroup& WithMetricsByTime(MetricsByTimeT&& value) {
    SetMetricsByTime(std::forward<MetricsByTimeT>(value));
    return *this;
  }
  template <typename MetricsByTimeT = MetricsByTime>
  EfficiencyMetricsByGroup& AddMetricsByTime(MetricsByTimeT&& value) {
    m_metricsByTimeHasBeenSet = true;
    m_metricsByTime.emplace_back(std::forward<MetricsByTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of the grouping dimension for this set of metrics. For example, if
   * grouped by account ID, this field contains the account ID. If no grouping is
   * specified, this field is empty.</p>
   */
  inline const Aws::String& GetGroup() const { return m_group; }
  inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
  template <typename GroupT = Aws::String>
  void SetGroup(GroupT&& value) {
    m_groupHasBeenSet = true;
    m_group = std::forward<GroupT>(value);
  }
  template <typename GroupT = Aws::String>
  EfficiencyMetricsByGroup& WithGroup(GroupT&& value) {
    SetGroup(std::forward<GroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An explanation of why efficiency metrics could not be calculated for this
   * group when the metricsByTime field is null. Common reasons include insufficient
   * or inconclusive cost and usage data during the specified time period. This field
   * is null or empty when metrics are successfully calculated.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  EfficiencyMetricsByGroup& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MetricsByTime> m_metricsByTime;

  Aws::String m_group;

  Aws::String m_message;
  bool m_metricsByTimeHasBeenSet = false;
  bool m_groupHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace CostOptimizationHub
}  // namespace Aws
