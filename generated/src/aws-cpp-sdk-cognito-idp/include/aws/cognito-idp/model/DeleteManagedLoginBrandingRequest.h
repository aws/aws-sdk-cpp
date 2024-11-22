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
  class DeleteManagedLoginBrandingRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API DeleteManagedLoginBrandingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteManagedLoginBranding"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the managed login branding style that you want to delete.</p>
     */
    inline const Aws::String& GetManagedLoginBrandingId() const{ return m_managedLoginBrandingId; }
    inline bool ManagedLoginBrandingIdHasBeenSet() const { return m_managedLoginBrandingIdHasBeenSet; }
    inline void SetManagedLoginBrandingId(const Aws::String& value) { m_managedLoginBrandingIdHasBeenSet = true; m_managedLoginBrandingId = value; }
    inline void SetManagedLoginBrandingId(Aws::String&& value) { m_managedLoginBrandingIdHasBeenSet = true; m_managedLoginBrandingId = std::move(value); }
    inline void SetManagedLoginBrandingId(const char* value) { m_managedLoginBrandingIdHasBeenSet = true; m_managedLoginBrandingId.assign(value); }
    inline DeleteManagedLoginBrandingRequest& WithManagedLoginBrandingId(const Aws::String& value) { SetManagedLoginBrandingId(value); return *this;}
    inline DeleteManagedLoginBrandingRequest& WithManagedLoginBrandingId(Aws::String&& value) { SetManagedLoginBrandingId(std::move(value)); return *this;}
    inline DeleteManagedLoginBrandingRequest& WithManagedLoginBrandingId(const char* value) { SetManagedLoginBrandingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user pool that contains the managed login branding style that
     * you want to delete.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline DeleteManagedLoginBrandingRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline DeleteManagedLoginBrandingRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline DeleteManagedLoginBrandingRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}
  private:

    Aws::String m_managedLoginBrandingId;
    bool m_managedLoginBrandingIdHasBeenSet = false;

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
