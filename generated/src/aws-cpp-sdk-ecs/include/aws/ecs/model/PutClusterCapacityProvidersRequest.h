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
    AWS_ECS_API PutClusterCapacityProvidersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutClusterCapacityProviders"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to modify
     * the capacity provider settings for. If you don't specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to modify
     * the capacity provider settings for. If you don't specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to modify
     * the capacity provider settings for. If you don't specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to modify
     * the capacity provider settings for. If you don't specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to modify
     * the capacity provider settings for. If you don't specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to modify
     * the capacity provider settings for. If you don't specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline PutClusterCapacityProvidersRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to modify
     * the capacity provider settings for. If you don't specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline PutClusterCapacityProvidersRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to modify
     * the capacity provider settings for. If you don't specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline PutClusterCapacityProvidersRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>The name of one or more capacity providers to associate with the cluster.</p>
     * <p>If specifying a capacity provider that uses an Auto Scaling group, the
     * capacity provider must already be created. New capacity providers can be created
     * with the <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate
     * capacity provider, specify either the <code>FARGATE</code> or
     * <code>FARGATE_SPOT</code> capacity providers. The Fargate capacity providers are
     * available to all accounts and only need to be associated with a cluster to be
     * used.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityProviders() const{ return m_capacityProviders; }

    /**
     * <p>The name of one or more capacity providers to associate with the cluster.</p>
     * <p>If specifying a capacity provider that uses an Auto Scaling group, the
     * capacity provider must already be created. New capacity providers can be created
     * with the <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate
     * capacity provider, specify either the <code>FARGATE</code> or
     * <code>FARGATE_SPOT</code> capacity providers. The Fargate capacity providers are
     * available to all accounts and only need to be associated with a cluster to be
     * used.</p>
     */
    inline bool CapacityProvidersHasBeenSet() const { return m_capacityProvidersHasBeenSet; }

    /**
     * <p>The name of one or more capacity providers to associate with the cluster.</p>
     * <p>If specifying a capacity provider that uses an Auto Scaling group, the
     * capacity provider must already be created. New capacity providers can be created
     * with the <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate
     * capacity provider, specify either the <code>FARGATE</code> or
     * <code>FARGATE_SPOT</code> capacity providers. The Fargate capacity providers are
     * available to all accounts and only need to be associated with a cluster to be
     * used.</p>
     */
    inline void SetCapacityProviders(const Aws::Vector<Aws::String>& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders = value; }

    /**
     * <p>The name of one or more capacity providers to associate with the cluster.</p>
     * <p>If specifying a capacity provider that uses an Auto Scaling group, the
     * capacity provider must already be created. New capacity providers can be created
     * with the <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate
     * capacity provider, specify either the <code>FARGATE</code> or
     * <code>FARGATE_SPOT</code> capacity providers. The Fargate capacity providers are
     * available to all accounts and only need to be associated with a cluster to be
     * used.</p>
     */
    inline void SetCapacityProviders(Aws::Vector<Aws::String>&& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders = std::move(value); }

    /**
     * <p>The name of one or more capacity providers to associate with the cluster.</p>
     * <p>If specifying a capacity provider that uses an Auto Scaling group, the
     * capacity provider must already be created. New capacity providers can be created
     * with the <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate
     * capacity provider, specify either the <code>FARGATE</code> or
     * <code>FARGATE_SPOT</code> capacity providers. The Fargate capacity providers are
     * available to all accounts and only need to be associated with a cluster to be
     * used.</p>
     */
    inline PutClusterCapacityProvidersRequest& WithCapacityProviders(const Aws::Vector<Aws::String>& value) { SetCapacityProviders(value); return *this;}

    /**
     * <p>The name of one or more capacity providers to associate with the cluster.</p>
     * <p>If specifying a capacity provider that uses an Auto Scaling group, the
     * capacity provider must already be created. New capacity providers can be created
     * with the <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate
     * capacity provider, specify either the <code>FARGATE</code> or
     * <code>FARGATE_SPOT</code> capacity providers. The Fargate capacity providers are
     * available to all accounts and only need to be associated with a cluster to be
     * used.</p>
     */
    inline PutClusterCapacityProvidersRequest& WithCapacityProviders(Aws::Vector<Aws::String>&& value) { SetCapacityProviders(std::move(value)); return *this;}

    /**
     * <p>The name of one or more capacity providers to associate with the cluster.</p>
     * <p>If specifying a capacity provider that uses an Auto Scaling group, the
     * capacity provider must already be created. New capacity providers can be created
     * with the <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate
     * capacity provider, specify either the <code>FARGATE</code> or
     * <code>FARGATE_SPOT</code> capacity providers. The Fargate capacity providers are
     * available to all accounts and only need to be associated with a cluster to be
     * used.</p>
     */
    inline PutClusterCapacityProvidersRequest& AddCapacityProviders(const Aws::String& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders.push_back(value); return *this; }

    /**
     * <p>The name of one or more capacity providers to associate with the cluster.</p>
     * <p>If specifying a capacity provider that uses an Auto Scaling group, the
     * capacity provider must already be created. New capacity providers can be created
     * with the <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate
     * capacity provider, specify either the <code>FARGATE</code> or
     * <code>FARGATE_SPOT</code> capacity providers. The Fargate capacity providers are
     * available to all accounts and only need to be associated with a cluster to be
     * used.</p>
     */
    inline PutClusterCapacityProvidersRequest& AddCapacityProviders(Aws::String&& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of one or more capacity providers to associate with the cluster.</p>
     * <p>If specifying a capacity provider that uses an Auto Scaling group, the
     * capacity provider must already be created. New capacity providers can be created
     * with the <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate
     * capacity provider, specify either the <code>FARGATE</code> or
     * <code>FARGATE_SPOT</code> capacity providers. The Fargate capacity providers are
     * available to all accounts and only need to be associated with a cluster to be
     * used.</p>
     */
    inline PutClusterCapacityProvidersRequest& AddCapacityProviders(const char* value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders.push_back(value); return *this; }


    /**
     * <p>The capacity provider strategy to use by default for the cluster.</p> <p>When
     * creating a service or running a task on a cluster, if no capacity provider or
     * launch type is specified then the default capacity provider strategy for the
     * cluster is used.</p> <p>A capacity provider strategy consists of one or more
     * capacity providers along with the <code>base</code> and <code>weight</code> to
     * assign to them. A capacity provider must be associated with the cluster to be
     * used in a capacity provider strategy. The <a>PutClusterCapacityProviders</a> API
     * is used to associate a capacity provider with a cluster. Only capacity providers
     * with an <code>ACTIVE</code> or <code>UPDATING</code> status can be used.</p>
     * <p>If specifying a capacity provider that uses an Auto Scaling group, the
     * capacity provider must already be created. New capacity providers can be created
     * with the <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate
     * capacity provider, specify either the <code>FARGATE</code> or
     * <code>FARGATE_SPOT</code> capacity providers. The Fargate capacity providers are
     * available to all accounts and only need to be associated with a cluster to be
     * used.</p>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetDefaultCapacityProviderStrategy() const{ return m_defaultCapacityProviderStrategy; }

    /**
     * <p>The capacity provider strategy to use by default for the cluster.</p> <p>When
     * creating a service or running a task on a cluster, if no capacity provider or
     * launch type is specified then the default capacity provider strategy for the
     * cluster is used.</p> <p>A capacity provider strategy consists of one or more
     * capacity providers along with the <code>base</code> and <code>weight</code> to
     * assign to them. A capacity provider must be associated with the cluster to be
     * used in a capacity provider strategy. The <a>PutClusterCapacityProviders</a> API
     * is used to associate a capacity provider with a cluster. Only capacity providers
     * with an <code>ACTIVE</code> or <code>UPDATING</code> status can be used.</p>
     * <p>If specifying a capacity provider that uses an Auto Scaling group, the
     * capacity provider must already be created. New capacity providers can be created
     * with the <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate
     * capacity provider, specify either the <code>FARGATE</code> or
     * <code>FARGATE_SPOT</code> capacity providers. The Fargate capacity providers are
     * available to all accounts and only need to be associated with a cluster to be
     * used.</p>
     */
    inline bool DefaultCapacityProviderStrategyHasBeenSet() const { return m_defaultCapacityProviderStrategyHasBeenSet; }

    /**
     * <p>The capacity provider strategy to use by default for the cluster.</p> <p>When
     * creating a service or running a task on a cluster, if no capacity provider or
     * launch type is specified then the default capacity provider strategy for the
     * cluster is used.</p> <p>A capacity provider strategy consists of one or more
     * capacity providers along with the <code>base</code> and <code>weight</code> to
     * assign to them. A capacity provider must be associated with the cluster to be
     * used in a capacity provider strategy. The <a>PutClusterCapacityProviders</a> API
     * is used to associate a capacity provider with a cluster. Only capacity providers
     * with an <code>ACTIVE</code> or <code>UPDATING</code> status can be used.</p>
     * <p>If specifying a capacity provider that uses an Auto Scaling group, the
     * capacity provider must already be created. New capacity providers can be created
     * with the <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate
     * capacity provider, specify either the <code>FARGATE</code> or
     * <code>FARGATE_SPOT</code> capacity providers. The Fargate capacity providers are
     * available to all accounts and only need to be associated with a cluster to be
     * used.</p>
     */
    inline void SetDefaultCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy = value; }

    /**
     * <p>The capacity provider strategy to use by default for the cluster.</p> <p>When
     * creating a service or running a task on a cluster, if no capacity provider or
     * launch type is specified then the default capacity provider strategy for the
     * cluster is used.</p> <p>A capacity provider strategy consists of one or more
     * capacity providers along with the <code>base</code> and <code>weight</code> to
     * assign to them. A capacity provider must be associated with the cluster to be
     * used in a capacity provider strategy. The <a>PutClusterCapacityProviders</a> API
     * is used to associate a capacity provider with a cluster. Only capacity providers
     * with an <code>ACTIVE</code> or <code>UPDATING</code> status can be used.</p>
     * <p>If specifying a capacity provider that uses an Auto Scaling group, the
     * capacity provider must already be created. New capacity providers can be created
     * with the <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate
     * capacity provider, specify either the <code>FARGATE</code> or
     * <code>FARGATE_SPOT</code> capacity providers. The Fargate capacity providers are
     * available to all accounts and only need to be associated with a cluster to be
     * used.</p>
     */
    inline void SetDefaultCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy = std::move(value); }

    /**
     * <p>The capacity provider strategy to use by default for the cluster.</p> <p>When
     * creating a service or running a task on a cluster, if no capacity provider or
     * launch type is specified then the default capacity provider strategy for the
     * cluster is used.</p> <p>A capacity provider strategy consists of one or more
     * capacity providers along with the <code>base</code> and <code>weight</code> to
     * assign to them. A capacity provider must be associated with the cluster to be
     * used in a capacity provider strategy. The <a>PutClusterCapacityProviders</a> API
     * is used to associate a capacity provider with a cluster. Only capacity providers
     * with an <code>ACTIVE</code> or <code>UPDATING</code> status can be used.</p>
     * <p>If specifying a capacity provider that uses an Auto Scaling group, the
     * capacity provider must already be created. New capacity providers can be created
     * with the <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate
     * capacity provider, specify either the <code>FARGATE</code> or
     * <code>FARGATE_SPOT</code> capacity providers. The Fargate capacity providers are
     * available to all accounts and only need to be associated with a cluster to be
     * used.</p>
     */
    inline PutClusterCapacityProvidersRequest& WithDefaultCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { SetDefaultCapacityProviderStrategy(value); return *this;}

    /**
     * <p>The capacity provider strategy to use by default for the cluster.</p> <p>When
     * creating a service or running a task on a cluster, if no capacity provider or
     * launch type is specified then the default capacity provider strategy for the
     * cluster is used.</p> <p>A capacity provider strategy consists of one or more
     * capacity providers along with the <code>base</code> and <code>weight</code> to
     * assign to them. A capacity provider must be associated with the cluster to be
     * used in a capacity provider strategy. The <a>PutClusterCapacityProviders</a> API
     * is used to associate a capacity provider with a cluster. Only capacity providers
     * with an <code>ACTIVE</code> or <code>UPDATING</code> status can be used.</p>
     * <p>If specifying a capacity provider that uses an Auto Scaling group, the
     * capacity provider must already be created. New capacity providers can be created
     * with the <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate
     * capacity provider, specify either the <code>FARGATE</code> or
     * <code>FARGATE_SPOT</code> capacity providers. The Fargate capacity providers are
     * available to all accounts and only need to be associated with a cluster to be
     * used.</p>
     */
    inline PutClusterCapacityProvidersRequest& WithDefaultCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { SetDefaultCapacityProviderStrategy(std::move(value)); return *this;}

    /**
     * <p>The capacity provider strategy to use by default for the cluster.</p> <p>When
     * creating a service or running a task on a cluster, if no capacity provider or
     * launch type is specified then the default capacity provider strategy for the
     * cluster is used.</p> <p>A capacity provider strategy consists of one or more
     * capacity providers along with the <code>base</code> and <code>weight</code> to
     * assign to them. A capacity provider must be associated with the cluster to be
     * used in a capacity provider strategy. The <a>PutClusterCapacityProviders</a> API
     * is used to associate a capacity provider with a cluster. Only capacity providers
     * with an <code>ACTIVE</code> or <code>UPDATING</code> status can be used.</p>
     * <p>If specifying a capacity provider that uses an Auto Scaling group, the
     * capacity provider must already be created. New capacity providers can be created
     * with the <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate
     * capacity provider, specify either the <code>FARGATE</code> or
     * <code>FARGATE_SPOT</code> capacity providers. The Fargate capacity providers are
     * available to all accounts and only need to be associated with a cluster to be
     * used.</p>
     */
    inline PutClusterCapacityProvidersRequest& AddDefaultCapacityProviderStrategy(const CapacityProviderStrategyItem& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy.push_back(value); return *this; }

    /**
     * <p>The capacity provider strategy to use by default for the cluster.</p> <p>When
     * creating a service or running a task on a cluster, if no capacity provider or
     * launch type is specified then the default capacity provider strategy for the
     * cluster is used.</p> <p>A capacity provider strategy consists of one or more
     * capacity providers along with the <code>base</code> and <code>weight</code> to
     * assign to them. A capacity provider must be associated with the cluster to be
     * used in a capacity provider strategy. The <a>PutClusterCapacityProviders</a> API
     * is used to associate a capacity provider with a cluster. Only capacity providers
     * with an <code>ACTIVE</code> or <code>UPDATING</code> status can be used.</p>
     * <p>If specifying a capacity provider that uses an Auto Scaling group, the
     * capacity provider must already be created. New capacity providers can be created
     * with the <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate
     * capacity provider, specify either the <code>FARGATE</code> or
     * <code>FARGATE_SPOT</code> capacity providers. The Fargate capacity providers are
     * available to all accounts and only need to be associated with a cluster to be
     * used.</p>
     */
    inline PutClusterCapacityProvidersRequest& AddDefaultCapacityProviderStrategy(CapacityProviderStrategyItem&& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy.push_back(std::move(value)); return *this; }

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
