/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/IdentityProviderConfig.h>
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
  class DisassociateIdentityProviderConfigRequest : public EKSRequest
  {
  public:
    AWS_EKS_API DisassociateIdentityProviderConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateIdentityProviderConfig"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the cluster to disassociate an identity provider from.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the cluster to disassociate an identity provider from.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the cluster to disassociate an identity provider from.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the cluster to disassociate an identity provider from.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the cluster to disassociate an identity provider from.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the cluster to disassociate an identity provider from.</p>
     */
    inline DisassociateIdentityProviderConfigRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the cluster to disassociate an identity provider from.</p>
     */
    inline DisassociateIdentityProviderConfigRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster to disassociate an identity provider from.</p>
     */
    inline DisassociateIdentityProviderConfigRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>An object representing an identity provider configuration.</p>
     */
    inline const IdentityProviderConfig& GetIdentityProviderConfig() const{ return m_identityProviderConfig; }

    /**
     * <p>An object representing an identity provider configuration.</p>
     */
    inline bool IdentityProviderConfigHasBeenSet() const { return m_identityProviderConfigHasBeenSet; }

    /**
     * <p>An object representing an identity provider configuration.</p>
     */
    inline void SetIdentityProviderConfig(const IdentityProviderConfig& value) { m_identityProviderConfigHasBeenSet = true; m_identityProviderConfig = value; }

    /**
     * <p>An object representing an identity provider configuration.</p>
     */
    inline void SetIdentityProviderConfig(IdentityProviderConfig&& value) { m_identityProviderConfigHasBeenSet = true; m_identityProviderConfig = std::move(value); }

    /**
     * <p>An object representing an identity provider configuration.</p>
     */
    inline DisassociateIdentityProviderConfigRequest& WithIdentityProviderConfig(const IdentityProviderConfig& value) { SetIdentityProviderConfig(value); return *this;}

    /**
     * <p>An object representing an identity provider configuration.</p>
     */
    inline DisassociateIdentityProviderConfigRequest& WithIdentityProviderConfig(IdentityProviderConfig&& value) { SetIdentityProviderConfig(std::move(value)); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline DisassociateIdentityProviderConfigRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline DisassociateIdentityProviderConfigRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline DisassociateIdentityProviderConfigRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    IdentityProviderConfig m_identityProviderConfig;
    bool m_identityProviderConfigHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
