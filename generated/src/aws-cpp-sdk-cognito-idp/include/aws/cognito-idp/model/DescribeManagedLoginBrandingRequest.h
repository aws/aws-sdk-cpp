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
  class DescribeManagedLoginBrandingRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API DescribeManagedLoginBrandingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeManagedLoginBranding"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the user pool that contains the managed login branding style that
     * you want to get information about.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    DescribeManagedLoginBrandingRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the managed login branding style that you want to get more
     * information about.</p>
     */
    inline const Aws::String& GetManagedLoginBrandingId() const { return m_managedLoginBrandingId; }
    inline bool ManagedLoginBrandingIdHasBeenSet() const { return m_managedLoginBrandingIdHasBeenSet; }
    template<typename ManagedLoginBrandingIdT = Aws::String>
    void SetManagedLoginBrandingId(ManagedLoginBrandingIdT&& value) { m_managedLoginBrandingIdHasBeenSet = true; m_managedLoginBrandingId = std::forward<ManagedLoginBrandingIdT>(value); }
    template<typename ManagedLoginBrandingIdT = Aws::String>
    DescribeManagedLoginBrandingRequest& WithManagedLoginBrandingId(ManagedLoginBrandingIdT&& value) { SetManagedLoginBrandingId(std::forward<ManagedLoginBrandingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>true</code>, returns values for branding options that are
     * unchanged from Amazon Cognito defaults. When <code>false</code> or when you omit
     * this parameter, returns only values that you customized in your branding
     * style.</p>
     */
    inline bool GetReturnMergedResources() const { return m_returnMergedResources; }
    inline bool ReturnMergedResourcesHasBeenSet() const { return m_returnMergedResourcesHasBeenSet; }
    inline void SetReturnMergedResources(bool value) { m_returnMergedResourcesHasBeenSet = true; m_returnMergedResources = value; }
    inline DescribeManagedLoginBrandingRequest& WithReturnMergedResources(bool value) { SetReturnMergedResources(value); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_managedLoginBrandingId;
    bool m_managedLoginBrandingIdHasBeenSet = false;

    bool m_returnMergedResources{false};
    bool m_returnMergedResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
