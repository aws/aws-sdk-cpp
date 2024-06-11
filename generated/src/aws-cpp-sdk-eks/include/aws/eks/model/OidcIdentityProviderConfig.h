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
    AWS_EKS_API OidcIdentityProviderConfig();
    AWS_EKS_API OidcIdentityProviderConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API OidcIdentityProviderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the configuration.</p>
     */
    inline const Aws::String& GetIdentityProviderConfigName() const{ return m_identityProviderConfigName; }
    inline bool IdentityProviderConfigNameHasBeenSet() const { return m_identityProviderConfigNameHasBeenSet; }
    inline void SetIdentityProviderConfigName(const Aws::String& value) { m_identityProviderConfigNameHasBeenSet = true; m_identityProviderConfigName = value; }
    inline void SetIdentityProviderConfigName(Aws::String&& value) { m_identityProviderConfigNameHasBeenSet = true; m_identityProviderConfigName = std::move(value); }
    inline void SetIdentityProviderConfigName(const char* value) { m_identityProviderConfigNameHasBeenSet = true; m_identityProviderConfigName.assign(value); }
    inline OidcIdentityProviderConfig& WithIdentityProviderConfigName(const Aws::String& value) { SetIdentityProviderConfigName(value); return *this;}
    inline OidcIdentityProviderConfig& WithIdentityProviderConfigName(Aws::String&& value) { SetIdentityProviderConfigName(std::move(value)); return *this;}
    inline OidcIdentityProviderConfig& WithIdentityProviderConfigName(const char* value) { SetIdentityProviderConfigName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the configuration.</p>
     */
    inline const Aws::String& GetIdentityProviderConfigArn() const{ return m_identityProviderConfigArn; }
    inline bool IdentityProviderConfigArnHasBeenSet() const { return m_identityProviderConfigArnHasBeenSet; }
    inline void SetIdentityProviderConfigArn(const Aws::String& value) { m_identityProviderConfigArnHasBeenSet = true; m_identityProviderConfigArn = value; }
    inline void SetIdentityProviderConfigArn(Aws::String&& value) { m_identityProviderConfigArnHasBeenSet = true; m_identityProviderConfigArn = std::move(value); }
    inline void SetIdentityProviderConfigArn(const char* value) { m_identityProviderConfigArnHasBeenSet = true; m_identityProviderConfigArn.assign(value); }
    inline OidcIdentityProviderConfig& WithIdentityProviderConfigArn(const Aws::String& value) { SetIdentityProviderConfigArn(value); return *this;}
    inline OidcIdentityProviderConfig& WithIdentityProviderConfigArn(Aws::String&& value) { SetIdentityProviderConfigArn(std::move(value)); return *this;}
    inline OidcIdentityProviderConfig& WithIdentityProviderConfigArn(const char* value) { SetIdentityProviderConfigArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline OidcIdentityProviderConfig& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline OidcIdentityProviderConfig& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline OidcIdentityProviderConfig& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the OIDC identity provider that allows the API server to discover
     * public signing keys for verifying tokens.</p>
     */
    inline const Aws::String& GetIssuerUrl() const{ return m_issuerUrl; }
    inline bool IssuerUrlHasBeenSet() const { return m_issuerUrlHasBeenSet; }
    inline void SetIssuerUrl(const Aws::String& value) { m_issuerUrlHasBeenSet = true; m_issuerUrl = value; }
    inline void SetIssuerUrl(Aws::String&& value) { m_issuerUrlHasBeenSet = true; m_issuerUrl = std::move(value); }
    inline void SetIssuerUrl(const char* value) { m_issuerUrlHasBeenSet = true; m_issuerUrl.assign(value); }
    inline OidcIdentityProviderConfig& WithIssuerUrl(const Aws::String& value) { SetIssuerUrl(value); return *this;}
    inline OidcIdentityProviderConfig& WithIssuerUrl(Aws::String&& value) { SetIssuerUrl(std::move(value)); return *this;}
    inline OidcIdentityProviderConfig& WithIssuerUrl(const char* value) { SetIssuerUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is also known as <i>audience</i>. The ID of the client application that
     * makes authentication requests to the OIDC identity provider.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline OidcIdentityProviderConfig& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline OidcIdentityProviderConfig& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline OidcIdentityProviderConfig& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON Web token (JWT) claim that is used as the username.</p>
     */
    inline const Aws::String& GetUsernameClaim() const{ return m_usernameClaim; }
    inline bool UsernameClaimHasBeenSet() const { return m_usernameClaimHasBeenSet; }
    inline void SetUsernameClaim(const Aws::String& value) { m_usernameClaimHasBeenSet = true; m_usernameClaim = value; }
    inline void SetUsernameClaim(Aws::String&& value) { m_usernameClaimHasBeenSet = true; m_usernameClaim = std::move(value); }
    inline void SetUsernameClaim(const char* value) { m_usernameClaimHasBeenSet = true; m_usernameClaim.assign(value); }
    inline OidcIdentityProviderConfig& WithUsernameClaim(const Aws::String& value) { SetUsernameClaim(value); return *this;}
    inline OidcIdentityProviderConfig& WithUsernameClaim(Aws::String&& value) { SetUsernameClaim(std::move(value)); return *this;}
    inline OidcIdentityProviderConfig& WithUsernameClaim(const char* value) { SetUsernameClaim(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix that is prepended to username claims to prevent clashes with
     * existing names. The prefix can't contain <code>system:</code> </p>
     */
    inline const Aws::String& GetUsernamePrefix() const{ return m_usernamePrefix; }
    inline bool UsernamePrefixHasBeenSet() const { return m_usernamePrefixHasBeenSet; }
    inline void SetUsernamePrefix(const Aws::String& value) { m_usernamePrefixHasBeenSet = true; m_usernamePrefix = value; }
    inline void SetUsernamePrefix(Aws::String&& value) { m_usernamePrefixHasBeenSet = true; m_usernamePrefix = std::move(value); }
    inline void SetUsernamePrefix(const char* value) { m_usernamePrefixHasBeenSet = true; m_usernamePrefix.assign(value); }
    inline OidcIdentityProviderConfig& WithUsernamePrefix(const Aws::String& value) { SetUsernamePrefix(value); return *this;}
    inline OidcIdentityProviderConfig& WithUsernamePrefix(Aws::String&& value) { SetUsernamePrefix(std::move(value)); return *this;}
    inline OidcIdentityProviderConfig& WithUsernamePrefix(const char* value) { SetUsernamePrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON web token (JWT) claim that the provider uses to return your
     * groups.</p>
     */
    inline const Aws::String& GetGroupsClaim() const{ return m_groupsClaim; }
    inline bool GroupsClaimHasBeenSet() const { return m_groupsClaimHasBeenSet; }
    inline void SetGroupsClaim(const Aws::String& value) { m_groupsClaimHasBeenSet = true; m_groupsClaim = value; }
    inline void SetGroupsClaim(Aws::String&& value) { m_groupsClaimHasBeenSet = true; m_groupsClaim = std::move(value); }
    inline void SetGroupsClaim(const char* value) { m_groupsClaimHasBeenSet = true; m_groupsClaim.assign(value); }
    inline OidcIdentityProviderConfig& WithGroupsClaim(const Aws::String& value) { SetGroupsClaim(value); return *this;}
    inline OidcIdentityProviderConfig& WithGroupsClaim(Aws::String&& value) { SetGroupsClaim(std::move(value)); return *this;}
    inline OidcIdentityProviderConfig& WithGroupsClaim(const char* value) { SetGroupsClaim(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix that is prepended to group claims to prevent clashes with existing
     * names (such as <code>system:</code> groups). For example, the value<code>
     * oidc:</code> creates group names like <code>oidc:engineering</code> and
     * <code>oidc:infra</code>. The prefix can't contain <code>system:</code> </p>
     */
    inline const Aws::String& GetGroupsPrefix() const{ return m_groupsPrefix; }
    inline bool GroupsPrefixHasBeenSet() const { return m_groupsPrefixHasBeenSet; }
    inline void SetGroupsPrefix(const Aws::String& value) { m_groupsPrefixHasBeenSet = true; m_groupsPrefix = value; }
    inline void SetGroupsPrefix(Aws::String&& value) { m_groupsPrefixHasBeenSet = true; m_groupsPrefix = std::move(value); }
    inline void SetGroupsPrefix(const char* value) { m_groupsPrefixHasBeenSet = true; m_groupsPrefix.assign(value); }
    inline OidcIdentityProviderConfig& WithGroupsPrefix(const Aws::String& value) { SetGroupsPrefix(value); return *this;}
    inline OidcIdentityProviderConfig& WithGroupsPrefix(Aws::String&& value) { SetGroupsPrefix(std::move(value)); return *this;}
    inline OidcIdentityProviderConfig& WithGroupsPrefix(const char* value) { SetGroupsPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value pairs that describe required claims in the identity token. If
     * set, each claim is verified to be present in the token with a matching
     * value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequiredClaims() const{ return m_requiredClaims; }
    inline bool RequiredClaimsHasBeenSet() const { return m_requiredClaimsHasBeenSet; }
    inline void SetRequiredClaims(const Aws::Map<Aws::String, Aws::String>& value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims = value; }
    inline void SetRequiredClaims(Aws::Map<Aws::String, Aws::String>&& value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims = std::move(value); }
    inline OidcIdentityProviderConfig& WithRequiredClaims(const Aws::Map<Aws::String, Aws::String>& value) { SetRequiredClaims(value); return *this;}
    inline OidcIdentityProviderConfig& WithRequiredClaims(Aws::Map<Aws::String, Aws::String>&& value) { SetRequiredClaims(std::move(value)); return *this;}
    inline OidcIdentityProviderConfig& AddRequiredClaims(const Aws::String& key, const Aws::String& value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims.emplace(key, value); return *this; }
    inline OidcIdentityProviderConfig& AddRequiredClaims(Aws::String&& key, const Aws::String& value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims.emplace(std::move(key), value); return *this; }
    inline OidcIdentityProviderConfig& AddRequiredClaims(const Aws::String& key, Aws::String&& value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims.emplace(key, std::move(value)); return *this; }
    inline OidcIdentityProviderConfig& AddRequiredClaims(Aws::String&& key, Aws::String&& value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims.emplace(std::move(key), std::move(value)); return *this; }
    inline OidcIdentityProviderConfig& AddRequiredClaims(const char* key, Aws::String&& value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims.emplace(key, std::move(value)); return *this; }
    inline OidcIdentityProviderConfig& AddRequiredClaims(Aws::String&& key, const char* value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims.emplace(std::move(key), value); return *this; }
    inline OidcIdentityProviderConfig& AddRequiredClaims(const char* key, const char* value) { m_requiredClaimsHasBeenSet = true; m_requiredClaims.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline OidcIdentityProviderConfig& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline OidcIdentityProviderConfig& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline OidcIdentityProviderConfig& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline OidcIdentityProviderConfig& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline OidcIdentityProviderConfig& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline OidcIdentityProviderConfig& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline OidcIdentityProviderConfig& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline OidcIdentityProviderConfig& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline OidcIdentityProviderConfig& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the OIDC identity provider.</p>
     */
    inline const ConfigStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ConfigStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ConfigStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline OidcIdentityProviderConfig& WithStatus(const ConfigStatus& value) { SetStatus(value); return *this;}
    inline OidcIdentityProviderConfig& WithStatus(ConfigStatus&& value) { SetStatus(std::move(value)); return *this;}
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

    ConfigStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
