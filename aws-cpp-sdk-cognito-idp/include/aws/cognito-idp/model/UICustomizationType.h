﻿/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>A container for the UI customization information for a user pool's built-in
   * app UI.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UICustomizationType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API UICustomizationType
  {
  public:
    UICustomizationType();
    UICustomizationType(Aws::Utils::Json::JsonView jsonValue);
    UICustomizationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

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
    inline UICustomizationType& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline UICustomizationType& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline UICustomizationType& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The client ID for the client app.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

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
    inline UICustomizationType& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The client ID for the client app.</p>
     */
    inline UICustomizationType& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The client ID for the client app.</p>
     */
    inline UICustomizationType& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The logo image for the UI customization.</p>
     */
    inline const Aws::String& GetImageUrl() const{ return m_imageUrl; }

    /**
     * <p>The logo image for the UI customization.</p>
     */
    inline void SetImageUrl(const Aws::String& value) { m_imageUrlHasBeenSet = true; m_imageUrl = value; }

    /**
     * <p>The logo image for the UI customization.</p>
     */
    inline void SetImageUrl(Aws::String&& value) { m_imageUrlHasBeenSet = true; m_imageUrl = std::move(value); }

    /**
     * <p>The logo image for the UI customization.</p>
     */
    inline void SetImageUrl(const char* value) { m_imageUrlHasBeenSet = true; m_imageUrl.assign(value); }

    /**
     * <p>The logo image for the UI customization.</p>
     */
    inline UICustomizationType& WithImageUrl(const Aws::String& value) { SetImageUrl(value); return *this;}

    /**
     * <p>The logo image for the UI customization.</p>
     */
    inline UICustomizationType& WithImageUrl(Aws::String&& value) { SetImageUrl(std::move(value)); return *this;}

    /**
     * <p>The logo image for the UI customization.</p>
     */
    inline UICustomizationType& WithImageUrl(const char* value) { SetImageUrl(value); return *this;}


    /**
     * <p>The CSS values in the UI customization.</p>
     */
    inline const Aws::String& GetCSS() const{ return m_cSS; }

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
    inline UICustomizationType& WithCSS(const Aws::String& value) { SetCSS(value); return *this;}

    /**
     * <p>The CSS values in the UI customization.</p>
     */
    inline UICustomizationType& WithCSS(Aws::String&& value) { SetCSS(std::move(value)); return *this;}

    /**
     * <p>The CSS values in the UI customization.</p>
     */
    inline UICustomizationType& WithCSS(const char* value) { SetCSS(value); return *this;}


    /**
     * <p>The CSS version number.</p>
     */
    inline const Aws::String& GetCSSVersion() const{ return m_cSSVersion; }

    /**
     * <p>The CSS version number.</p>
     */
    inline void SetCSSVersion(const Aws::String& value) { m_cSSVersionHasBeenSet = true; m_cSSVersion = value; }

    /**
     * <p>The CSS version number.</p>
     */
    inline void SetCSSVersion(Aws::String&& value) { m_cSSVersionHasBeenSet = true; m_cSSVersion = std::move(value); }

    /**
     * <p>The CSS version number.</p>
     */
    inline void SetCSSVersion(const char* value) { m_cSSVersionHasBeenSet = true; m_cSSVersion.assign(value); }

    /**
     * <p>The CSS version number.</p>
     */
    inline UICustomizationType& WithCSSVersion(const Aws::String& value) { SetCSSVersion(value); return *this;}

    /**
     * <p>The CSS version number.</p>
     */
    inline UICustomizationType& WithCSSVersion(Aws::String&& value) { SetCSSVersion(std::move(value)); return *this;}

    /**
     * <p>The CSS version number.</p>
     */
    inline UICustomizationType& WithCSSVersion(const char* value) { SetCSSVersion(value); return *this;}


    /**
     * <p>The last-modified date for the UI customization.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The last-modified date for the UI customization.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The last-modified date for the UI customization.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The last-modified date for the UI customization.</p>
     */
    inline UICustomizationType& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The last-modified date for the UI customization.</p>
     */
    inline UICustomizationType& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The creation date for the UI customization.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The creation date for the UI customization.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The creation date for the UI customization.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The creation date for the UI customization.</p>
     */
    inline UICustomizationType& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date for the UI customization.</p>
     */
    inline UICustomizationType& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    Aws::String m_imageUrl;
    bool m_imageUrlHasBeenSet;

    Aws::String m_cSS;
    bool m_cSSHasBeenSet;

    Aws::String m_cSSVersion;
    bool m_cSSVersionHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
