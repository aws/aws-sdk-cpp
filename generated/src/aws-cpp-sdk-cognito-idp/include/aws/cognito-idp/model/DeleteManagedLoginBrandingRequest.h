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
    AWS_COGNITOIDENTITYPROVIDER_API DeleteManagedLoginBrandingRequest() = default;

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
    inline const Aws::String& GetManagedLoginBrandingId() const { return m_managedLoginBrandingId; }
    inline bool ManagedLoginBrandingIdHasBeenSet() const { return m_managedLoginBrandingIdHasBeenSet; }
    template<typename ManagedLoginBrandingIdT = Aws::String>
    void SetManagedLoginBrandingId(ManagedLoginBrandingIdT&& value) { m_managedLoginBrandingIdHasBeenSet = true; m_managedLoginBrandingId = std::forward<ManagedLoginBrandingIdT>(value); }
    template<typename ManagedLoginBrandingIdT = Aws::String>
    DeleteManagedLoginBrandingRequest& WithManagedLoginBrandingId(ManagedLoginBrandingIdT&& value) { SetManagedLoginBrandingId(std::forward<ManagedLoginBrandingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user pool that contains the managed login branding style that
     * you want to delete.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    DeleteManagedLoginBrandingRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
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
