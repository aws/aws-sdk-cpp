/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/LimitClass.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CognitoIdentityProvider {
namespace Model {

/**
 * <p>The class and attributes that identify a specific limit at the account
 * level.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/LimitDefinitionType">AWS
 * API Reference</a></p>
 */
class LimitDefinitionType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API LimitDefinitionType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API LimitDefinitionType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API LimitDefinitionType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The class of the limit. For API rate limits, this is
   * <code>API_CATEGORY</code>.</p>
   */
  inline LimitClass GetLimitClass() const { return m_limitClass; }
  inline bool LimitClassHasBeenSet() const { return m_limitClassHasBeenSet; }
  inline void SetLimitClass(LimitClass value) {
    m_limitClassHasBeenSet = true;
    m_limitClass = value;
  }
  inline LimitDefinitionType& WithLimitClass(LimitClass value) {
    SetLimitClass(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attributes that identify the specific limit. For API rate limits, specify
   * the <code>Category</code> key with a value like <code>UserAuthentication</code>
   * or <code>UserCreation</code>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
  inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
  template <typename AttributesT = Aws::Map<Aws::String, Aws::String>>
  void SetAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes = std::forward<AttributesT>(value);
  }
  template <typename AttributesT = Aws::Map<Aws::String, Aws::String>>
  LimitDefinitionType& WithAttributes(AttributesT&& value) {
    SetAttributes(std::forward<AttributesT>(value));
    return *this;
  }
  template <typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
  LimitDefinitionType& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value));
    return *this;
  }
  ///@}
 private:
  LimitClass m_limitClass{LimitClass::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_attributes;
  bool m_limitClassHasBeenSet = false;
  bool m_attributesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
