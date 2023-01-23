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

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class DescribeIdentityProviderConfigRequest : public EKSRequest
  {
  public:
    AWS_EKS_API DescribeIdentityProviderConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeIdentityProviderConfig"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    /**
     * <p>The cluster name that the identity provider configuration is associated
     * to.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The cluster name that the identity provider configuration is associated
     * to.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The cluster name that the identity provider configuration is associated
     * to.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The cluster name that the identity provider configuration is associated
     * to.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The cluster name that the identity provider configuration is associated
     * to.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The cluster name that the identity provider configuration is associated
     * to.</p>
     */
    inline DescribeIdentityProviderConfigRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The cluster name that the identity provider configuration is associated
     * to.</p>
     */
    inline DescribeIdentityProviderConfigRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The cluster name that the identity provider configuration is associated
     * to.</p>
     */
    inline DescribeIdentityProviderConfigRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


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
    inline DescribeIdentityProviderConfigRequest& WithIdentityProviderConfig(const IdentityProviderConfig& value) { SetIdentityProviderConfig(value); return *this;}

    /**
     * <p>An object representing an identity provider configuration.</p>
     */
    inline DescribeIdentityProviderConfigRequest& WithIdentityProviderConfig(IdentityProviderConfig&& value) { SetIdentityProviderConfig(std::move(value)); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    IdentityProviderConfig m_identityProviderConfig;
    bool m_identityProviderConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
