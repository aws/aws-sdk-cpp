/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class SetUICustomizationRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SetUICustomizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetUICustomization"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the user pool where you want to apply branding to the classic
     * hosted UI.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline SetUICustomizationRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline SetUICustomizationRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline SetUICustomizationRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the app client that you want to customize. To apply a default style
     * to all app clients not configured with client-level branding, set this parameter
     * value to <code>ALL</code>.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline SetUICustomizationRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline SetUICustomizationRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline SetUICustomizationRequest& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A plaintext CSS file that contains the custom fields that you want to apply
     * to your user pool or app client. To download a template, go to the Amazon
     * Cognito console. Navigate to your user pool <i>App clients</i> tab, select
     * <i>Login pages</i>, edit <i>Hosted UI (classic) style</i>, and select the link
     * to <code>CSS template.css</code>.</p>
     */
    inline const Aws::String& GetCSS() const{ return m_cSS; }
    inline bool CSSHasBeenSet() const { return m_cSSHasBeenSet; }
    inline void SetCSS(const Aws::String& value) { m_cSSHasBeenSet = true; m_cSS = value; }
    inline void SetCSS(Aws::String&& value) { m_cSSHasBeenSet = true; m_cSS = std::move(value); }
    inline void SetCSS(const char* value) { m_cSSHasBeenSet = true; m_cSS.assign(value); }
    inline SetUICustomizationRequest& WithCSS(const Aws::String& value) { SetCSS(value); return *this;}
    inline SetUICustomizationRequest& WithCSS(Aws::String&& value) { SetCSS(std::move(value)); return *this;}
    inline SetUICustomizationRequest& WithCSS(const char* value) { SetCSS(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image that you want to set as your login in the classic hosted UI, as a
     * Base64-formatted binary object.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetImageFile() const{ return m_imageFile; }
    inline bool ImageFileHasBeenSet() const { return m_imageFileHasBeenSet; }
    inline void SetImageFile(const Aws::Utils::ByteBuffer& value) { m_imageFileHasBeenSet = true; m_imageFile = value; }
    inline void SetImageFile(Aws::Utils::ByteBuffer&& value) { m_imageFileHasBeenSet = true; m_imageFile = std::move(value); }
    inline SetUICustomizationRequest& WithImageFile(const Aws::Utils::ByteBuffer& value) { SetImageFile(value); return *this;}
    inline SetUICustomizationRequest& WithImageFile(Aws::Utils::ByteBuffer&& value) { SetImageFile(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_cSS;
    bool m_cSSHasBeenSet = false;

    Aws::Utils::ByteBuffer m_imageFile;
    bool m_imageFileHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
