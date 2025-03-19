/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
   * <p>Describes the OpenID Connect (OIDC) options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NativeApplicationOidcOptions">AWS
   * API Reference</a></p>
   */
  class NativeApplicationOidcOptions
  {
  public:
    AWS_EC2_API NativeApplicationOidcOptions() = default;
    AWS_EC2_API NativeApplicationOidcOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NativeApplicationOidcOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The public signing key endpoint.</p>
     */
    inline const Aws::String& GetPublicSigningKeyEndpoint() const { return m_publicSigningKeyEndpoint; }
    inline bool PublicSigningKeyEndpointHasBeenSet() const { return m_publicSigningKeyEndpointHasBeenSet; }
    template<typename PublicSigningKeyEndpointT = Aws::String>
    void SetPublicSigningKeyEndpoint(PublicSigningKeyEndpointT&& value) { m_publicSigningKeyEndpointHasBeenSet = true; m_publicSigningKeyEndpoint = std::forward<PublicSigningKeyEndpointT>(value); }
    template<typename PublicSigningKeyEndpointT = Aws::String>
    NativeApplicationOidcOptions& WithPublicSigningKeyEndpoint(PublicSigningKeyEndpointT&& value) { SetPublicSigningKeyEndpoint(std::forward<PublicSigningKeyEndpointT>(value)); return *this;}
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
    NativeApplicationOidcOptions& WithIssuer(IssuerT&& value) { SetIssuer(std::forward<IssuerT>(value)); return *this;}
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
    NativeApplicationOidcOptions& WithAuthorizationEndpoint(AuthorizationEndpointT&& value) { SetAuthorizationEndpoint(std::forward<AuthorizationEndpointT>(value)); return *this;}
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
    NativeApplicationOidcOptions& WithTokenEndpoint(TokenEndpointT&& value) { SetTokenEndpoint(std::forward<TokenEndpointT>(value)); return *this;}
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
    NativeApplicationOidcOptions& WithUserInfoEndpoint(UserInfoEndpointT&& value) { SetUserInfoEndpoint(std::forward<UserInfoEndpointT>(value)); return *this;}
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
    NativeApplicationOidcOptions& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of user claims to be requested from the IdP.</p>
     */
    inline const Aws::String& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Aws::String>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Aws::String>
    NativeApplicationOidcOptions& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_publicSigningKeyEndpoint;
    bool m_publicSigningKeyEndpointHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::String m_authorizationEndpoint;
    bool m_authorizationEndpointHasBeenSet = false;

    Aws::String m_tokenEndpoint;
    bool m_tokenEndpointHasBeenSet = false;

    Aws::String m_userInfoEndpoint;
    bool m_userInfoEndpointHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
