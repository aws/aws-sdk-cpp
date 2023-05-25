/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/OidcIdentityProviderConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class AssociateIdentityProviderConfigRequest : public EKSRequest
  {
  public:
    AWS_EKS_API AssociateIdentityProviderConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateIdentityProviderConfig"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the cluster to associate the configuration to.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the cluster to associate the configuration to.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the cluster to associate the configuration to.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the cluster to associate the configuration to.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the cluster to associate the configuration to.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the cluster to associate the configuration to.</p>
     */
    inline AssociateIdentityProviderConfigRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the cluster to associate the configuration to.</p>
     */
    inline AssociateIdentityProviderConfigRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster to associate the configuration to.</p>
     */
    inline AssociateIdentityProviderConfigRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>An object representing an OpenID Connect (OIDC) identity provider
     * configuration.</p>
     */
    inline const OidcIdentityProviderConfigRequest& GetOidc() const{ return m_oidc; }

    /**
     * <p>An object representing an OpenID Connect (OIDC) identity provider
     * configuration.</p>
     */
    inline bool OidcHasBeenSet() const { return m_oidcHasBeenSet; }

    /**
     * <p>An object representing an OpenID Connect (OIDC) identity provider
     * configuration.</p>
     */
    inline void SetOidc(const OidcIdentityProviderConfigRequest& value) { m_oidcHasBeenSet = true; m_oidc = value; }

    /**
     * <p>An object representing an OpenID Connect (OIDC) identity provider
     * configuration.</p>
     */
    inline void SetOidc(OidcIdentityProviderConfigRequest&& value) { m_oidcHasBeenSet = true; m_oidc = std::move(value); }

    /**
     * <p>An object representing an OpenID Connect (OIDC) identity provider
     * configuration.</p>
     */
    inline AssociateIdentityProviderConfigRequest& WithOidc(const OidcIdentityProviderConfigRequest& value) { SetOidc(value); return *this;}

    /**
     * <p>An object representing an OpenID Connect (OIDC) identity provider
     * configuration.</p>
     */
    inline AssociateIdentityProviderConfigRequest& WithOidc(OidcIdentityProviderConfigRequest&& value) { SetOidc(std::move(value)); return *this;}


    /**
     * <p>The metadata to apply to the configuration to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata to apply to the configuration to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata to apply to the configuration to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata to apply to the configuration to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata to apply to the configuration to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline AssociateIdentityProviderConfigRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata to apply to the configuration to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline AssociateIdentityProviderConfigRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata to apply to the configuration to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline AssociateIdentityProviderConfigRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The metadata to apply to the configuration to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline AssociateIdentityProviderConfigRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata to apply to the configuration to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline AssociateIdentityProviderConfigRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata to apply to the configuration to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline AssociateIdentityProviderConfigRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata to apply to the configuration to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline AssociateIdentityProviderConfigRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata to apply to the configuration to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline AssociateIdentityProviderConfigRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata to apply to the configuration to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define
     * both.</p>
     */
    inline AssociateIdentityProviderConfigRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline AssociateIdentityProviderConfigRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline AssociateIdentityProviderConfigRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline AssociateIdentityProviderConfigRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    OidcIdentityProviderConfigRequest m_oidc;
    bool m_oidcHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
