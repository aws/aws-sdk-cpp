/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/BooleanCondition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCases {
namespace Model {
class BooleanCondition;

/**
 * <p>A compound condition that combines multiple boolean conditions using logical
 * operators. In the Amazon Connect admin website, case rules are known as <i>case
 * field conditions</i>. For more information about case field conditions, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-field-conditions.html">Add
 * case field conditions to a case template</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CompoundCondition">AWS
 * API Reference</a></p>
 */
class CompoundCondition {
 public:
  AWS_CONNECTCASES_API CompoundCondition() = default;
  AWS_CONNECTCASES_API CompoundCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API CompoundCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of conditions to combine using the logical operator.</p>
   */
  inline const Aws::Vector<BooleanCondition>& GetConditions() const { return m_conditions; }
  inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
  template <typename ConditionsT = Aws::Vector<BooleanCondition>>
  void SetConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions = std::forward<ConditionsT>(value);
  }
  template <typename ConditionsT = Aws::Vector<BooleanCondition>>
  CompoundCondition& WithConditions(ConditionsT&& value) {
    SetConditions(std::forward<ConditionsT>(value));
    return *this;
  }
  template <typename ConditionsT = BooleanCondition>
  CompoundCondition& AddConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions.emplace_back(std::forward<ConditionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<BooleanCondition> m_conditions;
  bool m_conditionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
