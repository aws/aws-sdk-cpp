/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/CategoriesAttributeAndCondition.h>
#include <aws/connect/model/TagCondition.h>
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
 * <p>A filter that matches category segments based on the tags assigned to the
 * rules that create the categories. Provide exactly one of
 * <code>OrConditions</code>, <code>AndCondition</code>, or
 * <code>TagCondition</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CategoriesAttributeFilter">AWS
 * API Reference</a></p>
 */
class CategoriesAttributeFilter {
 public:
  AWS_CONNECT_API CategoriesAttributeFilter() = default;
  AWS_CONNECT_API CategoriesAttributeFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API CategoriesAttributeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of conditions that the filter evaluates using OR logic. A category
   * segment matches when at least one of the conditions in the list is met.</p>
   */
  inline const Aws::Vector<CategoriesAttributeAndCondition>& GetOrConditions() const { return m_orConditions; }
  inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
  template <typename OrConditionsT = Aws::Vector<CategoriesAttributeAndCondition>>
  void SetOrConditions(OrConditionsT&& value) {
    m_orConditionsHasBeenSet = true;
    m_orConditions = std::forward<OrConditionsT>(value);
  }
  template <typename OrConditionsT = Aws::Vector<CategoriesAttributeAndCondition>>
  CategoriesAttributeFilter& WithOrConditions(OrConditionsT&& value) {
    SetOrConditions(std::forward<OrConditionsT>(value));
    return *this;
  }
  template <typename OrConditionsT = CategoriesAttributeAndCondition>
  CategoriesAttributeFilter& AddOrConditions(OrConditionsT&& value) {
    m_orConditionsHasBeenSet = true;
    m_orConditions.emplace_back(std::forward<OrConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A condition that the filter evaluates using AND logic. A category segment
   * matches only when all of the tag conditions in the condition are met.</p>
   */
  inline const CategoriesAttributeAndCondition& GetAndCondition() const { return m_andCondition; }
  inline bool AndConditionHasBeenSet() const { return m_andConditionHasBeenSet; }
  template <typename AndConditionT = CategoriesAttributeAndCondition>
  void SetAndCondition(AndConditionT&& value) {
    m_andConditionHasBeenSet = true;
    m_andCondition = std::forward<AndConditionT>(value);
  }
  template <typename AndConditionT = CategoriesAttributeAndCondition>
  CategoriesAttributeFilter& WithAndCondition(AndConditionT&& value) {
    SetAndCondition(std::forward<AndConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A single tag condition that a category segment must match. The category's
   * rule must have the specified tag key and value.</p>
   */
  inline const TagCondition& GetTagCondition() const { return m_tagCondition; }
  inline bool TagConditionHasBeenSet() const { return m_tagConditionHasBeenSet; }
  template <typename TagConditionT = TagCondition>
  void SetTagCondition(TagConditionT&& value) {
    m_tagConditionHasBeenSet = true;
    m_tagCondition = std::forward<TagConditionT>(value);
  }
  template <typename TagConditionT = TagCondition>
  CategoriesAttributeFilter& WithTagCondition(TagConditionT&& value) {
    SetTagCondition(std::forward<TagConditionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CategoriesAttributeAndCondition> m_orConditions;

  CategoriesAttributeAndCondition m_andCondition;

  TagCondition m_tagCondition;
  bool m_orConditionsHasBeenSet = false;
  bool m_andConditionHasBeenSet = false;
  bool m_tagConditionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
