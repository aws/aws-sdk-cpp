﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/cognito-identity/CognitoIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

  /**
   * <p>Input to the <code>GetCredentialsForIdentity</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetCredentialsForIdentityInput">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITY_API GetCredentialsForIdentityRequest : public CognitoIdentityRequest
  {
  public:
    GetCredentialsForIdentityRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline GetCredentialsForIdentityRequest& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline GetCredentialsForIdentityRequest& WithIdentityId(Aws::String&& value) { SetIdentityId(value); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline GetCredentialsForIdentityRequest& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLogins() const{ return m_logins; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline void SetLogins(const Aws::Map<Aws::String, Aws::String>& value) { m_loginsHasBeenSet = true; m_logins = value; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline void SetLogins(Aws::Map<Aws::String, Aws::String>&& value) { m_loginsHasBeenSet = true; m_logins = value; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline GetCredentialsForIdentityRequest& WithLogins(const Aws::Map<Aws::String, Aws::String>& value) { SetLogins(value); return *this;}

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline GetCredentialsForIdentityRequest& WithLogins(Aws::Map<Aws::String, Aws::String>&& value) { SetLogins(value); return *this;}

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline GetCredentialsForIdentityRequest& AddLogins(const Aws::String& key, const Aws::String& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline GetCredentialsForIdentityRequest& AddLogins(Aws::String&& key, const Aws::String& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline GetCredentialsForIdentityRequest& AddLogins(const Aws::String& key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline GetCredentialsForIdentityRequest& AddLogins(Aws::String&& key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline GetCredentialsForIdentityRequest& AddLogins(const char* key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline GetCredentialsForIdentityRequest& AddLogins(Aws::String&& key, const char* value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline GetCredentialsForIdentityRequest& AddLogins(const char* key, const char* value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to be assumed when multiple roles
     * were received in the token from the identity provider. For example, a SAML-based
     * identity provider. This parameter is optional for identity providers that do not
     * support role customization.</p>
     */
    inline const Aws::String& GetCustomRoleArn() const{ return m_customRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to be assumed when multiple roles
     * were received in the token from the identity provider. For example, a SAML-based
     * identity provider. This parameter is optional for identity providers that do not
     * support role customization.</p>
     */
    inline void SetCustomRoleArn(const Aws::String& value) { m_customRoleArnHasBeenSet = true; m_customRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to be assumed when multiple roles
     * were received in the token from the identity provider. For example, a SAML-based
     * identity provider. This parameter is optional for identity providers that do not
     * support role customization.</p>
     */
    inline void SetCustomRoleArn(Aws::String&& value) { m_customRoleArnHasBeenSet = true; m_customRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to be assumed when multiple roles
     * were received in the token from the identity provider. For example, a SAML-based
     * identity provider. This parameter is optional for identity providers that do not
     * support role customization.</p>
     */
    inline void SetCustomRoleArn(const char* value) { m_customRoleArnHasBeenSet = true; m_customRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to be assumed when multiple roles
     * were received in the token from the identity provider. For example, a SAML-based
     * identity provider. This parameter is optional for identity providers that do not
     * support role customization.</p>
     */
    inline GetCredentialsForIdentityRequest& WithCustomRoleArn(const Aws::String& value) { SetCustomRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role to be assumed when multiple roles
     * were received in the token from the identity provider. For example, a SAML-based
     * identity provider. This parameter is optional for identity providers that do not
     * support role customization.</p>
     */
    inline GetCredentialsForIdentityRequest& WithCustomRoleArn(Aws::String&& value) { SetCustomRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role to be assumed when multiple roles
     * were received in the token from the identity provider. For example, a SAML-based
     * identity provider. This parameter is optional for identity providers that do not
     * support role customization.</p>
     */
    inline GetCredentialsForIdentityRequest& WithCustomRoleArn(const char* value) { SetCustomRoleArn(value); return *this;}

  private:
    Aws::String m_identityId;
    bool m_identityIdHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_logins;
    bool m_loginsHasBeenSet;
    Aws::String m_customRoleArn;
    bool m_customRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
