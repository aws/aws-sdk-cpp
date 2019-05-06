/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COGNITOIDENTITYPROVIDER_API GetIdentityProviderByIdentifierRequest : public CognitoIdentityProviderRequest
  {
  public:
    GetIdentityProviderByIdentifierRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIdentityProviderByIdentifier"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <p>The identity provider ID.</p>
     */
    inline const Aws::String& GetIdpIdentifier() const{ return m_idpIdentifier; }

    /**
     * <p>The identity provider ID.</p>
     */
    inline bool IdpIdentifierHasBeenSet() const { return m_idpIdentifierHasBeenSet; }

    /**
     * <p>The identity provider ID.</p>
     */
    inline void SetIdpIdentifier(const Aws::String& value) { m_idpIdentifierHasBeenSet = true; m_idpIdentifier = value; }

    /**
     * <p>The identity provider ID.</p>
     */
    inline void SetIdpIdentifier(Aws::String&& value) { m_idpIdentifierHasBeenSet = true; m_idpIdentifier = std::move(value); }

    /**
     * <p>The identity provider ID.</p>
     */
    inline void SetIdpIdentifier(const char* value) { m_idpIdentifierHasBeenSet = true; m_idpIdentifier.assign(value); }

    /**
     * <p>The identity provider ID.</p>
     */
    inline GetIdentityProviderByIdentifierRequest& WithIdpIdentifier(const Aws::String& value) { SetIdpIdentifier(value); return *this;}

    /**
     * <p>The identity provider ID.</p>
     */
    inline GetIdentityProviderByIdentifierRequest& WithIdpIdentifier(Aws::String&& value) { SetIdpIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identity provider ID.</p>
     */
    inline GetIdentityProviderByIdentifierRequest& WithIdpIdentifier(const char* value) { SetIdpIdentifier(value); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    Aws::String m_idpIdentifier;
    bool m_idpIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
