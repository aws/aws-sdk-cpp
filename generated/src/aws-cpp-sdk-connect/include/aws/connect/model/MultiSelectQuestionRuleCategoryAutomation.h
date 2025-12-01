/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/MultiSelectQuestionRuleCategoryAutomationCondition.h>
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
 * <p>Automation rule for multi-select questions based on rule
 * categories.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MultiSelectQuestionRuleCategoryAutomation">AWS
 * API Reference</a></p>
 */
class MultiSelectQuestionRuleCategoryAutomation {
 public:
  AWS_CONNECT_API MultiSelectQuestionRuleCategoryAutomation() = default;
  AWS_CONNECT_API MultiSelectQuestionRuleCategoryAutomation(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API MultiSelectQuestionRuleCategoryAutomation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The category name for this automation rule.</p>
   */
  inline const Aws::String& GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  template <typename CategoryT = Aws::String>
  void SetCategory(CategoryT&& value) {
    m_categoryHasBeenSet = true;
    m_category = std::forward<CategoryT>(value);
  }
  template <typename CategoryT = Aws::String>
  MultiSelectQuestionRuleCategoryAutomation& WithCategory(CategoryT&& value) {
    SetCategory(std::forward<CategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The condition for this automation rule.</p>
   */
  inline MultiSelectQuestionRuleCategoryAutomationCondition GetCondition() const { return m_condition; }
  inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
  inline void SetCondition(MultiSelectQuestionRuleCategoryAutomationCondition value) {
    m_conditionHasBeenSet = true;
    m_condition = value;
  }
  inline MultiSelectQuestionRuleCategoryAutomation& WithCondition(MultiSelectQuestionRuleCategoryAutomationCondition value) {
    SetCondition(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reference IDs of options for this automation rule.</p>
   */
  inline const Aws::Vector<Aws::String>& GetOptionRefIds() const { return m_optionRefIds; }
  inline bool OptionRefIdsHasBeenSet() const { return m_optionRefIdsHasBeenSet; }
  template <typename OptionRefIdsT = Aws::Vector<Aws::String>>
  void SetOptionRefIds(OptionRefIdsT&& value) {
    m_optionRefIdsHasBeenSet = true;
    m_optionRefIds = std::forward<OptionRefIdsT>(value);
  }
  template <typename OptionRefIdsT = Aws::Vector<Aws::String>>
  MultiSelectQuestionRuleCategoryAutomation& WithOptionRefIds(OptionRefIdsT&& value) {
    SetOptionRefIds(std::forward<OptionRefIdsT>(value));
    return *this;
  }
  template <typename OptionRefIdsT = Aws::String>
  MultiSelectQuestionRuleCategoryAutomation& AddOptionRefIds(OptionRefIdsT&& value) {
    m_optionRefIdsHasBeenSet = true;
    m_optionRefIds.emplace_back(std::forward<OptionRefIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_category;
  bool m_categoryHasBeenSet = false;

  MultiSelectQuestionRuleCategoryAutomationCondition m_condition{MultiSelectQuestionRuleCategoryAutomationCondition::NOT_SET};
  bool m_conditionHasBeenSet = false;

  Aws::Vector<Aws::String> m_optionRefIds;
  bool m_optionRefIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
