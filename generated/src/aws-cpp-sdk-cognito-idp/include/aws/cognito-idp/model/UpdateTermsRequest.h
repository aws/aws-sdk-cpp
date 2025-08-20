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
  class UpdateTermsRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UpdateTermsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTerms"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the terms document that you want to update.</p>
     */
    inline const Aws::String& GetTermsId() const { return m_termsId; }
    inline bool TermsIdHasBeenSet() const { return m_termsIdHasBeenSet; }
    template<typename TermsIdT = Aws::String>
    void SetTermsId(TermsIdT&& value) { m_termsIdHasBeenSet = true; m_termsId = std::forward<TermsIdT>(value); }
    template<typename TermsIdT = Aws::String>
    UpdateTermsRequest& WithTermsId(TermsIdT&& value) { SetTermsId(std::forward<TermsIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user pool that contains the terms that you want to update.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    UpdateTermsRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name that you want to apply to the requested terms documents.</p>
     */
    inline const Aws::String& GetTermsName() const { return m_termsName; }
    inline bool TermsNameHasBeenSet() const { return m_termsNameHasBeenSet; }
    template<typename TermsNameT = Aws::String>
    void SetTermsName(TermsNameT&& value) { m_termsNameHasBeenSet = true; m_termsName = std::forward<TermsNameT>(value); }
    template<typename TermsNameT = Aws::String>
    UpdateTermsRequest& WithTermsName(TermsNameT&& value) { SetTermsName(std::forward<TermsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is reserved for future use and currently accepts only one
     * value.</p>
     */
    inline TermsSourceType GetTermsSource() const { return m_termsSource; }
    inline bool TermsSourceHasBeenSet() const { return m_termsSourceHasBeenSet; }
    inline void SetTermsSource(TermsSourceType value) { m_termsSourceHasBeenSet = true; m_termsSource = value; }
    inline UpdateTermsRequest& WithTermsSource(TermsSourceType value) { SetTermsSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is reserved for future use and currently accepts only one
     * value.</p>
     */
    inline TermsEnforcementType GetEnforcement() const { return m_enforcement; }
    inline bool EnforcementHasBeenSet() const { return m_enforcementHasBeenSet; }
    inline void SetEnforcement(TermsEnforcementType value) { m_enforcementHasBeenSet = true; m_enforcement = value; }
    inline UpdateTermsRequest& WithEnforcement(TermsEnforcementType value) { SetEnforcement(value); return *this;}
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
    UpdateTermsRequest& WithLinks(LinksT&& value) { SetLinks(std::forward<LinksT>(value)); return *this;}
    template<typename LinksKeyT = Aws::String, typename LinksValueT = Aws::String>
    UpdateTermsRequest& AddLinks(LinksKeyT&& key, LinksValueT&& value) {
      m_linksHasBeenSet = true; m_links.emplace(std::forward<LinksKeyT>(key), std::forward<LinksValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_termsId;
    bool m_termsIdHasBeenSet = false;

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

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
