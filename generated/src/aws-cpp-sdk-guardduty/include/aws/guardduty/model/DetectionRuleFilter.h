/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/DetectionRuleFilterCondition.h>
#include <aws/guardduty/model/FilterFieldName.h>

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
 * <p>Contains filter criteria for listing custom detection rules or
 * associations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DetectionRuleFilter">AWS
 * API Reference</a></p>
 */
class DetectionRuleFilter {
 public:
  AWS_GUARDDUTY_API DetectionRuleFilter() = default;
  AWS_GUARDDUTY_API DetectionRuleFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API DetectionRuleFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the field to filter by.</p>
   */
  inline FilterFieldName GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  inline void SetName(FilterFieldName value) {
    m_nameHasBeenSet = true;
    m_name = value;
  }
  inline DetectionRuleFilter& WithName(FilterFieldName value) {
    SetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The values to match against the specified filter name.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  DetectionRuleFilter& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  DetectionRuleFilter& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The condition to apply to the filter. For example, <code>EQUALS</code> or
   * <code>CONTAINS</code>.</p>
   */
  inline DetectionRuleFilterCondition GetCondition() const { return m_condition; }
  inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
  inline void SetCondition(DetectionRuleFilterCondition value) {
    m_conditionHasBeenSet = true;
    m_condition = value;
  }
  inline DetectionRuleFilter& WithCondition(DetectionRuleFilterCondition value) {
    SetCondition(value);
    return *this;
  }
  ///@}
 private:
  FilterFieldName m_name{FilterFieldName::NOT_SET};

  Aws::Vector<Aws::String> m_values;

  DetectionRuleFilterCondition m_condition{DetectionRuleFilterCondition::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
  bool m_conditionHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
