/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactFlowAttributeAndCondition.h>
#include <aws/connect/model/ContactFlowTypeCondition.h>
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
 * <p> Filter for contact flow attributes with multiple condition
 * types.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactFlowAttributeFilter">AWS
 * API Reference</a></p>
 */
class ContactFlowAttributeFilter {
 public:
  AWS_CONNECT_API ContactFlowAttributeFilter() = default;
  AWS_CONNECT_API ContactFlowAttributeFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ContactFlowAttributeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> A list of conditions which would be applied together with an OR
   * condition.</p>
   */
  inline const Aws::Vector<ContactFlowAttributeAndCondition>& GetOrConditions() const { return m_orConditions; }
  inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
  template <typename OrConditionsT = Aws::Vector<ContactFlowAttributeAndCondition>>
  void SetOrConditions(OrConditionsT&& value) {
    m_orConditionsHasBeenSet = true;
    m_orConditions = std::forward<OrConditionsT>(value);
  }
  template <typename OrConditionsT = Aws::Vector<ContactFlowAttributeAndCondition>>
  ContactFlowAttributeFilter& WithOrConditions(OrConditionsT&& value) {
    SetOrConditions(std::forward<OrConditionsT>(value));
    return *this;
  }
  template <typename OrConditionsT = ContactFlowAttributeAndCondition>
  ContactFlowAttributeFilter& AddOrConditions(OrConditionsT&& value) {
    m_orConditionsHasBeenSet = true;
    m_orConditions.emplace_back(std::forward<OrConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A list of conditions which would be applied together with a AND
   * condition.</p>
   */
  inline const ContactFlowAttributeAndCondition& GetAndCondition() const { return m_andCondition; }
  inline bool AndConditionHasBeenSet() const { return m_andConditionHasBeenSet; }
  template <typename AndConditionT = ContactFlowAttributeAndCondition>
  void SetAndCondition(AndConditionT&& value) {
    m_andConditionHasBeenSet = true;
    m_andCondition = std::forward<AndConditionT>(value);
  }
  template <typename AndConditionT = ContactFlowAttributeAndCondition>
  ContactFlowAttributeFilter& WithAndCondition(AndConditionT&& value) {
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
  ContactFlowAttributeFilter& WithTagCondition(TagConditionT&& value) {
    SetTagCondition(std::forward<TagConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Contact flow type condition within attribute filter.</p>
   */
  inline const ContactFlowTypeCondition& GetContactFlowTypeCondition() const { return m_contactFlowTypeCondition; }
  inline bool ContactFlowTypeConditionHasBeenSet() const { return m_contactFlowTypeConditionHasBeenSet; }
  template <typename ContactFlowTypeConditionT = ContactFlowTypeCondition>
  void SetContactFlowTypeCondition(ContactFlowTypeConditionT&& value) {
    m_contactFlowTypeConditionHasBeenSet = true;
    m_contactFlowTypeCondition = std::forward<ContactFlowTypeConditionT>(value);
  }
  template <typename ContactFlowTypeConditionT = ContactFlowTypeCondition>
  ContactFlowAttributeFilter& WithContactFlowTypeCondition(ContactFlowTypeConditionT&& value) {
    SetContactFlowTypeCondition(std::forward<ContactFlowTypeConditionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ContactFlowAttributeAndCondition> m_orConditions;

  ContactFlowAttributeAndCondition m_andCondition;

  TagCondition m_tagCondition;

  ContactFlowTypeCondition m_contactFlowTypeCondition;
  bool m_orConditionsHasBeenSet = false;
  bool m_andConditionHasBeenSet = false;
  bool m_tagConditionHasBeenSet = false;
  bool m_contactFlowTypeConditionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
