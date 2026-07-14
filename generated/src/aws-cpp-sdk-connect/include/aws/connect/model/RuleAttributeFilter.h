/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/RuleAttributeAndCondition.h>
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
 * <p>An object that can be used to specify tag conditions inside the
 * <code>SearchFilter</code>. This accepts an <code>OR</code> of <code>AND</code>
 * (List of List) input where:</p> <ul> <li> <p>The top level list specifies
 * conditions that need to be applied with <code>OR</code> operator.</p> </li> <li>
 * <p>The inner list specifies conditions that need to be applied with
 * <code>AND</code> operator.</p> </li> </ul><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RuleAttributeFilter">AWS
 * API Reference</a></p>
 */
class RuleAttributeFilter {
 public:
  AWS_CONNECT_API RuleAttributeFilter() = default;
  AWS_CONNECT_API RuleAttributeFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API RuleAttributeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of conditions which would be applied together with an <code>OR</code>
   * condition.</p>
   */
  inline const Aws::Vector<RuleAttributeAndCondition>& GetOrConditions() const { return m_orConditions; }
  inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
  template <typename OrConditionsT = Aws::Vector<RuleAttributeAndCondition>>
  void SetOrConditions(OrConditionsT&& value) {
    m_orConditionsHasBeenSet = true;
    m_orConditions = std::forward<OrConditionsT>(value);
  }
  template <typename OrConditionsT = Aws::Vector<RuleAttributeAndCondition>>
  RuleAttributeFilter& WithOrConditions(OrConditionsT&& value) {
    SetOrConditions(std::forward<OrConditionsT>(value));
    return *this;
  }
  template <typename OrConditionsT = RuleAttributeAndCondition>
  RuleAttributeFilter& AddOrConditions(OrConditionsT&& value) {
    m_orConditionsHasBeenSet = true;
    m_orConditions.emplace_back(std::forward<OrConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of conditions which would be applied together with an <code>AND</code>
   * condition.</p>
   */
  inline const RuleAttributeAndCondition& GetAndCondition() const { return m_andCondition; }
  inline bool AndConditionHasBeenSet() const { return m_andConditionHasBeenSet; }
  template <typename AndConditionT = RuleAttributeAndCondition>
  void SetAndCondition(AndConditionT&& value) {
    m_andConditionHasBeenSet = true;
    m_andCondition = std::forward<AndConditionT>(value);
  }
  template <typename AndConditionT = RuleAttributeAndCondition>
  RuleAttributeFilter& WithAndCondition(AndConditionT&& value) {
    SetAndCondition(std::forward<AndConditionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const TagCondition& GetTagCondition() const { return m_tagCondition; }
  inline bool TagConditionHasBeenSet() const { return m_tagConditionHasBeenSet; }
  template <typename TagConditionT = TagCondition>
  void SetTagCondition(TagConditionT&& value) {
    m_tagConditionHasBeenSet = true;
    m_tagCondition = std::forward<TagConditionT>(value);
  }
  template <typename TagConditionT = TagCondition>
  RuleAttributeFilter& WithTagCondition(TagConditionT&& value) {
    SetTagCondition(std::forward<TagConditionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RuleAttributeAndCondition> m_orConditions;

  RuleAttributeAndCondition m_andCondition;

  TagCondition m_tagCondition;
  bool m_orConditionsHasBeenSet = false;
  bool m_andConditionHasBeenSet = false;
  bool m_tagConditionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
