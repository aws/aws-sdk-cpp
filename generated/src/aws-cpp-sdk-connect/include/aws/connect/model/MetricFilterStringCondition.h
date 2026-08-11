/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/MetricFilterStringConditionComparison.h>
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
 * <p>A string comparison condition for metric filters.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MetricFilterStringCondition">AWS
 * API Reference</a></p>
 */
class MetricFilterStringCondition {
 public:
  AWS_CONNECT_API MetricFilterStringCondition() = default;
  AWS_CONNECT_API MetricFilterStringCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API MetricFilterStringCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The comparison operator. Valid values: <code>MATCHES_ANY</code> (matches any
   * of the specified values) | <code>MATCHES_NONE</code> (matches none of the
   * specified values).</p>
   */
  inline MetricFilterStringConditionComparison GetComparison() const { return m_comparison; }
  inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
  inline void SetComparison(MetricFilterStringConditionComparison value) {
    m_comparisonHasBeenSet = true;
    m_comparison = value;
  }
  inline MetricFilterStringCondition& WithComparison(MetricFilterStringConditionComparison value) {
    SetComparison(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The string values to compare against.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  MetricFilterStringCondition& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  MetricFilterStringCondition& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  MetricFilterStringConditionComparison m_comparison{MetricFilterStringConditionComparison::NOT_SET};

  Aws::Vector<Aws::String> m_values;
  bool m_comparisonHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
