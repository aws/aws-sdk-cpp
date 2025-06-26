/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/TokenEndpointAuthenticationScheme.h>
#include <aws/iot-managed-integrations/model/ProactiveRefreshTokenRenewal.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Configuration details for OAuth authentication with a third-party
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/OAuthConfig">AWS
   * API Reference</a></p>
   */
  class OAuthConfig
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API OAuthConfig() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API OAuthConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API OAuthConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorization URL for the OAuth service, where users are directed to
     * authenticate and authorize access.</p>
     */
    inline const Aws::String& GetAuthUrl() const { return m_authUrl; }
    inline bool AuthUrlHasBeenSet() const { return m_authUrlHasBeenSet; }
    template<typename AuthUrlT = Aws::String>
    void SetAuthUrl(AuthUrlT&& value) { m_authUrlHasBeenSet = true; m_authUrl = std::forward<AuthUrlT>(value); }
    template<typename AuthUrlT = Aws::String>
    OAuthConfig& WithAuthUrl(AuthUrlT&& value) { SetAuthUrl(std::forward<AuthUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token URL for the OAuth service, where authorization codes are exchanged
     * for access tokens.</p>
     */
    inline const Aws::String& GetTokenUrl() const { return m_tokenUrl; }
    inline bool TokenUrlHasBeenSet() const { return m_tokenUrlHasBeenSet; }
    template<typename TokenUrlT = Aws::String>
    void SetTokenUrl(TokenUrlT&& value) { m_tokenUrlHasBeenSet = true; m_tokenUrl = std::forward<TokenUrlT>(value); }
    template<typename TokenUrlT = Aws::String>
    OAuthConfig& WithTokenUrl(TokenUrlT&& value) { SetTokenUrl(std::forward<TokenUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth scopes requested during authorization, which define the permissions
     * granted to the application.</p>
     */
    inline const Aws::String& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Aws::String>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Aws::String>
    OAuthConfig& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication scheme used when requesting tokens from the token
     * endpoint.</p>
     */
    inline TokenEndpointAuthenticationScheme GetTokenEndpointAuthenticationScheme() const { return m_tokenEndpointAuthenticationScheme; }
    inline bool TokenEndpointAuthenticationSchemeHasBeenSet() const { return m_tokenEndpointAuthenticationSchemeHasBeenSet; }
    inline void SetTokenEndpointAuthenticationScheme(TokenEndpointAuthenticationScheme value) { m_tokenEndpointAuthenticationSchemeHasBeenSet = true; m_tokenEndpointAuthenticationScheme = value; }
    inline OAuthConfig& WithTokenEndpointAuthenticationScheme(TokenEndpointAuthenticationScheme value) { SetTokenEndpointAuthenticationScheme(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL where users are redirected after completing the OAuth authorization
     * process.</p>
     */
    inline const Aws::String& GetOAuthCompleteRedirectUrl() const { return m_oAuthCompleteRedirectUrl; }
    inline bool OAuthCompleteRedirectUrlHasBeenSet() const { return m_oAuthCompleteRedirectUrlHasBeenSet; }
    template<typename OAuthCompleteRedirectUrlT = Aws::String>
    void SetOAuthCompleteRedirectUrl(OAuthCompleteRedirectUrlT&& value) { m_oAuthCompleteRedirectUrlHasBeenSet = true; m_oAuthCompleteRedirectUrl = std::forward<OAuthCompleteRedirectUrlT>(value); }
    template<typename OAuthCompleteRedirectUrlT = Aws::String>
    OAuthConfig& WithOAuthCompleteRedirectUrl(OAuthCompleteRedirectUrlT&& value) { SetOAuthCompleteRedirectUrl(std::forward<OAuthCompleteRedirectUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for proactively refreshing OAuth tokens before they expire.</p>
     */
    inline const ProactiveRefreshTokenRenewal& GetProactiveRefreshTokenRenewal() const { return m_proactiveRefreshTokenRenewal; }
    inline bool ProactiveRefreshTokenRenewalHasBeenSet() const { return m_proactiveRefreshTokenRenewalHasBeenSet; }
    template<typename ProactiveRefreshTokenRenewalT = ProactiveRefreshTokenRenewal>
    void SetProactiveRefreshTokenRenewal(ProactiveRefreshTokenRenewalT&& value) { m_proactiveRefreshTokenRenewalHasBeenSet = true; m_proactiveRefreshTokenRenewal = std::forward<ProactiveRefreshTokenRenewalT>(value); }
    template<typename ProactiveRefreshTokenRenewalT = ProactiveRefreshTokenRenewal>
    OAuthConfig& WithProactiveRefreshTokenRenewal(ProactiveRefreshTokenRenewalT&& value) { SetProactiveRefreshTokenRenewal(std::forward<ProactiveRefreshTokenRenewalT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authUrl;
    bool m_authUrlHasBeenSet = false;

    Aws::String m_tokenUrl;
    bool m_tokenUrlHasBeenSet = false;

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;

    TokenEndpointAuthenticationScheme m_tokenEndpointAuthenticationScheme{TokenEndpointAuthenticationScheme::NOT_SET};
    bool m_tokenEndpointAuthenticationSchemeHasBeenSet = false;

    Aws::String m_oAuthCompleteRedirectUrl;
    bool m_oAuthCompleteRedirectUrlHasBeenSet = false;

    ProactiveRefreshTokenRenewal m_proactiveRefreshTokenRenewal;
    bool m_proactiveRefreshTokenRenewalHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
