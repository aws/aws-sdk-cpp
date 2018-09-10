﻿/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/NetworkMode.h>
#include <aws/ecs/model/TaskDefinitionStatus.h>
#include <aws/ecs/model/ContainerDefinition.h>
#include <aws/ecs/model/Volume.h>
#include <aws/ecs/model/Attribute.h>
#include <aws/ecs/model/TaskDefinitionPlacementConstraint.h>
#include <aws/ecs/model/Compatibility.h>
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
   * <p>Details of a task definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/TaskDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API TaskDefinition
  {
  public:
    TaskDefinition();
    TaskDefinition(Aws::Utils::Json::JsonView jsonValue);
    TaskDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The full Amazon Resource Name (ARN) of the task definition.</p>
     */
    inline const Aws::String& GetTaskDefinitionArn() const{ return m_taskDefinitionArn; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the task definition.</p>
     */
    inline void SetTaskDefinitionArn(const Aws::String& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = value; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the task definition.</p>
     */
    inline void SetTaskDefinitionArn(Aws::String&& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = std::move(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the task definition.</p>
     */
    inline void SetTaskDefinitionArn(const char* value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn.assign(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the task definition.</p>
     */
    inline TaskDefinition& WithTaskDefinitionArn(const Aws::String& value) { SetTaskDefinitionArn(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the task definition.</p>
     */
    inline TaskDefinition& WithTaskDefinitionArn(Aws::String&& value) { SetTaskDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the task definition.</p>
     */
    inline TaskDefinition& WithTaskDefinitionArn(const char* value) { SetTaskDefinitionArn(value); return *this;}


    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<ContainerDefinition>& GetContainerDefinitions() const{ return m_containerDefinitions; }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetContainerDefinitions(const Aws::Vector<ContainerDefinition>& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = value; }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetContainerDefinitions(Aws::Vector<ContainerDefinition>&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = std::move(value); }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithContainerDefinitions(const Aws::Vector<ContainerDefinition>& value) { SetContainerDefinitions(value); return *this;}

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithContainerDefinitions(Aws::Vector<ContainerDefinition>&& value) { SetContainerDefinitions(std::move(value)); return *this;}

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& AddContainerDefinitions(const ContainerDefinition& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.push_back(value); return *this; }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& AddContainerDefinitions(ContainerDefinition&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>The family of your task definition, used as the definition name.</p>
     */
    inline const Aws::String& GetFamily() const{ return m_family; }

    /**
     * <p>The family of your task definition, used as the definition name.</p>
     */
    inline void SetFamily(const Aws::String& value) { m_familyHasBeenSet = true; m_family = value; }

    /**
     * <p>The family of your task definition, used as the definition name.</p>
     */
    inline void SetFamily(Aws::String&& value) { m_familyHasBeenSet = true; m_family = std::move(value); }

    /**
     * <p>The family of your task definition, used as the definition name.</p>
     */
    inline void SetFamily(const char* value) { m_familyHasBeenSet = true; m_family.assign(value); }

    /**
     * <p>The family of your task definition, used as the definition name.</p>
     */
    inline TaskDefinition& WithFamily(const Aws::String& value) { SetFamily(value); return *this;}

    /**
     * <p>The family of your task definition, used as the definition name.</p>
     */
    inline TaskDefinition& WithFamily(Aws::String&& value) { SetFamily(std::move(value)); return *this;}

    /**
     * <p>The family of your task definition, used as the definition name.</p>
     */
    inline TaskDefinition& WithFamily(const char* value) { SetFamily(value); return *this;}


    /**
     * <p>The ARN of the IAM role that containers in this task can assume. All
     * containers in this task are granted the permissions that are specified in this
     * role.</p> <p>IAM roles for tasks on Windows require that the
     * <code>-EnableTaskIAMRole</code> option is set when you launch the Amazon
     * ECS-optimized Windows AMI. Your containers must also run some configuration code
     * in order to take advantage of the feature. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows_task_IAM_roles.html">Windows
     * IAM Roles for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetTaskRoleArn() const{ return m_taskRoleArn; }

    /**
     * <p>The ARN of the IAM role that containers in this task can assume. All
     * containers in this task are granted the permissions that are specified in this
     * role.</p> <p>IAM roles for tasks on Windows require that the
     * <code>-EnableTaskIAMRole</code> option is set when you launch the Amazon
     * ECS-optimized Windows AMI. Your containers must also run some configuration code
     * in order to take advantage of the feature. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows_task_IAM_roles.html">Windows
     * IAM Roles for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetTaskRoleArn(const Aws::String& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = value; }

    /**
     * <p>The ARN of the IAM role that containers in this task can assume. All
     * containers in this task are granted the permissions that are specified in this
     * role.</p> <p>IAM roles for tasks on Windows require that the
     * <code>-EnableTaskIAMRole</code> option is set when you launch the Amazon
     * ECS-optimized Windows AMI. Your containers must also run some configuration code
     * in order to take advantage of the feature. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows_task_IAM_roles.html">Windows
     * IAM Roles for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetTaskRoleArn(Aws::String&& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that containers in this task can assume. All
     * containers in this task are granted the permissions that are specified in this
     * role.</p> <p>IAM roles for tasks on Windows require that the
     * <code>-EnableTaskIAMRole</code> option is set when you launch the Amazon
     * ECS-optimized Windows AMI. Your containers must also run some configuration code
     * in order to take advantage of the feature. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows_task_IAM_roles.html">Windows
     * IAM Roles for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetTaskRoleArn(const char* value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that containers in this task can assume. All
     * containers in this task are granted the permissions that are specified in this
     * role.</p> <p>IAM roles for tasks on Windows require that the
     * <code>-EnableTaskIAMRole</code> option is set when you launch the Amazon
     * ECS-optimized Windows AMI. Your containers must also run some configuration code
     * in order to take advantage of the feature. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows_task_IAM_roles.html">Windows
     * IAM Roles for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithTaskRoleArn(const Aws::String& value) { SetTaskRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that containers in this task can assume. All
     * containers in this task are granted the permissions that are specified in this
     * role.</p> <p>IAM roles for tasks on Windows require that the
     * <code>-EnableTaskIAMRole</code> option is set when you launch the Amazon
     * ECS-optimized Windows AMI. Your containers must also run some configuration code
     * in order to take advantage of the feature. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows_task_IAM_roles.html">Windows
     * IAM Roles for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithTaskRoleArn(Aws::String&& value) { SetTaskRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that containers in this task can assume. All
     * containers in this task are granted the permissions that are specified in this
     * role.</p> <p>IAM roles for tasks on Windows require that the
     * <code>-EnableTaskIAMRole</code> option is set when you launch the Amazon
     * ECS-optimized Windows AMI. Your containers must also run some configuration code
     * in order to take advantage of the feature. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows_task_IAM_roles.html">Windows
     * IAM Roles for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithTaskRoleArn(const char* value) { SetTaskRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that the Amazon ECS
     * container agent and the Docker daemon can assume.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that the Amazon ECS
     * container agent and the Docker daemon can assume.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that the Amazon ECS
     * container agent and the Docker daemon can assume.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that the Amazon ECS
     * container agent and the Docker daemon can assume.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that the Amazon ECS
     * container agent and the Docker daemon can assume.</p>
     */
    inline TaskDefinition& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that the Amazon ECS
     * container agent and the Docker daemon can assume.</p>
     */
    inline TaskDefinition& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that the Amazon ECS
     * container agent and the Docker daemon can assume.</p>
     */
    inline TaskDefinition& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, <code>awsvpc</code>, and
     * <code>host</code>. The default Docker network mode is <code>bridge</code>. If
     * using the Fargate launch type, the <code>awsvpc</code> network mode is required.
     * If using the EC2 launch type, any network mode can be used. If the network mode
     * is set to <code>none</code>, you can't specify port mappings in your container
     * definitions, and the task's containers do not have external connectivity. The
     * <code>host</code> and <code>awsvpc</code> network modes offer the highest
     * networking performance for containers because they use the EC2 network stack
     * instead of the virtualized network stack provided by the <code>bridge</code>
     * mode.</p> <p>With the <code>host</code> and <code>awsvpc</code> network modes,
     * exposed container ports are mapped directly to the corresponding host port (for
     * the <code>host</code> network mode) or the attached elastic network interface
     * port (for the <code>awsvpc</code> network mode), so you cannot take advantage of
     * dynamic host port mappings. </p> <p>If the network mode is <code>awsvpc</code>,
     * the task is allocated an Elastic Network Interface, and you must specify a
     * <a>NetworkConfiguration</a> when you create a service or run a task with the
     * task definition. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <note> <p>Currently, only the Amazon ECS-optimized AMI, other
     * Amazon Linux variants with the <code>ecs-init</code> package, or AWS Fargate
     * infrastructure support the <code>awsvpc</code> network mode. </p> </note> <p>If
     * the network mode is <code>host</code>, you can't run multiple instantiations of
     * the same task on a single container instance when port mappings are used.</p>
     * <p>Docker for Windows uses different network modes than Docker for Linux. When
     * you register a task definition with Windows containers, you must not specify a
     * network mode. If you use the console to register a task definition with Windows
     * containers, you must choose the <code>&lt;default&gt;</code> network mode
     * object. </p> <p>For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#network-settings">Network
     * settings</a> in the <i>Docker run reference</i>.</p>
     */
    inline const NetworkMode& GetNetworkMode() const{ return m_networkMode; }

    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, <code>awsvpc</code>, and
     * <code>host</code>. The default Docker network mode is <code>bridge</code>. If
     * using the Fargate launch type, the <code>awsvpc</code> network mode is required.
     * If using the EC2 launch type, any network mode can be used. If the network mode
     * is set to <code>none</code>, you can't specify port mappings in your container
     * definitions, and the task's containers do not have external connectivity. The
     * <code>host</code> and <code>awsvpc</code> network modes offer the highest
     * networking performance for containers because they use the EC2 network stack
     * instead of the virtualized network stack provided by the <code>bridge</code>
     * mode.</p> <p>With the <code>host</code> and <code>awsvpc</code> network modes,
     * exposed container ports are mapped directly to the corresponding host port (for
     * the <code>host</code> network mode) or the attached elastic network interface
     * port (for the <code>awsvpc</code> network mode), so you cannot take advantage of
     * dynamic host port mappings. </p> <p>If the network mode is <code>awsvpc</code>,
     * the task is allocated an Elastic Network Interface, and you must specify a
     * <a>NetworkConfiguration</a> when you create a service or run a task with the
     * task definition. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <note> <p>Currently, only the Amazon ECS-optimized AMI, other
     * Amazon Linux variants with the <code>ecs-init</code> package, or AWS Fargate
     * infrastructure support the <code>awsvpc</code> network mode. </p> </note> <p>If
     * the network mode is <code>host</code>, you can't run multiple instantiations of
     * the same task on a single container instance when port mappings are used.</p>
     * <p>Docker for Windows uses different network modes than Docker for Linux. When
     * you register a task definition with Windows containers, you must not specify a
     * network mode. If you use the console to register a task definition with Windows
     * containers, you must choose the <code>&lt;default&gt;</code> network mode
     * object. </p> <p>For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#network-settings">Network
     * settings</a> in the <i>Docker run reference</i>.</p>
     */
    inline void SetNetworkMode(const NetworkMode& value) { m_networkModeHasBeenSet = true; m_networkMode = value; }

    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, <code>awsvpc</code>, and
     * <code>host</code>. The default Docker network mode is <code>bridge</code>. If
     * using the Fargate launch type, the <code>awsvpc</code> network mode is required.
     * If using the EC2 launch type, any network mode can be used. If the network mode
     * is set to <code>none</code>, you can't specify port mappings in your container
     * definitions, and the task's containers do not have external connectivity. The
     * <code>host</code> and <code>awsvpc</code> network modes offer the highest
     * networking performance for containers because they use the EC2 network stack
     * instead of the virtualized network stack provided by the <code>bridge</code>
     * mode.</p> <p>With the <code>host</code> and <code>awsvpc</code> network modes,
     * exposed container ports are mapped directly to the corresponding host port (for
     * the <code>host</code> network mode) or the attached elastic network interface
     * port (for the <code>awsvpc</code> network mode), so you cannot take advantage of
     * dynamic host port mappings. </p> <p>If the network mode is <code>awsvpc</code>,
     * the task is allocated an Elastic Network Interface, and you must specify a
     * <a>NetworkConfiguration</a> when you create a service or run a task with the
     * task definition. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <note> <p>Currently, only the Amazon ECS-optimized AMI, other
     * Amazon Linux variants with the <code>ecs-init</code> package, or AWS Fargate
     * infrastructure support the <code>awsvpc</code> network mode. </p> </note> <p>If
     * the network mode is <code>host</code>, you can't run multiple instantiations of
     * the same task on a single container instance when port mappings are used.</p>
     * <p>Docker for Windows uses different network modes than Docker for Linux. When
     * you register a task definition with Windows containers, you must not specify a
     * network mode. If you use the console to register a task definition with Windows
     * containers, you must choose the <code>&lt;default&gt;</code> network mode
     * object. </p> <p>For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#network-settings">Network
     * settings</a> in the <i>Docker run reference</i>.</p>
     */
    inline void SetNetworkMode(NetworkMode&& value) { m_networkModeHasBeenSet = true; m_networkMode = std::move(value); }

    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, <code>awsvpc</code>, and
     * <code>host</code>. The default Docker network mode is <code>bridge</code>. If
     * using the Fargate launch type, the <code>awsvpc</code> network mode is required.
     * If using the EC2 launch type, any network mode can be used. If the network mode
     * is set to <code>none</code>, you can't specify port mappings in your container
     * definitions, and the task's containers do not have external connectivity. The
     * <code>host</code> and <code>awsvpc</code> network modes offer the highest
     * networking performance for containers because they use the EC2 network stack
     * instead of the virtualized network stack provided by the <code>bridge</code>
     * mode.</p> <p>With the <code>host</code> and <code>awsvpc</code> network modes,
     * exposed container ports are mapped directly to the corresponding host port (for
     * the <code>host</code> network mode) or the attached elastic network interface
     * port (for the <code>awsvpc</code> network mode), so you cannot take advantage of
     * dynamic host port mappings. </p> <p>If the network mode is <code>awsvpc</code>,
     * the task is allocated an Elastic Network Interface, and you must specify a
     * <a>NetworkConfiguration</a> when you create a service or run a task with the
     * task definition. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <note> <p>Currently, only the Amazon ECS-optimized AMI, other
     * Amazon Linux variants with the <code>ecs-init</code> package, or AWS Fargate
     * infrastructure support the <code>awsvpc</code> network mode. </p> </note> <p>If
     * the network mode is <code>host</code>, you can't run multiple instantiations of
     * the same task on a single container instance when port mappings are used.</p>
     * <p>Docker for Windows uses different network modes than Docker for Linux. When
     * you register a task definition with Windows containers, you must not specify a
     * network mode. If you use the console to register a task definition with Windows
     * containers, you must choose the <code>&lt;default&gt;</code> network mode
     * object. </p> <p>For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#network-settings">Network
     * settings</a> in the <i>Docker run reference</i>.</p>
     */
    inline TaskDefinition& WithNetworkMode(const NetworkMode& value) { SetNetworkMode(value); return *this;}

    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, <code>awsvpc</code>, and
     * <code>host</code>. The default Docker network mode is <code>bridge</code>. If
     * using the Fargate launch type, the <code>awsvpc</code> network mode is required.
     * If using the EC2 launch type, any network mode can be used. If the network mode
     * is set to <code>none</code>, you can't specify port mappings in your container
     * definitions, and the task's containers do not have external connectivity. The
     * <code>host</code> and <code>awsvpc</code> network modes offer the highest
     * networking performance for containers because they use the EC2 network stack
     * instead of the virtualized network stack provided by the <code>bridge</code>
     * mode.</p> <p>With the <code>host</code> and <code>awsvpc</code> network modes,
     * exposed container ports are mapped directly to the corresponding host port (for
     * the <code>host</code> network mode) or the attached elastic network interface
     * port (for the <code>awsvpc</code> network mode), so you cannot take advantage of
     * dynamic host port mappings. </p> <p>If the network mode is <code>awsvpc</code>,
     * the task is allocated an Elastic Network Interface, and you must specify a
     * <a>NetworkConfiguration</a> when you create a service or run a task with the
     * task definition. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <note> <p>Currently, only the Amazon ECS-optimized AMI, other
     * Amazon Linux variants with the <code>ecs-init</code> package, or AWS Fargate
     * infrastructure support the <code>awsvpc</code> network mode. </p> </note> <p>If
     * the network mode is <code>host</code>, you can't run multiple instantiations of
     * the same task on a single container instance when port mappings are used.</p>
     * <p>Docker for Windows uses different network modes than Docker for Linux. When
     * you register a task definition with Windows containers, you must not specify a
     * network mode. If you use the console to register a task definition with Windows
     * containers, you must choose the <code>&lt;default&gt;</code> network mode
     * object. </p> <p>For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#network-settings">Network
     * settings</a> in the <i>Docker run reference</i>.</p>
     */
    inline TaskDefinition& WithNetworkMode(NetworkMode&& value) { SetNetworkMode(std::move(value)); return *this;}


    /**
     * <p>The revision of the task in a particular family. The revision is a version
     * number of a task definition in a family. When you register a task definition for
     * the first time, the revision is <code>1</code>; each time you register a new
     * revision of a task definition in the same family, the revision value always
     * increases by one (even if you have deregistered previous revisions in this
     * family).</p>
     */
    inline int GetRevision() const{ return m_revision; }

    /**
     * <p>The revision of the task in a particular family. The revision is a version
     * number of a task definition in a family. When you register a task definition for
     * the first time, the revision is <code>1</code>; each time you register a new
     * revision of a task definition in the same family, the revision value always
     * increases by one (even if you have deregistered previous revisions in this
     * family).</p>
     */
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The revision of the task in a particular family. The revision is a version
     * number of a task definition in a family. When you register a task definition for
     * the first time, the revision is <code>1</code>; each time you register a new
     * revision of a task definition in the same family, the revision value always
     * increases by one (even if you have deregistered previous revisions in this
     * family).</p>
     */
    inline TaskDefinition& WithRevision(int value) { SetRevision(value); return *this;}


    /**
     * <p>The list of volumes in a task.</p> <p>If you are using the Fargate launch
     * type, the <code>host</code> and <code>sourcePath</code> parameters are not
     * supported.</p> <p>For more information about volume definition parameters and
     * defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definitions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>The list of volumes in a task.</p> <p>If you are using the Fargate launch
     * type, the <code>host</code> and <code>sourcePath</code> parameters are not
     * supported.</p> <p>For more information about volume definition parameters and
     * defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definitions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>The list of volumes in a task.</p> <p>If you are using the Fargate launch
     * type, the <code>host</code> and <code>sourcePath</code> parameters are not
     * supported.</p> <p>For more information about volume definition parameters and
     * defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definitions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }

    /**
     * <p>The list of volumes in a task.</p> <p>If you are using the Fargate launch
     * type, the <code>host</code> and <code>sourcePath</code> parameters are not
     * supported.</p> <p>For more information about volume definition parameters and
     * defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definitions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}

    /**
     * <p>The list of volumes in a task.</p> <p>If you are using the Fargate launch
     * type, the <code>host</code> and <code>sourcePath</code> parameters are not
     * supported.</p> <p>For more information about volume definition parameters and
     * defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definitions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p>The list of volumes in a task.</p> <p>If you are using the Fargate launch
     * type, the <code>host</code> and <code>sourcePath</code> parameters are not
     * supported.</p> <p>For more information about volume definition parameters and
     * defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definitions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& AddVolumes(const Volume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>The list of volumes in a task.</p> <p>If you are using the Fargate launch
     * type, the <code>host</code> and <code>sourcePath</code> parameters are not
     * supported.</p> <p>For more information about volume definition parameters and
     * defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definitions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& AddVolumes(Volume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the task definition.</p>
     */
    inline const TaskDefinitionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the task definition.</p>
     */
    inline void SetStatus(const TaskDefinitionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the task definition.</p>
     */
    inline void SetStatus(TaskDefinitionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the task definition.</p>
     */
    inline TaskDefinition& WithStatus(const TaskDefinitionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the task definition.</p>
     */
    inline TaskDefinition& WithStatus(TaskDefinitionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The container instance attributes required by your task. This field is not
     * valid if using the Fargate launch type for your task.</p>
     */
    inline const Aws::Vector<Attribute>& GetRequiresAttributes() const{ return m_requiresAttributes; }

    /**
     * <p>The container instance attributes required by your task. This field is not
     * valid if using the Fargate launch type for your task.</p>
     */
    inline void SetRequiresAttributes(const Aws::Vector<Attribute>& value) { m_requiresAttributesHasBeenSet = true; m_requiresAttributes = value; }

    /**
     * <p>The container instance attributes required by your task. This field is not
     * valid if using the Fargate launch type for your task.</p>
     */
    inline void SetRequiresAttributes(Aws::Vector<Attribute>&& value) { m_requiresAttributesHasBeenSet = true; m_requiresAttributes = std::move(value); }

    /**
     * <p>The container instance attributes required by your task. This field is not
     * valid if using the Fargate launch type for your task.</p>
     */
    inline TaskDefinition& WithRequiresAttributes(const Aws::Vector<Attribute>& value) { SetRequiresAttributes(value); return *this;}

    /**
     * <p>The container instance attributes required by your task. This field is not
     * valid if using the Fargate launch type for your task.</p>
     */
    inline TaskDefinition& WithRequiresAttributes(Aws::Vector<Attribute>&& value) { SetRequiresAttributes(std::move(value)); return *this;}

    /**
     * <p>The container instance attributes required by your task. This field is not
     * valid if using the Fargate launch type for your task.</p>
     */
    inline TaskDefinition& AddRequiresAttributes(const Attribute& value) { m_requiresAttributesHasBeenSet = true; m_requiresAttributes.push_back(value); return *this; }

    /**
     * <p>The container instance attributes required by your task. This field is not
     * valid if using the Fargate launch type for your task.</p>
     */
    inline TaskDefinition& AddRequiresAttributes(Attribute&& value) { m_requiresAttributesHasBeenSet = true; m_requiresAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of placement constraint objects to use for tasks. This field is not
     * valid if using the Fargate launch type for your task.</p>
     */
    inline const Aws::Vector<TaskDefinitionPlacementConstraint>& GetPlacementConstraints() const{ return m_placementConstraints; }

    /**
     * <p>An array of placement constraint objects to use for tasks. This field is not
     * valid if using the Fargate launch type for your task.</p>
     */
    inline void SetPlacementConstraints(const Aws::Vector<TaskDefinitionPlacementConstraint>& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = value; }

    /**
     * <p>An array of placement constraint objects to use for tasks. This field is not
     * valid if using the Fargate launch type for your task.</p>
     */
    inline void SetPlacementConstraints(Aws::Vector<TaskDefinitionPlacementConstraint>&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = std::move(value); }

    /**
     * <p>An array of placement constraint objects to use for tasks. This field is not
     * valid if using the Fargate launch type for your task.</p>
     */
    inline TaskDefinition& WithPlacementConstraints(const Aws::Vector<TaskDefinitionPlacementConstraint>& value) { SetPlacementConstraints(value); return *this;}

    /**
     * <p>An array of placement constraint objects to use for tasks. This field is not
     * valid if using the Fargate launch type for your task.</p>
     */
    inline TaskDefinition& WithPlacementConstraints(Aws::Vector<TaskDefinitionPlacementConstraint>&& value) { SetPlacementConstraints(std::move(value)); return *this;}

    /**
     * <p>An array of placement constraint objects to use for tasks. This field is not
     * valid if using the Fargate launch type for your task.</p>
     */
    inline TaskDefinition& AddPlacementConstraints(const TaskDefinitionPlacementConstraint& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(value); return *this; }

    /**
     * <p>An array of placement constraint objects to use for tasks. This field is not
     * valid if using the Fargate launch type for your task.</p>
     */
    inline TaskDefinition& AddPlacementConstraints(TaskDefinitionPlacementConstraint&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(std::move(value)); return *this; }


    /**
     * <p>The launch type to use with your task. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS Launch Types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Compatibility>& GetCompatibilities() const{ return m_compatibilities; }

    /**
     * <p>The launch type to use with your task. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS Launch Types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetCompatibilities(const Aws::Vector<Compatibility>& value) { m_compatibilitiesHasBeenSet = true; m_compatibilities = value; }

    /**
     * <p>The launch type to use with your task. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS Launch Types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetCompatibilities(Aws::Vector<Compatibility>&& value) { m_compatibilitiesHasBeenSet = true; m_compatibilities = std::move(value); }

    /**
     * <p>The launch type to use with your task. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS Launch Types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithCompatibilities(const Aws::Vector<Compatibility>& value) { SetCompatibilities(value); return *this;}

    /**
     * <p>The launch type to use with your task. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS Launch Types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithCompatibilities(Aws::Vector<Compatibility>&& value) { SetCompatibilities(std::move(value)); return *this;}

    /**
     * <p>The launch type to use with your task. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS Launch Types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& AddCompatibilities(const Compatibility& value) { m_compatibilitiesHasBeenSet = true; m_compatibilities.push_back(value); return *this; }

    /**
     * <p>The launch type to use with your task. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS Launch Types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& AddCompatibilities(Compatibility&& value) { m_compatibilitiesHasBeenSet = true; m_compatibilities.push_back(std::move(value)); return *this; }


    /**
     * <p>The launch type the task is using.</p>
     */
    inline const Aws::Vector<Compatibility>& GetRequiresCompatibilities() const{ return m_requiresCompatibilities; }

    /**
     * <p>The launch type the task is using.</p>
     */
    inline void SetRequiresCompatibilities(const Aws::Vector<Compatibility>& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities = value; }

    /**
     * <p>The launch type the task is using.</p>
     */
    inline void SetRequiresCompatibilities(Aws::Vector<Compatibility>&& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities = std::move(value); }

    /**
     * <p>The launch type the task is using.</p>
     */
    inline TaskDefinition& WithRequiresCompatibilities(const Aws::Vector<Compatibility>& value) { SetRequiresCompatibilities(value); return *this;}

    /**
     * <p>The launch type the task is using.</p>
     */
    inline TaskDefinition& WithRequiresCompatibilities(Aws::Vector<Compatibility>&& value) { SetRequiresCompatibilities(std::move(value)); return *this;}

    /**
     * <p>The launch type the task is using.</p>
     */
    inline TaskDefinition& AddRequiresCompatibilities(const Compatibility& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities.push_back(value); return *this; }

    /**
     * <p>The launch type the task is using.</p>
     */
    inline TaskDefinition& AddRequiresCompatibilities(Compatibility&& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of <code>cpu</code> units used by the task. If using the EC2
     * launch type, this field is optional and any value can be used. If using the
     * Fargate launch type, this field is required and you must use one of the
     * following values, which determines your range of valid values for the
     * <code>memory</code> parameter:</p> <ul> <li> <p>256 (.25 vCPU) - Available
     * <code>memory</code> values: 512 (0.5 GB), 1024 (1 GB), 2048 (2 GB)</p> </li>
     * <li> <p>512 (.5 vCPU) - Available <code>memory</code> values: 1024 (1 GB), 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB)</p> </li> <li> <p>1024 (1 vCPU) - Available
     * <code>memory</code> values: 2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB),
     * 6144 (6 GB), 7168 (7 GB), 8192 (8 GB)</p> </li> <li> <p>2048 (2 vCPU) -
     * Available <code>memory</code> values: Between 4096 (4 GB) and 16384 (16 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4 vCPU) - Available
     * <code>memory</code> values: Between 8192 (8 GB) and 30720 (30 GB) in increments
     * of 1024 (1 GB)</p> </li> </ul>
     */
    inline const Aws::String& GetCpu() const{ return m_cpu; }

    /**
     * <p>The number of <code>cpu</code> units used by the task. If using the EC2
     * launch type, this field is optional and any value can be used. If using the
     * Fargate launch type, this field is required and you must use one of the
     * following values, which determines your range of valid values for the
     * <code>memory</code> parameter:</p> <ul> <li> <p>256 (.25 vCPU) - Available
     * <code>memory</code> values: 512 (0.5 GB), 1024 (1 GB), 2048 (2 GB)</p> </li>
     * <li> <p>512 (.5 vCPU) - Available <code>memory</code> values: 1024 (1 GB), 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB)</p> </li> <li> <p>1024 (1 vCPU) - Available
     * <code>memory</code> values: 2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB),
     * 6144 (6 GB), 7168 (7 GB), 8192 (8 GB)</p> </li> <li> <p>2048 (2 vCPU) -
     * Available <code>memory</code> values: Between 4096 (4 GB) and 16384 (16 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4 vCPU) - Available
     * <code>memory</code> values: Between 8192 (8 GB) and 30720 (30 GB) in increments
     * of 1024 (1 GB)</p> </li> </ul>
     */
    inline void SetCpu(const Aws::String& value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /**
     * <p>The number of <code>cpu</code> units used by the task. If using the EC2
     * launch type, this field is optional and any value can be used. If using the
     * Fargate launch type, this field is required and you must use one of the
     * following values, which determines your range of valid values for the
     * <code>memory</code> parameter:</p> <ul> <li> <p>256 (.25 vCPU) - Available
     * <code>memory</code> values: 512 (0.5 GB), 1024 (1 GB), 2048 (2 GB)</p> </li>
     * <li> <p>512 (.5 vCPU) - Available <code>memory</code> values: 1024 (1 GB), 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB)</p> </li> <li> <p>1024 (1 vCPU) - Available
     * <code>memory</code> values: 2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB),
     * 6144 (6 GB), 7168 (7 GB), 8192 (8 GB)</p> </li> <li> <p>2048 (2 vCPU) -
     * Available <code>memory</code> values: Between 4096 (4 GB) and 16384 (16 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4 vCPU) - Available
     * <code>memory</code> values: Between 8192 (8 GB) and 30720 (30 GB) in increments
     * of 1024 (1 GB)</p> </li> </ul>
     */
    inline void SetCpu(Aws::String&& value) { m_cpuHasBeenSet = true; m_cpu = std::move(value); }

    /**
     * <p>The number of <code>cpu</code> units used by the task. If using the EC2
     * launch type, this field is optional and any value can be used. If using the
     * Fargate launch type, this field is required and you must use one of the
     * following values, which determines your range of valid values for the
     * <code>memory</code> parameter:</p> <ul> <li> <p>256 (.25 vCPU) - Available
     * <code>memory</code> values: 512 (0.5 GB), 1024 (1 GB), 2048 (2 GB)</p> </li>
     * <li> <p>512 (.5 vCPU) - Available <code>memory</code> values: 1024 (1 GB), 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB)</p> </li> <li> <p>1024 (1 vCPU) - Available
     * <code>memory</code> values: 2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB),
     * 6144 (6 GB), 7168 (7 GB), 8192 (8 GB)</p> </li> <li> <p>2048 (2 vCPU) -
     * Available <code>memory</code> values: Between 4096 (4 GB) and 16384 (16 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4 vCPU) - Available
     * <code>memory</code> values: Between 8192 (8 GB) and 30720 (30 GB) in increments
     * of 1024 (1 GB)</p> </li> </ul>
     */
    inline void SetCpu(const char* value) { m_cpuHasBeenSet = true; m_cpu.assign(value); }

    /**
     * <p>The number of <code>cpu</code> units used by the task. If using the EC2
     * launch type, this field is optional and any value can be used. If using the
     * Fargate launch type, this field is required and you must use one of the
     * following values, which determines your range of valid values for the
     * <code>memory</code> parameter:</p> <ul> <li> <p>256 (.25 vCPU) - Available
     * <code>memory</code> values: 512 (0.5 GB), 1024 (1 GB), 2048 (2 GB)</p> </li>
     * <li> <p>512 (.5 vCPU) - Available <code>memory</code> values: 1024 (1 GB), 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB)</p> </li> <li> <p>1024 (1 vCPU) - Available
     * <code>memory</code> values: 2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB),
     * 6144 (6 GB), 7168 (7 GB), 8192 (8 GB)</p> </li> <li> <p>2048 (2 vCPU) -
     * Available <code>memory</code> values: Between 4096 (4 GB) and 16384 (16 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4 vCPU) - Available
     * <code>memory</code> values: Between 8192 (8 GB) and 30720 (30 GB) in increments
     * of 1024 (1 GB)</p> </li> </ul>
     */
    inline TaskDefinition& WithCpu(const Aws::String& value) { SetCpu(value); return *this;}

    /**
     * <p>The number of <code>cpu</code> units used by the task. If using the EC2
     * launch type, this field is optional and any value can be used. If using the
     * Fargate launch type, this field is required and you must use one of the
     * following values, which determines your range of valid values for the
     * <code>memory</code> parameter:</p> <ul> <li> <p>256 (.25 vCPU) - Available
     * <code>memory</code> values: 512 (0.5 GB), 1024 (1 GB), 2048 (2 GB)</p> </li>
     * <li> <p>512 (.5 vCPU) - Available <code>memory</code> values: 1024 (1 GB), 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB)</p> </li> <li> <p>1024 (1 vCPU) - Available
     * <code>memory</code> values: 2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB),
     * 6144 (6 GB), 7168 (7 GB), 8192 (8 GB)</p> </li> <li> <p>2048 (2 vCPU) -
     * Available <code>memory</code> values: Between 4096 (4 GB) and 16384 (16 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4 vCPU) - Available
     * <code>memory</code> values: Between 8192 (8 GB) and 30720 (30 GB) in increments
     * of 1024 (1 GB)</p> </li> </ul>
     */
    inline TaskDefinition& WithCpu(Aws::String&& value) { SetCpu(std::move(value)); return *this;}

    /**
     * <p>The number of <code>cpu</code> units used by the task. If using the EC2
     * launch type, this field is optional and any value can be used. If using the
     * Fargate launch type, this field is required and you must use one of the
     * following values, which determines your range of valid values for the
     * <code>memory</code> parameter:</p> <ul> <li> <p>256 (.25 vCPU) - Available
     * <code>memory</code> values: 512 (0.5 GB), 1024 (1 GB), 2048 (2 GB)</p> </li>
     * <li> <p>512 (.5 vCPU) - Available <code>memory</code> values: 1024 (1 GB), 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB)</p> </li> <li> <p>1024 (1 vCPU) - Available
     * <code>memory</code> values: 2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB),
     * 6144 (6 GB), 7168 (7 GB), 8192 (8 GB)</p> </li> <li> <p>2048 (2 vCPU) -
     * Available <code>memory</code> values: Between 4096 (4 GB) and 16384 (16 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4 vCPU) - Available
     * <code>memory</code> values: Between 8192 (8 GB) and 30720 (30 GB) in increments
     * of 1024 (1 GB)</p> </li> </ul>
     */
    inline TaskDefinition& WithCpu(const char* value) { SetCpu(value); return *this;}


    /**
     * <p>The amount (in MiB) of memory used by the task. If using the EC2 launch type,
     * this field is optional and any value can be used. If using the Fargate launch
     * type, this field is required and you must use one of the following values, which
     * determines your range of valid values for the <code>cpu</code> parameter:</p>
     * <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code>
     * values: 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB),
     * 4096 (4 GB) - Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li>
     * <p>2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB),
     * 8192 (8 GB) - Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li>
     * <p>Between 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) -
     * Available <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192
     * (8 GB) and 30720 (30 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 4096 (4 vCPU)</p> </li> </ul>
     */
    inline const Aws::String& GetMemory() const{ return m_memory; }

    /**
     * <p>The amount (in MiB) of memory used by the task. If using the EC2 launch type,
     * this field is optional and any value can be used. If using the Fargate launch
     * type, this field is required and you must use one of the following values, which
     * determines your range of valid values for the <code>cpu</code> parameter:</p>
     * <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code>
     * values: 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB),
     * 4096 (4 GB) - Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li>
     * <p>2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB),
     * 8192 (8 GB) - Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li>
     * <p>Between 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) -
     * Available <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192
     * (8 GB) and 30720 (30 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 4096 (4 vCPU)</p> </li> </ul>
     */
    inline void SetMemory(const Aws::String& value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p>The amount (in MiB) of memory used by the task. If using the EC2 launch type,
     * this field is optional and any value can be used. If using the Fargate launch
     * type, this field is required and you must use one of the following values, which
     * determines your range of valid values for the <code>cpu</code> parameter:</p>
     * <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code>
     * values: 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB),
     * 4096 (4 GB) - Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li>
     * <p>2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB),
     * 8192 (8 GB) - Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li>
     * <p>Between 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) -
     * Available <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192
     * (8 GB) and 30720 (30 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 4096 (4 vCPU)</p> </li> </ul>
     */
    inline void SetMemory(Aws::String&& value) { m_memoryHasBeenSet = true; m_memory = std::move(value); }

    /**
     * <p>The amount (in MiB) of memory used by the task. If using the EC2 launch type,
     * this field is optional and any value can be used. If using the Fargate launch
     * type, this field is required and you must use one of the following values, which
     * determines your range of valid values for the <code>cpu</code> parameter:</p>
     * <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code>
     * values: 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB),
     * 4096 (4 GB) - Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li>
     * <p>2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB),
     * 8192 (8 GB) - Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li>
     * <p>Between 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) -
     * Available <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192
     * (8 GB) and 30720 (30 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 4096 (4 vCPU)</p> </li> </ul>
     */
    inline void SetMemory(const char* value) { m_memoryHasBeenSet = true; m_memory.assign(value); }

    /**
     * <p>The amount (in MiB) of memory used by the task. If using the EC2 launch type,
     * this field is optional and any value can be used. If using the Fargate launch
     * type, this field is required and you must use one of the following values, which
     * determines your range of valid values for the <code>cpu</code> parameter:</p>
     * <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code>
     * values: 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB),
     * 4096 (4 GB) - Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li>
     * <p>2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB),
     * 8192 (8 GB) - Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li>
     * <p>Between 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) -
     * Available <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192
     * (8 GB) and 30720 (30 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 4096 (4 vCPU)</p> </li> </ul>
     */
    inline TaskDefinition& WithMemory(const Aws::String& value) { SetMemory(value); return *this;}

    /**
     * <p>The amount (in MiB) of memory used by the task. If using the EC2 launch type,
     * this field is optional and any value can be used. If using the Fargate launch
     * type, this field is required and you must use one of the following values, which
     * determines your range of valid values for the <code>cpu</code> parameter:</p>
     * <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code>
     * values: 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB),
     * 4096 (4 GB) - Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li>
     * <p>2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB),
     * 8192 (8 GB) - Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li>
     * <p>Between 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) -
     * Available <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192
     * (8 GB) and 30720 (30 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 4096 (4 vCPU)</p> </li> </ul>
     */
    inline TaskDefinition& WithMemory(Aws::String&& value) { SetMemory(std::move(value)); return *this;}

    /**
     * <p>The amount (in MiB) of memory used by the task. If using the EC2 launch type,
     * this field is optional and any value can be used. If using the Fargate launch
     * type, this field is required and you must use one of the following values, which
     * determines your range of valid values for the <code>cpu</code> parameter:</p>
     * <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code>
     * values: 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB),
     * 4096 (4 GB) - Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li>
     * <p>2048 (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB),
     * 8192 (8 GB) - Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li>
     * <p>Between 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) -
     * Available <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192
     * (8 GB) and 30720 (30 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 4096 (4 vCPU)</p> </li> </ul>
     */
    inline TaskDefinition& WithMemory(const char* value) { SetMemory(value); return *this;}

  private:

    Aws::String m_taskDefinitionArn;
    bool m_taskDefinitionArnHasBeenSet;

    Aws::Vector<ContainerDefinition> m_containerDefinitions;
    bool m_containerDefinitionsHasBeenSet;

    Aws::String m_family;
    bool m_familyHasBeenSet;

    Aws::String m_taskRoleArn;
    bool m_taskRoleArnHasBeenSet;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet;

    NetworkMode m_networkMode;
    bool m_networkModeHasBeenSet;

    int m_revision;
    bool m_revisionHasBeenSet;

    Aws::Vector<Volume> m_volumes;
    bool m_volumesHasBeenSet;

    TaskDefinitionStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Vector<Attribute> m_requiresAttributes;
    bool m_requiresAttributesHasBeenSet;

    Aws::Vector<TaskDefinitionPlacementConstraint> m_placementConstraints;
    bool m_placementConstraintsHasBeenSet;

    Aws::Vector<Compatibility> m_compatibilities;
    bool m_compatibilitiesHasBeenSet;

    Aws::Vector<Compatibility> m_requiresCompatibilities;
    bool m_requiresCompatibilitiesHasBeenSet;

    Aws::String m_cpu;
    bool m_cpuHasBeenSet;

    Aws::String m_memory;
    bool m_memoryHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
