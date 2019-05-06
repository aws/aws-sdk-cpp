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
  class AWS_COGNITOIDENTITYPROVIDER_API SetUICustomizationRequest : public CognitoIdentityProviderRequest
  {
  public:
    SetUICustomizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetUICustomization"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline SetUICustomizationRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline SetUICustomizationRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline SetUICustomizationRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The client ID for the client app.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The client ID for the client app.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The client ID for the client app.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The client ID for the client app.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The client ID for the client app.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The client ID for the client app.</p>
     */
    inline SetUICustomizationRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The client ID for the client app.</p>
     */
    inline SetUICustomizationRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The client ID for the client app.</p>
     */
    inline SetUICustomizationRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The CSS values in the UI customization.</p>
     */
    inline const Aws::String& GetCSS() const{ return m_cSS; }

    /**
     * <p>The CSS values in the UI customization.</p>
     */
    inline bool CSSHasBeenSet() const { return m_cSSHasBeenSet; }

    /**
     * <p>The CSS values in the UI customization.</p>
     */
    inline void SetCSS(const Aws::String& value) { m_cSSHasBeenSet = true; m_cSS = value; }

    /**
     * <p>The CSS values in the UI customization.</p>
     */
    inline void SetCSS(Aws::String&& value) { m_cSSHasBeenSet = true; m_cSS = std::move(value); }

    /**
     * <p>The CSS values in the UI customization.</p>
     */
    inline void SetCSS(const char* value) { m_cSSHasBeenSet = true; m_cSS.assign(value); }

    /**
     * <p>The CSS values in the UI customization.</p>
     */
    inline SetUICustomizationRequest& WithCSS(const Aws::String& value) { SetCSS(value); return *this;}

    /**
     * <p>The CSS values in the UI customization.</p>
     */
    inline SetUICustomizationRequest& WithCSS(Aws::String&& value) { SetCSS(std::move(value)); return *this;}

    /**
     * <p>The CSS values in the UI customization.</p>
     */
    inline SetUICustomizationRequest& WithCSS(const char* value) { SetCSS(value); return *this;}


    /**
     * <p>The uploaded logo image for the UI customization.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetImageFile() const{ return m_imageFile; }

    /**
     * <p>The uploaded logo image for the UI customization.</p>
     */
    inline bool ImageFileHasBeenSet() const { return m_imageFileHasBeenSet; }

    /**
     * <p>The uploaded logo image for the UI customization.</p>
     */
    inline void SetImageFile(const Aws::Utils::ByteBuffer& value) { m_imageFileHasBeenSet = true; m_imageFile = value; }

    /**
     * <p>The uploaded logo image for the UI customization.</p>
     */
    inline void SetImageFile(Aws::Utils::ByteBuffer&& value) { m_imageFileHasBeenSet = true; m_imageFile = std::move(value); }

    /**
     * <p>The uploaded logo image for the UI customization.</p>
     */
    inline SetUICustomizationRequest& WithImageFile(const Aws::Utils::ByteBuffer& value) { SetImageFile(value); return *this;}

    /**
     * <p>The uploaded logo image for the UI customization.</p>
     */
    inline SetUICustomizationRequest& WithImageFile(Aws::Utils::ByteBuffer&& value) { SetImageFile(std::move(value)); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    Aws::String m_cSS;
    bool m_cSSHasBeenSet;

    Aws::Utils::ByteBuffer m_imageFile;
    bool m_imageFileHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
