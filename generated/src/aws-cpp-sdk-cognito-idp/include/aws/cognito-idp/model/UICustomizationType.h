/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UICustomizationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UICustomizationType();
    AWS_COGNITOIDENTITYPROVIDER_API UICustomizationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API UICustomizationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user pool ID for the user pool.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline UICustomizationType& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline UICustomizationType& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline UICustomizationType& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client ID for the client app.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline UICustomizationType& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline UICustomizationType& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline UICustomizationType& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logo image for the UI customization.</p>
     */
    inline const Aws::String& GetImageUrl() const{ return m_imageUrl; }
    inline bool ImageUrlHasBeenSet() const { return m_imageUrlHasBeenSet; }
    inline void SetImageUrl(const Aws::String& value) { m_imageUrlHasBeenSet = true; m_imageUrl = value; }
    inline void SetImageUrl(Aws::String&& value) { m_imageUrlHasBeenSet = true; m_imageUrl = std::move(value); }
    inline void SetImageUrl(const char* value) { m_imageUrlHasBeenSet = true; m_imageUrl.assign(value); }
    inline UICustomizationType& WithImageUrl(const Aws::String& value) { SetImageUrl(value); return *this;}
    inline UICustomizationType& WithImageUrl(Aws::String&& value) { SetImageUrl(std::move(value)); return *this;}
    inline UICustomizationType& WithImageUrl(const char* value) { SetImageUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CSS values in the UI customization.</p>
     */
    inline const Aws::String& GetCSS() const{ return m_cSS; }
    inline bool CSSHasBeenSet() const { return m_cSSHasBeenSet; }
    inline void SetCSS(const Aws::String& value) { m_cSSHasBeenSet = true; m_cSS = value; }
    inline void SetCSS(Aws::String&& value) { m_cSSHasBeenSet = true; m_cSS = std::move(value); }
    inline void SetCSS(const char* value) { m_cSSHasBeenSet = true; m_cSS.assign(value); }
    inline UICustomizationType& WithCSS(const Aws::String& value) { SetCSS(value); return *this;}
    inline UICustomizationType& WithCSS(Aws::String&& value) { SetCSS(std::move(value)); return *this;}
    inline UICustomizationType& WithCSS(const char* value) { SetCSS(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CSS version number.</p>
     */
    inline const Aws::String& GetCSSVersion() const{ return m_cSSVersion; }
    inline bool CSSVersionHasBeenSet() const { return m_cSSVersionHasBeenSet; }
    inline void SetCSSVersion(const Aws::String& value) { m_cSSVersionHasBeenSet = true; m_cSSVersion = value; }
    inline void SetCSSVersion(Aws::String&& value) { m_cSSVersionHasBeenSet = true; m_cSSVersion = std::move(value); }
    inline void SetCSSVersion(const char* value) { m_cSSVersionHasBeenSet = true; m_cSSVersion.assign(value); }
    inline UICustomizationType& WithCSSVersion(const Aws::String& value) { SetCSSVersion(value); return *this;}
    inline UICustomizationType& WithCSSVersion(Aws::String&& value) { SetCSSVersion(std::move(value)); return *this;}
    inline UICustomizationType& WithCSSVersion(const char* value) { SetCSSVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was modified. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline UICustomizationType& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline UICustomizationType& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was created. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline UICustomizationType& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline UICustomizationType& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_imageUrl;
    bool m_imageUrlHasBeenSet = false;

    Aws::String m_cSS;
    bool m_cSSHasBeenSet = false;

    Aws::String m_cSSVersion;
    bool m_cSSVersionHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
