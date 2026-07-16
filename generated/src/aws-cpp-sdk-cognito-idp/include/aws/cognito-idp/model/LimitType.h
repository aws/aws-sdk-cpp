/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/LimitDefinitionType.h>

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
 * <p>The limit definition and current limit values for a provisioned
 * limit.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/LimitType">AWS
 * API Reference</a></p>
 */
class LimitType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API LimitType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API LimitType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API LimitType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The definition that identifies this limit, including the class and
   * attributes.</p>
   */
  inline const LimitDefinitionType& GetLimitDefinition() const { return m_limitDefinition; }
  inline bool LimitDefinitionHasBeenSet() const { return m_limitDefinitionHasBeenSet; }
  template <typename LimitDefinitionT = LimitDefinitionType>
  void SetLimitDefinition(LimitDefinitionT&& value) {
    m_limitDefinitionHasBeenSet = true;
    m_limitDefinition = std::forward<LimitDefinitionT>(value);
  }
  template <typename LimitDefinitionT = LimitDefinitionType>
  LimitType& WithLimitDefinition(LimitDefinitionT&& value) {
    SetLimitDefinition(std::forward<LimitDefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provisioned limit value, in requests per second (RPS). This is the rate
   * that Amazon Cognito currently enforces for your account.</p>
   */
  inline int GetProvisionedLimitValue() const { return m_provisionedLimitValue; }
  inline bool ProvisionedLimitValueHasBeenSet() const { return m_provisionedLimitValueHasBeenSet; }
  inline void SetProvisionedLimitValue(int value) {
    m_provisionedLimitValueHasBeenSet = true;
    m_provisionedLimitValue = value;
  }
  inline LimitType& WithProvisionedLimitValue(int value) {
    SetProvisionedLimitValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default (free) limit value, in requests per second (RPS). This is the
   * rate included at no additional cost.</p>
   */
  inline int GetFreeLimitValue() const { return m_freeLimitValue; }
  inline bool FreeLimitValueHasBeenSet() const { return m_freeLimitValueHasBeenSet; }
  inline void SetFreeLimitValue(int value) {
    m_freeLimitValueHasBeenSet = true;
    m_freeLimitValue = value;
  }
  inline LimitType& WithFreeLimitValue(int value) {
    SetFreeLimitValue(value);
    return *this;
  }
  ///@}
 private:
  LimitDefinitionType m_limitDefinition;

  int m_provisionedLimitValue{0};

  int m_freeLimitValue{0};
  bool m_limitDefinitionHasBeenSet = false;
  bool m_provisionedLimitValueHasBeenSet = false;
  bool m_freeLimitValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
