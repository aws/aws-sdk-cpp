/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/LaunchType.h>
#include <aws/ecs/model/NetworkConfiguration.h>
#include <aws/ecs/model/TaskOverride.h>
#include <aws/ecs/model/PropagateTags.h>
#include <aws/ecs/model/CapacityProviderStrategyItem.h>
#include <aws/ecs/model/PlacementConstraint.h>
#include <aws/ecs/model/PlacementStrategy.h>
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
  class RunTaskRequest : public ECSRequest
  {
  public:
    AWS_ECS_API RunTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RunTask"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The capacity provider strategy to use for the task.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * <code>launchType</code> is specified, the
     * <code>defaultCapacityProviderStrategy</code> for the cluster is used.</p>
     * <p>When you use cluster auto scaling, you must specify
     * <code>capacityProviderStrategy</code> and not <code>launchType</code>. </p> <p>A
     * capacity provider strategy may contain a maximum of 6 capacity providers.</p>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetCapacityProviderStrategy() const{ return m_capacityProviderStrategy; }

    /**
     * <p>The capacity provider strategy to use for the task.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * <code>launchType</code> is specified, the
     * <code>defaultCapacityProviderStrategy</code> for the cluster is used.</p>
     * <p>When you use cluster auto scaling, you must specify
     * <code>capacityProviderStrategy</code> and not <code>launchType</code>. </p> <p>A
     * capacity provider strategy may contain a maximum of 6 capacity providers.</p>
     */
    inline bool CapacityProviderStrategyHasBeenSet() const { return m_capacityProviderStrategyHasBeenSet; }

    /**
     * <p>The capacity provider strategy to use for the task.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * <code>launchType</code> is specified, the
     * <code>defaultCapacityProviderStrategy</code> for the cluster is used.</p>
     * <p>When you use cluster auto scaling, you must specify
     * <code>capacityProviderStrategy</code> and not <code>launchType</code>. </p> <p>A
     * capacity provider strategy may contain a maximum of 6 capacity providers.</p>
     */
    inline void SetCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = value; }

    /**
     * <p>The capacity provider strategy to use for the task.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * <code>launchType</code> is specified, the
     * <code>defaultCapacityProviderStrategy</code> for the cluster is used.</p>
     * <p>When you use cluster auto scaling, you must specify
     * <code>capacityProviderStrategy</code> and not <code>launchType</code>. </p> <p>A
     * capacity provider strategy may contain a maximum of 6 capacity providers.</p>
     */
    inline void SetCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = std::move(value); }

    /**
     * <p>The capacity provider strategy to use for the task.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * <code>launchType</code> is specified, the
     * <code>defaultCapacityProviderStrategy</code> for the cluster is used.</p>
     * <p>When you use cluster auto scaling, you must specify
     * <code>capacityProviderStrategy</code> and not <code>launchType</code>. </p> <p>A
     * capacity provider strategy may contain a maximum of 6 capacity providers.</p>
     */
    inline RunTaskRequest& WithCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { SetCapacityProviderStrategy(value); return *this;}

    /**
     * <p>The capacity provider strategy to use for the task.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * <code>launchType</code> is specified, the
     * <code>defaultCapacityProviderStrategy</code> for the cluster is used.</p>
     * <p>When you use cluster auto scaling, you must specify
     * <code>capacityProviderStrategy</code> and not <code>launchType</code>. </p> <p>A
     * capacity provider strategy may contain a maximum of 6 capacity providers.</p>
     */
    inline RunTaskRequest& WithCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { SetCapacityProviderStrategy(std::move(value)); return *this;}

    /**
     * <p>The capacity provider strategy to use for the task.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * <code>launchType</code> is specified, the
     * <code>defaultCapacityProviderStrategy</code> for the cluster is used.</p>
     * <p>When you use cluster auto scaling, you must specify
     * <code>capacityProviderStrategy</code> and not <code>launchType</code>. </p> <p>A
     * capacity provider strategy may contain a maximum of 6 capacity providers.</p>
     */
    inline RunTaskRequest& AddCapacityProviderStrategy(const CapacityProviderStrategyItem& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(value); return *this; }

    /**
     * <p>The capacity provider strategy to use for the task.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * <code>launchType</code> is specified, the
     * <code>defaultCapacityProviderStrategy</code> for the cluster is used.</p>
     * <p>When you use cluster auto scaling, you must specify
     * <code>capacityProviderStrategy</code> and not <code>launchType</code>. </p> <p>A
     * capacity provider strategy may contain a maximum of 6 capacity providers.</p>
     */
    inline RunTaskRequest& AddCapacityProviderStrategy(CapacityProviderStrategyItem&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(std::move(value)); return *this; }


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to run your
     * task on. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to run your
     * task on. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to run your
     * task on. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to run your
     * task on. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to run your
     * task on. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to run your
     * task on. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline RunTaskRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to run your
     * task on. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline RunTaskRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to run your
     * task on. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline RunTaskRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>The number of instantiations of the specified task to place on your cluster.
     * You can specify up to 10 tasks for each call.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of instantiations of the specified task to place on your cluster.
     * You can specify up to 10 tasks for each call.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of instantiations of the specified task to place on your cluster.
     * You can specify up to 10 tasks for each call.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of instantiations of the specified task to place on your cluster.
     * You can specify up to 10 tasks for each call.</p>
     */
    inline RunTaskRequest& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>Specifies whether to use Amazon ECS managed tags for the task. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-using-tags.html">Tagging
     * Your Amazon ECS Resources</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline bool GetEnableECSManagedTags() const{ return m_enableECSManagedTags; }

    /**
     * <p>Specifies whether to use Amazon ECS managed tags for the task. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-using-tags.html">Tagging
     * Your Amazon ECS Resources</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline bool EnableECSManagedTagsHasBeenSet() const { return m_enableECSManagedTagsHasBeenSet; }

    /**
     * <p>Specifies whether to use Amazon ECS managed tags for the task. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-using-tags.html">Tagging
     * Your Amazon ECS Resources</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetEnableECSManagedTags(bool value) { m_enableECSManagedTagsHasBeenSet = true; m_enableECSManagedTags = value; }

    /**
     * <p>Specifies whether to use Amazon ECS managed tags for the task. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-using-tags.html">Tagging
     * Your Amazon ECS Resources</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline RunTaskRequest& WithEnableECSManagedTags(bool value) { SetEnableECSManagedTags(value); return *this;}


    /**
     * <p>Determines whether to use the execute command functionality for the
     * containers in this task. If <code>true</code>, this enables execute command
     * functionality on all containers in the task.</p> <p>If <code>true</code>, then
     * the task definition must have a task role, or you must provide one as an
     * override.</p>
     */
    inline bool GetEnableExecuteCommand() const{ return m_enableExecuteCommand; }

    /**
     * <p>Determines whether to use the execute command functionality for the
     * containers in this task. If <code>true</code>, this enables execute command
     * functionality on all containers in the task.</p> <p>If <code>true</code>, then
     * the task definition must have a task role, or you must provide one as an
     * override.</p>
     */
    inline bool EnableExecuteCommandHasBeenSet() const { return m_enableExecuteCommandHasBeenSet; }

    /**
     * <p>Determines whether to use the execute command functionality for the
     * containers in this task. If <code>true</code>, this enables execute command
     * functionality on all containers in the task.</p> <p>If <code>true</code>, then
     * the task definition must have a task role, or you must provide one as an
     * override.</p>
     */
    inline void SetEnableExecuteCommand(bool value) { m_enableExecuteCommandHasBeenSet = true; m_enableExecuteCommand = value; }

    /**
     * <p>Determines whether to use the execute command functionality for the
     * containers in this task. If <code>true</code>, this enables execute command
     * functionality on all containers in the task.</p> <p>If <code>true</code>, then
     * the task definition must have a task role, or you must provide one as an
     * override.</p>
     */
    inline RunTaskRequest& WithEnableExecuteCommand(bool value) { SetEnableExecuteCommand(value); return *this;}


    /**
     * <p>The name of the task group to associate with the task. The default value is
     * the family name of the task definition (for example,
     * <code>family:my-family-name</code>).</p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }

    /**
     * <p>The name of the task group to associate with the task. The default value is
     * the family name of the task definition (for example,
     * <code>family:my-family-name</code>).</p>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>The name of the task group to associate with the task. The default value is
     * the family name of the task definition (for example,
     * <code>family:my-family-name</code>).</p>
     */
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The name of the task group to associate with the task. The default value is
     * the family name of the task definition (for example,
     * <code>family:my-family-name</code>).</p>
     */
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The name of the task group to associate with the task. The default value is
     * the family name of the task definition (for example,
     * <code>family:my-family-name</code>).</p>
     */
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }

    /**
     * <p>The name of the task group to associate with the task. The default value is
     * the family name of the task definition (for example,
     * <code>family:my-family-name</code>).</p>
     */
    inline RunTaskRequest& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}

    /**
     * <p>The name of the task group to associate with the task. The default value is
     * the family name of the task definition (for example,
     * <code>family:my-family-name</code>).</p>
     */
    inline RunTaskRequest& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the task group to associate with the task. The default value is
     * the family name of the task definition (for example,
     * <code>family:my-family-name</code>).</p>
     */
    inline RunTaskRequest& WithGroup(const char* value) { SetGroup(value); return *this;}


    /**
     * <p>The infrastructure to run your standalone task on. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>The <code>FARGATE</code> launch type runs your tasks on
     * Fargate On-Demand infrastructure.</p>  <p>Fargate Spot infrastructure is
     * available for use but a capacity provider strategy must be used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/userguide/fargate-capacity-providers.html">Fargate
     * capacity providers</a> in the <i>Amazon ECS User Guide for Fargate</i>.</p>
     *  <p>The <code>EC2</code> launch type runs your tasks on Amazon EC2
     * instances registered to your cluster.</p> <p>The <code>EXTERNAL</code> launch
     * type runs your tasks on your on-premises server or virtual machine (VM) capacity
     * registered to your cluster.</p> <p>A task can use either a launch type or a
     * capacity provider strategy. If a <code>launchType</code> is specified, the
     * <code>capacityProviderStrategy</code> parameter must be omitted.</p> <p>When you
     * use cluster auto scaling, you must specify <code>capacityProviderStrategy</code>
     * and not <code>launchType</code>. </p>
     */
    inline const LaunchType& GetLaunchType() const{ return m_launchType; }

    /**
     * <p>The infrastructure to run your standalone task on. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>The <code>FARGATE</code> launch type runs your tasks on
     * Fargate On-Demand infrastructure.</p>  <p>Fargate Spot infrastructure is
     * available for use but a capacity provider strategy must be used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/userguide/fargate-capacity-providers.html">Fargate
     * capacity providers</a> in the <i>Amazon ECS User Guide for Fargate</i>.</p>
     *  <p>The <code>EC2</code> launch type runs your tasks on Amazon EC2
     * instances registered to your cluster.</p> <p>The <code>EXTERNAL</code> launch
     * type runs your tasks on your on-premises server or virtual machine (VM) capacity
     * registered to your cluster.</p> <p>A task can use either a launch type or a
     * capacity provider strategy. If a <code>launchType</code> is specified, the
     * <code>capacityProviderStrategy</code> parameter must be omitted.</p> <p>When you
     * use cluster auto scaling, you must specify <code>capacityProviderStrategy</code>
     * and not <code>launchType</code>. </p>
     */
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }

    /**
     * <p>The infrastructure to run your standalone task on. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>The <code>FARGATE</code> launch type runs your tasks on
     * Fargate On-Demand infrastructure.</p>  <p>Fargate Spot infrastructure is
     * available for use but a capacity provider strategy must be used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/userguide/fargate-capacity-providers.html">Fargate
     * capacity providers</a> in the <i>Amazon ECS User Guide for Fargate</i>.</p>
     *  <p>The <code>EC2</code> launch type runs your tasks on Amazon EC2
     * instances registered to your cluster.</p> <p>The <code>EXTERNAL</code> launch
     * type runs your tasks on your on-premises server or virtual machine (VM) capacity
     * registered to your cluster.</p> <p>A task can use either a launch type or a
     * capacity provider strategy. If a <code>launchType</code> is specified, the
     * <code>capacityProviderStrategy</code> parameter must be omitted.</p> <p>When you
     * use cluster auto scaling, you must specify <code>capacityProviderStrategy</code>
     * and not <code>launchType</code>. </p>
     */
    inline void SetLaunchType(const LaunchType& value) { m_launchTypeHasBeenSet = true; m_launchType = value; }

    /**
     * <p>The infrastructure to run your standalone task on. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>The <code>FARGATE</code> launch type runs your tasks on
     * Fargate On-Demand infrastructure.</p>  <p>Fargate Spot infrastructure is
     * available for use but a capacity provider strategy must be used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/userguide/fargate-capacity-providers.html">Fargate
     * capacity providers</a> in the <i>Amazon ECS User Guide for Fargate</i>.</p>
     *  <p>The <code>EC2</code> launch type runs your tasks on Amazon EC2
     * instances registered to your cluster.</p> <p>The <code>EXTERNAL</code> launch
     * type runs your tasks on your on-premises server or virtual machine (VM) capacity
     * registered to your cluster.</p> <p>A task can use either a launch type or a
     * capacity provider strategy. If a <code>launchType</code> is specified, the
     * <code>capacityProviderStrategy</code> parameter must be omitted.</p> <p>When you
     * use cluster auto scaling, you must specify <code>capacityProviderStrategy</code>
     * and not <code>launchType</code>. </p>
     */
    inline void SetLaunchType(LaunchType&& value) { m_launchTypeHasBeenSet = true; m_launchType = std::move(value); }

    /**
     * <p>The infrastructure to run your standalone task on. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>The <code>FARGATE</code> launch type runs your tasks on
     * Fargate On-Demand infrastructure.</p>  <p>Fargate Spot infrastructure is
     * available for use but a capacity provider strategy must be used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/userguide/fargate-capacity-providers.html">Fargate
     * capacity providers</a> in the <i>Amazon ECS User Guide for Fargate</i>.</p>
     *  <p>The <code>EC2</code> launch type runs your tasks on Amazon EC2
     * instances registered to your cluster.</p> <p>The <code>EXTERNAL</code> launch
     * type runs your tasks on your on-premises server or virtual machine (VM) capacity
     * registered to your cluster.</p> <p>A task can use either a launch type or a
     * capacity provider strategy. If a <code>launchType</code> is specified, the
     * <code>capacityProviderStrategy</code> parameter must be omitted.</p> <p>When you
     * use cluster auto scaling, you must specify <code>capacityProviderStrategy</code>
     * and not <code>launchType</code>. </p>
     */
    inline RunTaskRequest& WithLaunchType(const LaunchType& value) { SetLaunchType(value); return *this;}

    /**
     * <p>The infrastructure to run your standalone task on. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>The <code>FARGATE</code> launch type runs your tasks on
     * Fargate On-Demand infrastructure.</p>  <p>Fargate Spot infrastructure is
     * available for use but a capacity provider strategy must be used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/userguide/fargate-capacity-providers.html">Fargate
     * capacity providers</a> in the <i>Amazon ECS User Guide for Fargate</i>.</p>
     *  <p>The <code>EC2</code> launch type runs your tasks on Amazon EC2
     * instances registered to your cluster.</p> <p>The <code>EXTERNAL</code> launch
     * type runs your tasks on your on-premises server or virtual machine (VM) capacity
     * registered to your cluster.</p> <p>A task can use either a launch type or a
     * capacity provider strategy. If a <code>launchType</code> is specified, the
     * <code>capacityProviderStrategy</code> parameter must be omitted.</p> <p>When you
     * use cluster auto scaling, you must specify <code>capacityProviderStrategy</code>
     * and not <code>launchType</code>. </p>
     */
    inline RunTaskRequest& WithLaunchType(LaunchType&& value) { SetLaunchType(std::move(value)); return *this;}


    /**
     * <p>The network configuration for the task. This parameter is required for task
     * definitions that use the <code>awsvpc</code> network mode to receive their own
     * elastic network interface, and it isn't supported for other network modes. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }

    /**
     * <p>The network configuration for the task. This parameter is required for task
     * definitions that use the <code>awsvpc</code> network mode to receive their own
     * elastic network interface, and it isn't supported for other network modes. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }

    /**
     * <p>The network configuration for the task. This parameter is required for task
     * definitions that use the <code>awsvpc</code> network mode to receive their own
     * elastic network interface, and it isn't supported for other network modes. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }

    /**
     * <p>The network configuration for the task. This parameter is required for task
     * definitions that use the <code>awsvpc</code> network mode to receive their own
     * elastic network interface, and it isn't supported for other network modes. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }

    /**
     * <p>The network configuration for the task. This parameter is required for task
     * definitions that use the <code>awsvpc</code> network mode to receive their own
     * elastic network interface, and it isn't supported for other network modes. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline RunTaskRequest& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}

    /**
     * <p>The network configuration for the task. This parameter is required for task
     * definitions that use the <code>awsvpc</code> network mode to receive their own
     * elastic network interface, and it isn't supported for other network modes. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline RunTaskRequest& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of container overrides in JSON format that specify the name of a
     * container in the specified task definition and the overrides it should receive.
     * You can override the default command for a container (that's specified in the
     * task definition or Docker image) with a <code>command</code> override. You can
     * also override existing environment variables (that are specified in the task
     * definition or Docker image) on a container or add new environment variables to
     * it with an <code>environment</code> override.</p> <p>A total of 8192 characters
     * are allowed for overrides. This limit includes the JSON formatting characters of
     * the override structure.</p>
     */
    inline const TaskOverride& GetOverrides() const{ return m_overrides; }

    /**
     * <p>A list of container overrides in JSON format that specify the name of a
     * container in the specified task definition and the overrides it should receive.
     * You can override the default command for a container (that's specified in the
     * task definition or Docker image) with a <code>command</code> override. You can
     * also override existing environment variables (that are specified in the task
     * definition or Docker image) on a container or add new environment variables to
     * it with an <code>environment</code> override.</p> <p>A total of 8192 characters
     * are allowed for overrides. This limit includes the JSON formatting characters of
     * the override structure.</p>
     */
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }

    /**
     * <p>A list of container overrides in JSON format that specify the name of a
     * container in the specified task definition and the overrides it should receive.
     * You can override the default command for a container (that's specified in the
     * task definition or Docker image) with a <code>command</code> override. You can
     * also override existing environment variables (that are specified in the task
     * definition or Docker image) on a container or add new environment variables to
     * it with an <code>environment</code> override.</p> <p>A total of 8192 characters
     * are allowed for overrides. This limit includes the JSON formatting characters of
     * the override structure.</p>
     */
    inline void SetOverrides(const TaskOverride& value) { m_overridesHasBeenSet = true; m_overrides = value; }

    /**
     * <p>A list of container overrides in JSON format that specify the name of a
     * container in the specified task definition and the overrides it should receive.
     * You can override the default command for a container (that's specified in the
     * task definition or Docker image) with a <code>command</code> override. You can
     * also override existing environment variables (that are specified in the task
     * definition or Docker image) on a container or add new environment variables to
     * it with an <code>environment</code> override.</p> <p>A total of 8192 characters
     * are allowed for overrides. This limit includes the JSON formatting characters of
     * the override structure.</p>
     */
    inline void SetOverrides(TaskOverride&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }

    /**
     * <p>A list of container overrides in JSON format that specify the name of a
     * container in the specified task definition and the overrides it should receive.
     * You can override the default command for a container (that's specified in the
     * task definition or Docker image) with a <code>command</code> override. You can
     * also override existing environment variables (that are specified in the task
     * definition or Docker image) on a container or add new environment variables to
     * it with an <code>environment</code> override.</p> <p>A total of 8192 characters
     * are allowed for overrides. This limit includes the JSON formatting characters of
     * the override structure.</p>
     */
    inline RunTaskRequest& WithOverrides(const TaskOverride& value) { SetOverrides(value); return *this;}

    /**
     * <p>A list of container overrides in JSON format that specify the name of a
     * container in the specified task definition and the overrides it should receive.
     * You can override the default command for a container (that's specified in the
     * task definition or Docker image) with a <code>command</code> override. You can
     * also override existing environment variables (that are specified in the task
     * definition or Docker image) on a container or add new environment variables to
     * it with an <code>environment</code> override.</p> <p>A total of 8192 characters
     * are allowed for overrides. This limit includes the JSON formatting characters of
     * the override structure.</p>
     */
    inline RunTaskRequest& WithOverrides(TaskOverride&& value) { SetOverrides(std::move(value)); return *this;}


    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * up to 10 constraints for each task (including constraints in the task definition
     * and those specified at runtime).</p>
     */
    inline const Aws::Vector<PlacementConstraint>& GetPlacementConstraints() const{ return m_placementConstraints; }

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * up to 10 constraints for each task (including constraints in the task definition
     * and those specified at runtime).</p>
     */
    inline bool PlacementConstraintsHasBeenSet() const { return m_placementConstraintsHasBeenSet; }

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * up to 10 constraints for each task (including constraints in the task definition
     * and those specified at runtime).</p>
     */
    inline void SetPlacementConstraints(const Aws::Vector<PlacementConstraint>& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = value; }

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * up to 10 constraints for each task (including constraints in the task definition
     * and those specified at runtime).</p>
     */
    inline void SetPlacementConstraints(Aws::Vector<PlacementConstraint>&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = std::move(value); }

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * up to 10 constraints for each task (including constraints in the task definition
     * and those specified at runtime).</p>
     */
    inline RunTaskRequest& WithPlacementConstraints(const Aws::Vector<PlacementConstraint>& value) { SetPlacementConstraints(value); return *this;}

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * up to 10 constraints for each task (including constraints in the task definition
     * and those specified at runtime).</p>
     */
    inline RunTaskRequest& WithPlacementConstraints(Aws::Vector<PlacementConstraint>&& value) { SetPlacementConstraints(std::move(value)); return *this;}

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * up to 10 constraints for each task (including constraints in the task definition
     * and those specified at runtime).</p>
     */
    inline RunTaskRequest& AddPlacementConstraints(const PlacementConstraint& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(value); return *this; }

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * up to 10 constraints for each task (including constraints in the task definition
     * and those specified at runtime).</p>
     */
    inline RunTaskRequest& AddPlacementConstraints(PlacementConstraint&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(std::move(value)); return *this; }


    /**
     * <p>The placement strategy objects to use for the task. You can specify a maximum
     * of 5 strategy rules for each task.</p>
     */
    inline const Aws::Vector<PlacementStrategy>& GetPlacementStrategy() const{ return m_placementStrategy; }

    /**
     * <p>The placement strategy objects to use for the task. You can specify a maximum
     * of 5 strategy rules for each task.</p>
     */
    inline bool PlacementStrategyHasBeenSet() const { return m_placementStrategyHasBeenSet; }

    /**
     * <p>The placement strategy objects to use for the task. You can specify a maximum
     * of 5 strategy rules for each task.</p>
     */
    inline void SetPlacementStrategy(const Aws::Vector<PlacementStrategy>& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy = value; }

    /**
     * <p>The placement strategy objects to use for the task. You can specify a maximum
     * of 5 strategy rules for each task.</p>
     */
    inline void SetPlacementStrategy(Aws::Vector<PlacementStrategy>&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy = std::move(value); }

    /**
     * <p>The placement strategy objects to use for the task. You can specify a maximum
     * of 5 strategy rules for each task.</p>
     */
    inline RunTaskRequest& WithPlacementStrategy(const Aws::Vector<PlacementStrategy>& value) { SetPlacementStrategy(value); return *this;}

    /**
     * <p>The placement strategy objects to use for the task. You can specify a maximum
     * of 5 strategy rules for each task.</p>
     */
    inline RunTaskRequest& WithPlacementStrategy(Aws::Vector<PlacementStrategy>&& value) { SetPlacementStrategy(std::move(value)); return *this;}

    /**
     * <p>The placement strategy objects to use for the task. You can specify a maximum
     * of 5 strategy rules for each task.</p>
     */
    inline RunTaskRequest& AddPlacementStrategy(const PlacementStrategy& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy.push_back(value); return *this; }

    /**
     * <p>The placement strategy objects to use for the task. You can specify a maximum
     * of 5 strategy rules for each task.</p>
     */
    inline RunTaskRequest& AddPlacementStrategy(PlacementStrategy&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy.push_back(std::move(value)); return *this; }


    /**
     * <p>The platform version the task uses. A platform version is only specified for
     * tasks hosted on Fargate. If one isn't specified, the <code>LATEST</code>
     * platform version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }

    /**
     * <p>The platform version the task uses. A platform version is only specified for
     * tasks hosted on Fargate. If one isn't specified, the <code>LATEST</code>
     * platform version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }

    /**
     * <p>The platform version the task uses. A platform version is only specified for
     * tasks hosted on Fargate. If one isn't specified, the <code>LATEST</code>
     * platform version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

    /**
     * <p>The platform version the task uses. A platform version is only specified for
     * tasks hosted on Fargate. If one isn't specified, the <code>LATEST</code>
     * platform version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }

    /**
     * <p>The platform version the task uses. A platform version is only specified for
     * tasks hosted on Fargate. If one isn't specified, the <code>LATEST</code>
     * platform version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }

    /**
     * <p>The platform version the task uses. A platform version is only specified for
     * tasks hosted on Fargate. If one isn't specified, the <code>LATEST</code>
     * platform version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline RunTaskRequest& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}

    /**
     * <p>The platform version the task uses. A platform version is only specified for
     * tasks hosted on Fargate. If one isn't specified, the <code>LATEST</code>
     * platform version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline RunTaskRequest& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}

    /**
     * <p>The platform version the task uses. A platform version is only specified for
     * tasks hosted on Fargate. If one isn't specified, the <code>LATEST</code>
     * platform version is used. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline RunTaskRequest& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}


    /**
     * <p>Specifies whether to propagate the tags from the task definition to the task.
     * If no value is specified, the tags aren't propagated. Tags can only be
     * propagated to the task during task creation. To add tags to a task after task
     * creation, use the <a>TagResource</a> API action.</p>  <p>An error will be
     * received if you specify the <code>SERVICE</code> option when running a task.</p>
     * 
     */
    inline const PropagateTags& GetPropagateTags() const{ return m_propagateTags; }

    /**
     * <p>Specifies whether to propagate the tags from the task definition to the task.
     * If no value is specified, the tags aren't propagated. Tags can only be
     * propagated to the task during task creation. To add tags to a task after task
     * creation, use the <a>TagResource</a> API action.</p>  <p>An error will be
     * received if you specify the <code>SERVICE</code> option when running a task.</p>
     * 
     */
    inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }

    /**
     * <p>Specifies whether to propagate the tags from the task definition to the task.
     * If no value is specified, the tags aren't propagated. Tags can only be
     * propagated to the task during task creation. To add tags to a task after task
     * creation, use the <a>TagResource</a> API action.</p>  <p>An error will be
     * received if you specify the <code>SERVICE</code> option when running a task.</p>
     * 
     */
    inline void SetPropagateTags(const PropagateTags& value) { m_propagateTagsHasBeenSet = true; m_propagateTags = value; }

    /**
     * <p>Specifies whether to propagate the tags from the task definition to the task.
     * If no value is specified, the tags aren't propagated. Tags can only be
     * propagated to the task during task creation. To add tags to a task after task
     * creation, use the <a>TagResource</a> API action.</p>  <p>An error will be
     * received if you specify the <code>SERVICE</code> option when running a task.</p>
     * 
     */
    inline void SetPropagateTags(PropagateTags&& value) { m_propagateTagsHasBeenSet = true; m_propagateTags = std::move(value); }

    /**
     * <p>Specifies whether to propagate the tags from the task definition to the task.
     * If no value is specified, the tags aren't propagated. Tags can only be
     * propagated to the task during task creation. To add tags to a task after task
     * creation, use the <a>TagResource</a> API action.</p>  <p>An error will be
     * received if you specify the <code>SERVICE</code> option when running a task.</p>
     * 
     */
    inline RunTaskRequest& WithPropagateTags(const PropagateTags& value) { SetPropagateTags(value); return *this;}

    /**
     * <p>Specifies whether to propagate the tags from the task definition to the task.
     * If no value is specified, the tags aren't propagated. Tags can only be
     * propagated to the task during task creation. To add tags to a task after task
     * creation, use the <a>TagResource</a> API action.</p>  <p>An error will be
     * received if you specify the <code>SERVICE</code> option when running a task.</p>
     * 
     */
    inline RunTaskRequest& WithPropagateTags(PropagateTags&& value) { SetPropagateTags(std::move(value)); return *this;}


    /**
     * <p>The reference ID to use for the task. The reference ID can have a maximum
     * length of 1024 characters.</p>
     */
    inline const Aws::String& GetReferenceId() const{ return m_referenceId; }

    /**
     * <p>The reference ID to use for the task. The reference ID can have a maximum
     * length of 1024 characters.</p>
     */
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }

    /**
     * <p>The reference ID to use for the task. The reference ID can have a maximum
     * length of 1024 characters.</p>
     */
    inline void SetReferenceId(const Aws::String& value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }

    /**
     * <p>The reference ID to use for the task. The reference ID can have a maximum
     * length of 1024 characters.</p>
     */
    inline void SetReferenceId(Aws::String&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::move(value); }

    /**
     * <p>The reference ID to use for the task. The reference ID can have a maximum
     * length of 1024 characters.</p>
     */
    inline void SetReferenceId(const char* value) { m_referenceIdHasBeenSet = true; m_referenceId.assign(value); }

    /**
     * <p>The reference ID to use for the task. The reference ID can have a maximum
     * length of 1024 characters.</p>
     */
    inline RunTaskRequest& WithReferenceId(const Aws::String& value) { SetReferenceId(value); return *this;}

    /**
     * <p>The reference ID to use for the task. The reference ID can have a maximum
     * length of 1024 characters.</p>
     */
    inline RunTaskRequest& WithReferenceId(Aws::String&& value) { SetReferenceId(std::move(value)); return *this;}

    /**
     * <p>The reference ID to use for the task. The reference ID can have a maximum
     * length of 1024 characters.</p>
     */
    inline RunTaskRequest& WithReferenceId(const char* value) { SetReferenceId(value); return *this;}


    /**
     * <p>An optional tag specified when a task is started. For example, if you
     * automatically trigger a task to run a batch process job, you could apply a
     * unique identifier for that job to your task with the <code>startedBy</code>
     * parameter. You can then identify which tasks belong to that job by filtering the
     * results of a <a>ListTasks</a> call with the <code>startedBy</code> value. Up to
     * 36 letters (uppercase and lowercase), numbers, hyphens (-), and underscores (_)
     * are allowed.</p> <p>If a task is started by an Amazon ECS service, then the
     * <code>startedBy</code> parameter contains the deployment ID of the service that
     * starts it.</p>
     */
    inline const Aws::String& GetStartedBy() const{ return m_startedBy; }

    /**
     * <p>An optional tag specified when a task is started. For example, if you
     * automatically trigger a task to run a batch process job, you could apply a
     * unique identifier for that job to your task with the <code>startedBy</code>
     * parameter. You can then identify which tasks belong to that job by filtering the
     * results of a <a>ListTasks</a> call with the <code>startedBy</code> value. Up to
     * 36 letters (uppercase and lowercase), numbers, hyphens (-), and underscores (_)
     * are allowed.</p> <p>If a task is started by an Amazon ECS service, then the
     * <code>startedBy</code> parameter contains the deployment ID of the service that
     * starts it.</p>
     */
    inline bool StartedByHasBeenSet() const { return m_startedByHasBeenSet; }

    /**
     * <p>An optional tag specified when a task is started. For example, if you
     * automatically trigger a task to run a batch process job, you could apply a
     * unique identifier for that job to your task with the <code>startedBy</code>
     * parameter. You can then identify which tasks belong to that job by filtering the
     * results of a <a>ListTasks</a> call with the <code>startedBy</code> value. Up to
     * 36 letters (uppercase and lowercase), numbers, hyphens (-), and underscores (_)
     * are allowed.</p> <p>If a task is started by an Amazon ECS service, then the
     * <code>startedBy</code> parameter contains the deployment ID of the service that
     * starts it.</p>
     */
    inline void SetStartedBy(const Aws::String& value) { m_startedByHasBeenSet = true; m_startedBy = value; }

    /**
     * <p>An optional tag specified when a task is started. For example, if you
     * automatically trigger a task to run a batch process job, you could apply a
     * unique identifier for that job to your task with the <code>startedBy</code>
     * parameter. You can then identify which tasks belong to that job by filtering the
     * results of a <a>ListTasks</a> call with the <code>startedBy</code> value. Up to
     * 36 letters (uppercase and lowercase), numbers, hyphens (-), and underscores (_)
     * are allowed.</p> <p>If a task is started by an Amazon ECS service, then the
     * <code>startedBy</code> parameter contains the deployment ID of the service that
     * starts it.</p>
     */
    inline void SetStartedBy(Aws::String&& value) { m_startedByHasBeenSet = true; m_startedBy = std::move(value); }

    /**
     * <p>An optional tag specified when a task is started. For example, if you
     * automatically trigger a task to run a batch process job, you could apply a
     * unique identifier for that job to your task with the <code>startedBy</code>
     * parameter. You can then identify which tasks belong to that job by filtering the
     * results of a <a>ListTasks</a> call with the <code>startedBy</code> value. Up to
     * 36 letters (uppercase and lowercase), numbers, hyphens (-), and underscores (_)
     * are allowed.</p> <p>If a task is started by an Amazon ECS service, then the
     * <code>startedBy</code> parameter contains the deployment ID of the service that
     * starts it.</p>
     */
    inline void SetStartedBy(const char* value) { m_startedByHasBeenSet = true; m_startedBy.assign(value); }

    /**
     * <p>An optional tag specified when a task is started. For example, if you
     * automatically trigger a task to run a batch process job, you could apply a
     * unique identifier for that job to your task with the <code>startedBy</code>
     * parameter. You can then identify which tasks belong to that job by filtering the
     * results of a <a>ListTasks</a> call with the <code>startedBy</code> value. Up to
     * 36 letters (uppercase and lowercase), numbers, hyphens (-), and underscores (_)
     * are allowed.</p> <p>If a task is started by an Amazon ECS service, then the
     * <code>startedBy</code> parameter contains the deployment ID of the service that
     * starts it.</p>
     */
    inline RunTaskRequest& WithStartedBy(const Aws::String& value) { SetStartedBy(value); return *this;}

    /**
     * <p>An optional tag specified when a task is started. For example, if you
     * automatically trigger a task to run a batch process job, you could apply a
     * unique identifier for that job to your task with the <code>startedBy</code>
     * parameter. You can then identify which tasks belong to that job by filtering the
     * results of a <a>ListTasks</a> call with the <code>startedBy</code> value. Up to
     * 36 letters (uppercase and lowercase), numbers, hyphens (-), and underscores (_)
     * are allowed.</p> <p>If a task is started by an Amazon ECS service, then the
     * <code>startedBy</code> parameter contains the deployment ID of the service that
     * starts it.</p>
     */
    inline RunTaskRequest& WithStartedBy(Aws::String&& value) { SetStartedBy(std::move(value)); return *this;}

    /**
     * <p>An optional tag specified when a task is started. For example, if you
     * automatically trigger a task to run a batch process job, you could apply a
     * unique identifier for that job to your task with the <code>startedBy</code>
     * parameter. You can then identify which tasks belong to that job by filtering the
     * results of a <a>ListTasks</a> call with the <code>startedBy</code> value. Up to
     * 36 letters (uppercase and lowercase), numbers, hyphens (-), and underscores (_)
     * are allowed.</p> <p>If a task is started by an Amazon ECS service, then the
     * <code>startedBy</code> parameter contains the deployment ID of the service that
     * starts it.</p>
     */
    inline RunTaskRequest& WithStartedBy(const char* value) { SetStartedBy(value); return *this;}


    /**
     * <p>The metadata that you apply to the task to help you categorize and organize
     * them. Each tag consists of a key and an optional value, both of which you
     * define.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata that you apply to the task to help you categorize and organize
     * them. Each tag consists of a key and an optional value, both of which you
     * define.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata that you apply to the task to help you categorize and organize
     * them. Each tag consists of a key and an optional value, both of which you
     * define.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata that you apply to the task to help you categorize and organize
     * them. Each tag consists of a key and an optional value, both of which you
     * define.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata that you apply to the task to help you categorize and organize
     * them. Each tag consists of a key and an optional value, both of which you
     * define.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline RunTaskRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata that you apply to the task to help you categorize and organize
     * them. Each tag consists of a key and an optional value, both of which you
     * define.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline RunTaskRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata that you apply to the task to help you categorize and organize
     * them. Each tag consists of a key and an optional value, both of which you
     * define.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline RunTaskRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The metadata that you apply to the task to help you categorize and organize
     * them. Each tag consists of a key and an optional value, both of which you
     * define.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline RunTaskRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full ARN of the task definition to run. If a
     * <code>revision</code> isn't specified, the latest <code>ACTIVE</code> revision
     * is used.</p> <p>When you create an IAM policy for run-task, you can set the
     * resource to be the latest task definition revision, or a specific revision.</p>
     * <p>The full ARN value must match the value that you specified as the
     * <code>Resource</code> of the IAM principal's permissions policy.</p> <p>When you
     * specify the policy resource as the latest task definition version (by setting
     * the <code>Resource</code> in the policy to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName</code>),
     * then set this value to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName</code>.</p>
     * <p>When you specify the policy resource as a specific task definition version
     * (by setting the <code>Resource</code> in the policy to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:1</code>
     * or
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:*</code>),
     * then set this value to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:1</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-resources">Policy
     * Resources for Amazon ECS</a> in the Amazon Elastic Container Service developer
     * Guide.</p>
     */
    inline const Aws::String& GetTaskDefinition() const{ return m_taskDefinition; }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full ARN of the task definition to run. If a
     * <code>revision</code> isn't specified, the latest <code>ACTIVE</code> revision
     * is used.</p> <p>When you create an IAM policy for run-task, you can set the
     * resource to be the latest task definition revision, or a specific revision.</p>
     * <p>The full ARN value must match the value that you specified as the
     * <code>Resource</code> of the IAM principal's permissions policy.</p> <p>When you
     * specify the policy resource as the latest task definition version (by setting
     * the <code>Resource</code> in the policy to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName</code>),
     * then set this value to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName</code>.</p>
     * <p>When you specify the policy resource as a specific task definition version
     * (by setting the <code>Resource</code> in the policy to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:1</code>
     * or
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:*</code>),
     * then set this value to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:1</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-resources">Policy
     * Resources for Amazon ECS</a> in the Amazon Elastic Container Service developer
     * Guide.</p>
     */
    inline bool TaskDefinitionHasBeenSet() const { return m_taskDefinitionHasBeenSet; }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full ARN of the task definition to run. If a
     * <code>revision</code> isn't specified, the latest <code>ACTIVE</code> revision
     * is used.</p> <p>When you create an IAM policy for run-task, you can set the
     * resource to be the latest task definition revision, or a specific revision.</p>
     * <p>The full ARN value must match the value that you specified as the
     * <code>Resource</code> of the IAM principal's permissions policy.</p> <p>When you
     * specify the policy resource as the latest task definition version (by setting
     * the <code>Resource</code> in the policy to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName</code>),
     * then set this value to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName</code>.</p>
     * <p>When you specify the policy resource as a specific task definition version
     * (by setting the <code>Resource</code> in the policy to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:1</code>
     * or
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:*</code>),
     * then set this value to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:1</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-resources">Policy
     * Resources for Amazon ECS</a> in the Amazon Elastic Container Service developer
     * Guide.</p>
     */
    inline void SetTaskDefinition(const Aws::String& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full ARN of the task definition to run. If a
     * <code>revision</code> isn't specified, the latest <code>ACTIVE</code> revision
     * is used.</p> <p>When you create an IAM policy for run-task, you can set the
     * resource to be the latest task definition revision, or a specific revision.</p>
     * <p>The full ARN value must match the value that you specified as the
     * <code>Resource</code> of the IAM principal's permissions policy.</p> <p>When you
     * specify the policy resource as the latest task definition version (by setting
     * the <code>Resource</code> in the policy to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName</code>),
     * then set this value to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName</code>.</p>
     * <p>When you specify the policy resource as a specific task definition version
     * (by setting the <code>Resource</code> in the policy to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:1</code>
     * or
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:*</code>),
     * then set this value to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:1</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-resources">Policy
     * Resources for Amazon ECS</a> in the Amazon Elastic Container Service developer
     * Guide.</p>
     */
    inline void SetTaskDefinition(Aws::String&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = std::move(value); }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full ARN of the task definition to run. If a
     * <code>revision</code> isn't specified, the latest <code>ACTIVE</code> revision
     * is used.</p> <p>When you create an IAM policy for run-task, you can set the
     * resource to be the latest task definition revision, or a specific revision.</p>
     * <p>The full ARN value must match the value that you specified as the
     * <code>Resource</code> of the IAM principal's permissions policy.</p> <p>When you
     * specify the policy resource as the latest task definition version (by setting
     * the <code>Resource</code> in the policy to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName</code>),
     * then set this value to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName</code>.</p>
     * <p>When you specify the policy resource as a specific task definition version
     * (by setting the <code>Resource</code> in the policy to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:1</code>
     * or
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:*</code>),
     * then set this value to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:1</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-resources">Policy
     * Resources for Amazon ECS</a> in the Amazon Elastic Container Service developer
     * Guide.</p>
     */
    inline void SetTaskDefinition(const char* value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition.assign(value); }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full ARN of the task definition to run. If a
     * <code>revision</code> isn't specified, the latest <code>ACTIVE</code> revision
     * is used.</p> <p>When you create an IAM policy for run-task, you can set the
     * resource to be the latest task definition revision, or a specific revision.</p>
     * <p>The full ARN value must match the value that you specified as the
     * <code>Resource</code> of the IAM principal's permissions policy.</p> <p>When you
     * specify the policy resource as the latest task definition version (by setting
     * the <code>Resource</code> in the policy to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName</code>),
     * then set this value to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName</code>.</p>
     * <p>When you specify the policy resource as a specific task definition version
     * (by setting the <code>Resource</code> in the policy to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:1</code>
     * or
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:*</code>),
     * then set this value to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:1</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-resources">Policy
     * Resources for Amazon ECS</a> in the Amazon Elastic Container Service developer
     * Guide.</p>
     */
    inline RunTaskRequest& WithTaskDefinition(const Aws::String& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full ARN of the task definition to run. If a
     * <code>revision</code> isn't specified, the latest <code>ACTIVE</code> revision
     * is used.</p> <p>When you create an IAM policy for run-task, you can set the
     * resource to be the latest task definition revision, or a specific revision.</p>
     * <p>The full ARN value must match the value that you specified as the
     * <code>Resource</code> of the IAM principal's permissions policy.</p> <p>When you
     * specify the policy resource as the latest task definition version (by setting
     * the <code>Resource</code> in the policy to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName</code>),
     * then set this value to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName</code>.</p>
     * <p>When you specify the policy resource as a specific task definition version
     * (by setting the <code>Resource</code> in the policy to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:1</code>
     * or
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:*</code>),
     * then set this value to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:1</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-resources">Policy
     * Resources for Amazon ECS</a> in the Amazon Elastic Container Service developer
     * Guide.</p>
     */
    inline RunTaskRequest& WithTaskDefinition(Aws::String&& value) { SetTaskDefinition(std::move(value)); return *this;}

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full ARN of the task definition to run. If a
     * <code>revision</code> isn't specified, the latest <code>ACTIVE</code> revision
     * is used.</p> <p>When you create an IAM policy for run-task, you can set the
     * resource to be the latest task definition revision, or a specific revision.</p>
     * <p>The full ARN value must match the value that you specified as the
     * <code>Resource</code> of the IAM principal's permissions policy.</p> <p>When you
     * specify the policy resource as the latest task definition version (by setting
     * the <code>Resource</code> in the policy to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName</code>),
     * then set this value to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName</code>.</p>
     * <p>When you specify the policy resource as a specific task definition version
     * (by setting the <code>Resource</code> in the policy to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:1</code>
     * or
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:*</code>),
     * then set this value to
     * <code>arn:aws:ecs:us-east-1:111122223333:task-definition/TaskFamilyName:1</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-resources">Policy
     * Resources for Amazon ECS</a> in the Amazon Elastic Container Service developer
     * Guide.</p>
     */
    inline RunTaskRequest& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}

  private:

    Aws::Vector<CapacityProviderStrategyItem> m_capacityProviderStrategy;
    bool m_capacityProviderStrategyHasBeenSet = false;

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;

    bool m_enableECSManagedTags;
    bool m_enableECSManagedTagsHasBeenSet = false;

    bool m_enableExecuteCommand;
    bool m_enableExecuteCommandHasBeenSet = false;

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    LaunchType m_launchType;
    bool m_launchTypeHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    TaskOverride m_overrides;
    bool m_overridesHasBeenSet = false;

    Aws::Vector<PlacementConstraint> m_placementConstraints;
    bool m_placementConstraintsHasBeenSet = false;

    Aws::Vector<PlacementStrategy> m_placementStrategy;
    bool m_placementStrategyHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    PropagateTags m_propagateTags;
    bool m_propagateTagsHasBeenSet = false;

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet = false;

    Aws::String m_startedBy;
    bool m_startedByHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
