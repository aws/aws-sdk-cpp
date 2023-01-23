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
    AWS_COGNITOIDENTITYPROVIDER_API GetIdentityProviderByIdentifierRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIdentityProviderByIdentifier"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user pool ID.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline GetIdentityProviderByIdentifierRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline GetIdentityProviderByIdentifierRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline GetIdentityProviderByIdentifierRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The IdP identifier.</p>
     */
    inline const Aws::String& GetIdpIdentifier() const{ return m_idpIdentifier; }

    /**
     * <p>The IdP identifier.</p>
     */
    inline bool IdpIdentifierHasBeenSet() const { return m_idpIdentifierHasBeenSet; }

    /**
     * <p>The IdP identifier.</p>
     */
    inline void SetIdpIdentifier(const Aws::String& value) { m_idpIdentifierHasBeenSet = true; m_idpIdentifier = value; }

    /**
     * <p>The IdP identifier.</p>
     */
    inline void SetIdpIdentifier(Aws::String&& value) { m_idpIdentifierHasBeenSet = true; m_idpIdentifier = std::move(value); }

    /**
     * <p>The IdP identifier.</p>
     */
    inline void SetIdpIdentifier(const char* value) { m_idpIdentifierHasBeenSet = true; m_idpIdentifier.assign(value); }

    /**
     * <p>The IdP identifier.</p>
     */
    inline GetIdentityProviderByIdentifierRequest& WithIdpIdentifier(const Aws::String& value) { SetIdpIdentifier(value); return *this;}

    /**
     * <p>The IdP identifier.</p>
     */
    inline GetIdentityProviderByIdentifierRequest& WithIdpIdentifier(Aws::String&& value) { SetIdpIdentifier(std::move(value)); return *this;}

    /**
     * <p>The IdP identifier.</p>
     */
    inline GetIdentityProviderByIdentifierRequest& WithIdpIdentifier(const char* value) { SetIdpIdentifier(value); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_idpIdentifier;
    bool m_idpIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
