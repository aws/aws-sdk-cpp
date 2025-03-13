/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/eks/model/ConfigStatus.h>
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
   * <p>An object representing the configuration for an OpenID Connect (OIDC)
   * identity provider. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/OidcIdentityProviderConfig">AWS
   * API Reference</a></p>
   */
  class OidcIdentityProviderConfig
  {
  public:
    AWS_EKS_API OidcIdentityProviderConfig() = default;
    AWS_EKS_API OidcIdentityProviderConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API OidcIdentityProviderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the configuration.</p>
     */
    inline const Aws::String& GetIdentityProviderConfigName() const { return m_identityProviderConfigName; }
    inline bool IdentityProviderConfigNameHasBeenSet() const { return m_identityProviderConfigNameHasBeenSet; }
    template<typename IdentityProviderConfigNameT = Aws::String>
    void SetIdentityProviderConfigName(IdentityProviderConfigNameT&& value) { m_identityProviderConfigNameHasBeenSet = true; m_identityProviderConfigName = std::forward<IdentityProviderConfigNameT>(value); }
    template<typename IdentityProviderConfigNameT = Aws::String>
    OidcIdentityProviderConfig& WithIdentityProviderConfigName(IdentityProviderConfigNameT&& value) { SetIdentityProviderConfigName(std::forward<IdentityProviderConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the configuration.</p>
     */
    inline const Aws::String& GetIdentityProviderConfigArn() const { return m_identityProviderConfigArn; }
    inline bool IdentityProviderConfigArnHasBeenSet() const { return m_identityProviderConfigArnHasBeenSet; }
    template<typename IdentityProviderConfigArnT = Aws::String>
    void SetIdentityProviderConfigArn(IdentityProviderConfigArnT&& value) { m_identityProviderConfigArnHasBeenSet = true; m_identityProviderConfigArn = std::forward<IdentityProviderConfigArnT>(value); }
    template<typename IdentityProviderConfigArnT = Aws::String>
    OidcIdentityProviderConfig& WithIdentityProviderConfigArn(IdentityProviderConfigArnT&& value) { SetIdentityProviderConfigArn(std::forward<IdentityProviderConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    OidcIdentityProviderConfig& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the OIDC identity provider that allows the API server to discover
     * public signing keys for verifying tokens.</p>
     */
    inline const Aws::String& GetIssuerUrl() const { return m_issuerUrl; }
    inline bool IssuerUrlHasBeenSet() const { return m_issuerUrlHasBeenSet; }
    template<typename IssuerUrlT = Aws::String>
    void SetIssuerUrl(IssuerUrlT&& value) { m_issuerUrlHasBeenSet = true; m_issuerUrl = std::forward<IssuerUrlT>(value); }
    template<typename IssuerUrlT = Aws::String>
    OidcIdentityProviderConfig& WithIssuerUrl(IssuerUrlT&& value) { SetIssuerUrl(std::forward<IssuerUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is also known as <i>audience</i>. The ID of the client application that
     * makes authentication requests to the OIDC identity provider.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    OidcIdentityProviderConfig& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON Web token (JWT) claim that is used as the username.</p>
     */
    inline const Aws::String& GetUsernameClaim() const { return m_usernameClaim; }
    inline bool UsernameClaimHasBeenSet() const { return m_usernameClaimHasBeenSet; }
    template<typename UsernameClaimT = Aws::String>
    void SetUsernameClaim(UsernameClaimT&& value) { m_usernameClaimHasBeenSet = true; m_usernameClaim = std::forward<UsernameClaimT>(value); }
    template<typename UsernameClaimT = Aws::String>
    OidcIdentityProviderConfig& WithUsernameClaim(UsernameClaimT&& value) { SetUsernameClaim(std::forward<UsernameClaimT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix that is prepended to username claims to prevent clashes with
     * existing names. The prefix can't contain <code>system:</code> </p>
     */
    inline const Aws::String& GetUsernamePrefix() const { return m_usernamePrefix; }
    inline bool UsernamePrefixHasBeenSet() const { return m_usernamePrefixHasBeenSet; }
    template<typename UsernamePrefixT = Aws::String>
    void SetUsernamePrefix(UsernamePrefixT&& value) { m_usernamePrefixHasBeenSet = true; m_usernamePrefix = std::forward<UsernamePrefixT>(value); }
    template<typename UsernamePrefixT = Aws::String>
    OidcIdentityProviderConfig& WithUsernamePrefix(UsernamePrefixT&& value) { SetUsernamePrefix(std::forward<UsernamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON web token (JWT) claim that the provider uses to return your
     * groups.</p>
     */
    inline const Aws::String& GetGroupsClaim() const { return m_groupsClaim; }
    inline bool GroupsClaimHasBeenSet() const { return m_groupsClaimHasBeenSet; }
    template<typename GroupsClaimT = Aws::String>
    void SetGroupsClaim(GroupsClaimT&& value) { m_groupsClaimHasBeenSet = true; m_groupsClaim = std::forward<GroupsClaimT>(value); }
    template<typename GroupsClaimT = Aws::String>
    OidcIdentityProviderConfig& WithGroupsClaim(GroupsClaimT&& value) { SetGroupsClaim(std::forward<GroupsClaimT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix that is prepended to group claims to prevent clashes with existing
     * names (such as <code>system:</code> groups). For example, the value<code>
     * oidc:</code> creates group names like <code>oidc:engineering</code> and
     * <code>oidc:infra</code>. The prefix can't contain <code>system:</code> </p>
     */
    inline const Aws::String& GetGroupsPrefix() const { return m_groupsPrefix; }
    inline bool GroupsPrefixHasBeenSet() const { return m_groupsPrefixHasBeenSet; }
    template<typename GroupsPrefixT = Aws::String>
    void SetGroupsPrefix(GroupsPrefixT&& value) { m_groupsPrefixHasBeenSet = true; m_groupsPrefix = std::forward<GroupsPrefixT>(value); }
    template<typename GroupsPrefixT = Aws::String>
    OidcIdentityProviderConfig& WithGroupsPrefix(GroupsPrefixT&& value) { SetGroupsPrefix(std::forward<GroupsPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value pairs that describe required claims in the identity token. If
     * set, each claim is verified to be present in the token with a matching
     * value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequiredClaims() const { return m_requiredClaims; }
    inline bool RequiredClaimsHasBeenSet() const { return m_requiredClaimsHasBeenSet; }
    template<typename RequiredClaimsT = Aws::Map<Aws::String, Aws::String>>
    void SetRequiredClaims(RequiredClaimsT&& value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims = std::forward<RequiredClaimsT>(value); }
    template<typename RequiredClaimsT = Aws::Map<Aws::String, Aws::String>>
    OidcIdentityProviderConfig& WithRequiredClaims(RequiredClaimsT&& value) { SetRequiredClaims(std::forward<RequiredClaimsT>(value)); return *this;}
    template<typename RequiredClaimsKeyT = Aws::String, typename RequiredClaimsValueT = Aws::String>
    OidcIdentityProviderConfig& AddRequiredClaims(RequiredClaimsKeyT&& key, RequiredClaimsValueT&& value) {
      m_requiredClaimsHasBeenSet = true; m_requiredClaims.emplace(std::forward<RequiredClaimsKeyT>(key), std::forward<RequiredClaimsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    OidcIdentityProviderConfig& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    OidcIdentityProviderConfig& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the OIDC identity provider.</p>
     */
    inline ConfigStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ConfigStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline OidcIdentityProviderConfig& WithStatus(ConfigStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_identityProviderConfigName;
    bool m_identityProviderConfigNameHasBeenSet = false;

    Aws::String m_identityProviderConfigArn;
    bool m_identityProviderConfigArnHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ConfigStatus m_status{ConfigStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
