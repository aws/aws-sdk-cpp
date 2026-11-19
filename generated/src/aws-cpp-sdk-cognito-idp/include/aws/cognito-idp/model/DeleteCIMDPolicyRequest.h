/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

/**
 */
class DeleteCIMDPolicyRequest : public CognitoIdentityProviderRequest {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API DeleteCIMDPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteCIMDPolicy"; }

  AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

  AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the user pool that contains the CIMD policy.</p>
   */
  inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
  inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
  template <typename UserPoolIdT = Aws::String>
  void SetUserPoolId(UserPoolIdT&& value) {
    m_userPoolIdHasBeenSet = true;
    m_userPoolId = std::forward<UserPoolIdT>(value);
  }
  template <typename UserPoolIdT = Aws::String>
  DeleteCIMDPolicyRequest& WithUserPoolId(UserPoolIdT&& value) {
    SetUserPoolId(std::forward<UserPoolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the CIMD policy that you want to delete.</p>
   */
  inline const Aws::String& GetCIMDPolicyId() const { return m_cIMDPolicyId; }
  inline bool CIMDPolicyIdHasBeenSet() const { return m_cIMDPolicyIdHasBeenSet; }
  template <typename CIMDPolicyIdT = Aws::String>
  void SetCIMDPolicyId(CIMDPolicyIdT&& value) {
    m_cIMDPolicyIdHasBeenSet = true;
    m_cIMDPolicyId = std::forward<CIMDPolicyIdT>(value);
  }
  template <typename CIMDPolicyIdT = Aws::String>
  DeleteCIMDPolicyRequest& WithCIMDPolicyId(CIMDPolicyIdT&& value) {
    SetCIMDPolicyId(std::forward<CIMDPolicyIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userPoolId;

  Aws::String m_cIMDPolicyId;
  bool m_userPoolIdHasBeenSet = false;
  bool m_cIMDPolicyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
