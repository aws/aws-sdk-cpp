/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/LaunchType.h>
#include <aws/ecs/model/NetworkConfiguration.h>
#include <aws/ecs/model/DeploymentRolloutState.h>
#include <aws/ecs/model/CapacityProviderStrategyItem.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The details of an Amazon ECS service deployment. This is used only when a
   * service uses the <code>ECS</code> deployment controller type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Deployment">AWS API
   * Reference</a></p>
   */
  class AWS_ECS_API Deployment
  {
  public:
    Deployment();
    Deployment(Aws::Utils::Json::JsonView jsonValue);
    Deployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the deployment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the deployment.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the deployment.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the deployment.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the deployment.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the deployment.</p>
     */
    inline Deployment& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the deployment.</p>
     */
    inline Deployment& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the deployment.</p>
     */
    inline Deployment& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The status of the deployment. The following describes each state:</p> <dl>
     * <dt>PRIMARY</dt> <dd> <p>The most recent deployment of a service.</p> </dd>
     * <dt>ACTIVE</dt> <dd> <p>A service deployment that still has running tasks, but
     * are in the process of being replaced with a new <code>PRIMARY</code>
     * deployment.</p> </dd> <dt>INACTIVE</dt> <dd> <p>A deployment that has been
     * completely replaced.</p> </dd> </dl>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the deployment. The following describes each state:</p> <dl>
     * <dt>PRIMARY</dt> <dd> <p>The most recent deployment of a service.</p> </dd>
     * <dt>ACTIVE</dt> <dd> <p>A service deployment that still has running tasks, but
     * are in the process of being replaced with a new <code>PRIMARY</code>
     * deployment.</p> </dd> <dt>INACTIVE</dt> <dd> <p>A deployment that has been
     * completely replaced.</p> </dd> </dl>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the deployment. The following describes each state:</p> <dl>
     * <dt>PRIMARY</dt> <dd> <p>The most recent deployment of a service.</p> </dd>
     * <dt>ACTIVE</dt> <dd> <p>A service deployment that still has running tasks, but
     * are in the process of being replaced with a new <code>PRIMARY</code>
     * deployment.</p> </dd> <dt>INACTIVE</dt> <dd> <p>A deployment that has been
     * completely replaced.</p> </dd> </dl>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the deployment. The following describes each state:</p> <dl>
     * <dt>PRIMARY</dt> <dd> <p>The most recent deployment of a service.</p> </dd>
     * <dt>ACTIVE</dt> <dd> <p>A service deployment that still has running tasks, but
     * are in the process of being replaced with a new <code>PRIMARY</code>
     * deployment.</p> </dd> <dt>INACTIVE</dt> <dd> <p>A deployment that has been
     * completely replaced.</p> </dd> </dl>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the deployment. The following describes each state:</p> <dl>
     * <dt>PRIMARY</dt> <dd> <p>The most recent deployment of a service.</p> </dd>
     * <dt>ACTIVE</dt> <dd> <p>A service deployment that still has running tasks, but
     * are in the process of being replaced with a new <code>PRIMARY</code>
     * deployment.</p> </dd> <dt>INACTIVE</dt> <dd> <p>A deployment that has been
     * completely replaced.</p> </dd> </dl>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the deployment. The following describes each state:</p> <dl>
     * <dt>PRIMARY</dt> <dd> <p>The most recent deployment of a service.</p> </dd>
     * <dt>ACTIVE</dt> <dd> <p>A service deployment that still has running tasks, but
     * are in the process of being replaced with a new <code>PRIMARY</code>
     * deployment.</p> </dd> <dt>INACTIVE</dt> <dd> <p>A deployment that has been
     * completely replaced.</p> </dd> </dl>
     */
    inline Deployment& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the deployment. The following describes each state:</p> <dl>
     * <dt>PRIMARY</dt> <dd> <p>The most recent deployment of a service.</p> </dd>
     * <dt>ACTIVE</dt> <dd> <p>A service deployment that still has running tasks, but
     * are in the process of being replaced with a new <code>PRIMARY</code>
     * deployment.</p> </dd> <dt>INACTIVE</dt> <dd> <p>A deployment that has been
     * completely replaced.</p> </dd> </dl>
     */
    inline Deployment& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the deployment. The following describes each state:</p> <dl>
     * <dt>PRIMARY</dt> <dd> <p>The most recent deployment of a service.</p> </dd>
     * <dt>ACTIVE</dt> <dd> <p>A service deployment that still has running tasks, but
     * are in the process of being replaced with a new <code>PRIMARY</code>
     * deployment.</p> </dd> <dt>INACTIVE</dt> <dd> <p>A deployment that has been
     * completely replaced.</p> </dd> </dl>
     */
    inline Deployment& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The most recent task definition that was specified for the tasks in the
     * service to use.</p>
     */
    inline const Aws::String& GetTaskDefinition() const{ return m_taskDefinition; }

    /**
     * <p>The most recent task definition that was specified for the tasks in the
     * service to use.</p>
     */
    inline bool TaskDefinitionHasBeenSet() const { return m_taskDefinitionHasBeenSet; }

    /**
     * <p>The most recent task definition that was specified for the tasks in the
     * service to use.</p>
     */
    inline void SetTaskDefinition(const Aws::String& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }

    /**
     * <p>The most recent task definition that was specified for the tasks in the
     * service to use.</p>
     */
    inline void SetTaskDefinition(Aws::String&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = std::move(value); }

    /**
     * <p>The most recent task definition that was specified for the tasks in the
     * service to use.</p>
     */
    inline void SetTaskDefinition(const char* value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition.assign(value); }

    /**
     * <p>The most recent task definition that was specified for the tasks in the
     * service to use.</p>
     */
    inline Deployment& WithTaskDefinition(const Aws::String& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The most recent task definition that was specified for the tasks in the
     * service to use.</p>
     */
    inline Deployment& WithTaskDefinition(Aws::String&& value) { SetTaskDefinition(std::move(value)); return *this;}

    /**
     * <p>The most recent task definition that was specified for the tasks in the
     * service to use.</p>
     */
    inline Deployment& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}


    /**
     * <p>The most recent desired count of tasks that was specified for the service to
     * deploy or maintain.</p>
     */
    inline int GetDesiredCount() const{ return m_desiredCount; }

    /**
     * <p>The most recent desired count of tasks that was specified for the service to
     * deploy or maintain.</p>
     */
    inline bool DesiredCountHasBeenSet() const { return m_desiredCountHasBeenSet; }

    /**
     * <p>The most recent desired count of tasks that was specified for the service to
     * deploy or maintain.</p>
     */
    inline void SetDesiredCount(int value) { m_desiredCountHasBeenSet = true; m_desiredCount = value; }

    /**
     * <p>The most recent desired count of tasks that was specified for the service to
     * deploy or maintain.</p>
     */
    inline Deployment& WithDesiredCount(int value) { SetDesiredCount(value); return *this;}


    /**
     * <p>The number of tasks in the deployment that are in the <code>PENDING</code>
     * status.</p>
     */
    inline int GetPendingCount() const{ return m_pendingCount; }

    /**
     * <p>The number of tasks in the deployment that are in the <code>PENDING</code>
     * status.</p>
     */
    inline bool PendingCountHasBeenSet() const { return m_pendingCountHasBeenSet; }

    /**
     * <p>The number of tasks in the deployment that are in the <code>PENDING</code>
     * status.</p>
     */
    inline void SetPendingCount(int value) { m_pendingCountHasBeenSet = true; m_pendingCount = value; }

    /**
     * <p>The number of tasks in the deployment that are in the <code>PENDING</code>
     * status.</p>
     */
    inline Deployment& WithPendingCount(int value) { SetPendingCount(value); return *this;}


    /**
     * <p>The number of tasks in the deployment that are in the <code>RUNNING</code>
     * status.</p>
     */
    inline int GetRunningCount() const{ return m_runningCount; }

    /**
     * <p>The number of tasks in the deployment that are in the <code>RUNNING</code>
     * status.</p>
     */
    inline bool RunningCountHasBeenSet() const { return m_runningCountHasBeenSet; }

    /**
     * <p>The number of tasks in the deployment that are in the <code>RUNNING</code>
     * status.</p>
     */
    inline void SetRunningCount(int value) { m_runningCountHasBeenSet = true; m_runningCount = value; }

    /**
     * <p>The number of tasks in the deployment that are in the <code>RUNNING</code>
     * status.</p>
     */
    inline Deployment& WithRunningCount(int value) { SetRunningCount(value); return *this;}


    /**
     * <p>The number of consecutively failed tasks in the deployment. A task is
     * considered a failure if the service scheduler can't launch the task, the task
     * doesn't transition to a <code>RUNNING</code> state, or if it fails any of its
     * defined health checks and is stopped.</p>  <p>Once a service deployment
     * has one or more successfully running tasks, the failed task count resets to zero
     * and stops being evaluated.</p> 
     */
    inline int GetFailedTasks() const{ return m_failedTasks; }

    /**
     * <p>The number of consecutively failed tasks in the deployment. A task is
     * considered a failure if the service scheduler can't launch the task, the task
     * doesn't transition to a <code>RUNNING</code> state, or if it fails any of its
     * defined health checks and is stopped.</p>  <p>Once a service deployment
     * has one or more successfully running tasks, the failed task count resets to zero
     * and stops being evaluated.</p> 
     */
    inline bool FailedTasksHasBeenSet() const { return m_failedTasksHasBeenSet; }

    /**
     * <p>The number of consecutively failed tasks in the deployment. A task is
     * considered a failure if the service scheduler can't launch the task, the task
     * doesn't transition to a <code>RUNNING</code> state, or if it fails any of its
     * defined health checks and is stopped.</p>  <p>Once a service deployment
     * has one or more successfully running tasks, the failed task count resets to zero
     * and stops being evaluated.</p> 
     */
    inline void SetFailedTasks(int value) { m_failedTasksHasBeenSet = true; m_failedTasks = value; }

    /**
     * <p>The number of consecutively failed tasks in the deployment. A task is
     * considered a failure if the service scheduler can't launch the task, the task
     * doesn't transition to a <code>RUNNING</code> state, or if it fails any of its
     * defined health checks and is stopped.</p>  <p>Once a service deployment
     * has one or more successfully running tasks, the failed task count resets to zero
     * and stops being evaluated.</p> 
     */
    inline Deployment& WithFailedTasks(int value) { SetFailedTasks(value); return *this;}


    /**
     * <p>The Unix timestamp for when the service deployment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix timestamp for when the service deployment was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for when the service deployment was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix timestamp for when the service deployment was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The Unix timestamp for when the service deployment was created.</p>
     */
    inline Deployment& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for when the service deployment was created.</p>
     */
    inline Deployment& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp for when the service deployment was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The Unix timestamp for when the service deployment was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for when the service deployment was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The Unix timestamp for when the service deployment was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The Unix timestamp for when the service deployment was last updated.</p>
     */
    inline Deployment& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for when the service deployment was last updated.</p>
     */
    inline Deployment& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The capacity provider strategy that the deployment is using.</p>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetCapacityProviderStrategy() const{ return m_capacityProviderStrategy; }

    /**
     * <p>The capacity provider strategy that the deployment is using.</p>
     */
    inline bool CapacityProviderStrategyHasBeenSet() const { return m_capacityProviderStrategyHasBeenSet; }

    /**
     * <p>The capacity provider strategy that the deployment is using.</p>
     */
    inline void SetCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = value; }

    /**
     * <p>The capacity provider strategy that the deployment is using.</p>
     */
    inline void SetCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = std::move(value); }

    /**
     * <p>The capacity provider strategy that the deployment is using.</p>
     */
    inline Deployment& WithCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { SetCapacityProviderStrategy(value); return *this;}

    /**
     * <p>The capacity provider strategy that the deployment is using.</p>
     */
    inline Deployment& WithCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { SetCapacityProviderStrategy(std::move(value)); return *this;}

    /**
     * <p>The capacity provider strategy that the deployment is using.</p>
     */
    inline Deployment& AddCapacityProviderStrategy(const CapacityProviderStrategyItem& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(value); return *this; }

    /**
     * <p>The capacity provider strategy that the deployment is using.</p>
     */
    inline Deployment& AddCapacityProviderStrategy(CapacityProviderStrategyItem&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(std::move(value)); return *this; }


    /**
     * <p>The launch type the tasks in the service are using. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS Launch Types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const LaunchType& GetLaunchType() const{ return m_launchType; }

    /**
     * <p>The launch type the tasks in the service are using. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS Launch Types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }

    /**
     * <p>The launch type the tasks in the service are using. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS Launch Types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetLaunchType(const LaunchType& value) { m_launchTypeHasBeenSet = true; m_launchType = value; }

    /**
     * <p>The launch type the tasks in the service are using. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS Launch Types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetLaunchType(LaunchType&& value) { m_launchTypeHasBeenSet = true; m_launchType = std::move(value); }

    /**
     * <p>The launch type the tasks in the service are using. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS Launch Types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline Deployment& WithLaunchType(const LaunchType& value) { SetLaunchType(value); return *this;}

    /**
     * <p>The launch type the tasks in the service are using. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS Launch Types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline Deployment& WithLaunchType(LaunchType&& value) { SetLaunchType(std::move(value)); return *this;}


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
    inline Deployment& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}

    /**
     * <p>The platform version on which your tasks in the service are running. A
     * platform version is only specified for tasks using the Fargate launch type. If
     * one is not specified, the <code>LATEST</code> platform version is used by
     * default. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">AWS
     * Fargate Platform Versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline Deployment& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}

    /**
     * <p>The platform version on which your tasks in the service are running. A
     * platform version is only specified for tasks using the Fargate launch type. If
     * one is not specified, the <code>LATEST</code> platform version is used by
     * default. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">AWS
     * Fargate Platform Versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline Deployment& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}


    /**
     * <p>The VPC subnet and security group configuration for tasks that receive their
     * own elastic network interface by using the <code>awsvpc</code> networking
     * mode.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }

    /**
     * <p>The VPC subnet and security group configuration for tasks that receive their
     * own elastic network interface by using the <code>awsvpc</code> networking
     * mode.</p>
     */
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }

    /**
     * <p>The VPC subnet and security group configuration for tasks that receive their
     * own elastic network interface by using the <code>awsvpc</code> networking
     * mode.</p>
     */
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }

    /**
     * <p>The VPC subnet and security group configuration for tasks that receive their
     * own elastic network interface by using the <code>awsvpc</code> networking
     * mode.</p>
     */
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }

    /**
     * <p>The VPC subnet and security group configuration for tasks that receive their
     * own elastic network interface by using the <code>awsvpc</code> networking
     * mode.</p>
     */
    inline Deployment& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}

    /**
     * <p>The VPC subnet and security group configuration for tasks that receive their
     * own elastic network interface by using the <code>awsvpc</code> networking
     * mode.</p>
     */
    inline Deployment& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}


    /**
     *  <p>The <code>rolloutState</code> of a service is only returned for
     * services that use the rolling update (<code>ECS</code>) deployment type that are
     * not behind a Classic Load Balancer.</p>  <p>The rollout state of the
     * deployment. When a service deployment is started, it begins in an
     * <code>IN_PROGRESS</code> state. When the service reaches a steady state, the
     * deployment will transition to a <code>COMPLETED</code> state. If the service
     * fails to reach a steady state and circuit breaker is enabled, the deployment
     * will transition to a <code>FAILED</code> state. A deployment in
     * <code>FAILED</code> state will launch no new tasks. For more information, see
     * <a>DeploymentCircuitBreaker</a>.</p>
     */
    inline const DeploymentRolloutState& GetRolloutState() const{ return m_rolloutState; }

    /**
     *  <p>The <code>rolloutState</code> of a service is only returned for
     * services that use the rolling update (<code>ECS</code>) deployment type that are
     * not behind a Classic Load Balancer.</p>  <p>The rollout state of the
     * deployment. When a service deployment is started, it begins in an
     * <code>IN_PROGRESS</code> state. When the service reaches a steady state, the
     * deployment will transition to a <code>COMPLETED</code> state. If the service
     * fails to reach a steady state and circuit breaker is enabled, the deployment
     * will transition to a <code>FAILED</code> state. A deployment in
     * <code>FAILED</code> state will launch no new tasks. For more information, see
     * <a>DeploymentCircuitBreaker</a>.</p>
     */
    inline bool RolloutStateHasBeenSet() const { return m_rolloutStateHasBeenSet; }

    /**
     *  <p>The <code>rolloutState</code> of a service is only returned for
     * services that use the rolling update (<code>ECS</code>) deployment type that are
     * not behind a Classic Load Balancer.</p>  <p>The rollout state of the
     * deployment. When a service deployment is started, it begins in an
     * <code>IN_PROGRESS</code> state. When the service reaches a steady state, the
     * deployment will transition to a <code>COMPLETED</code> state. If the service
     * fails to reach a steady state and circuit breaker is enabled, the deployment
     * will transition to a <code>FAILED</code> state. A deployment in
     * <code>FAILED</code> state will launch no new tasks. For more information, see
     * <a>DeploymentCircuitBreaker</a>.</p>
     */
    inline void SetRolloutState(const DeploymentRolloutState& value) { m_rolloutStateHasBeenSet = true; m_rolloutState = value; }

    /**
     *  <p>The <code>rolloutState</code> of a service is only returned for
     * services that use the rolling update (<code>ECS</code>) deployment type that are
     * not behind a Classic Load Balancer.</p>  <p>The rollout state of the
     * deployment. When a service deployment is started, it begins in an
     * <code>IN_PROGRESS</code> state. When the service reaches a steady state, the
     * deployment will transition to a <code>COMPLETED</code> state. If the service
     * fails to reach a steady state and circuit breaker is enabled, the deployment
     * will transition to a <code>FAILED</code> state. A deployment in
     * <code>FAILED</code> state will launch no new tasks. For more information, see
     * <a>DeploymentCircuitBreaker</a>.</p>
     */
    inline void SetRolloutState(DeploymentRolloutState&& value) { m_rolloutStateHasBeenSet = true; m_rolloutState = std::move(value); }

    /**
     *  <p>The <code>rolloutState</code> of a service is only returned for
     * services that use the rolling update (<code>ECS</code>) deployment type that are
     * not behind a Classic Load Balancer.</p>  <p>The rollout state of the
     * deployment. When a service deployment is started, it begins in an
     * <code>IN_PROGRESS</code> state. When the service reaches a steady state, the
     * deployment will transition to a <code>COMPLETED</code> state. If the service
     * fails to reach a steady state and circuit breaker is enabled, the deployment
     * will transition to a <code>FAILED</code> state. A deployment in
     * <code>FAILED</code> state will launch no new tasks. For more information, see
     * <a>DeploymentCircuitBreaker</a>.</p>
     */
    inline Deployment& WithRolloutState(const DeploymentRolloutState& value) { SetRolloutState(value); return *this;}

    /**
     *  <p>The <code>rolloutState</code> of a service is only returned for
     * services that use the rolling update (<code>ECS</code>) deployment type that are
     * not behind a Classic Load Balancer.</p>  <p>The rollout state of the
     * deployment. When a service deployment is started, it begins in an
     * <code>IN_PROGRESS</code> state. When the service reaches a steady state, the
     * deployment will transition to a <code>COMPLETED</code> state. If the service
     * fails to reach a steady state and circuit breaker is enabled, the deployment
     * will transition to a <code>FAILED</code> state. A deployment in
     * <code>FAILED</code> state will launch no new tasks. For more information, see
     * <a>DeploymentCircuitBreaker</a>.</p>
     */
    inline Deployment& WithRolloutState(DeploymentRolloutState&& value) { SetRolloutState(std::move(value)); return *this;}


    /**
     * <p>A description of the rollout state of a deployment.</p>
     */
    inline const Aws::String& GetRolloutStateReason() const{ return m_rolloutStateReason; }

    /**
     * <p>A description of the rollout state of a deployment.</p>
     */
    inline bool RolloutStateReasonHasBeenSet() const { return m_rolloutStateReasonHasBeenSet; }

    /**
     * <p>A description of the rollout state of a deployment.</p>
     */
    inline void SetRolloutStateReason(const Aws::String& value) { m_rolloutStateReasonHasBeenSet = true; m_rolloutStateReason = value; }

    /**
     * <p>A description of the rollout state of a deployment.</p>
     */
    inline void SetRolloutStateReason(Aws::String&& value) { m_rolloutStateReasonHasBeenSet = true; m_rolloutStateReason = std::move(value); }

    /**
     * <p>A description of the rollout state of a deployment.</p>
     */
    inline void SetRolloutStateReason(const char* value) { m_rolloutStateReasonHasBeenSet = true; m_rolloutStateReason.assign(value); }

    /**
     * <p>A description of the rollout state of a deployment.</p>
     */
    inline Deployment& WithRolloutStateReason(const Aws::String& value) { SetRolloutStateReason(value); return *this;}

    /**
     * <p>A description of the rollout state of a deployment.</p>
     */
    inline Deployment& WithRolloutStateReason(Aws::String&& value) { SetRolloutStateReason(std::move(value)); return *this;}

    /**
     * <p>A description of the rollout state of a deployment.</p>
     */
    inline Deployment& WithRolloutStateReason(const char* value) { SetRolloutStateReason(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet;

    int m_desiredCount;
    bool m_desiredCountHasBeenSet;

    int m_pendingCount;
    bool m_pendingCountHasBeenSet;

    int m_runningCount;
    bool m_runningCountHasBeenSet;

    int m_failedTasks;
    bool m_failedTasksHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet;

    Aws::Vector<CapacityProviderStrategyItem> m_capacityProviderStrategy;
    bool m_capacityProviderStrategyHasBeenSet;

    LaunchType m_launchType;
    bool m_launchTypeHasBeenSet;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet;

    DeploymentRolloutState m_rolloutState;
    bool m_rolloutStateHasBeenSet;

    Aws::String m_rolloutStateReason;
    bool m_rolloutStateReasonHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
