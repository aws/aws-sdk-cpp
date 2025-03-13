/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-identity/model/CognitoIdentityProvider.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentity
{
namespace Model
{
  /**
   * <p>An object representing an Amazon Cognito identity pool.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/IdentityPool">AWS
   * API Reference</a></p>
   */
  class UpdateIdentityPoolResult
  {
  public:
    AWS_COGNITOIDENTITY_API UpdateIdentityPoolResult() = default;
    AWS_COGNITOIDENTITY_API UpdateIdentityPoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITY_API UpdateIdentityPoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const { return m_identityPoolId; }
    template<typename IdentityPoolIdT = Aws::String>
    void SetIdentityPoolId(IdentityPoolIdT&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::forward<IdentityPoolIdT>(value); }
    template<typename IdentityPoolIdT = Aws::String>
    UpdateIdentityPoolResult& WithIdentityPoolId(IdentityPoolIdT&& value) { SetIdentityPoolId(std::forward<IdentityPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that you provide.</p>
     */
    inline const Aws::String& GetIdentityPoolName() const { return m_identityPoolName; }
    template<typename IdentityPoolNameT = Aws::String>
    void SetIdentityPoolName(IdentityPoolNameT&& value) { m_identityPoolNameHasBeenSet = true; m_identityPoolName = std::forward<IdentityPoolNameT>(value); }
    template<typename IdentityPoolNameT = Aws::String>
    UpdateIdentityPoolResult& WithIdentityPoolName(IdentityPoolNameT&& value) { SetIdentityPoolName(std::forward<IdentityPoolNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>TRUE if the identity pool supports unauthenticated logins.</p>
     */
    inline bool GetAllowUnauthenticatedIdentities() const { return m_allowUnauthenticatedIdentities; }
    inline void SetAllowUnauthenticatedIdentities(bool value) { m_allowUnauthenticatedIdentitiesHasBeenSet = true; m_allowUnauthenticatedIdentities = value; }
    inline UpdateIdentityPoolResult& WithAllowUnauthenticatedIdentities(bool value) { SetAllowUnauthenticatedIdentities(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables the Basic (Classic) authentication flow. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/authentication-flow.html">Identity
     * Pools (Federated Identities) Authentication Flow</a> in the <i>Amazon Cognito
     * Developer Guide</i>.</p>
     */
    inline bool GetAllowClassicFlow() const { return m_allowClassicFlow; }
    inline void SetAllowClassicFlow(bool value) { m_allowClassicFlowHasBeenSet = true; m_allowClassicFlow = value; }
    inline UpdateIdentityPoolResult& WithAllowClassicFlow(bool value) { SetAllowClassicFlow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional key:value pairs mapping provider names to provider app IDs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSupportedLoginProviders() const { return m_supportedLoginProviders; }
    template<typename SupportedLoginProvidersT = Aws::Map<Aws::String, Aws::String>>
    void SetSupportedLoginProviders(SupportedLoginProvidersT&& value) { m_supportedLoginProvidersHasBeenSet = true; m_supportedLoginProviders = std::forward<SupportedLoginProvidersT>(value); }
    template<typename SupportedLoginProvidersT = Aws::Map<Aws::String, Aws::String>>
    UpdateIdentityPoolResult& WithSupportedLoginProviders(SupportedLoginProvidersT&& value) { SetSupportedLoginProviders(std::forward<SupportedLoginProvidersT>(value)); return *this;}
    template<typename SupportedLoginProvidersKeyT = Aws::String, typename SupportedLoginProvidersValueT = Aws::String>
    UpdateIdentityPoolResult& AddSupportedLoginProviders(SupportedLoginProvidersKeyT&& key, SupportedLoginProvidersValueT&& value) {
      m_supportedLoginProvidersHasBeenSet = true; m_supportedLoginProviders.emplace(std::forward<SupportedLoginProvidersKeyT>(key), std::forward<SupportedLoginProvidersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline const Aws::String& GetDeveloperProviderName() const { return m_developerProviderName; }
    template<typename DeveloperProviderNameT = Aws::String>
    void SetDeveloperProviderName(DeveloperProviderNameT&& value) { m_developerProviderNameHasBeenSet = true; m_developerProviderName = std::forward<DeveloperProviderNameT>(value); }
    template<typename DeveloperProviderNameT = Aws::String>
    UpdateIdentityPoolResult& WithDeveloperProviderName(DeveloperProviderNameT&& value) { SetDeveloperProviderName(std::forward<DeveloperProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the OpenID Connect providers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOpenIdConnectProviderARNs() const { return m_openIdConnectProviderARNs; }
    template<typename OpenIdConnectProviderARNsT = Aws::Vector<Aws::String>>
    void SetOpenIdConnectProviderARNs(OpenIdConnectProviderARNsT&& value) { m_openIdConnectProviderARNsHasBeenSet = true; m_openIdConnectProviderARNs = std::forward<OpenIdConnectProviderARNsT>(value); }
    template<typename OpenIdConnectProviderARNsT = Aws::Vector<Aws::String>>
    UpdateIdentityPoolResult& WithOpenIdConnectProviderARNs(OpenIdConnectProviderARNsT&& value) { SetOpenIdConnectProviderARNs(std::forward<OpenIdConnectProviderARNsT>(value)); return *this;}
    template<typename OpenIdConnectProviderARNsT = Aws::String>
    UpdateIdentityPoolResult& AddOpenIdConnectProviderARNs(OpenIdConnectProviderARNsT&& value) { m_openIdConnectProviderARNsHasBeenSet = true; m_openIdConnectProviderARNs.emplace_back(std::forward<OpenIdConnectProviderARNsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list representing an Amazon Cognito user pool and its client ID.</p>
     */
    inline const Aws::Vector<CognitoIdentityProvider>& GetCognitoIdentityProviders() const { return m_cognitoIdentityProviders; }
    template<typename CognitoIdentityProvidersT = Aws::Vector<CognitoIdentityProvider>>
    void SetCognitoIdentityProviders(CognitoIdentityProvidersT&& value) { m_cognitoIdentityProvidersHasBeenSet = true; m_cognitoIdentityProviders = std::forward<CognitoIdentityProvidersT>(value); }
    template<typename CognitoIdentityProvidersT = Aws::Vector<CognitoIdentityProvider>>
    UpdateIdentityPoolResult& WithCognitoIdentityProviders(CognitoIdentityProvidersT&& value) { SetCognitoIdentityProviders(std::forward<CognitoIdentityProvidersT>(value)); return *this;}
    template<typename CognitoIdentityProvidersT = CognitoIdentityProvider>
    UpdateIdentityPoolResult& AddCognitoIdentityProviders(CognitoIdentityProvidersT&& value) { m_cognitoIdentityProvidersHasBeenSet = true; m_cognitoIdentityProviders.emplace_back(std::forward<CognitoIdentityProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of Amazon Resource Names (ARNs) of the SAML provider for your
     * identity pool.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSamlProviderARNs() const { return m_samlProviderARNs; }
    template<typename SamlProviderARNsT = Aws::Vector<Aws::String>>
    void SetSamlProviderARNs(SamlProviderARNsT&& value) { m_samlProviderARNsHasBeenSet = true; m_samlProviderARNs = std::forward<SamlProviderARNsT>(value); }
    template<typename SamlProviderARNsT = Aws::Vector<Aws::String>>
    UpdateIdentityPoolResult& WithSamlProviderARNs(SamlProviderARNsT&& value) { SetSamlProviderARNs(std::forward<SamlProviderARNsT>(value)); return *this;}
    template<typename SamlProviderARNsT = Aws::String>
    UpdateIdentityPoolResult& AddSamlProviderARNs(SamlProviderARNsT&& value) { m_samlProviderARNsHasBeenSet = true; m_samlProviderARNs.emplace_back(std::forward<SamlProviderARNsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags that are assigned to the identity pool. A tag is a label that you
     * can apply to identity pools to categorize and manage them in different ways,
     * such as by purpose, owner, environment, or other criteria.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetIdentityPoolTags() const { return m_identityPoolTags; }
    template<typename IdentityPoolTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetIdentityPoolTags(IdentityPoolTagsT&& value) { m_identityPoolTagsHasBeenSet = true; m_identityPoolTags = std::forward<IdentityPoolTagsT>(value); }
    template<typename IdentityPoolTagsT = Aws::Map<Aws::String, Aws::String>>
    UpdateIdentityPoolResult& WithIdentityPoolTags(IdentityPoolTagsT&& value) { SetIdentityPoolTags(std::forward<IdentityPoolTagsT>(value)); return *this;}
    template<typename IdentityPoolTagsKeyT = Aws::String, typename IdentityPoolTagsValueT = Aws::String>
    UpdateIdentityPoolResult& AddIdentityPoolTags(IdentityPoolTagsKeyT&& key, IdentityPoolTagsValueT&& value) {
      m_identityPoolTagsHasBeenSet = true; m_identityPoolTags.emplace(std::forward<IdentityPoolTagsKeyT>(key), std::forward<IdentityPoolTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateIdentityPoolResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    Aws::String m_identityPoolName;
    bool m_identityPoolNameHasBeenSet = false;

    bool m_allowUnauthenticatedIdentities{false};
    bool m_allowUnauthenticatedIdentitiesHasBeenSet = false;

    bool m_allowClassicFlow{false};
    bool m_allowClassicFlowHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_supportedLoginProviders;
    bool m_supportedLoginProvidersHasBeenSet = false;

    Aws::String m_developerProviderName;
    bool m_developerProviderNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_openIdConnectProviderARNs;
    bool m_openIdConnectProviderARNsHasBeenSet = false;

    Aws::Vector<CognitoIdentityProvider> m_cognitoIdentityProviders;
    bool m_cognitoIdentityProvidersHasBeenSet = false;

    Aws::Vector<Aws::String> m_samlProviderARNs;
    bool m_samlProviderARNsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_identityPoolTags;
    bool m_identityPoolTagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
