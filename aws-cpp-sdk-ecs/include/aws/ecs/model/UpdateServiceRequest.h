/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/DeploymentConfiguration.h>
#include <aws/ecs/model/NetworkConfiguration.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API UpdateServiceRequest : public ECSRequest
  {
  public:
    UpdateServiceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateService"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * service is running on. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * service is running on. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * service is running on. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * service is running on. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * service is running on. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * service is running on. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline UpdateServiceRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * service is running on. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline UpdateServiceRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * service is running on. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline UpdateServiceRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>The name of the service to update.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The name of the service to update.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The name of the service to update.</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The name of the service to update.</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The name of the service to update.</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The name of the service to update.</p>
     */
    inline UpdateServiceRequest& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The name of the service to update.</p>
     */
    inline UpdateServiceRequest& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>The name of the service to update.</p>
     */
    inline UpdateServiceRequest& WithService(const char* value) { SetService(value); return *this;}


    /**
     * <p>The number of instantiations of the task to place and keep running in your
     * service.</p>
     */
    inline int GetDesiredCount() const{ return m_desiredCount; }

    /**
     * <p>The number of instantiations of the task to place and keep running in your
     * service.</p>
     */
    inline bool DesiredCountHasBeenSet() const { return m_desiredCountHasBeenSet; }

    /**
     * <p>The number of instantiations of the task to place and keep running in your
     * service.</p>
     */
    inline void SetDesiredCount(int value) { m_desiredCountHasBeenSet = true; m_desiredCount = value; }

    /**
     * <p>The number of instantiations of the task to place and keep running in your
     * service.</p>
     */
    inline UpdateServiceRequest& WithDesiredCount(int value) { SetDesiredCount(value); return *this;}


    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full ARN of the task definition to run in your
     * service. If a <code>revision</code> is not specified, the latest
     * <code>ACTIVE</code> revision is used. If you modify the task definition with
     * <code>UpdateService</code>, Amazon ECS spawns a task with the new version of the
     * task definition and then stops an old task after the new version is running.</p>
     */
    inline const Aws::String& GetTaskDefinition() const{ return m_taskDefinition; }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full ARN of the task definition to run in your
     * service. If a <code>revision</code> is not specified, the latest
     * <code>ACTIVE</code> revision is used. If you modify the task definition with
     * <code>UpdateService</code>, Amazon ECS spawns a task with the new version of the
     * task definition and then stops an old task after the new version is running.</p>
     */
    inline bool TaskDefinitionHasBeenSet() const { return m_taskDefinitionHasBeenSet; }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full ARN of the task definition to run in your
     * service. If a <code>revision</code> is not specified, the latest
     * <code>ACTIVE</code> revision is used. If you modify the task definition with
     * <code>UpdateService</code>, Amazon ECS spawns a task with the new version of the
     * task definition and then stops an old task after the new version is running.</p>
     */
    inline void SetTaskDefinition(const Aws::String& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full ARN of the task definition to run in your
     * service. If a <code>revision</code> is not specified, the latest
     * <code>ACTIVE</code> revision is used. If you modify the task definition with
     * <code>UpdateService</code>, Amazon ECS spawns a task with the new version of the
     * task definition and then stops an old task after the new version is running.</p>
     */
    inline void SetTaskDefinition(Aws::String&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = std::move(value); }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full ARN of the task definition to run in your
     * service. If a <code>revision</code> is not specified, the latest
     * <code>ACTIVE</code> revision is used. If you modify the task definition with
     * <code>UpdateService</code>, Amazon ECS spawns a task with the new version of the
     * task definition and then stops an old task after the new version is running.</p>
     */
    inline void SetTaskDefinition(const char* value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition.assign(value); }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full ARN of the task definition to run in your
     * service. If a <code>revision</code> is not specified, the latest
     * <code>ACTIVE</code> revision is used. If you modify the task definition with
     * <code>UpdateService</code>, Amazon ECS spawns a task with the new version of the
     * task definition and then stops an old task after the new version is running.</p>
     */
    inline UpdateServiceRequest& WithTaskDefinition(const Aws::String& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full ARN of the task definition to run in your
     * service. If a <code>revision</code> is not specified, the latest
     * <code>ACTIVE</code> revision is used. If you modify the task definition with
     * <code>UpdateService</code>, Amazon ECS spawns a task with the new version of the
     * task definition and then stops an old task after the new version is running.</p>
     */
    inline UpdateServiceRequest& WithTaskDefinition(Aws::String&& value) { SetTaskDefinition(std::move(value)); return *this;}

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full ARN of the task definition to run in your
     * service. If a <code>revision</code> is not specified, the latest
     * <code>ACTIVE</code> revision is used. If you modify the task definition with
     * <code>UpdateService</code>, Amazon ECS spawns a task with the new version of the
     * task definition and then stops an old task after the new version is running.</p>
     */
    inline UpdateServiceRequest& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}


    /**
     * <p>Optional deployment parameters that control how many tasks run during the
     * deployment and the ordering of stopping and starting tasks.</p>
     */
    inline const DeploymentConfiguration& GetDeploymentConfiguration() const{ return m_deploymentConfiguration; }

    /**
     * <p>Optional deployment parameters that control how many tasks run during the
     * deployment and the ordering of stopping and starting tasks.</p>
     */
    inline bool DeploymentConfigurationHasBeenSet() const { return m_deploymentConfigurationHasBeenSet; }

    /**
     * <p>Optional deployment parameters that control how many tasks run during the
     * deployment and the ordering of stopping and starting tasks.</p>
     */
    inline void SetDeploymentConfiguration(const DeploymentConfiguration& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = value; }

    /**
     * <p>Optional deployment parameters that control how many tasks run during the
     * deployment and the ordering of stopping and starting tasks.</p>
     */
    inline void SetDeploymentConfiguration(DeploymentConfiguration&& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = std::move(value); }

    /**
     * <p>Optional deployment parameters that control how many tasks run during the
     * deployment and the ordering of stopping and starting tasks.</p>
     */
    inline UpdateServiceRequest& WithDeploymentConfiguration(const DeploymentConfiguration& value) { SetDeploymentConfiguration(value); return *this;}

    /**
     * <p>Optional deployment parameters that control how many tasks run during the
     * deployment and the ordering of stopping and starting tasks.</p>
     */
    inline UpdateServiceRequest& WithDeploymentConfiguration(DeploymentConfiguration&& value) { SetDeploymentConfiguration(std::move(value)); return *this;}


    /**
     * <p>The network configuration for the service. This parameter is required for
     * task definitions that use the <code>awsvpc</code> network mode to receive their
     * own elastic network interface, and it is not supported for other network modes.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <note> <p>Updating a service to add a subnet to a list of
     * existing subnets does not trigger a service deployment. For example, if your
     * network configuration change is to keep the existing subnets and simply add
     * another subnet to the network configuration, this does not trigger a new service
     * deployment.</p> </note>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }

    /**
     * <p>The network configuration for the service. This parameter is required for
     * task definitions that use the <code>awsvpc</code> network mode to receive their
     * own elastic network interface, and it is not supported for other network modes.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <note> <p>Updating a service to add a subnet to a list of
     * existing subnets does not trigger a service deployment. For example, if your
     * network configuration change is to keep the existing subnets and simply add
     * another subnet to the network configuration, this does not trigger a new service
     * deployment.</p> </note>
     */
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }

    /**
     * <p>The network configuration for the service. This parameter is required for
     * task definitions that use the <code>awsvpc</code> network mode to receive their
     * own elastic network interface, and it is not supported for other network modes.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <note> <p>Updating a service to add a subnet to a list of
     * existing subnets does not trigger a service deployment. For example, if your
     * network configuration change is to keep the existing subnets and simply add
     * another subnet to the network configuration, this does not trigger a new service
     * deployment.</p> </note>
     */
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }

    /**
     * <p>The network configuration for the service. This parameter is required for
     * task definitions that use the <code>awsvpc</code> network mode to receive their
     * own elastic network interface, and it is not supported for other network modes.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <note> <p>Updating a service to add a subnet to a list of
     * existing subnets does not trigger a service deployment. For example, if your
     * network configuration change is to keep the existing subnets and simply add
     * another subnet to the network configuration, this does not trigger a new service
     * deployment.</p> </note>
     */
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }

    /**
     * <p>The network configuration for the service. This parameter is required for
     * task definitions that use the <code>awsvpc</code> network mode to receive their
     * own elastic network interface, and it is not supported for other network modes.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <note> <p>Updating a service to add a subnet to a list of
     * existing subnets does not trigger a service deployment. For example, if your
     * network configuration change is to keep the existing subnets and simply add
     * another subnet to the network configuration, this does not trigger a new service
     * deployment.</p> </note>
     */
    inline UpdateServiceRequest& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}

    /**
     * <p>The network configuration for the service. This parameter is required for
     * task definitions that use the <code>awsvpc</code> network mode to receive their
     * own elastic network interface, and it is not supported for other network modes.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <note> <p>Updating a service to add a subnet to a list of
     * existing subnets does not trigger a service deployment. For example, if your
     * network configuration change is to keep the existing subnets and simply add
     * another subnet to the network configuration, this does not trigger a new service
     * deployment.</p> </note>
     */
    inline UpdateServiceRequest& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}


    /**
     * <p>The platform version on which your tasks in the service are running. A
     * platform version is only specified for tasks using the Fargate launch type. If
     * one is not specified, the <code>LATEST</code> platform version is used by
     * default. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">AWS
     * Fargate Platform Versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }

    /**
     * <p>The platform version on which your tasks in the service are running. A
     * platform version is only specified for tasks using the Fargate launch type. If
     * one is not specified, the <code>LATEST</code> platform version is used by
     * default. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">AWS
     * Fargate Platform Versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }

    /**
     * <p>The platform version on which your tasks in the service are running. A
     * platform version is only specified for tasks using the Fargate launch type. If
     * one is not specified, the <code>LATEST</code> platform version is used by
     * default. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">AWS
     * Fargate Platform Versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

    /**
     * <p>The platform version on which your tasks in the service are running. A
     * platform version is only specified for tasks using the Fargate launch type. If
     * one is not specified, the <code>LATEST</code> platform version is used by
     * default. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">AWS
     * Fargate Platform Versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }

    /**
     * <p>The platform version on which your tasks in the service are running. A
     * platform version is only specified for tasks using the Fargate launch type. If
     * one is not specified, the <code>LATEST</code> platform version is used by
     * default. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">AWS
     * Fargate Platform Versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }

    /**
     * <p>The platform version on which your tasks in the service are running. A
     * platform version is only specified for tasks using the Fargate launch type. If
     * one is not specified, the <code>LATEST</code> platform version is used by
     * default. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">AWS
     * Fargate Platform Versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline UpdateServiceRequest& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}

    /**
     * <p>The platform version on which your tasks in the service are running. A
     * platform version is only specified for tasks using the Fargate launch type. If
     * one is not specified, the <code>LATEST</code> platform version is used by
     * default. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">AWS
     * Fargate Platform Versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline UpdateServiceRequest& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}

    /**
     * <p>The platform version on which your tasks in the service are running. A
     * platform version is only specified for tasks using the Fargate launch type. If
     * one is not specified, the <code>LATEST</code> platform version is used by
     * default. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">AWS
     * Fargate Platform Versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline UpdateServiceRequest& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}


    /**
     * <p>Whether to force a new deployment of the service. Deployments are not forced
     * by default. You can use this option to trigger a new deployment with no service
     * definition changes. For example, you can update a service's tasks to use a newer
     * Docker image with the same image/tag combination (<code>my_image:latest</code>)
     * or to roll Fargate tasks onto a newer platform version.</p>
     */
    inline bool GetForceNewDeployment() const{ return m_forceNewDeployment; }

    /**
     * <p>Whether to force a new deployment of the service. Deployments are not forced
     * by default. You can use this option to trigger a new deployment with no service
     * definition changes. For example, you can update a service's tasks to use a newer
     * Docker image with the same image/tag combination (<code>my_image:latest</code>)
     * or to roll Fargate tasks onto a newer platform version.</p>
     */
    inline bool ForceNewDeploymentHasBeenSet() const { return m_forceNewDeploymentHasBeenSet; }

    /**
     * <p>Whether to force a new deployment of the service. Deployments are not forced
     * by default. You can use this option to trigger a new deployment with no service
     * definition changes. For example, you can update a service's tasks to use a newer
     * Docker image with the same image/tag combination (<code>my_image:latest</code>)
     * or to roll Fargate tasks onto a newer platform version.</p>
     */
    inline void SetForceNewDeployment(bool value) { m_forceNewDeploymentHasBeenSet = true; m_forceNewDeployment = value; }

    /**
     * <p>Whether to force a new deployment of the service. Deployments are not forced
     * by default. You can use this option to trigger a new deployment with no service
     * definition changes. For example, you can update a service's tasks to use a newer
     * Docker image with the same image/tag combination (<code>my_image:latest</code>)
     * or to roll Fargate tasks onto a newer platform version.</p>
     */
    inline UpdateServiceRequest& WithForceNewDeployment(bool value) { SetForceNewDeployment(value); return *this;}


    /**
     * <p>The period of time, in seconds, that the Amazon ECS service scheduler should
     * ignore unhealthy Elastic Load Balancing target health checks after a task has
     * first started. This is only valid if your service is configured to use a load
     * balancer. If your service's tasks take a while to start and respond to Elastic
     * Load Balancing health checks, you can specify a health check grace period of up
     * to 1,800 seconds. During that time, the ECS service scheduler ignores the
     * Elastic Load Balancing health check status. This grace period can prevent the
     * ECS service scheduler from marking tasks as unhealthy and stopping them before
     * they have time to come up.</p>
     */
    inline int GetHealthCheckGracePeriodSeconds() const{ return m_healthCheckGracePeriodSeconds; }

    /**
     * <p>The period of time, in seconds, that the Amazon ECS service scheduler should
     * ignore unhealthy Elastic Load Balancing target health checks after a task has
     * first started. This is only valid if your service is configured to use a load
     * balancer. If your service's tasks take a while to start and respond to Elastic
     * Load Balancing health checks, you can specify a health check grace period of up
     * to 1,800 seconds. During that time, the ECS service scheduler ignores the
     * Elastic Load Balancing health check status. This grace period can prevent the
     * ECS service scheduler from marking tasks as unhealthy and stopping them before
     * they have time to come up.</p>
     */
    inline bool HealthCheckGracePeriodSecondsHasBeenSet() const { return m_healthCheckGracePeriodSecondsHasBeenSet; }

    /**
     * <p>The period of time, in seconds, that the Amazon ECS service scheduler should
     * ignore unhealthy Elastic Load Balancing target health checks after a task has
     * first started. This is only valid if your service is configured to use a load
     * balancer. If your service's tasks take a while to start and respond to Elastic
     * Load Balancing health checks, you can specify a health check grace period of up
     * to 1,800 seconds. During that time, the ECS service scheduler ignores the
     * Elastic Load Balancing health check status. This grace period can prevent the
     * ECS service scheduler from marking tasks as unhealthy and stopping them before
     * they have time to come up.</p>
     */
    inline void SetHealthCheckGracePeriodSeconds(int value) { m_healthCheckGracePeriodSecondsHasBeenSet = true; m_healthCheckGracePeriodSeconds = value; }

    /**
     * <p>The period of time, in seconds, that the Amazon ECS service scheduler should
     * ignore unhealthy Elastic Load Balancing target health checks after a task has
     * first started. This is only valid if your service is configured to use a load
     * balancer. If your service's tasks take a while to start and respond to Elastic
     * Load Balancing health checks, you can specify a health check grace period of up
     * to 1,800 seconds. During that time, the ECS service scheduler ignores the
     * Elastic Load Balancing health check status. This grace period can prevent the
     * ECS service scheduler from marking tasks as unhealthy and stopping them before
     * they have time to come up.</p>
     */
    inline UpdateServiceRequest& WithHealthCheckGracePeriodSeconds(int value) { SetHealthCheckGracePeriodSeconds(value); return *this;}

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet;

    Aws::String m_service;
    bool m_serviceHasBeenSet;

    int m_desiredCount;
    bool m_desiredCountHasBeenSet;

    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet;

    DeploymentConfiguration m_deploymentConfiguration;
    bool m_deploymentConfigurationHasBeenSet;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet;

    bool m_forceNewDeployment;
    bool m_forceNewDeploymentHasBeenSet;

    int m_healthCheckGracePeriodSeconds;
    bool m_healthCheckGracePeriodSecondsHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
