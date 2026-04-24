/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/StringCondition.h>
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
 * <p>The search criteria to be used to return notifications.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/NotificationSearchCriteria">AWS
 * API Reference</a></p>
 */
class NotificationSearchCriteria {
 public:
  AWS_CONNECT_API NotificationSearchCriteria() = default;
  AWS_CONNECT_API NotificationSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API NotificationSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of conditions to be met, where at least one condition must be
   * satisfied.</p>
   */
  inline const Aws::Vector<NotificationSearchCriteria>& GetOrConditions() const { return m_orConditions; }
  inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
  template <typename OrConditionsT = Aws::Vector<NotificationSearchCriteria>>
  void SetOrConditions(OrConditionsT&& value) {
    m_orConditionsHasBeenSet = true;
    m_orConditions = std::forward<OrConditionsT>(value);
  }
  template <typename OrConditionsT = Aws::Vector<NotificationSearchCriteria>>
  NotificationSearchCriteria& WithOrConditions(OrConditionsT&& value) {
    SetOrConditions(std::forward<OrConditionsT>(value));
    return *this;
  }
  template <typename OrConditionsT = NotificationSearchCriteria>
  NotificationSearchCriteria& AddOrConditions(OrConditionsT&& value) {
    m_orConditionsHasBeenSet = true;
    m_orConditions.emplace_back(std::forward<OrConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of conditions that must all be satisfied.</p>
   */
  inline const Aws::Vector<NotificationSearchCriteria>& GetAndConditions() const { return m_andConditions; }
  inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }
  template <typename AndConditionsT = Aws::Vector<NotificationSearchCriteria>>
  void SetAndConditions(AndConditionsT&& value) {
    m_andConditionsHasBeenSet = true;
    m_andConditions = std::forward<AndConditionsT>(value);
  }
  template <typename AndConditionsT = Aws::Vector<NotificationSearchCriteria>>
  NotificationSearchCriteria& WithAndConditions(AndConditionsT&& value) {
    SetAndConditions(std::forward<AndConditionsT>(value));
    return *this;
  }
  template <typename AndConditionsT = NotificationSearchCriteria>
  NotificationSearchCriteria& AddAndConditions(AndConditionsT&& value) {
    m_andConditionsHasBeenSet = true;
    m_andConditions.emplace_back(std::forward<AndConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const StringCondition& GetStringCondition() const { return m_stringCondition; }
  inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }
  template <typename StringConditionT = StringCondition>
  void SetStringCondition(StringConditionT&& value) {
    m_stringConditionHasBeenSet = true;
    m_stringCondition = std::forward<StringConditionT>(value);
  }
  template <typename StringConditionT = StringCondition>
  NotificationSearchCriteria& WithStringCondition(StringConditionT&& value) {
    SetStringCondition(std::forward<StringConditionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<NotificationSearchCriteria> m_orConditions;

  Aws::Vector<NotificationSearchCriteria> m_andConditions;

  StringCondition m_stringCondition;
  bool m_orConditionsHasBeenSet = false;
  bool m_andConditionsHasBeenSet = false;
  bool m_stringConditionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
