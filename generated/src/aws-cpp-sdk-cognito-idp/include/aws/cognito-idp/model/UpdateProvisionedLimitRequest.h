/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/LimitDefinitionType.h>

#include <utility>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

/**
 */
class UpdateProvisionedLimitRequest : public CognitoIdentityProviderRequest {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API UpdateProvisionedLimitRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateProvisionedLimit"; }

  AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

  AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The limit to update. Specify the limit class and the attributes that identify
   * the limit.</p>
   */
  inline const LimitDefinitionType& GetLimitDefinition() const { return m_limitDefinition; }
  inline bool LimitDefinitionHasBeenSet() const { return m_limitDefinitionHasBeenSet; }
  template <typename LimitDefinitionT = LimitDefinitionType>
  void SetLimitDefinition(LimitDefinitionT&& value) {
    m_limitDefinitionHasBeenSet = true;
    m_limitDefinition = std::forward<LimitDefinitionT>(value);
  }
  template <typename LimitDefinitionT = LimitDefinitionType>
  UpdateProvisionedLimitRequest& WithLimitDefinition(LimitDefinitionT&& value) {
    SetLimitDefinition(std::forward<LimitDefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provisioned rate to set, in requests per second (RPS).</p>
   */
  inline int GetRequestedLimitValue() const { return m_requestedLimitValue; }
  inline bool RequestedLimitValueHasBeenSet() const { return m_requestedLimitValueHasBeenSet; }
  inline void SetRequestedLimitValue(int value) {
    m_requestedLimitValueHasBeenSet = true;
    m_requestedLimitValue = value;
  }
  inline UpdateProvisionedLimitRequest& WithRequestedLimitValue(int value) {
    SetRequestedLimitValue(value);
    return *this;
  }
  ///@}
 private:
  LimitDefinitionType m_limitDefinition;

  int m_requestedLimitValue{0};
  bool m_limitDefinitionHasBeenSet = false;
  bool m_requestedLimitValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
