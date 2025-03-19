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
   * <p>A container for the UI customization information for the hosted UI in a user
   * pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UICustomizationType">AWS
   * API Reference</a></p>
   */
  class UICustomizationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UICustomizationType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API UICustomizationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API UICustomizationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the user pool with hosted UI customizations.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    UICustomizationType& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app client ID for your UI customization. When this value isn't present,
     * the customization applies to all user pool app clients that don't have
     * client-level settings..</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    UICustomizationType& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL path to the hosted logo image of your UI customization.</p>
     */
    inline const Aws::String& GetImageUrl() const { return m_imageUrl; }
    inline bool ImageUrlHasBeenSet() const { return m_imageUrlHasBeenSet; }
    template<typename ImageUrlT = Aws::String>
    void SetImageUrl(ImageUrlT&& value) { m_imageUrlHasBeenSet = true; m_imageUrl = std::forward<ImageUrlT>(value); }
    template<typename ImageUrlT = Aws::String>
    UICustomizationType& WithImageUrl(ImageUrlT&& value) { SetImageUrl(std::forward<ImageUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CSS values in the UI customization.</p>
     */
    inline const Aws::String& GetCSS() const { return m_cSS; }
    inline bool CSSHasBeenSet() const { return m_cSSHasBeenSet; }
    template<typename CSST = Aws::String>
    void SetCSS(CSST&& value) { m_cSSHasBeenSet = true; m_cSS = std::forward<CSST>(value); }
    template<typename CSST = Aws::String>
    UICustomizationType& WithCSS(CSST&& value) { SetCSS(std::forward<CSST>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CSS version number.</p>
     */
    inline const Aws::String& GetCSSVersion() const { return m_cSSVersion; }
    inline bool CSSVersionHasBeenSet() const { return m_cSSVersionHasBeenSet; }
    template<typename CSSVersionT = Aws::String>
    void SetCSSVersion(CSSVersionT&& value) { m_cSSVersionHasBeenSet = true; m_cSSVersion = std::forward<CSSVersionT>(value); }
    template<typename CSSVersionT = Aws::String>
    UICustomizationType& WithCSSVersion(CSSVersionT&& value) { SetCSSVersion(std::forward<CSSVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was modified. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    UICustomizationType& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was created. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    UICustomizationType& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
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

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
