/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactEvaluationAttributeComparisonType.h>
#include <aws/connect/model/ContactEvaluationAttributeKey.h>
#include <aws/connect/model/ContactEvaluationAttributeValue.h>

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
 * <p>An attribute condition for contact evaluation filtering.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactEvaluationAttributeCondition">AWS
 * API Reference</a></p>
 */
class ContactEvaluationAttributeCondition {
 public:
  AWS_CONNECT_API ContactEvaluationAttributeCondition() = default;
  AWS_CONNECT_API ContactEvaluationAttributeCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ContactEvaluationAttributeCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The key of the attribute.</p>
   */
  inline ContactEvaluationAttributeKey GetAttributeKey() const { return m_attributeKey; }
  inline bool AttributeKeyHasBeenSet() const { return m_attributeKeyHasBeenSet; }
  inline void SetAttributeKey(ContactEvaluationAttributeKey value) {
    m_attributeKeyHasBeenSet = true;
    m_attributeKey = value;
  }
  inline ContactEvaluationAttributeCondition& WithAttributeKey(ContactEvaluationAttributeKey value) {
    SetAttributeKey(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of the attribute.</p>
   */
  inline const ContactEvaluationAttributeValue& GetAttributeValue() const { return m_attributeValue; }
  inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }
  template <typename AttributeValueT = ContactEvaluationAttributeValue>
  void SetAttributeValue(AttributeValueT&& value) {
    m_attributeValueHasBeenSet = true;
    m_attributeValue = std::forward<AttributeValueT>(value);
  }
  template <typename AttributeValueT = ContactEvaluationAttributeValue>
  ContactEvaluationAttributeCondition& WithAttributeValue(AttributeValueT&& value) {
    SetAttributeValue(std::forward<AttributeValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The comparison type for the condition.</p>
   */
  inline ContactEvaluationAttributeComparisonType GetComparisonType() const { return m_comparisonType; }
  inline bool ComparisonTypeHasBeenSet() const { return m_comparisonTypeHasBeenSet; }
  inline void SetComparisonType(ContactEvaluationAttributeComparisonType value) {
    m_comparisonTypeHasBeenSet = true;
    m_comparisonType = value;
  }
  inline ContactEvaluationAttributeCondition& WithComparisonType(ContactEvaluationAttributeComparisonType value) {
    SetComparisonType(value);
    return *this;
  }
  ///@}
 private:
  ContactEvaluationAttributeKey m_attributeKey{ContactEvaluationAttributeKey::NOT_SET};

  ContactEvaluationAttributeValue m_attributeValue;

  ContactEvaluationAttributeComparisonType m_comparisonType{ContactEvaluationAttributeComparisonType::NOT_SET};
  bool m_attributeKeyHasBeenSet = false;
  bool m_attributeValueHasBeenSet = false;
  bool m_comparisonTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
