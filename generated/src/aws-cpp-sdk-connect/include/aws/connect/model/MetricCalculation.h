/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/CalculationComponent.h>
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
 * <p>Contains the formula and component metrics that define a custom metric
 * calculation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MetricCalculation">AWS
 * API Reference</a></p>
 */
class MetricCalculation {
 public:
  AWS_CONNECT_API MetricCalculation() = default;
  AWS_CONNECT_API MetricCalculation(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API MetricCalculation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of component metrics referenced in the calculation formula. Each
   * component has an alias used in the formula expression.</p>
   */
  inline const Aws::Vector<CalculationComponent>& GetCalculationComponents() const { return m_calculationComponents; }
  inline bool CalculationComponentsHasBeenSet() const { return m_calculationComponentsHasBeenSet; }
  template <typename CalculationComponentsT = Aws::Vector<CalculationComponent>>
  void SetCalculationComponents(CalculationComponentsT&& value) {
    m_calculationComponentsHasBeenSet = true;
    m_calculationComponents = std::forward<CalculationComponentsT>(value);
  }
  template <typename CalculationComponentsT = Aws::Vector<CalculationComponent>>
  MetricCalculation& WithCalculationComponents(CalculationComponentsT&& value) {
    SetCalculationComponents(std::forward<CalculationComponentsT>(value));
    return *this;
  }
  template <typename CalculationComponentsT = CalculationComponent>
  MetricCalculation& AddCalculationComponents(CalculationComponentsT&& value) {
    m_calculationComponentsHasBeenSet = true;
    m_calculationComponents.emplace_back(std::forward<CalculationComponentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The formula expression that defines how the metric is calculated. Uses
   * component aliases (for example, <code>100 * SUM(M1) / SUM(M2)</code>).</p>
   */
  inline const Aws::String& GetCalculation() const { return m_calculation; }
  inline bool CalculationHasBeenSet() const { return m_calculationHasBeenSet; }
  template <typename CalculationT = Aws::String>
  void SetCalculation(CalculationT&& value) {
    m_calculationHasBeenSet = true;
    m_calculation = std::forward<CalculationT>(value);
  }
  template <typename CalculationT = Aws::String>
  MetricCalculation& WithCalculation(CalculationT&& value) {
    SetCalculation(std::forward<CalculationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CalculationComponent> m_calculationComponents;

  Aws::String m_calculation;
  bool m_calculationComponentsHasBeenSet = false;
  bool m_calculationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
