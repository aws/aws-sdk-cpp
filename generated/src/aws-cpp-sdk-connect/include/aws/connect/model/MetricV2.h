/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/MetricFilterV2.h>
#include <aws/connect/model/ThresholdV2.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Contains information about the metric.</p>  <p>Only one of either
 * the Name or MetricId is required.</p> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MetricV2">AWS
 * API Reference</a></p>
 */
class MetricV2 {
 public:
  AWS_CONNECT_API MetricV2() = default;
  AWS_CONNECT_API MetricV2(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API MetricV2& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the metric.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  MetricV2& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains information about the threshold for service level metrics.</p>
   */
  inline const Aws::Vector<ThresholdV2>& GetThreshold() const { return m_threshold; }
  inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
  template <typename ThresholdT = Aws::Vector<ThresholdV2>>
  void SetThreshold(ThresholdT&& value) {
    m_thresholdHasBeenSet = true;
    m_threshold = std::forward<ThresholdT>(value);
  }
  template <typename ThresholdT = Aws::Vector<ThresholdV2>>
  MetricV2& WithThreshold(ThresholdT&& value) {
    SetThreshold(std::forward<ThresholdT>(value));
    return *this;
  }
  template <typename ThresholdT = ThresholdV2>
  MetricV2& AddThreshold(ThresholdT&& value) {
    m_thresholdHasBeenSet = true;
    m_threshold.emplace_back(std::forward<ThresholdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Historical metrics or custom metrics can be referenced via this field. This
   * field is a valid Amazon Connect Arn or a UUID</p>
   */
  inline const Aws::String& GetMetricId() const { return m_metricId; }
  inline bool MetricIdHasBeenSet() const { return m_metricIdHasBeenSet; }
  template <typename MetricIdT = Aws::String>
  void SetMetricId(MetricIdT&& value) {
    m_metricIdHasBeenSet = true;
    m_metricId = std::forward<MetricIdT>(value);
  }
  template <typename MetricIdT = Aws::String>
  MetricV2& WithMetricId(MetricIdT&& value) {
    SetMetricId(std::forward<MetricIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains the filters to be used when returning data.</p>
   */
  inline const Aws::Vector<MetricFilterV2>& GetMetricFilters() const { return m_metricFilters; }
  inline bool MetricFiltersHasBeenSet() const { return m_metricFiltersHasBeenSet; }
  template <typename MetricFiltersT = Aws::Vector<MetricFilterV2>>
  void SetMetricFilters(MetricFiltersT&& value) {
    m_metricFiltersHasBeenSet = true;
    m_metricFilters = std::forward<MetricFiltersT>(value);
  }
  template <typename MetricFiltersT = Aws::Vector<MetricFilterV2>>
  MetricV2& WithMetricFilters(MetricFiltersT&& value) {
    SetMetricFilters(std::forward<MetricFiltersT>(value));
    return *this;
  }
  template <typename MetricFiltersT = MetricFilterV2>
  MetricV2& AddMetricFilters(MetricFiltersT&& value) {
    m_metricFiltersHasBeenSet = true;
    m_metricFilters.emplace_back(std::forward<MetricFiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Vector<ThresholdV2> m_threshold;

  Aws::String m_metricId;

  Aws::Vector<MetricFilterV2> m_metricFilters;
  bool m_nameHasBeenSet = false;
  bool m_thresholdHasBeenSet = false;
  bool m_metricIdHasBeenSet = false;
  bool m_metricFiltersHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
