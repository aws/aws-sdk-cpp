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
class DescribeTermsByClientRequest : public CognitoIdentityProviderRequest {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API DescribeTermsByClientRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeTermsByClient"; }

  AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

  AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the app client that the terms documents are associated with.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  DescribeTermsByClientRequest& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the user pool that contains the terms documents that you want to
   * describe.</p>
   */
  inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
  inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
  template <typename UserPoolIdT = Aws::String>
  void SetUserPoolId(UserPoolIdT&& value) {
    m_userPoolIdHasBeenSet = true;
    m_userPoolId = std::forward<UserPoolIdT>(value);
  }
  template <typename UserPoolIdT = Aws::String>
  DescribeTermsByClientRequest& WithUserPoolId(UserPoolIdT&& value) {
    SetUserPoolId(std::forward<UserPoolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the terms documents that you want to describe.</p>
   */
  inline const Aws::String& GetTermsName() const { return m_termsName; }
  inline bool TermsNameHasBeenSet() const { return m_termsNameHasBeenSet; }
  template <typename TermsNameT = Aws::String>
  void SetTermsName(TermsNameT&& value) {
    m_termsNameHasBeenSet = true;
    m_termsName = std::forward<TermsNameT>(value);
  }
  template <typename TermsNameT = Aws::String>
  DescribeTermsByClientRequest& WithTermsName(TermsNameT&& value) {
    SetTermsName(std::forward<TermsNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientId;

  Aws::String m_userPoolId;

  Aws::String m_termsName;
  bool m_clientIdHasBeenSet = false;
  bool m_userPoolIdHasBeenSet = false;
  bool m_termsNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
