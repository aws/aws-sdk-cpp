/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactEvaluationAttributeCondition.h>
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
 * <p>A list of conditions which would be applied together with an <code>AND</code>
 * condition.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactEvaluationAttributeAndCondition">AWS
 * API Reference</a></p>
 */
class ContactEvaluationAttributeAndCondition {
 public:
  AWS_CONNECT_API ContactEvaluationAttributeAndCondition() = default;
  AWS_CONNECT_API ContactEvaluationAttributeAndCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ContactEvaluationAttributeAndCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of tag conditions to apply.</p>
   */
  inline const Aws::Vector<TagCondition>& GetTagConditions() const { return m_tagConditions; }
  inline bool TagConditionsHasBeenSet() const { return m_tagConditionsHasBeenSet; }
  template <typename TagConditionsT = Aws::Vector<TagCondition>>
  void SetTagConditions(TagConditionsT&& value) {
    m_tagConditionsHasBeenSet = true;
    m_tagConditions = std::forward<TagConditionsT>(value);
  }
  template <typename TagConditionsT = Aws::Vector<TagCondition>>
  ContactEvaluationAttributeAndCondition& WithTagConditions(TagConditionsT&& value) {
    SetTagConditions(std::forward<TagConditionsT>(value));
    return *this;
  }
  template <typename TagConditionsT = TagCondition>
  ContactEvaluationAttributeAndCondition& AddTagConditions(TagConditionsT&& value) {
    m_tagConditionsHasBeenSet = true;
    m_tagConditions.emplace_back(std::forward<TagConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of attribute conditions to apply.</p>
   */
  inline const Aws::Vector<ContactEvaluationAttributeCondition>& GetAttributeConditions() const { return m_attributeConditions; }
  inline bool AttributeConditionsHasBeenSet() const { return m_attributeConditionsHasBeenSet; }
  template <typename AttributeConditionsT = Aws::Vector<ContactEvaluationAttributeCondition>>
  void SetAttributeConditions(AttributeConditionsT&& value) {
    m_attributeConditionsHasBeenSet = true;
    m_attributeConditions = std::forward<AttributeConditionsT>(value);
  }
  template <typename AttributeConditionsT = Aws::Vector<ContactEvaluationAttributeCondition>>
  ContactEvaluationAttributeAndCondition& WithAttributeConditions(AttributeConditionsT&& value) {
    SetAttributeConditions(std::forward<AttributeConditionsT>(value));
    return *this;
  }
  template <typename AttributeConditionsT = ContactEvaluationAttributeCondition>
  ContactEvaluationAttributeAndCondition& AddAttributeConditions(AttributeConditionsT&& value) {
    m_attributeConditionsHasBeenSet = true;
    m_attributeConditions.emplace_back(std::forward<AttributeConditionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TagCondition> m_tagConditions;

  Aws::Vector<ContactEvaluationAttributeCondition> m_attributeConditions;
  bool m_tagConditionsHasBeenSet = false;
  bool m_attributeConditionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
