/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/CurrentMetricName.h>
#include <aws/connect/model/Unit.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Contains information about a real-time metric. For a description of each
 * metric, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html">Metrics
 * definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
 *  <p>Only one of either the Name or MetricId is required.</p>
 * <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CurrentMetric">AWS
 * API Reference</a></p>
 */
class CurrentMetric {
 public:
  AWS_CONNECT_API CurrentMetric() = default;
  AWS_CONNECT_API CurrentMetric(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API CurrentMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the metric.</p>
   */
  inline CurrentMetricName GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  inline void SetName(CurrentMetricName value) {
    m_nameHasBeenSet = true;
    m_name = value;
  }
  inline CurrentMetric& WithName(CurrentMetricName value) {
    SetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Out of the box current metrics or custom metrics can be referenced via this
   * field. This field is a valid AWS Connect Arn or a UUID.</p>
   */
  inline const Aws::String& GetMetricId() const { return m_metricId; }
  inline bool MetricIdHasBeenSet() const { return m_metricIdHasBeenSet; }
  template <typename MetricIdT = Aws::String>
  void SetMetricId(MetricIdT&& value) {
    m_metricIdHasBeenSet = true;
    m_metricId = std::forward<MetricIdT>(value);
  }
  template <typename MetricIdT = Aws::String>
  CurrentMetric& WithMetricId(MetricIdT&& value) {
    SetMetricId(std::forward<MetricIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *  <p>The Unit parameter is not supported for custom metrics.</p>
   * <p>The unit for the metric.</p>
   */
  inline Unit GetUnit() const { return m_unit; }
  inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
  inline void SetUnit(Unit value) {
    m_unitHasBeenSet = true;
    m_unit = value;
  }
  inline CurrentMetric& WithUnit(Unit value) {
    SetUnit(value);
    return *this;
  }
  ///@}
 private:
  CurrentMetricName m_name{CurrentMetricName::NOT_SET};

  Aws::String m_metricId;

  Unit m_unit{Unit::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_metricIdHasBeenSet = false;
  bool m_unitHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
