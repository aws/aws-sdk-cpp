/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/UserTrustProviderType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the trust provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessInstanceUserTrustProviderClientConfiguration">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessInstanceUserTrustProviderClientConfiguration
  {
  public:
    AWS_EC2_API VerifiedAccessInstanceUserTrustProviderClientConfiguration() = default;
    AWS_EC2_API VerifiedAccessInstanceUserTrustProviderClientConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessInstanceUserTrustProviderClientConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The trust provider type.</p>
     */
    inline UserTrustProviderType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(UserTrustProviderType value) { m_typeHasBeenSet = true; m_type = value; }
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithType(UserTrustProviderType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of user claims to be requested from the IdP.</p>
     */
    inline const Aws::String& GetScopes() const { return m_scopes; }
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
    template<typename ScopesT = Aws::String>
    void SetScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes = std::forward<ScopesT>(value); }
    template<typename ScopesT = Aws::String>
    VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithScopes(ScopesT&& value) { SetScopes(std::forward<ScopesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC issuer identifier of the IdP.</p>
     */
    inline const Aws::String& GetIssuer() const { return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    template<typename IssuerT = Aws::String>
    void SetIssuer(IssuerT&& value) { m_issuerHasBeenSet = true; m_issuer = std::forward<IssuerT>(value); }
    template<typename IssuerT = Aws::String>
    VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithIssuer(IssuerT&& value) { SetIssuer(std::forward<IssuerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization endpoint of the IdP.</p>
     */
    inline const Aws::String& GetAuthorizationEndpoint() const { return m_authorizationEndpoint; }
    inline bool AuthorizationEndpointHasBeenSet() const { return m_authorizationEndpointHasBeenSet; }
    template<typename AuthorizationEndpointT = Aws::String>
    void SetAuthorizationEndpoint(AuthorizationEndpointT&& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = std::forward<AuthorizationEndpointT>(value); }
    template<typename AuthorizationEndpointT = Aws::String>
    VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithAuthorizationEndpoint(AuthorizationEndpointT&& value) { SetAuthorizationEndpoint(std::forward<AuthorizationEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public signing key endpoint.</p>
     */
    inline const Aws::String& GetPublicSigningKeyEndpoint() const { return m_publicSigningKeyEndpoint; }
    inline bool PublicSigningKeyEndpointHasBeenSet() const { return m_publicSigningKeyEndpointHasBeenSet; }
    template<typename PublicSigningKeyEndpointT = Aws::String>
    void SetPublicSigningKeyEndpoint(PublicSigningKeyEndpointT&& value) { m_publicSigningKeyEndpointHasBeenSet = true; m_publicSigningKeyEndpoint = std::forward<PublicSigningKeyEndpointT>(value); }
    template<typename PublicSigningKeyEndpointT = Aws::String>
    VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithPublicSigningKeyEndpoint(PublicSigningKeyEndpointT&& value) { SetPublicSigningKeyEndpoint(std::forward<PublicSigningKeyEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token endpoint of the IdP.</p>
     */
    inline const Aws::String& GetTokenEndpoint() const { return m_tokenEndpoint; }
    inline bool TokenEndpointHasBeenSet() const { return m_tokenEndpointHasBeenSet; }
    template<typename TokenEndpointT = Aws::String>
    void SetTokenEndpoint(TokenEndpointT&& value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint = std::forward<TokenEndpointT>(value); }
    template<typename TokenEndpointT = Aws::String>
    VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithTokenEndpoint(TokenEndpointT&& value) { SetTokenEndpoint(std::forward<TokenEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user info endpoint of the IdP.</p>
     */
    inline const Aws::String& GetUserInfoEndpoint() const { return m_userInfoEndpoint; }
    inline bool UserInfoEndpointHasBeenSet() const { return m_userInfoEndpointHasBeenSet; }
    template<typename UserInfoEndpointT = Aws::String>
    void SetUserInfoEndpoint(UserInfoEndpointT&& value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint = std::forward<UserInfoEndpointT>(value); }
    template<typename UserInfoEndpointT = Aws::String>
    VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithUserInfoEndpoint(UserInfoEndpointT&& value) { SetUserInfoEndpoint(std::forward<UserInfoEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth 2.0 client identifier.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth 2.0 client secret.</p>
     */
    inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
    template<typename ClientSecretT = Aws::String>
    void SetClientSecret(ClientSecretT&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::forward<ClientSecretT>(value); }
    template<typename ClientSecretT = Aws::String>
    VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithClientSecret(ClientSecretT&& value) { SetClientSecret(std::forward<ClientSecretT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Proof of Key Code Exchange (PKCE) is enabled.</p>
     */
    inline bool GetPkceEnabled() const { return m_pkceEnabled; }
    inline bool PkceEnabledHasBeenSet() const { return m_pkceEnabledHasBeenSet; }
    inline void SetPkceEnabled(bool value) { m_pkceEnabledHasBeenSet = true; m_pkceEnabled = value; }
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithPkceEnabled(bool value) { SetPkceEnabled(value); return *this;}
    ///@}
  private:

    UserTrustProviderType m_type{UserTrustProviderType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_scopes;
    bool m_scopesHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::String m_authorizationEndpoint;
    bool m_authorizationEndpointHasBeenSet = false;

    Aws::String m_publicSigningKeyEndpoint;
    bool m_publicSigningKeyEndpointHasBeenSet = false;

    Aws::String m_tokenEndpoint;
    bool m_tokenEndpointHasBeenSet = false;

    Aws::String m_userInfoEndpoint;
    bool m_userInfoEndpointHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet = false;

    bool m_pkceEnabled{false};
    bool m_pkceEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
