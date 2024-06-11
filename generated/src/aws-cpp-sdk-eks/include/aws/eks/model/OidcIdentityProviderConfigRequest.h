/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing an OpenID Connect (OIDC) configuration. Before
   * associating an OIDC identity provider to your cluster, review the considerations
   * in <a
   * href="https://docs.aws.amazon.com/eks/latest/userguide/authenticate-oidc-identity-provider.html">Authenticating
   * users for your cluster from an OIDC identity provider</a> in the <i>Amazon EKS
   * User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/OidcIdentityProviderConfigRequest">AWS
   * API Reference</a></p>
   */
  class OidcIdentityProviderConfigRequest
  {
  public:
    AWS_EKS_API OidcIdentityProviderConfigRequest();
    AWS_EKS_API OidcIdentityProviderConfigRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API OidcIdentityProviderConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the OIDC provider configuration.</p>
     */
    inline const Aws::String& GetIdentityProviderConfigName() const{ return m_identityProviderConfigName; }
    inline bool IdentityProviderConfigNameHasBeenSet() const { return m_identityProviderConfigNameHasBeenSet; }
    inline void SetIdentityProviderConfigName(const Aws::String& value) { m_identityProviderConfigNameHasBeenSet = true; m_identityProviderConfigName = value; }
    inline void SetIdentityProviderConfigName(Aws::String&& value) { m_identityProviderConfigNameHasBeenSet = true; m_identityProviderConfigName = std::move(value); }
    inline void SetIdentityProviderConfigName(const char* value) { m_identityProviderConfigNameHasBeenSet = true; m_identityProviderConfigName.assign(value); }
    inline OidcIdentityProviderConfigRequest& WithIdentityProviderConfigName(const Aws::String& value) { SetIdentityProviderConfigName(value); return *this;}
    inline OidcIdentityProviderConfigRequest& WithIdentityProviderConfigName(Aws::String&& value) { SetIdentityProviderConfigName(std::move(value)); return *this;}
    inline OidcIdentityProviderConfigRequest& WithIdentityProviderConfigName(const char* value) { SetIdentityProviderConfigName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the OIDC identity provider that allows the API server to discover
     * public signing keys for verifying tokens. The URL must begin with
     * <code>https://</code> and should correspond to the <code>iss</code> claim in the
     * provider's OIDC ID tokens. Based on the OIDC standard, path components are
     * allowed but query parameters are not. Typically the URL consists of only a
     * hostname, like <code>https://server.example.org</code> or
     * <code>https://example.com</code>. This URL should point to the level below
     * <code>.well-known/openid-configuration</code> and must be publicly accessible
     * over the internet.</p>
     */
    inline const Aws::String& GetIssuerUrl() const{ return m_issuerUrl; }
    inline bool IssuerUrlHasBeenSet() const { return m_issuerUrlHasBeenSet; }
    inline void SetIssuerUrl(const Aws::String& value) { m_issuerUrlHasBeenSet = true; m_issuerUrl = value; }
    inline void SetIssuerUrl(Aws::String&& value) { m_issuerUrlHasBeenSet = true; m_issuerUrl = std::move(value); }
    inline void SetIssuerUrl(const char* value) { m_issuerUrlHasBeenSet = true; m_issuerUrl.assign(value); }
    inline OidcIdentityProviderConfigRequest& WithIssuerUrl(const Aws::String& value) { SetIssuerUrl(value); return *this;}
    inline OidcIdentityProviderConfigRequest& WithIssuerUrl(Aws::String&& value) { SetIssuerUrl(std::move(value)); return *this;}
    inline OidcIdentityProviderConfigRequest& WithIssuerUrl(const char* value) { SetIssuerUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is also known as <i>audience</i>. The ID for the client application that
     * makes authentication requests to the OIDC identity provider.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline OidcIdentityProviderConfigRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline OidcIdentityProviderConfigRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline OidcIdentityProviderConfigRequest& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON Web Token (JWT) claim to use as the username. The default is
     * <code>sub</code>, which is expected to be a unique identifier of the end user.
     * You can choose other claims, such as <code>email</code> or <code>name</code>,
     * depending on the OIDC identity provider. Claims other than <code>email</code>
     * are prefixed with the issuer URL to prevent naming clashes with other
     * plug-ins.</p>
     */
    inline const Aws::String& GetUsernameClaim() const{ return m_usernameClaim; }
    inline bool UsernameClaimHasBeenSet() const { return m_usernameClaimHasBeenSet; }
    inline void SetUsernameClaim(const Aws::String& value) { m_usernameClaimHasBeenSet = true; m_usernameClaim = value; }
    inline void SetUsernameClaim(Aws::String&& value) { m_usernameClaimHasBeenSet = true; m_usernameClaim = std::move(value); }
    inline void SetUsernameClaim(const char* value) { m_usernameClaimHasBeenSet = true; m_usernameClaim.assign(value); }
    inline OidcIdentityProviderConfigRequest& WithUsernameClaim(const Aws::String& value) { SetUsernameClaim(value); return *this;}
    inline OidcIdentityProviderConfigRequest& WithUsernameClaim(Aws::String&& value) { SetUsernameClaim(std::move(value)); return *this;}
    inline OidcIdentityProviderConfigRequest& WithUsernameClaim(const char* value) { SetUsernameClaim(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix that is prepended to username claims to prevent clashes with
     * existing names. If you do not provide this field, and <code>username</code> is a
     * value other than <code>email</code>, the prefix defaults to
     * <code>issuerurl#</code>. You can use the value <code>-</code> to disable all
     * prefixing.</p>
     */
    inline const Aws::String& GetUsernamePrefix() const{ return m_usernamePrefix; }
    inline bool UsernamePrefixHasBeenSet() const { return m_usernamePrefixHasBeenSet; }
    inline void SetUsernamePrefix(const Aws::String& value) { m_usernamePrefixHasBeenSet = true; m_usernamePrefix = value; }
    inline void SetUsernamePrefix(Aws::String&& value) { m_usernamePrefixHasBeenSet = true; m_usernamePrefix = std::move(value); }
    inline void SetUsernamePrefix(const char* value) { m_usernamePrefixHasBeenSet = true; m_usernamePrefix.assign(value); }
    inline OidcIdentityProviderConfigRequest& WithUsernamePrefix(const Aws::String& value) { SetUsernamePrefix(value); return *this;}
    inline OidcIdentityProviderConfigRequest& WithUsernamePrefix(Aws::String&& value) { SetUsernamePrefix(std::move(value)); return *this;}
    inline OidcIdentityProviderConfigRequest& WithUsernamePrefix(const char* value) { SetUsernamePrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JWT claim that the provider uses to return your groups.</p>
     */
    inline const Aws::String& GetGroupsClaim() const{ return m_groupsClaim; }
    inline bool GroupsClaimHasBeenSet() const { return m_groupsClaimHasBeenSet; }
    inline void SetGroupsClaim(const Aws::String& value) { m_groupsClaimHasBeenSet = true; m_groupsClaim = value; }
    inline void SetGroupsClaim(Aws::String&& value) { m_groupsClaimHasBeenSet = true; m_groupsClaim = std::move(value); }
    inline void SetGroupsClaim(const char* value) { m_groupsClaimHasBeenSet = true; m_groupsClaim.assign(value); }
    inline OidcIdentityProviderConfigRequest& WithGroupsClaim(const Aws::String& value) { SetGroupsClaim(value); return *this;}
    inline OidcIdentityProviderConfigRequest& WithGroupsClaim(Aws::String&& value) { SetGroupsClaim(std::move(value)); return *this;}
    inline OidcIdentityProviderConfigRequest& WithGroupsClaim(const char* value) { SetGroupsClaim(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix that is prepended to group claims to prevent clashes with existing
     * names (such as <code>system:</code> groups). For example, the value<code>
     * oidc:</code> will create group names like <code>oidc:engineering</code> and
     * <code>oidc:infra</code>.</p>
     */
    inline const Aws::String& GetGroupsPrefix() const{ return m_groupsPrefix; }
    inline bool GroupsPrefixHasBeenSet() const { return m_groupsPrefixHasBeenSet; }
    inline void SetGroupsPrefix(const Aws::String& value) { m_groupsPrefixHasBeenSet = true; m_groupsPrefix = value; }
    inline void SetGroupsPrefix(Aws::String&& value) { m_groupsPrefixHasBeenSet = true; m_groupsPrefix = std::move(value); }
    inline void SetGroupsPrefix(const char* value) { m_groupsPrefixHasBeenSet = true; m_groupsPrefix.assign(value); }
    inline OidcIdentityProviderConfigRequest& WithGroupsPrefix(const Aws::String& value) { SetGroupsPrefix(value); return *this;}
    inline OidcIdentityProviderConfigRequest& WithGroupsPrefix(Aws::String&& value) { SetGroupsPrefix(std::move(value)); return *this;}
    inline OidcIdentityProviderConfigRequest& WithGroupsPrefix(const char* value) { SetGroupsPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key value pairs that describe required claims in the identity token. If
     * set, each claim is verified to be present in the token with a matching value.
     * For the maximum number of claims that you can require, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service-quotas.html">Amazon
     * EKS service quotas</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequiredClaims() const{ return m_requiredClaims; }
    inline bool RequiredClaimsHasBeenSet() const { return m_requiredClaimsHasBeenSet; }
    inline void SetRequiredClaims(const Aws::Map<Aws::String, Aws::String>& value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims = value; }
    inline void SetRequiredClaims(Aws::Map<Aws::String, Aws::String>&& value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims = std::move(value); }
    inline OidcIdentityProviderConfigRequest& WithRequiredClaims(const Aws::Map<Aws::String, Aws::String>& value) { SetRequiredClaims(value); return *this;}
    inline OidcIdentityProviderConfigRequest& WithRequiredClaims(Aws::Map<Aws::String, Aws::String>&& value) { SetRequiredClaims(std::move(value)); return *this;}
    inline OidcIdentityProviderConfigRequest& AddRequiredClaims(const Aws::String& key, const Aws::String& value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims.emplace(key, value); return *this; }
    inline OidcIdentityProviderConfigRequest& AddRequiredClaims(Aws::String&& key, const Aws::String& value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims.emplace(std::move(key), value); return *this; }
    inline OidcIdentityProviderConfigRequest& AddRequiredClaims(const Aws::String& key, Aws::String&& value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims.emplace(key, std::move(value)); return *this; }
    inline OidcIdentityProviderConfigRequest& AddRequiredClaims(Aws::String&& key, Aws::String&& value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims.emplace(std::move(key), std::move(value)); return *this; }
    inline OidcIdentityProviderConfigRequest& AddRequiredClaims(const char* key, Aws::String&& value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims.emplace(key, std::move(value)); return *this; }
    inline OidcIdentityProviderConfigRequest& AddRequiredClaims(Aws::String&& key, const char* value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims.emplace(std::move(key), value); return *this; }
    inline OidcIdentityProviderConfigRequest& AddRequiredClaims(const char* key, const char* value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_identityProviderConfigName;
    bool m_identityProviderConfigNameHasBeenSet = false;

    Aws::String m_issuerUrl;
    bool m_issuerUrlHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_usernameClaim;
    bool m_usernameClaimHasBeenSet = false;

    Aws::String m_usernamePrefix;
    bool m_usernamePrefixHasBeenSet = false;

    Aws::String m_groupsClaim;
    bool m_groupsClaimHasBeenSet = false;

    Aws::String m_groupsPrefix;
    bool m_groupsPrefixHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_requiredClaims;
    bool m_requiredClaimsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
