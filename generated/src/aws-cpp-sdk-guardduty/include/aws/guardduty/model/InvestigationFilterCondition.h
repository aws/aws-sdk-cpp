/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
 * <p>Contains the values that an investigation attribute must match. Specify
 * <code>Equals</code>, <code>NotEquals</code>, or both, each with at least one
 * value. If you specify both, an investigation must match both
 * conditions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InvestigationFilterCondition">AWS
 * API Reference</a></p>
 */
class InvestigationFilterCondition {
 public:
  AWS_GUARDDUTY_API InvestigationFilterCondition() = default;
  AWS_GUARDDUTY_API InvestigationFilterCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API InvestigationFilterCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The values to match. An investigation matches if its attribute value equals
   * any of the specified values.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEquals() const { return m_equals; }
  inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }
  template <typename EqualsT = Aws::Vector<Aws::String>>
  void SetEquals(EqualsT&& value) {
    m_equalsHasBeenSet = true;
    m_equals = std::forward<EqualsT>(value);
  }
  template <typename EqualsT = Aws::Vector<Aws::String>>
  InvestigationFilterCondition& WithEquals(EqualsT&& value) {
    SetEquals(std::forward<EqualsT>(value));
    return *this;
  }
  template <typename EqualsT = Aws::String>
  InvestigationFilterCondition& AddEquals(EqualsT&& value) {
    m_equalsHasBeenSet = true;
    m_equals.emplace_back(std::forward<EqualsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The values to exclude. An investigation matches only if its attribute value
   * doesn't equal any of the specified values. An investigation that has no value
   * for the attribute also matches.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNotEquals() const { return m_notEquals; }
  inline bool NotEqualsHasBeenSet() const { return m_notEqualsHasBeenSet; }
  template <typename NotEqualsT = Aws::Vector<Aws::String>>
  void SetNotEquals(NotEqualsT&& value) {
    m_notEqualsHasBeenSet = true;
    m_notEquals = std::forward<NotEqualsT>(value);
  }
  template <typename NotEqualsT = Aws::Vector<Aws::String>>
  InvestigationFilterCondition& WithNotEquals(NotEqualsT&& value) {
    SetNotEquals(std::forward<NotEqualsT>(value));
    return *this;
  }
  template <typename NotEqualsT = Aws::String>
  InvestigationFilterCondition& AddNotEquals(NotEqualsT&& value) {
    m_notEqualsHasBeenSet = true;
    m_notEquals.emplace_back(std::forward<NotEqualsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_equals;

  Aws::Vector<Aws::String> m_notEquals;
  bool m_equalsHasBeenSet = false;
  bool m_notEqualsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
