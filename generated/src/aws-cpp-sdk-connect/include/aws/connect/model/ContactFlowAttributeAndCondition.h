/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
 * <p> A list of conditions which would be applied together with an AND
 * condition.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactFlowAttributeAndCondition">AWS
 * API Reference</a></p>
 */
class ContactFlowAttributeAndCondition {
 public:
  AWS_CONNECT_API ContactFlowAttributeAndCondition() = default;
  AWS_CONNECT_API ContactFlowAttributeAndCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ContactFlowAttributeAndCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> Tag-based conditions for contact flow filtering.</p>
   */
  inline const Aws::Vector<TagCondition>& GetTagConditions() const { return m_tagConditions; }
  inline bool TagConditionsHasBeenSet() const { return m_tagConditionsHasBeenSet; }
  template <typename TagConditionsT = Aws::Vector<TagCondition>>
  void SetTagConditions(TagConditionsT&& value) {
    m_tagConditionsHasBeenSet = true;
    m_tagConditions = std::forward<TagConditionsT>(value);
  }
  template <typename TagConditionsT = Aws::Vector<TagCondition>>
  ContactFlowAttributeAndCondition& WithTagConditions(TagConditionsT&& value) {
    SetTagConditions(std::forward<TagConditionsT>(value));
    return *this;
  }
  template <typename TagConditionsT = TagCondition>
  ContactFlowAttributeAndCondition& AddTagConditions(TagConditionsT&& value) {
    m_tagConditionsHasBeenSet = true;
    m_tagConditions.emplace_back(std::forward<TagConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Contact flow type condition.</p>
   */
  inline const ContactFlowTypeCondition& GetContactFlowTypeCondition() const { return m_contactFlowTypeCondition; }
  inline bool ContactFlowTypeConditionHasBeenSet() const { return m_contactFlowTypeConditionHasBeenSet; }
  template <typename ContactFlowTypeConditionT = ContactFlowTypeCondition>
  void SetContactFlowTypeCondition(ContactFlowTypeConditionT&& value) {
    m_contactFlowTypeConditionHasBeenSet = true;
    m_contactFlowTypeCondition = std::forward<ContactFlowTypeConditionT>(value);
  }
  template <typename ContactFlowTypeConditionT = ContactFlowTypeCondition>
  ContactFlowAttributeAndCondition& WithContactFlowTypeCondition(ContactFlowTypeConditionT&& value) {
    SetContactFlowTypeCondition(std::forward<ContactFlowTypeConditionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TagCondition> m_tagConditions;

  ContactFlowTypeCondition m_contactFlowTypeCondition;
  bool m_tagConditionsHasBeenSet = false;
  bool m_contactFlowTypeConditionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
