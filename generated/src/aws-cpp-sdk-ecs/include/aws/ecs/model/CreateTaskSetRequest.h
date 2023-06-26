/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/NetworkConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/LaunchType.h>
#include <aws/ecs/model/Scale.h>
#include <aws/ecs/model/LoadBalancer.h>
#include <aws/ecs/model/ServiceRegistry.h>
#include <aws/ecs/model/CapacityProviderStrategyItem.h>
#include <aws/ecs/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class CreateTaskSetRequest : public ECSRequest
  {
  public:
    AWS_ECS_API CreateTaskSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTaskSet"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service to create
     * the task set in.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service to create
     * the task set in.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service to create
     * the task set in.</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service to create
     * the task set in.</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service to create
     * the task set in.</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service to create
     * the task set in.</p>
     */
    inline CreateTaskSetRequest& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service to create
     * the task set in.</p>
     */
    inline CreateTaskSetRequest& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service to create
     * the task set in.</p>
     */
    inline CreateTaskSetRequest& WithService(const char* value) { SetService(value); return *this;}


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service to create the task set in.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service to create the task set in.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service to create the task set in.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service to create the task set in.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service to create the task set in.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service to create the task set in.</p>
     */
    inline CreateTaskSetRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service to create the task set in.</p>
     */
    inline CreateTaskSetRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service to create the task set in.</p>
     */
    inline CreateTaskSetRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>An optional non-unique tag that identifies this task set in external systems.
     * If the task set is associated with a service discovery registry, the tasks in
     * this task set will have the <code>ECS_TASK_SET_EXTERNAL_ID</code> Cloud Map
     * attribute set to the provided value.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>An optional non-unique tag that identifies this task set in external systems.
     * If the task set is associated with a service discovery registry, the tasks in
     * this task set will have the <code>ECS_TASK_SET_EXTERNAL_ID</code> Cloud Map
     * attribute set to the provided value.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>An optional non-unique tag that identifies this task set in external systems.
     * If the task set is associated with a service discovery registry, the tasks in
     * this task set will have the <code>ECS_TASK_SET_EXTERNAL_ID</code> Cloud Map
     * attribute set to the provided value.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>An optional non-unique tag that identifies this task set in external systems.
     * If the task set is associated with a service discovery registry, the tasks in
     * this task set will have the <code>ECS_TASK_SET_EXTERNAL_ID</code> Cloud Map
     * attribute set to the provided value.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>An optional non-unique tag that identifies this task set in external systems.
     * If the task set is associated with a service discovery registry, the tasks in
     * this task set will have the <code>ECS_TASK_SET_EXTERNAL_ID</code> Cloud Map
     * attribute set to the provided value.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>An optional non-unique tag that identifies this task set in external systems.
     * If the task set is associated with a service discovery registry, the tasks in
     * this task set will have the <code>ECS_TASK_SET_EXTERNAL_ID</code> Cloud Map
     * attribute set to the provided value.</p>
     */
    inline CreateTaskSetRequest& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>An optional non-unique tag that identifies this task set in external systems.
     * If the task set is associated with a service discovery registry, the tasks in
     * this task set will have the <code>ECS_TASK_SET_EXTERNAL_ID</code> Cloud Map
     * attribute set to the provided value.</p>
     */
    inline CreateTaskSetRequest& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>An optional non-unique tag that identifies this task set in external systems.
     * If the task set is associated with a service discovery registry, the tasks in
     * this task set will have the <code>ECS_TASK_SET_EXTERNAL_ID</code> Cloud Map
     * attribute set to the provided value.</p>
     */
    inline CreateTaskSetRequest& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * <p>The task definition for the tasks in the task set to use.</p>
     */
    inline const Aws::String& GetTaskDefinition() const{ return m_taskDefinition; }

    /**
     * <p>The task definition for the tasks in the task set to use.</p>
     */
    inline bool TaskDefinitionHasBeenSet() const { return m_taskDefinitionHasBeenSet; }

    /**
     * <p>The task definition for the tasks in the task set to use.</p>
     */
    inline void SetTaskDefinition(const Aws::String& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }

    /**
     * <p>The task definition for the tasks in the task set to use.</p>
     */
    inline void SetTaskDefinition(Aws::String&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = std::move(value); }

    /**
     * <p>The task definition for the tasks in the task set to use.</p>
     */
    inline void SetTaskDefinition(const char* value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition.assign(value); }

    /**
     * <p>The task definition for the tasks in the task set to use.</p>
     */
    inline CreateTaskSetRequest& WithTaskDefinition(const Aws::String& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The task definition for the tasks in the task set to use.</p>
     */
    inline CreateTaskSetRequest& WithTaskDefinition(Aws::String&& value) { SetTaskDefinition(std::move(value)); return *this;}

    /**
     * <p>The task definition for the tasks in the task set to use.</p>
     */
    inline CreateTaskSetRequest& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}


    /**
     * <p>An object representing the network configuration for a task set.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }

    /**
     * <p>An object representing the network configuration for a task set.</p>
     */
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }

    /**
     * <p>An object representing the network configuration for a task set.</p>
     */
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }

    /**
     * <p>An object representing the network configuration for a task set.</p>
     */
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }

    /**
     * <p>An object representing the network configuration for a task set.</p>
     */
    inline CreateTaskSetRequest& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}

    /**
     * <p>An object representing the network configuration for a task set.</p>
     */
    inline CreateTaskSetRequest& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}


    /**
     * <p>A load balancer object representing the load balancer to use with the task
     * set. The supported load balancer types are either an Application Load Balancer
     * or a Network Load Balancer.</p>
     */
    inline const Aws::Vector<LoadBalancer>& GetLoadBalancers() const{ return m_loadBalancers; }

    /**
     * <p>A load balancer object representing the load balancer to use with the task
     * set. The supported load balancer types are either an Application Load Balancer
     * or a Network Load Balancer.</p>
     */
    inline bool LoadBalancersHasBeenSet() const { return m_loadBalancersHasBeenSet; }

    /**
     * <p>A load balancer object representing the load balancer to use with the task
     * set. The supported load balancer types are either an Application Load Balancer
     * or a Network Load Balancer.</p>
     */
    inline void SetLoadBalancers(const Aws::Vector<LoadBalancer>& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = value; }

    /**
     * <p>A load balancer object representing the load balancer to use with the task
     * set. The supported load balancer types are either an Application Load Balancer
     * or a Network Load Balancer.</p>
     */
    inline void SetLoadBalancers(Aws::Vector<LoadBalancer>&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = std::move(value); }

    /**
     * <p>A load balancer object representing the load balancer to use with the task
     * set. The supported load balancer types are either an Application Load Balancer
     * or a Network Load Balancer.</p>
     */
    inline CreateTaskSetRequest& WithLoadBalancers(const Aws::Vector<LoadBalancer>& value) { SetLoadBalancers(value); return *this;}

    /**
     * <p>A load balancer object representing the load balancer to use with the task
     * set. The supported load balancer types are either an Application Load Balancer
     * or a Network Load Balancer.</p>
     */
    inline CreateTaskSetRequest& WithLoadBalancers(Aws::Vector<LoadBalancer>&& value) { SetLoadBalancers(std::move(value)); return *this;}

    /**
     * <p>A load balancer object representing the load balancer to use with the task
     * set. The supported load balancer types are either an Application Load Balancer
     * or a Network Load Balancer.</p>
     */
    inline CreateTaskSetRequest& AddLoadBalancers(const LoadBalancer& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(value); return *this; }

    /**
     * <p>A load balancer object representing the load balancer to use with the task
     * set. The supported load balancer types are either an Application Load Balancer
     * or a Network Load Balancer.</p>
     */
    inline CreateTaskSetRequest& AddLoadBalancers(LoadBalancer&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(std::move(value)); return *this; }


    /**
     * <p>The details of the service discovery registries to assign to this task set.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>
     */
    inline const Aws::Vector<ServiceRegistry>& GetServiceRegistries() const{ return m_serviceRegistries; }

    /**
     * <p>The details of the service discovery registries to assign to this task set.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>
     */
    inline bool ServiceRegistriesHasBeenSet() const { return m_serviceRegistriesHasBeenSet; }

    /**
     * <p>The details of the service discovery registries to assign to this task set.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>
     */
    inline void SetServiceRegistries(const Aws::Vector<ServiceRegistry>& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = value; }

    /**
     * <p>The details of the service discovery registries to assign to this task set.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>
     */
    inline void SetServiceRegistries(Aws::Vector<ServiceRegistry>&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = std::move(value); }

    /**
     * <p>The details of the service discovery registries to assign to this task set.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>
     */
    inline CreateTaskSetRequest& WithServiceRegistries(const Aws::Vector<ServiceRegistry>& value) { SetServiceRegistries(value); return *this;}

    /**
     * <p>The details of the service discovery registries to assign to this task set.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>
     */
    inline CreateTaskSetRequest& WithServiceRegistries(Aws::Vector<ServiceRegistry>&& value) { SetServiceRegistries(std::move(value)); return *this;}

    /**
     * <p>The details of the service discovery registries to assign to this task set.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>
     */
    inline CreateTaskSetRequest& AddServiceRegistries(const ServiceRegistry& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.push_back(value); return *this; }

    /**
     * <p>The details of the service discovery registries to assign to this task set.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>
     */
    inline CreateTaskSetRequest& AddServiceRegistries(ServiceRegistry&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.push_back(std::move(value)); return *this; }


    /**
     * <p>The launch type that new tasks in the task set uses. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>If a <code>launchType</code> is specified, the
     * <code>capacityProviderStrategy</code> parameter must be omitted.</p>
     */
    inline const LaunchType& GetLaunchType() const{ return m_launchType; }

    /**
     * <p>The launch type that new tasks in the task set uses. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>If a <code>launchType</code> is specified, the
     * <code>capacityProviderStrategy</code> parameter must be omitted.</p>
     */
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }

    /**
     * <p>The launch type that new tasks in the task set uses. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>If a <code>launchType</code> is specified, the
     * <code>capacityProviderStrategy</code> parameter must be omitted.</p>
     */
    inline void SetLaunchType(const LaunchType& value) { m_launchTypeHasBeenSet = true; m_launchType = value; }

    /**
     * <p>The launch type that new tasks in the task set uses. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>If a <code>launchType</code> is specified, the
     * <code>capacityProviderStrategy</code> parameter must be omitted.</p>
     */
    inline void SetLaunchType(LaunchType&& value) { m_launchTypeHasBeenSet = true; m_launchType = std::move(value); }

    /**
     * <p>The launch type that new tasks in the task set uses. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>If a <code>launchType</code> is specified, the
     * <code>capacityProviderStrategy</code> parameter must be omitted.</p>
     */
    inline CreateTaskSetRequest& WithLaunchType(const LaunchType& value) { SetLaunchType(value); return *this;}

    /**
     * <p>The launch type that new tasks in the task set uses. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>If a <code>launchType</code> is specified, the
     * <code>capacityProviderStrategy</code> parameter must be omitted.</p>
     */
    inline CreateTaskSetRequest& WithLaunchType(LaunchType&& value) { SetLaunchType(std::move(value)); return *this;}


    /**
     * <p>The capacity provider strategy to use for the task set.</p> <p>A capacity
     * provider strategy consists of one or more capacity providers along with the
     * <code>base</code> and <code>weight</code> to assign to them. A capacity provider
     * must be associated with the cluster to be used in a capacity provider strategy.
     * The <a>PutClusterCapacityProviders</a> API is used to associate a capacity
     * provider with a cluster. Only capacity providers with an <code>ACTIVE</code> or
     * <code>UPDATING</code> status can be used.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * <code>launchType</code> is specified, the
     * <code>defaultCapacityProviderStrategy</code> for the cluster is used.</p> <p>If
     * specifying a capacity provider that uses an Auto Scaling group, the capacity
     * provider must already be created. New capacity providers can be created with the
     * <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate capacity
     * provider, specify either the <code>FARGATE</code> or <code>FARGATE_SPOT</code>
     * capacity providers. The Fargate capacity providers are available to all accounts
     * and only need to be associated with a cluster to be used.</p> <p>The
     * <a>PutClusterCapacityProviders</a> API operation is used to update the list of
     * available capacity providers for a cluster after the cluster is created.</p>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetCapacityProviderStrategy() const{ return m_capacityProviderStrategy; }

    /**
     * <p>The capacity provider strategy to use for the task set.</p> <p>A capacity
     * provider strategy consists of one or more capacity providers along with the
     * <code>base</code> and <code>weight</code> to assign to them. A capacity provider
     * must be associated with the cluster to be used in a capacity provider strategy.
     * The <a>PutClusterCapacityProviders</a> API is used to associate a capacity
     * provider with a cluster. Only capacity providers with an <code>ACTIVE</code> or
     * <code>UPDATING</code> status can be used.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * <code>launchType</code> is specified, the
     * <code>defaultCapacityProviderStrategy</code> for the cluster is used.</p> <p>If
     * specifying a capacity provider that uses an Auto Scaling group, the capacity
     * provider must already be created. New capacity providers can be created with the
     * <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate capacity
     * provider, specify either the <code>FARGATE</code> or <code>FARGATE_SPOT</code>
     * capacity providers. The Fargate capacity providers are available to all accounts
     * and only need to be associated with a cluster to be used.</p> <p>The
     * <a>PutClusterCapacityProviders</a> API operation is used to update the list of
     * available capacity providers for a cluster after the cluster is created.</p>
     */
    inline bool CapacityProviderStrategyHasBeenSet() const { return m_capacityProviderStrategyHasBeenSet; }

    /**
     * <p>The capacity provider strategy to use for the task set.</p> <p>A capacity
     * provider strategy consists of one or more capacity providers along with the
     * <code>base</code> and <code>weight</code> to assign to them. A capacity provider
     * must be associated with the cluster to be used in a capacity provider strategy.
     * The <a>PutClusterCapacityProviders</a> API is used to associate a capacity
     * provider with a cluster. Only capacity providers with an <code>ACTIVE</code> or
     * <code>UPDATING</code> status can be used.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * <code>launchType</code> is specified, the
     * <code>defaultCapacityProviderStrategy</code> for the cluster is used.</p> <p>If
     * specifying a capacity provider that uses an Auto Scaling group, the capacity
     * provider must already be created. New capacity providers can be created with the
     * <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate capacity
     * provider, specify either the <code>FARGATE</code> or <code>FARGATE_SPOT</code>
     * capacity providers. The Fargate capacity providers are available to all accounts
     * and only need to be associated with a cluster to be used.</p> <p>The
     * <a>PutClusterCapacityProviders</a> API operation is used to update the list of
     * available capacity providers for a cluster after the cluster is created.</p>
     */
    inline void SetCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = value; }

    /**
     * <p>The capacity provider strategy to use for the task set.</p> <p>A capacity
     * provider strategy consists of one or more capacity providers along with the
     * <code>base</code> and <code>weight</code> to assign to them. A capacity provider
     * must be associated with the cluster to be used in a capacity provider strategy.
     * The <a>PutClusterCapacityProviders</a> API is used to associate a capacity
     * provider with a cluster. Only capacity providers with an <code>ACTIVE</code> or
     * <code>UPDATING</code> status can be used.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * <code>launchType</code> is specified, the
     * <code>defaultCapacityProviderStrategy</code> for the cluster is used.</p> <p>If
     * specifying a capacity provider that uses an Auto Scaling group, the capacity
     * provider must already be created. New capacity providers can be created with the
     * <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate capacity
     * provider, specify either the <code>FARGATE</code> or <code>FARGATE_SPOT</code>
     * capacity providers. The Fargate capacity providers are available to all accounts
     * and only need to be associated with a cluster to be used.</p> <p>The
     * <a>PutClusterCapacityProviders</a> API operation is used to update the list of
     * available capacity providers for a cluster after the cluster is created.</p>
     */
    inline void SetCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = std::move(value); }

    /**
     * <p>The capacity provider strategy to use for the task set.</p> <p>A capacity
     * provider strategy consists of one or more capacity providers along with the
     * <code>base</code> and <code>weight</code> to assign to them. A capacity provider
     * must be associated with the cluster to be used in a capacity provider strategy.
     * The <a>PutClusterCapacityProviders</a> API is used to associate a capacity
     * provider with a cluster. Only capacity providers with an <code>ACTIVE</code> or
     * <code>UPDATING</code> status can be used.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * <code>launchType</code> is specified, the
     * <code>defaultCapacityProviderStrategy</code> for the cluster is used.</p> <p>If
     * specifying a capacity provider that uses an Auto Scaling group, the capacity
     * provider must already be created. New capacity providers can be created with the
     * <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate capacity
     * provider, specify either the <code>FARGATE</code> or <code>FARGATE_SPOT</code>
     * capacity providers. The Fargate capacity providers are available to all accounts
     * and only need to be associated with a cluster to be used.</p> <p>The
     * <a>PutClusterCapacityProviders</a> API operation is used to update the list of
     * available capacity providers for a cluster after the cluster is created.</p>
     */
    inline CreateTaskSetRequest& WithCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { SetCapacityProviderStrategy(value); return *this;}

    /**
     * <p>The capacity provider strategy to use for the task set.</p> <p>A capacity
     * provider strategy consists of one or more capacity providers along with the
     * <code>base</code> and <code>weight</code> to assign to them. A capacity provider
     * must be associated with the cluster to be used in a capacity provider strategy.
     * The <a>PutClusterCapacityProviders</a> API is used to associate a capacity
     * provider with a cluster. Only capacity providers with an <code>ACTIVE</code> or
     * <code>UPDATING</code> status can be used.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * <code>launchType</code> is specified, the
     * <code>defaultCapacityProviderStrategy</code> for the cluster is used.</p> <p>If
     * specifying a capacity provider that uses an Auto Scaling group, the capacity
     * provider must already be created. New capacity providers can be created with the
     * <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate capacity
     * provider, specify either the <code>FARGATE</code> or <code>FARGATE_SPOT</code>
     * capacity providers. The Fargate capacity providers are available to all accounts
     * and only need to be associated with a cluster to be used.</p> <p>The
     * <a>PutClusterCapacityProviders</a> API operation is used to update the list of
     * available capacity providers for a cluster after the cluster is created.</p>
     */
    inline CreateTaskSetRequest& WithCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { SetCapacityProviderStrategy(std::move(value)); return *this;}

    /**
     * <p>The capacity provider strategy to use for the task set.</p> <p>A capacity
     * provider strategy consists of one or more capacity providers along with the
     * <code>base</code> and <code>weight</code> to assign to them. A capacity provider
     * must be associated with the cluster to be used in a capacity provider strategy.
     * The <a>PutClusterCapacityProviders</a> API is used to associate a capacity
     * provider with a cluster. Only capacity providers with an <code>ACTIVE</code> or
     * <code>UPDATING</code> status can be used.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * <code>launchType</code> is specified, the
     * <code>defaultCapacityProviderStrategy</code> for the cluster is used.</p> <p>If
     * specifying a capacity provider that uses an Auto Scaling group, the capacity
     * provider must already be created. New capacity providers can be created with the
     * <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate capacity
     * provider, specify either the <code>FARGATE</code> or <code>FARGATE_SPOT</code>
     * capacity providers. The Fargate capacity providers are available to all accounts
     * and only need to be associated with a cluster to be used.</p> <p>The
     * <a>PutClusterCapacityProviders</a> API operation is used to update the list of
     * available capacity providers for a cluster after the cluster is created.</p>
     */
    inline CreateTaskSetRequest& AddCapacityProviderStrategy(const CapacityProviderStrategyItem& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(value); return *this; }

    /**
     * <p>The capacity provider strategy to use for the task set.</p> <p>A capacity
     * provider strategy consists of one or more capacity providers along with the
     * <code>base</code> and <code>weight</code> to assign to them. A capacity provider
     * must be associated with the cluster to be used in a capacity provider strategy.
     * The <a>PutClusterCapacityProviders</a> API is used to associate a capacity
     * provider with a cluster. Only capacity providers with an <code>ACTIVE</code> or
     * <code>UPDATING</code> status can be used.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * <code>launchType</code> is specified, the
     * <code>defaultCapacityProviderStrategy</code> for the cluster is used.</p> <p>If
     * specifying a capacity provider that uses an Auto Scaling group, the capacity
     * provider must already be created. New capacity providers can be created with the
     * <a>CreateCapacityProvider</a> API operation.</p> <p>To use a Fargate capacity
     * provider, specify either the <code>FARGATE</code> or <code>FARGATE_SPOT</code>
     * capacity providers. The Fargate capacity providers are available to all accounts
     * and only need to be associated with a cluster to be used.</p> <p>The
     * <a>PutClusterCapacityProviders</a> API operation is used to update the list of
     * available capacity providers for a cluster after the cluster is created.</p>
     */
    inline CreateTaskSetRequest& AddCapacityProviderStrategy(CapacityProviderStrategyItem&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(std::move(value)); return *this; }


    /**
     * <p>The platform version that the tasks in the task set uses. A platform version
     * is specified only for tasks using the Fargate launch type. If one isn't
     * specified, the <code>LATEST</code> platform version is used.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }

    /**
     * <p>The platform version that the tasks in the task set uses. A platform version
     * is specified only for tasks using the Fargate launch type. If one isn't
     * specified, the <code>LATEST</code> platform version is used.</p>
     */
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }

    /**
     * <p>The platform version that the tasks in the task set uses. A platform version
     * is specified only for tasks using the Fargate launch type. If one isn't
     * specified, the <code>LATEST</code> platform version is used.</p>
     */
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

    /**
     * <p>The platform version that the tasks in the task set uses. A platform version
     * is specified only for tasks using the Fargate launch type. If one isn't
     * specified, the <code>LATEST</code> platform version is used.</p>
     */
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }

    /**
     * <p>The platform version that the tasks in the task set uses. A platform version
     * is specified only for tasks using the Fargate launch type. If one isn't
     * specified, the <code>LATEST</code> platform version is used.</p>
     */
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }

    /**
     * <p>The platform version that the tasks in the task set uses. A platform version
     * is specified only for tasks using the Fargate launch type. If one isn't
     * specified, the <code>LATEST</code> platform version is used.</p>
     */
    inline CreateTaskSetRequest& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}

    /**
     * <p>The platform version that the tasks in the task set uses. A platform version
     * is specified only for tasks using the Fargate launch type. If one isn't
     * specified, the <code>LATEST</code> platform version is used.</p>
     */
    inline CreateTaskSetRequest& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}

    /**
     * <p>The platform version that the tasks in the task set uses. A platform version
     * is specified only for tasks using the Fargate launch type. If one isn't
     * specified, the <code>LATEST</code> platform version is used.</p>
     */
    inline CreateTaskSetRequest& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}


    /**
     * <p>A floating-point percentage of the desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline const Scale& GetScale() const{ return m_scale; }

    /**
     * <p>A floating-point percentage of the desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }

    /**
     * <p>A floating-point percentage of the desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline void SetScale(const Scale& value) { m_scaleHasBeenSet = true; m_scale = value; }

    /**
     * <p>A floating-point percentage of the desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline void SetScale(Scale&& value) { m_scaleHasBeenSet = true; m_scale = std::move(value); }

    /**
     * <p>A floating-point percentage of the desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline CreateTaskSetRequest& WithScale(const Scale& value) { SetScale(value); return *this;}

    /**
     * <p>A floating-point percentage of the desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline CreateTaskSetRequest& WithScale(Scale&& value) { SetScale(std::move(value)); return *this;}


    /**
     * <p>The identifier that you provide to ensure the idempotency of the request.
     * It's case sensitive and must be unique. It can be up to 32 ASCII characters are
     * allowed.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The identifier that you provide to ensure the idempotency of the request.
     * It's case sensitive and must be unique. It can be up to 32 ASCII characters are
     * allowed.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The identifier that you provide to ensure the idempotency of the request.
     * It's case sensitive and must be unique. It can be up to 32 ASCII characters are
     * allowed.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The identifier that you provide to ensure the idempotency of the request.
     * It's case sensitive and must be unique. It can be up to 32 ASCII characters are
     * allowed.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The identifier that you provide to ensure the idempotency of the request.
     * It's case sensitive and must be unique. It can be up to 32 ASCII characters are
     * allowed.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The identifier that you provide to ensure the idempotency of the request.
     * It's case sensitive and must be unique. It can be up to 32 ASCII characters are
     * allowed.</p>
     */
    inline CreateTaskSetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The identifier that you provide to ensure the idempotency of the request.
     * It's case sensitive and must be unique. It can be up to 32 ASCII characters are
     * allowed.</p>
     */
    inline CreateTaskSetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The identifier that you provide to ensure the idempotency of the request.
     * It's case sensitive and must be unique. It can be up to 32 ASCII characters are
     * allowed.</p>
     */
    inline CreateTaskSetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The metadata that you apply to the task set to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define
     * both. When a service is deleted, the tags are deleted.</p> <p>The following
     * basic restrictions apply to tags:</p> <ul> <li> <p>Maximum number of tags per
     * resource - 50</p> </li> <li> <p>For each resource, each tag key must be unique,
     * and each tag key can have only one value.</p> </li> <li> <p>Maximum key length -
     * 128 Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length - 256
     * Unicode characters in UTF-8</p> </li> <li> <p>If your tagging schema is used
     * across multiple services and resources, remember that other services may have
     * restrictions on allowed characters. Generally allowed characters are: letters,
     * numbers, and spaces representable in UTF-8, and the following characters: + - =
     * . _ : / @.</p> </li> <li> <p>Tag keys and values are case-sensitive.</p> </li>
     * <li> <p>Do not use <code>aws:</code>, <code>AWS:</code>, or any upper or
     * lowercase combination of such as a prefix for either keys or values as it is
     * reserved for Amazon Web Services use. You cannot edit or delete tag keys or
     * values with this prefix. Tags with this prefix do not count against your tags
     * per resource limit.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata that you apply to the task set to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define
     * both. When a service is deleted, the tags are deleted.</p> <p>The following
     * basic restrictions apply to tags:</p> <ul> <li> <p>Maximum number of tags per
     * resource - 50</p> </li> <li> <p>For each resource, each tag key must be unique,
     * and each tag key can have only one value.</p> </li> <li> <p>Maximum key length -
     * 128 Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length - 256
     * Unicode characters in UTF-8</p> </li> <li> <p>If your tagging schema is used
     * across multiple services and resources, remember that other services may have
     * restrictions on allowed characters. Generally allowed characters are: letters,
     * numbers, and spaces representable in UTF-8, and the following characters: + - =
     * . _ : / @.</p> </li> <li> <p>Tag keys and values are case-sensitive.</p> </li>
     * <li> <p>Do not use <code>aws:</code>, <code>AWS:</code>, or any upper or
     * lowercase combination of such as a prefix for either keys or values as it is
     * reserved for Amazon Web Services use. You cannot edit or delete tag keys or
     * values with this prefix. Tags with this prefix do not count against your tags
     * per resource limit.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata that you apply to the task set to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define
     * both. When a service is deleted, the tags are deleted.</p> <p>The following
     * basic restrictions apply to tags:</p> <ul> <li> <p>Maximum number of tags per
     * resource - 50</p> </li> <li> <p>For each resource, each tag key must be unique,
     * and each tag key can have only one value.</p> </li> <li> <p>Maximum key length -
     * 128 Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length - 256
     * Unicode characters in UTF-8</p> </li> <li> <p>If your tagging schema is used
     * across multiple services and resources, remember that other services may have
     * restrictions on allowed characters. Generally allowed characters are: letters,
     * numbers, and spaces representable in UTF-8, and the following characters: + - =
     * . _ : / @.</p> </li> <li> <p>Tag keys and values are case-sensitive.</p> </li>
     * <li> <p>Do not use <code>aws:</code>, <code>AWS:</code>, or any upper or
     * lowercase combination of such as a prefix for either keys or values as it is
     * reserved for Amazon Web Services use. You cannot edit or delete tag keys or
     * values with this prefix. Tags with this prefix do not count against your tags
     * per resource limit.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata that you apply to the task set to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define
     * both. When a service is deleted, the tags are deleted.</p> <p>The following
     * basic restrictions apply to tags:</p> <ul> <li> <p>Maximum number of tags per
     * resource - 50</p> </li> <li> <p>For each resource, each tag key must be unique,
     * and each tag key can have only one value.</p> </li> <li> <p>Maximum key length -
     * 128 Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length - 256
     * Unicode characters in UTF-8</p> </li> <li> <p>If your tagging schema is used
     * across multiple services and resources, remember that other services may have
     * restrictions on allowed characters. Generally allowed characters are: letters,
     * numbers, and spaces representable in UTF-8, and the following characters: + - =
     * . _ : / @.</p> </li> <li> <p>Tag keys and values are case-sensitive.</p> </li>
     * <li> <p>Do not use <code>aws:</code>, <code>AWS:</code>, or any upper or
     * lowercase combination of such as a prefix for either keys or values as it is
     * reserved for Amazon Web Services use. You cannot edit or delete tag keys or
     * values with this prefix. Tags with this prefix do not count against your tags
     * per resource limit.</p> </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata that you apply to the task set to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define
     * both. When a service is deleted, the tags are deleted.</p> <p>The following
     * basic restrictions apply to tags:</p> <ul> <li> <p>Maximum number of tags per
     * resource - 50</p> </li> <li> <p>For each resource, each tag key must be unique,
     * and each tag key can have only one value.</p> </li> <li> <p>Maximum key length -
     * 128 Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length - 256
     * Unicode characters in UTF-8</p> </li> <li> <p>If your tagging schema is used
     * across multiple services and resources, remember that other services may have
     * restrictions on allowed characters. Generally allowed characters are: letters,
     * numbers, and spaces representable in UTF-8, and the following characters: + - =
     * . _ : / @.</p> </li> <li> <p>Tag keys and values are case-sensitive.</p> </li>
     * <li> <p>Do not use <code>aws:</code>, <code>AWS:</code>, or any upper or
     * lowercase combination of such as a prefix for either keys or values as it is
     * reserved for Amazon Web Services use. You cannot edit or delete tag keys or
     * values with this prefix. Tags with this prefix do not count against your tags
     * per resource limit.</p> </li> </ul>
     */
    inline CreateTaskSetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata that you apply to the task set to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define
     * both. When a service is deleted, the tags are deleted.</p> <p>The following
     * basic restrictions apply to tags:</p> <ul> <li> <p>Maximum number of tags per
     * resource - 50</p> </li> <li> <p>For each resource, each tag key must be unique,
     * and each tag key can have only one value.</p> </li> <li> <p>Maximum key length -
     * 128 Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length - 256
     * Unicode characters in UTF-8</p> </li> <li> <p>If your tagging schema is used
     * across multiple services and resources, remember that other services may have
     * restrictions on allowed characters. Generally allowed characters are: letters,
     * numbers, and spaces representable in UTF-8, and the following characters: + - =
     * . _ : / @.</p> </li> <li> <p>Tag keys and values are case-sensitive.</p> </li>
     * <li> <p>Do not use <code>aws:</code>, <code>AWS:</code>, or any upper or
     * lowercase combination of such as a prefix for either keys or values as it is
     * reserved for Amazon Web Services use. You cannot edit or delete tag keys or
     * values with this prefix. Tags with this prefix do not count against your tags
     * per resource limit.</p> </li> </ul>
     */
    inline CreateTaskSetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata that you apply to the task set to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define
     * both. When a service is deleted, the tags are deleted.</p> <p>The following
     * basic restrictions apply to tags:</p> <ul> <li> <p>Maximum number of tags per
     * resource - 50</p> </li> <li> <p>For each resource, each tag key must be unique,
     * and each tag key can have only one value.</p> </li> <li> <p>Maximum key length -
     * 128 Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length - 256
     * Unicode characters in UTF-8</p> </li> <li> <p>If your tagging schema is used
     * across multiple services and resources, remember that other services may have
     * restrictions on allowed characters. Generally allowed characters are: letters,
     * numbers, and spaces representable in UTF-8, and the following characters: + - =
     * . _ : / @.</p> </li> <li> <p>Tag keys and values are case-sensitive.</p> </li>
     * <li> <p>Do not use <code>aws:</code>, <code>AWS:</code>, or any upper or
     * lowercase combination of such as a prefix for either keys or values as it is
     * reserved for Amazon Web Services use. You cannot edit or delete tag keys or
     * values with this prefix. Tags with this prefix do not count against your tags
     * per resource limit.</p> </li> </ul>
     */
    inline CreateTaskSetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The metadata that you apply to the task set to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define
     * both. When a service is deleted, the tags are deleted.</p> <p>The following
     * basic restrictions apply to tags:</p> <ul> <li> <p>Maximum number of tags per
     * resource - 50</p> </li> <li> <p>For each resource, each tag key must be unique,
     * and each tag key can have only one value.</p> </li> <li> <p>Maximum key length -
     * 128 Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length - 256
     * Unicode characters in UTF-8</p> </li> <li> <p>If your tagging schema is used
     * across multiple services and resources, remember that other services may have
     * restrictions on allowed characters. Generally allowed characters are: letters,
     * numbers, and spaces representable in UTF-8, and the following characters: + - =
     * . _ : / @.</p> </li> <li> <p>Tag keys and values are case-sensitive.</p> </li>
     * <li> <p>Do not use <code>aws:</code>, <code>AWS:</code>, or any upper or
     * lowercase combination of such as a prefix for either keys or values as it is
     * reserved for Amazon Web Services use. You cannot edit or delete tag keys or
     * values with this prefix. Tags with this prefix do not count against your tags
     * per resource limit.</p> </li> </ul>
     */
    inline CreateTaskSetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    Aws::Vector<LoadBalancer> m_loadBalancers;
    bool m_loadBalancersHasBeenSet = false;

    Aws::Vector<ServiceRegistry> m_serviceRegistries;
    bool m_serviceRegistriesHasBeenSet = false;

    LaunchType m_launchType;
    bool m_launchTypeHasBeenSet = false;

    Aws::Vector<CapacityProviderStrategyItem> m_capacityProviderStrategy;
    bool m_capacityProviderStrategyHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Scale m_scale;
    bool m_scaleHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
