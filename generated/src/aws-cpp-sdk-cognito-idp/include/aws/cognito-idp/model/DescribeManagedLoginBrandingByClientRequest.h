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
  class DescribeManagedLoginBrandingByClientRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API DescribeManagedLoginBrandingByClientRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeManagedLoginBrandingByClient"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the user pool that contains the app client where you want more
     * information about the managed login branding style.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline DescribeManagedLoginBrandingByClientRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline DescribeManagedLoginBrandingByClientRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline DescribeManagedLoginBrandingByClientRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app client that's assigned to the branding style that you want more
     * information about.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline DescribeManagedLoginBrandingByClientRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline DescribeManagedLoginBrandingByClientRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline DescribeManagedLoginBrandingByClientRequest& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>true</code>, returns values for branding options that are
     * unchanged from Amazon Cognito defaults. When <code>false</code> or when you omit
     * this parameter, returns only values that you customized in your branding
     * style.</p>
     */
    inline bool GetReturnMergedResources() const{ return m_returnMergedResources; }
    inline bool ReturnMergedResourcesHasBeenSet() const { return m_returnMergedResourcesHasBeenSet; }
    inline void SetReturnMergedResources(bool value) { m_returnMergedResourcesHasBeenSet = true; m_returnMergedResources = value; }
    inline DescribeManagedLoginBrandingByClientRequest& WithReturnMergedResources(bool value) { SetReturnMergedResources(value); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    bool m_returnMergedResources;
    bool m_returnMergedResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
