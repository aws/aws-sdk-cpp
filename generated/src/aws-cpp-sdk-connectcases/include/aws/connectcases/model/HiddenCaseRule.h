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

/**
 * <p>A rule that controls field visibility based on conditions. Fields can be
 * shown or hidden dynamically based on values in other fields.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/HiddenCaseRule">AWS
 * API Reference</a></p>
 */
class HiddenCaseRule {
 public:
  AWS_CONNECTCASES_API HiddenCaseRule() = default;
  AWS_CONNECTCASES_API HiddenCaseRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API HiddenCaseRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether the field is hidden when no conditions match.</p>
   */
  inline bool GetDefaultValue() const { return m_defaultValue; }
  inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
  inline void SetDefaultValue(bool value) {
    m_defaultValueHasBeenSet = true;
    m_defaultValue = value;
  }
  inline HiddenCaseRule& WithDefaultValue(bool value) {
    SetDefaultValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of conditions that determine field visibility.</p>
   */
  inline const Aws::Vector<BooleanCondition>& GetConditions() const { return m_conditions; }
  inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
  template <typename ConditionsT = Aws::Vector<BooleanCondition>>
  void SetConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions = std::forward<ConditionsT>(value);
  }
  template <typename ConditionsT = Aws::Vector<BooleanCondition>>
  HiddenCaseRule& WithConditions(ConditionsT&& value) {
    SetConditions(std::forward<ConditionsT>(value));
    return *this;
  }
  template <typename ConditionsT = BooleanCondition>
  HiddenCaseRule& AddConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions.emplace_back(std::forward<ConditionsT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_defaultValue{false};

  Aws::Vector<BooleanCondition> m_conditions;
  bool m_defaultValueHasBeenSet = false;
  bool m_conditionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
