/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/TermsSourceType.h>
#include <aws/cognito-idp/model/TermsEnforcementType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class CreateTermsRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CreateTermsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTerms"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the user pool where you want to create terms documents.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    CreateTermsRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the app client where you want to create terms documents. Must be an
     * app client in the requested user pool.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    CreateTermsRequest& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name for the document that you want to create in the current
     * request. Must begin with <code>terms-of-use</code> or
     * <code>privacy-policy</code> as identification of the document type. Provide URLs
     * for both <code>terms-of-use</code> and <code>privacy-policy</code> in separate
     * requests.</p>
     */
    inline const Aws::String& GetTermsName() const { return m_termsName; }
    inline bool TermsNameHasBeenSet() const { return m_termsNameHasBeenSet; }
    template<typename TermsNameT = Aws::String>
    void SetTermsName(TermsNameT&& value) { m_termsNameHasBeenSet = true; m_termsName = std::forward<TermsNameT>(value); }
    template<typename TermsNameT = Aws::String>
    CreateTermsRequest& WithTermsName(TermsNameT&& value) { SetTermsName(std::forward<TermsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is reserved for future use and currently accepts only one
     * value.</p>
     */
    inline TermsSourceType GetTermsSource() const { return m_termsSource; }
    inline bool TermsSourceHasBeenSet() const { return m_termsSourceHasBeenSet; }
    inline void SetTermsSource(TermsSourceType value) { m_termsSourceHasBeenSet = true; m_termsSource = value; }
    inline CreateTermsRequest& WithTermsSource(TermsSourceType value) { SetTermsSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is reserved for future use and currently accepts only one
     * value.</p>
     */
    inline TermsEnforcementType GetEnforcement() const { return m_enforcement; }
    inline bool EnforcementHasBeenSet() const { return m_enforcementHasBeenSet; }
    inline void SetEnforcement(TermsEnforcementType value) { m_enforcementHasBeenSet = true; m_enforcement = value; }
    inline CreateTermsRequest& WithEnforcement(TermsEnforcementType value) { SetEnforcement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of URLs to languages. For each localized language that will view the
     * requested <code>TermsName</code>, assign a URL. A selection of
     * <code>cognito:default</code> displays for all languages that don't have a
     * language-specific URL.</p> <p>For example, <code>"cognito:default":
     * "https://terms.example.com", "cognito:spanish":
     * "https://terms.example.com/es"</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLinks() const { return m_links; }
    inline bool LinksHasBeenSet() const { return m_linksHasBeenSet; }
    template<typename LinksT = Aws::Map<Aws::String, Aws::String>>
    void SetLinks(LinksT&& value) { m_linksHasBeenSet = true; m_links = std::forward<LinksT>(value); }
    template<typename LinksT = Aws::Map<Aws::String, Aws::String>>
    CreateTermsRequest& WithLinks(LinksT&& value) { SetLinks(std::forward<LinksT>(value)); return *this;}
    template<typename LinksKeyT = Aws::String, typename LinksValueT = Aws::String>
    CreateTermsRequest& AddLinks(LinksKeyT&& key, LinksValueT&& value) {
      m_linksHasBeenSet = true; m_links.emplace(std::forward<LinksKeyT>(key), std::forward<LinksValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_termsName;
    bool m_termsNameHasBeenSet = false;

    TermsSourceType m_termsSource{TermsSourceType::NOT_SET};
    bool m_termsSourceHasBeenSet = false;

    TermsEnforcementType m_enforcement{TermsEnforcementType::NOT_SET};
    bool m_enforcementHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_links;
    bool m_linksHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
