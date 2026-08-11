/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/MetricFilter.h>
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
 * <p>Represents a component metric referenced in a custom metric calculation
 * formula.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CalculationComponent">AWS
 * API Reference</a></p>
 */
class CalculationComponent {
 public:
  AWS_CONNECT_API CalculationComponent() = default;
  AWS_CONNECT_API CalculationComponent(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API CalculationComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The alias used to reference this component in the calculation expression.</p>
   */
  inline const Aws::String& GetAlias() const { return m_alias; }
  inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
  template <typename AliasT = Aws::String>
  void SetAlias(AliasT&& value) {
    m_aliasHasBeenSet = true;
    m_alias = std::forward<AliasT>(value);
  }
  template <typename AliasT = Aws::String>
  CalculationComponent& WithAlias(AliasT&& value) {
    SetAlias(std::forward<AliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of an AWS-managed metric used in this calculation component (for
   * example, <code>CONTACTS_HANDLED</code>). Mutually exclusive with
   * <code>MetricId</code>.</p>
   */
  inline const Aws::String& GetMetricName() const { return m_metricName; }
  inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
  template <typename MetricNameT = Aws::String>
  void SetMetricName(MetricNameT&& value) {
    m_metricNameHasBeenSet = true;
    m_metricName = std::forward<MetricNameT>(value);
  }
  template <typename MetricNameT = Aws::String>
  CalculationComponent& WithMetricName(MetricNameT&& value) {
    SetMetricName(std::forward<MetricNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of an AWS-managed metric used in this calculation component. Mutually
   * exclusive with <code>MetricName</code>.</p>
   */
  inline const Aws::String& GetMetricId() const { return m_metricId; }
  inline bool MetricIdHasBeenSet() const { return m_metricIdHasBeenSet; }
  template <typename MetricIdT = Aws::String>
  void SetMetricId(MetricIdT&& value) {
    m_metricIdHasBeenSet = true;
    m_metricId = std::forward<MetricIdT>(value);
  }
  template <typename MetricIdT = Aws::String>
  CalculationComponent& WithMetricId(MetricIdT&& value) {
    SetMetricId(std::forward<MetricIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filters applied to the calculation component.</p>
   */
  inline const Aws::Vector<MetricFilter>& GetMetricFilters() const { return m_metricFilters; }
  inline bool MetricFiltersHasBeenSet() const { return m_metricFiltersHasBeenSet; }
  template <typename MetricFiltersT = Aws::Vector<MetricFilter>>
  void SetMetricFilters(MetricFiltersT&& value) {
    m_metricFiltersHasBeenSet = true;
    m_metricFilters = std::forward<MetricFiltersT>(value);
  }
  template <typename MetricFiltersT = Aws::Vector<MetricFilter>>
  CalculationComponent& WithMetricFilters(MetricFiltersT&& value) {
    SetMetricFilters(std::forward<MetricFiltersT>(value));
    return *this;
  }
  template <typename MetricFiltersT = MetricFilter>
  CalculationComponent& AddMetricFilters(MetricFiltersT&& value) {
    m_metricFiltersHasBeenSet = true;
    m_metricFilters.emplace_back(std::forward<MetricFiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_alias;

  Aws::String m_metricName;

  Aws::String m_metricId;

  Aws::Vector<MetricFilter> m_metricFilters;
  bool m_aliasHasBeenSet = false;
  bool m_metricNameHasBeenSet = false;
  bool m_metricIdHasBeenSet = false;
  bool m_metricFiltersHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
