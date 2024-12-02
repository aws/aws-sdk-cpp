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
    AWS_EC2_API VerifiedAccessInstanceUserTrustProviderClientConfiguration();
    AWS_EC2_API VerifiedAccessInstanceUserTrustProviderClientConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessInstanceUserTrustProviderClientConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The trust provider type.</p>
     */
    inline const UserTrustProviderType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const UserTrustProviderType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(UserTrustProviderType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithType(const UserTrustProviderType& value) { SetType(value); return *this;}
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithType(UserTrustProviderType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of user claims to be requested from the IdP.</p>
     */
    inline const Aws::String& GetScopes() const{ return m_scopes; }
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
    inline void SetScopes(const Aws::String& value) { m_scopesHasBeenSet = true; m_scopes = value; }
    inline void SetScopes(Aws::String&& value) { m_scopesHasBeenSet = true; m_scopes = std::move(value); }
    inline void SetScopes(const char* value) { m_scopesHasBeenSet = true; m_scopes.assign(value); }
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithScopes(const Aws::String& value) { SetScopes(value); return *this;}
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithScopes(Aws::String&& value) { SetScopes(std::move(value)); return *this;}
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithScopes(const char* value) { SetScopes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC issuer identifier of the IdP.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithIssuer(const char* value) { SetIssuer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization endpoint of the IdP.</p>
     */
    inline const Aws::String& GetAuthorizationEndpoint() const{ return m_authorizationEndpoint; }
    inline bool AuthorizationEndpointHasBeenSet() const { return m_authorizationEndpointHasBeenSet; }
    inline void SetAuthorizationEndpoint(const Aws::String& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = value; }
    inline void SetAuthorizationEndpoint(Aws::String&& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = std::move(value); }
    inline void SetAuthorizationEndpoint(const char* value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint.assign(value); }
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithAuthorizationEndpoint(const Aws::String& value) { SetAuthorizationEndpoint(value); return *this;}
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithAuthorizationEndpoint(Aws::String&& value) { SetAuthorizationEndpoint(std::move(value)); return *this;}
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithAuthorizationEndpoint(const char* value) { SetAuthorizationEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public signing key endpoint.</p>
     */
    inline const Aws::String& GetPublicSigningKeyEndpoint() const{ return m_publicSigningKeyEndpoint; }
    inline bool PublicSigningKeyEndpointHasBeenSet() const { return m_publicSigningKeyEndpointHasBeenSet; }
    inline void SetPublicSigningKeyEndpoint(const Aws::String& value) { m_publicSigningKeyEndpointHasBeenSet = true; m_publicSigningKeyEndpoint = value; }
    inline void SetPublicSigningKeyEndpoint(Aws::String&& value) { m_publicSigningKeyEndpointHasBeenSet = true; m_publicSigningKeyEndpoint = std::move(value); }
    inline void SetPublicSigningKeyEndpoint(const char* value) { m_publicSigningKeyEndpointHasBeenSet = true; m_publicSigningKeyEndpoint.assign(value); }
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithPublicSigningKeyEndpoint(const Aws::String& value) { SetPublicSigningKeyEndpoint(value); return *this;}
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithPublicSigningKeyEndpoint(Aws::String&& value) { SetPublicSigningKeyEndpoint(std::move(value)); return *this;}
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithPublicSigningKeyEndpoint(const char* value) { SetPublicSigningKeyEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token endpoint of the IdP.</p>
     */
    inline const Aws::String& GetTokenEndpoint() const{ return m_tokenEndpoint; }
    inline bool TokenEndpointHasBeenSet() const { return m_tokenEndpointHasBeenSet; }
    inline void SetTokenEndpoint(const Aws::String& value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint = value; }
    inline void SetTokenEndpoint(Aws::String&& value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint = std::move(value); }
    inline void SetTokenEndpoint(const char* value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint.assign(value); }
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithTokenEndpoint(const Aws::String& value) { SetTokenEndpoint(value); return *this;}
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithTokenEndpoint(Aws::String&& value) { SetTokenEndpoint(std::move(value)); return *this;}
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithTokenEndpoint(const char* value) { SetTokenEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user info endpoint of the IdP.</p>
     */
    inline const Aws::String& GetUserInfoEndpoint() const{ return m_userInfoEndpoint; }
    inline bool UserInfoEndpointHasBeenSet() const { return m_userInfoEndpointHasBeenSet; }
    inline void SetUserInfoEndpoint(const Aws::String& value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint = value; }
    inline void SetUserInfoEndpoint(Aws::String&& value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint = std::move(value); }
    inline void SetUserInfoEndpoint(const char* value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint.assign(value); }
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithUserInfoEndpoint(const Aws::String& value) { SetUserInfoEndpoint(value); return *this;}
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithUserInfoEndpoint(Aws::String&& value) { SetUserInfoEndpoint(std::move(value)); return *this;}
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithUserInfoEndpoint(const char* value) { SetUserInfoEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth 2.0 client identifier.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth 2.0 client secret.</p>
     */
    inline const Aws::String& GetClientSecret() const{ return m_clientSecret; }
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
    inline void SetClientSecret(const Aws::String& value) { m_clientSecretHasBeenSet = true; m_clientSecret = value; }
    inline void SetClientSecret(Aws::String&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::move(value); }
    inline void SetClientSecret(const char* value) { m_clientSecretHasBeenSet = true; m_clientSecret.assign(value); }
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithClientSecret(const Aws::String& value) { SetClientSecret(value); return *this;}
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithClientSecret(Aws::String&& value) { SetClientSecret(std::move(value)); return *this;}
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithClientSecret(const char* value) { SetClientSecret(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Proof of Key Code Exchange (PKCE) is enabled.</p>
     */
    inline bool GetPkceEnabled() const{ return m_pkceEnabled; }
    inline bool PkceEnabledHasBeenSet() const { return m_pkceEnabledHasBeenSet; }
    inline void SetPkceEnabled(bool value) { m_pkceEnabledHasBeenSet = true; m_pkceEnabled = value; }
    inline VerifiedAccessInstanceUserTrustProviderClientConfiguration& WithPkceEnabled(bool value) { SetPkceEnabled(value); return *this;}
    ///@}
  private:

    UserTrustProviderType m_type;
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

    bool m_pkceEnabled;
    bool m_pkceEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
