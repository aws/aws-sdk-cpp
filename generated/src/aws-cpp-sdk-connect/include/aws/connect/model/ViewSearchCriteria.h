/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/StringCondition.h>
#include <aws/connect/model/ViewStatus.h>
#include <aws/connect/model/ViewType.h>
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
 * <p>Defines the search criteria for filtering views.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ViewSearchCriteria">AWS
 * API Reference</a></p>
 */
class ViewSearchCriteria {
 public:
  AWS_CONNECT_API ViewSearchCriteria() = default;
  AWS_CONNECT_API ViewSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ViewSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of conditions to be met, where at least one condition must be
   * satisfied.</p>
   */
  inline const Aws::Vector<ViewSearchCriteria>& GetOrConditions() const { return m_orConditions; }
  inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
  template <typename OrConditionsT = Aws::Vector<ViewSearchCriteria>>
  void SetOrConditions(OrConditionsT&& value) {
    m_orConditionsHasBeenSet = true;
    m_orConditions = std::forward<OrConditionsT>(value);
  }
  template <typename OrConditionsT = Aws::Vector<ViewSearchCriteria>>
  ViewSearchCriteria& WithOrConditions(OrConditionsT&& value) {
    SetOrConditions(std::forward<OrConditionsT>(value));
    return *this;
  }
  template <typename OrConditionsT = ViewSearchCriteria>
  ViewSearchCriteria& AddOrConditions(OrConditionsT&& value) {
    m_orConditionsHasBeenSet = true;
    m_orConditions.emplace_back(std::forward<OrConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of conditions that must all be satisfied.</p>
   */
  inline const Aws::Vector<ViewSearchCriteria>& GetAndConditions() const { return m_andConditions; }
  inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }
  template <typename AndConditionsT = Aws::Vector<ViewSearchCriteria>>
  void SetAndConditions(AndConditionsT&& value) {
    m_andConditionsHasBeenSet = true;
    m_andConditions = std::forward<AndConditionsT>(value);
  }
  template <typename AndConditionsT = Aws::Vector<ViewSearchCriteria>>
  ViewSearchCriteria& WithAndConditions(AndConditionsT&& value) {
    SetAndConditions(std::forward<AndConditionsT>(value));
    return *this;
  }
  template <typename AndConditionsT = ViewSearchCriteria>
  ViewSearchCriteria& AddAndConditions(AndConditionsT&& value) {
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
  ViewSearchCriteria& WithStringCondition(StringConditionT&& value) {
    SetStringCondition(std::forward<StringConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A condition that filters views by their type.</p>
   */
  inline ViewType GetViewTypeCondition() const { return m_viewTypeCondition; }
  inline bool ViewTypeConditionHasBeenSet() const { return m_viewTypeConditionHasBeenSet; }
  inline void SetViewTypeCondition(ViewType value) {
    m_viewTypeConditionHasBeenSet = true;
    m_viewTypeCondition = value;
  }
  inline ViewSearchCriteria& WithViewTypeCondition(ViewType value) {
    SetViewTypeCondition(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A condition that filters views by their status.</p>
   */
  inline ViewStatus GetViewStatusCondition() const { return m_viewStatusCondition; }
  inline bool ViewStatusConditionHasBeenSet() const { return m_viewStatusConditionHasBeenSet; }
  inline void SetViewStatusCondition(ViewStatus value) {
    m_viewStatusConditionHasBeenSet = true;
    m_viewStatusCondition = value;
  }
  inline ViewSearchCriteria& WithViewStatusCondition(ViewStatus value) {
    SetViewStatusCondition(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ViewSearchCriteria> m_orConditions;

  Aws::Vector<ViewSearchCriteria> m_andConditions;

  StringCondition m_stringCondition;

  ViewType m_viewTypeCondition{ViewType::NOT_SET};

  ViewStatus m_viewStatusCondition{ViewStatus::NOT_SET};
  bool m_orConditionsHasBeenSet = false;
  bool m_andConditionsHasBeenSet = false;
  bool m_stringConditionHasBeenSet = false;
  bool m_viewTypeConditionHasBeenSet = false;
  bool m_viewStatusConditionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
