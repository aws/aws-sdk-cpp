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
    AWS_EKS_API DescribeIdentityProviderConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeIdentityProviderConfig"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    DescribeIdentityProviderConfigRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing an identity provider configuration.</p>
     */
    inline const IdentityProviderConfig& GetIdentityProviderConfig() const { return m_identityProviderConfig; }
    inline bool IdentityProviderConfigHasBeenSet() const { return m_identityProviderConfigHasBeenSet; }
    template<typename IdentityProviderConfigT = IdentityProviderConfig>
    void SetIdentityProviderConfig(IdentityProviderConfigT&& value) { m_identityProviderConfigHasBeenSet = true; m_identityProviderConfig = std::forward<IdentityProviderConfigT>(value); }
    template<typename IdentityProviderConfigT = IdentityProviderConfig>
    DescribeIdentityProviderConfigRequest& WithIdentityProviderConfig(IdentityProviderConfigT&& value) { SetIdentityProviderConfig(std::forward<IdentityProviderConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    IdentityProviderConfig m_identityProviderConfig;
    bool m_identityProviderConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
