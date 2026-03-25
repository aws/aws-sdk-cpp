/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Identifies the metric source for SLOs on resources other than Application
 * Signals services.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/MetricSource">AWS
 * API Reference</a></p>
 */
class MetricSource {
 public:
  AWS_APPLICATIONSIGNALS_API MetricSource() = default;
  AWS_APPLICATIONSIGNALS_API MetricSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API MetricSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Key attributes that identify the metric source.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetricSourceKeyAttributes() const { return m_metricSourceKeyAttributes; }
  inline bool MetricSourceKeyAttributesHasBeenSet() const { return m_metricSourceKeyAttributesHasBeenSet; }
  template <typename MetricSourceKeyAttributesT = Aws::Map<Aws::String, Aws::String>>
  void SetMetricSourceKeyAttributes(MetricSourceKeyAttributesT&& value) {
    m_metricSourceKeyAttributesHasBeenSet = true;
    m_metricSourceKeyAttributes = std::forward<MetricSourceKeyAttributesT>(value);
  }
  template <typename MetricSourceKeyAttributesT = Aws::Map<Aws::String, Aws::String>>
  MetricSource& WithMetricSourceKeyAttributes(MetricSourceKeyAttributesT&& value) {
    SetMetricSourceKeyAttributes(std::forward<MetricSourceKeyAttributesT>(value));
    return *this;
  }
  template <typename MetricSourceKeyAttributesKeyT = Aws::String, typename MetricSourceKeyAttributesValueT = Aws::String>
  MetricSource& AddMetricSourceKeyAttributes(MetricSourceKeyAttributesKeyT&& key, MetricSourceKeyAttributesValueT&& value) {
    m_metricSourceKeyAttributesHasBeenSet = true;
    m_metricSourceKeyAttributes.emplace(std::forward<MetricSourceKeyAttributesKeyT>(key),
                                        std::forward<MetricSourceKeyAttributesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional attributes for the metric source.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetricSourceAttributes() const { return m_metricSourceAttributes; }
  inline bool MetricSourceAttributesHasBeenSet() const { return m_metricSourceAttributesHasBeenSet; }
  template <typename MetricSourceAttributesT = Aws::Map<Aws::String, Aws::String>>
  void SetMetricSourceAttributes(MetricSourceAttributesT&& value) {
    m_metricSourceAttributesHasBeenSet = true;
    m_metricSourceAttributes = std::forward<MetricSourceAttributesT>(value);
  }
  template <typename MetricSourceAttributesT = Aws::Map<Aws::String, Aws::String>>
  MetricSource& WithMetricSourceAttributes(MetricSourceAttributesT&& value) {
    SetMetricSourceAttributes(std::forward<MetricSourceAttributesT>(value));
    return *this;
  }
  template <typename MetricSourceAttributesKeyT = Aws::String, typename MetricSourceAttributesValueT = Aws::String>
  MetricSource& AddMetricSourceAttributes(MetricSourceAttributesKeyT&& key, MetricSourceAttributesValueT&& value) {
    m_metricSourceAttributesHasBeenSet = true;
    m_metricSourceAttributes.emplace(std::forward<MetricSourceAttributesKeyT>(key), std::forward<MetricSourceAttributesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_metricSourceKeyAttributes;

  Aws::Map<Aws::String, Aws::String> m_metricSourceAttributes;
  bool m_metricSourceKeyAttributesHasBeenSet = false;
  bool m_metricSourceAttributesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
