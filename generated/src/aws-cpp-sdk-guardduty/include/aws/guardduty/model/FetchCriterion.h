/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/FetchCriterionCondition.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains a filter condition that GuardDuty applied when it retrieved
 * data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/FetchCriterion">AWS
 * API Reference</a></p>
 */
class FetchCriterion {
 public:
  AWS_GUARDDUTY_API FetchCriterion() = default;
  AWS_GUARDDUTY_API FetchCriterion(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API FetchCriterion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the field that the condition applies to.</p>
   */
  inline const Aws::String& GetField() const { return m_field; }
  inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
  template <typename FieldT = Aws::String>
  void SetField(FieldT&& value) {
    m_fieldHasBeenSet = true;
    m_field = std::forward<FieldT>(value);
  }
  template <typename FieldT = Aws::String>
  FetchCriterion& WithField(FieldT&& value) {
    SetField(std::forward<FieldT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The comparison operator of the condition. Possible values are
   * <code>EQUALS</code>, <code>NOT_EQUALS</code>, <code>GREATER_THAN</code>,
   * <code>GREATER_THAN_OR_EQUAL</code>, <code>LESS_THAN</code>, and
   * <code>LESS_THAN_OR_EQUAL</code>.</p>
   */
  inline FetchCriterionCondition GetCondition() const { return m_condition; }
  inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
  inline void SetCondition(FetchCriterionCondition value) {
    m_conditionHasBeenSet = true;
    m_condition = value;
  }
  inline FetchCriterion& WithCondition(FetchCriterionCondition value) {
    SetCondition(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The values that the field is compared against. Numeric and Boolean values are
   * represented as strings.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  FetchCriterion& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  FetchCriterion& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_field;

  FetchCriterionCondition m_condition{FetchCriterionCondition::NOT_SET};

  Aws::Vector<Aws::String> m_values;
  bool m_fieldHasBeenSet = false;
  bool m_conditionHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
