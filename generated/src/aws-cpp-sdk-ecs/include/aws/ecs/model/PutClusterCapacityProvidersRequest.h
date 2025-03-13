/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/CapacityProviderStrategyItem.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class PutClusterCapacityProvidersRequest : public ECSRequest
  {
  public:
    AWS_ECS_API PutClusterCapacityProvidersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutClusterCapacityProviders"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to modify
     * the capacity provider settings for. If you don't specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline const Aws::String& GetCluster() const { return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    template<typename ClusterT = Aws::String>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = Aws::String>
    PutClusterCapacityProvidersRequest& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of one or more capacity providers to associate with the cluster.</p>
     * <p>If specifying a capacity provider that uses an Auto Scaling group, the
     * capacity provider must already be created. New capacity providers can be created
     * with the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_CreateCapacityProvider.html">CreateCapacityProvider</a>
     * API operation.</p> <p>To use a Fargate capacity provider, specify either the
     * <code>FARGATE</code> or <code>FARGATE_SPOT</code> capacity providers. The
     * Fargate capacity providers are available to all accounts and only need to be
     * associated with a cluster to be used.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityProviders() const { return m_capacityProviders; }
    inline bool CapacityProvidersHasBeenSet() const { return m_capacityProvidersHasBeenSet; }
    template<typename CapacityProvidersT = Aws::Vector<Aws::String>>
    void SetCapacityProviders(CapacityProvidersT&& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders = std::forward<CapacityProvidersT>(value); }
    template<typename CapacityProvidersT = Aws::Vector<Aws::String>>
    PutClusterCapacityProvidersRequest& WithCapacityProviders(CapacityProvidersT&& value) { SetCapacityProviders(std::forward<CapacityProvidersT>(value)); return *this;}
    template<typename CapacityProvidersT = Aws::String>
    PutClusterCapacityProvidersRequest& AddCapacityProviders(CapacityProvidersT&& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders.emplace_back(std::forward<CapacityProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The capacity provider strategy to use by default for the cluster.</p> <p>When
     * creating a service or running a task on a cluster, if no capacity provider or
     * launch type is specified then the default capacity provider strategy for the
     * cluster is used.</p> <p>A capacity provider strategy consists of one or more
     * capacity providers along with the <code>base</code> and <code>weight</code> to
     * assign to them. A capacity provider must be associated with the cluster to be
     * used in a capacity provider strategy. The <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_PutClusterCapacityProviders.html">PutClusterCapacityProviders</a>
     * API is used to associate a capacity provider with a cluster. Only capacity
     * providers with an <code>ACTIVE</code> or <code>UPDATING</code> status can be
     * used.</p> <p>If specifying a capacity provider that uses an Auto Scaling group,
     * the capacity provider must already be created. New capacity providers can be
     * created with the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_CreateCapacityProvider.html">CreateCapacityProvider</a>
     * API operation.</p> <p>To use a Fargate capacity provider, specify either the
     * <code>FARGATE</code> or <code>FARGATE_SPOT</code> capacity providers. The
     * Fargate capacity providers are available to all accounts and only need to be
     * associated with a cluster to be used.</p>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetDefaultCapacityProviderStrategy() const { return m_defaultCapacityProviderStrategy; }
    inline bool DefaultCapacityProviderStrategyHasBeenSet() const { return m_defaultCapacityProviderStrategyHasBeenSet; }
    template<typename DefaultCapacityProviderStrategyT = Aws::Vector<CapacityProviderStrategyItem>>
    void SetDefaultCapacityProviderStrategy(DefaultCapacityProviderStrategyT&& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy = std::forward<DefaultCapacityProviderStrategyT>(value); }
    template<typename DefaultCapacityProviderStrategyT = Aws::Vector<CapacityProviderStrategyItem>>
    PutClusterCapacityProvidersRequest& WithDefaultCapacityProviderStrategy(DefaultCapacityProviderStrategyT&& value) { SetDefaultCapacityProviderStrategy(std::forward<DefaultCapacityProviderStrategyT>(value)); return *this;}
    template<typename DefaultCapacityProviderStrategyT = CapacityProviderStrategyItem>
    PutClusterCapacityProvidersRequest& AddDefaultCapacityProviderStrategy(DefaultCapacityProviderStrategyT&& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy.emplace_back(std::forward<DefaultCapacityProviderStrategyT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::Vector<Aws::String> m_capacityProviders;
    bool m_capacityProvidersHasBeenSet = false;

    Aws::Vector<CapacityProviderStrategyItem> m_defaultCapacityProviderStrategy;
    bool m_defaultCapacityProviderStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
