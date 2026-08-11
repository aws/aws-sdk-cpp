/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/MetricFilterNumberConditionComparison.h>
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
 * <p>A numeric comparison condition for metric filters.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MetricFilterNumberCondition">AWS
 * API Reference</a></p>
 */
class MetricFilterNumberCondition {
 public:
  AWS_CONNECT_API MetricFilterNumberCondition() = default;
  AWS_CONNECT_API MetricFilterNumberCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API MetricFilterNumberCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The comparison operator. Valid values: <code>LESSER</code> (less than) |
   * <code>LESSER_OR_EQUAL</code> (less than or equal to) | <code>GREATER</code>
   * (greater than) | <code>GREATER_OR_EQUAL</code> (greater than or equal to).</p>
   */
  inline MetricFilterNumberConditionComparison GetComparison() const { return m_comparison; }
  inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
  inline void SetComparison(MetricFilterNumberConditionComparison value) {
    m_comparisonHasBeenSet = true;
    m_comparison = value;
  }
  inline MetricFilterNumberCondition& WithComparison(MetricFilterNumberConditionComparison value) {
    SetComparison(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The numeric values to compare against.</p>
   */
  inline const Aws::Vector<double>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<double>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<double>>
  MetricFilterNumberCondition& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  inline MetricFilterNumberCondition& AddValues(double value) {
    m_valuesHasBeenSet = true;
    m_values.push_back(value);
    return *this;
  }
  ///@}
 private:
  MetricFilterNumberConditionComparison m_comparison{MetricFilterNumberConditionComparison::NOT_SET};

  Aws::Vector<double> m_values;
  bool m_comparisonHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
