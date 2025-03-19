/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class GetIdentityProviderByIdentifierRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API GetIdentityProviderByIdentifierRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIdentityProviderByIdentifier"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the user pool where you want to get information about the IdP.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    GetIdentityProviderByIdentifierRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier that you assigned to your user pool. The identifier is an
     * alternative name for an IdP that is distinct from the IdP name. For example, an
     * IdP with a name of <code>MyIdP</code> might have an identifier of the email
     * domain <code>example.com</code>.</p>
     */
    inline const Aws::String& GetIdpIdentifier() const { return m_idpIdentifier; }
    inline bool IdpIdentifierHasBeenSet() const { return m_idpIdentifierHasBeenSet; }
    template<typename IdpIdentifierT = Aws::String>
    void SetIdpIdentifier(IdpIdentifierT&& value) { m_idpIdentifierHasBeenSet = true; m_idpIdentifier = std::forward<IdpIdentifierT>(value); }
    template<typename IdpIdentifierT = Aws::String>
    GetIdentityProviderByIdentifierRequest& WithIdpIdentifier(IdpIdentifierT&& value) { SetIdpIdentifier(std::forward<IdpIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_idpIdentifier;
    bool m_idpIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
