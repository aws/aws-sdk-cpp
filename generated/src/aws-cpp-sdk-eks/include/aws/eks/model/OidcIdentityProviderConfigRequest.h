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
    AWS_EKS_API OidcIdentityProviderConfigRequest() = default;
    AWS_EKS_API OidcIdentityProviderConfigRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API OidcIdentityProviderConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the OIDC provider configuration.</p>
     */
    inline const Aws::String& GetIdentityProviderConfigName() const { return m_identityProviderConfigName; }
    inline bool IdentityProviderConfigNameHasBeenSet() const { return m_identityProviderConfigNameHasBeenSet; }
    template<typename IdentityProviderConfigNameT = Aws::String>
    void SetIdentityProviderConfigName(IdentityProviderConfigNameT&& value) { m_identityProviderConfigNameHasBeenSet = true; m_identityProviderConfigName = std::forward<IdentityProviderConfigNameT>(value); }
    template<typename IdentityProviderConfigNameT = Aws::String>
    OidcIdentityProviderConfigRequest& WithIdentityProviderConfigName(IdentityProviderConfigNameT&& value) { SetIdentityProviderConfigName(std::forward<IdentityProviderConfigNameT>(value)); return *this;}
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
    inline const Aws::String& GetIssuerUrl() const { return m_issuerUrl; }
    inline bool IssuerUrlHasBeenSet() const { return m_issuerUrlHasBeenSet; }
    template<typename IssuerUrlT = Aws::String>
    void SetIssuerUrl(IssuerUrlT&& value) { m_issuerUrlHasBeenSet = true; m_issuerUrl = std::forward<IssuerUrlT>(value); }
    template<typename IssuerUrlT = Aws::String>
    OidcIdentityProviderConfigRequest& WithIssuerUrl(IssuerUrlT&& value) { SetIssuerUrl(std::forward<IssuerUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is also known as <i>audience</i>. The ID for the client application that
     * makes authentication requests to the OIDC identity provider.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    OidcIdentityProviderConfigRequest& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
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
    inline const Aws::String& GetUsernameClaim() const { return m_usernameClaim; }
    inline bool UsernameClaimHasBeenSet() const { return m_usernameClaimHasBeenSet; }
    template<typename UsernameClaimT = Aws::String>
    void SetUsernameClaim(UsernameClaimT&& value) { m_usernameClaimHasBeenSet = true; m_usernameClaim = std::forward<UsernameClaimT>(value); }
    template<typename UsernameClaimT = Aws::String>
    OidcIdentityProviderConfigRequest& WithUsernameClaim(UsernameClaimT&& value) { SetUsernameClaim(std::forward<UsernameClaimT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix that is prepended to username claims to prevent clashes with
     * existing names. If you do not provide this field, and <code>username</code> is a
     * value other than <code>email</code>, the prefix defaults to
     * <code>issuerurl#</code>. You can use the value <code>-</code> to disable all
     * prefixing.</p>
     */
    inline const Aws::String& GetUsernamePrefix() const { return m_usernamePrefix; }
    inline bool UsernamePrefixHasBeenSet() const { return m_usernamePrefixHasBeenSet; }
    template<typename UsernamePrefixT = Aws::String>
    void SetUsernamePrefix(UsernamePrefixT&& value) { m_usernamePrefixHasBeenSet = true; m_usernamePrefix = std::forward<UsernamePrefixT>(value); }
    template<typename UsernamePrefixT = Aws::String>
    OidcIdentityProviderConfigRequest& WithUsernamePrefix(UsernamePrefixT&& value) { SetUsernamePrefix(std::forward<UsernamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JWT claim that the provider uses to return your groups.</p>
     */
    inline const Aws::String& GetGroupsClaim() const { return m_groupsClaim; }
    inline bool GroupsClaimHasBeenSet() const { return m_groupsClaimHasBeenSet; }
    template<typename GroupsClaimT = Aws::String>
    void SetGroupsClaim(GroupsClaimT&& value) { m_groupsClaimHasBeenSet = true; m_groupsClaim = std::forward<GroupsClaimT>(value); }
    template<typename GroupsClaimT = Aws::String>
    OidcIdentityProviderConfigRequest& WithGroupsClaim(GroupsClaimT&& value) { SetGroupsClaim(std::forward<GroupsClaimT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix that is prepended to group claims to prevent clashes with existing
     * names (such as <code>system:</code> groups). For example, the value<code>
     * oidc:</code> will create group names like <code>oidc:engineering</code> and
     * <code>oidc:infra</code>.</p>
     */
    inline const Aws::String& GetGroupsPrefix() const { return m_groupsPrefix; }
    inline bool GroupsPrefixHasBeenSet() const { return m_groupsPrefixHasBeenSet; }
    template<typename GroupsPrefixT = Aws::String>
    void SetGroupsPrefix(GroupsPrefixT&& value) { m_groupsPrefixHasBeenSet = true; m_groupsPrefix = std::forward<GroupsPrefixT>(value); }
    template<typename GroupsPrefixT = Aws::String>
    OidcIdentityProviderConfigRequest& WithGroupsPrefix(GroupsPrefixT&& value) { SetGroupsPrefix(std::forward<GroupsPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key value pairs that describe required claims in the identity token. If
     * set, each claim is verified to be present in the token with a matching value.
     * For the maximum number of claims that you can require, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service-quotas.html">Amazon
     * EKS service quotas</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequiredClaims() const { return m_requiredClaims; }
    inline bool RequiredClaimsHasBeenSet() const { return m_requiredClaimsHasBeenSet; }
    template<typename RequiredClaimsT = Aws::Map<Aws::String, Aws::String>>
    void SetRequiredClaims(RequiredClaimsT&& value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims = std::forward<RequiredClaimsT>(value); }
    template<typename RequiredClaimsT = Aws::Map<Aws::String, Aws::String>>
    OidcIdentityProviderConfigRequest& WithRequiredClaims(RequiredClaimsT&& value) { SetRequiredClaims(std::forward<RequiredClaimsT>(value)); return *this;}
    template<typename RequiredClaimsKeyT = Aws::String, typename RequiredClaimsValueT = Aws::String>
    OidcIdentityProviderConfigRequest& AddRequiredClaims(RequiredClaimsKeyT&& key, RequiredClaimsValueT&& value) {
      m_requiredClaimsHasBeenSet = true; m_requiredClaims.emplace(std::forward<RequiredClaimsKeyT>(key), std::forward<RequiredClaimsValueT>(value)); return *this;
    }
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
