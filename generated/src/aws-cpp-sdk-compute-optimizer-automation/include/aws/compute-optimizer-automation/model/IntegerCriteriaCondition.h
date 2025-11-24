/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/ComparisonOperator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 * <p>Defines a condition for filtering based on integer values with comparison
 * operators.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/IntegerCriteriaCondition">AWS
 * API Reference</a></p>
 */
class IntegerCriteriaCondition {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API IntegerCriteriaCondition() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API IntegerCriteriaCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API IntegerCriteriaCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The comparison operator to use, such as equals, greater than, less than,
   * etc.</p>
   */
  inline ComparisonOperator GetComparison() const { return m_comparison; }
  inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
  inline void SetComparison(ComparisonOperator value) {
    m_comparisonHasBeenSet = true;
    m_comparison = value;
  }
  inline IntegerCriteriaCondition& WithComparison(ComparisonOperator value) {
    SetComparison(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of integer values to compare against using the specified comparison
   * operator.</p>
   */
  inline const Aws::Vector<int>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<int>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<int>>
  IntegerCriteriaCondition& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  inline IntegerCriteriaCondition& AddValues(int value) {
    m_valuesHasBeenSet = true;
    m_values.push_back(value);
    return *this;
  }
  ///@}
 private:
  ComparisonOperator m_comparison{ComparisonOperator::NOT_SET};
  bool m_comparisonHasBeenSet = false;

  Aws::Vector<int> m_values;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
