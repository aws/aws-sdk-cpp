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
   * <p>Options for OIDC-based, user-identity type trust provider.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/OidcOptions">AWS API
   * Reference</a></p>
   */
  class OidcOptions
  {
  public:
    AWS_EC2_API OidcOptions();
    AWS_EC2_API OidcOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API OidcOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The OIDC issuer.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }

    /**
     * <p>The OIDC issuer.</p>
     */
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }

    /**
     * <p>The OIDC issuer.</p>
     */
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }

    /**
     * <p>The OIDC issuer.</p>
     */
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }

    /**
     * <p>The OIDC issuer.</p>
     */
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }

    /**
     * <p>The OIDC issuer.</p>
     */
    inline OidcOptions& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}

    /**
     * <p>The OIDC issuer.</p>
     */
    inline OidcOptions& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}

    /**
     * <p>The OIDC issuer.</p>
     */
    inline OidcOptions& WithIssuer(const char* value) { SetIssuer(value); return *this;}


    /**
     * <p>The OIDC authorization endpoint.</p>
     */
    inline const Aws::String& GetAuthorizationEndpoint() const{ return m_authorizationEndpoint; }

    /**
     * <p>The OIDC authorization endpoint.</p>
     */
    inline bool AuthorizationEndpointHasBeenSet() const { return m_authorizationEndpointHasBeenSet; }

    /**
     * <p>The OIDC authorization endpoint.</p>
     */
    inline void SetAuthorizationEndpoint(const Aws::String& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = value; }

    /**
     * <p>The OIDC authorization endpoint.</p>
     */
    inline void SetAuthorizationEndpoint(Aws::String&& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = std::move(value); }

    /**
     * <p>The OIDC authorization endpoint.</p>
     */
    inline void SetAuthorizationEndpoint(const char* value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint.assign(value); }

    /**
     * <p>The OIDC authorization endpoint.</p>
     */
    inline OidcOptions& WithAuthorizationEndpoint(const Aws::String& value) { SetAuthorizationEndpoint(value); return *this;}

    /**
     * <p>The OIDC authorization endpoint.</p>
     */
    inline OidcOptions& WithAuthorizationEndpoint(Aws::String&& value) { SetAuthorizationEndpoint(std::move(value)); return *this;}

    /**
     * <p>The OIDC authorization endpoint.</p>
     */
    inline OidcOptions& WithAuthorizationEndpoint(const char* value) { SetAuthorizationEndpoint(value); return *this;}


    /**
     * <p>The OIDC token endpoint.</p>
     */
    inline const Aws::String& GetTokenEndpoint() const{ return m_tokenEndpoint; }

    /**
     * <p>The OIDC token endpoint.</p>
     */
    inline bool TokenEndpointHasBeenSet() const { return m_tokenEndpointHasBeenSet; }

    /**
     * <p>The OIDC token endpoint.</p>
     */
    inline void SetTokenEndpoint(const Aws::String& value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint = value; }

    /**
     * <p>The OIDC token endpoint.</p>
     */
    inline void SetTokenEndpoint(Aws::String&& value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint = std::move(value); }

    /**
     * <p>The OIDC token endpoint.</p>
     */
    inline void SetTokenEndpoint(const char* value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint.assign(value); }

    /**
     * <p>The OIDC token endpoint.</p>
     */
    inline OidcOptions& WithTokenEndpoint(const Aws::String& value) { SetTokenEndpoint(value); return *this;}

    /**
     * <p>The OIDC token endpoint.</p>
     */
    inline OidcOptions& WithTokenEndpoint(Aws::String&& value) { SetTokenEndpoint(std::move(value)); return *this;}

    /**
     * <p>The OIDC token endpoint.</p>
     */
    inline OidcOptions& WithTokenEndpoint(const char* value) { SetTokenEndpoint(value); return *this;}


    /**
     * <p>The OIDC user info endpoint.</p>
     */
    inline const Aws::String& GetUserInfoEndpoint() const{ return m_userInfoEndpoint; }

    /**
     * <p>The OIDC user info endpoint.</p>
     */
    inline bool UserInfoEndpointHasBeenSet() const { return m_userInfoEndpointHasBeenSet; }

    /**
     * <p>The OIDC user info endpoint.</p>
     */
    inline void SetUserInfoEndpoint(const Aws::String& value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint = value; }

    /**
     * <p>The OIDC user info endpoint.</p>
     */
    inline void SetUserInfoEndpoint(Aws::String&& value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint = std::move(value); }

    /**
     * <p>The OIDC user info endpoint.</p>
     */
    inline void SetUserInfoEndpoint(const char* value) { m_userInfoEndpointHasBeenSet = true; m_userInfoEndpoint.assign(value); }

    /**
     * <p>The OIDC user info endpoint.</p>
     */
    inline OidcOptions& WithUserInfoEndpoint(const Aws::String& value) { SetUserInfoEndpoint(value); return *this;}

    /**
     * <p>The OIDC user info endpoint.</p>
     */
    inline OidcOptions& WithUserInfoEndpoint(Aws::String&& value) { SetUserInfoEndpoint(std::move(value)); return *this;}

    /**
     * <p>The OIDC user info endpoint.</p>
     */
    inline OidcOptions& WithUserInfoEndpoint(const char* value) { SetUserInfoEndpoint(value); return *this;}


    /**
     * <p>The client identifier.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The client identifier.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The client identifier.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The client identifier.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The client identifier.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The client identifier.</p>
     */
    inline OidcOptions& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The client identifier.</p>
     */
    inline OidcOptions& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The client identifier.</p>
     */
    inline OidcOptions& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The client secret.</p>
     */
    inline const Aws::String& GetClientSecret() const{ return m_clientSecret; }

    /**
     * <p>The client secret.</p>
     */
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }

    /**
     * <p>The client secret.</p>
     */
    inline void SetClientSecret(const Aws::String& value) { m_clientSecretHasBeenSet = true; m_clientSecret = value; }

    /**
     * <p>The client secret.</p>
     */
    inline void SetClientSecret(Aws::String&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::move(value); }

    /**
     * <p>The client secret.</p>
     */
    inline void SetClientSecret(const char* value) { m_clientSecretHasBeenSet = true; m_clientSecret.assign(value); }

    /**
     * <p>The client secret.</p>
     */
    inline OidcOptions& WithClientSecret(const Aws::String& value) { SetClientSecret(value); return *this;}

    /**
     * <p>The client secret.</p>
     */
    inline OidcOptions& WithClientSecret(Aws::String&& value) { SetClientSecret(std::move(value)); return *this;}

    /**
     * <p>The client secret.</p>
     */
    inline OidcOptions& WithClientSecret(const char* value) { SetClientSecret(value); return *this;}


    /**
     * <p>The OpenID Connect (OIDC) scope specified.</p>
     */
    inline const Aws::String& GetScope() const{ return m_scope; }

    /**
     * <p>The OpenID Connect (OIDC) scope specified.</p>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>The OpenID Connect (OIDC) scope specified.</p>
     */
    inline void SetScope(const Aws::String& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>The OpenID Connect (OIDC) scope specified.</p>
     */
    inline void SetScope(Aws::String&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>The OpenID Connect (OIDC) scope specified.</p>
     */
    inline void SetScope(const char* value) { m_scopeHasBeenSet = true; m_scope.assign(value); }

    /**
     * <p>The OpenID Connect (OIDC) scope specified.</p>
     */
    inline OidcOptions& WithScope(const Aws::String& value) { SetScope(value); return *this;}

    /**
     * <p>The OpenID Connect (OIDC) scope specified.</p>
     */
    inline OidcOptions& WithScope(Aws::String&& value) { SetScope(std::move(value)); return *this;}

    /**
     * <p>The OpenID Connect (OIDC) scope specified.</p>
     */
    inline OidcOptions& WithScope(const char* value) { SetScope(value); return *this;}

  private:

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

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet = false;

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
