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
    AWS_COGNITOIDENTITYPROVIDER_API SetUICustomizationRequest() = default;

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
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    SetUICustomizationRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the app client that you want to customize. To apply a default style
     * to all app clients not configured with client-level branding, set this parameter
     * value to <code>ALL</code>.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    SetUICustomizationRequest& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A plaintext CSS file that contains the custom fields that you want to apply
     * to your user pool or app client. To download a template, go to the Amazon
     * Cognito console. Navigate to your user pool <i>App clients</i> tab, select
     * <i>Login pages</i>, edit <i>Hosted UI (classic) style</i>, and select the link
     * to <code>CSS template.css</code>.</p>
     */
    inline const Aws::String& GetCSS() const { return m_cSS; }
    inline bool CSSHasBeenSet() const { return m_cSSHasBeenSet; }
    template<typename CSST = Aws::String>
    void SetCSS(CSST&& value) { m_cSSHasBeenSet = true; m_cSS = std::forward<CSST>(value); }
    template<typename CSST = Aws::String>
    SetUICustomizationRequest& WithCSS(CSST&& value) { SetCSS(std::forward<CSST>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image that you want to set as your login in the classic hosted UI, as a
     * Base64-formatted binary object.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetImageFile() const { return m_imageFile; }
    inline bool ImageFileHasBeenSet() const { return m_imageFileHasBeenSet; }
    template<typename ImageFileT = Aws::Utils::ByteBuffer>
    void SetImageFile(ImageFileT&& value) { m_imageFileHasBeenSet = true; m_imageFile = std::forward<ImageFileT>(value); }
    template<typename ImageFileT = Aws::Utils::ByteBuffer>
    SetUICustomizationRequest& WithImageFile(ImageFileT&& value) { SetImageFile(std::forward<ImageFileT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_cSS;
    bool m_cSSHasBeenSet = false;

    Aws::Utils::ByteBuffer m_imageFile{};
    bool m_imageFileHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
