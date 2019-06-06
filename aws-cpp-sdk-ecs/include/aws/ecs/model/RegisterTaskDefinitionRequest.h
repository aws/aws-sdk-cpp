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
#include <aws/ecs/model/NetworkMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/PidMode.h>
#include <aws/ecs/model/IpcMode.h>
#include <aws/ecs/model/ProxyConfiguration.h>
#include <aws/ecs/model/ContainerDefinition.h>
#include <aws/ecs/model/Volume.h>
#include <aws/ecs/model/TaskDefinitionPlacementConstraint.h>
#include <aws/ecs/model/Compatibility.h>
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
  class AWS_ECS_API RegisterTaskDefinitionRequest : public ECSRequest
  {
  public:
    RegisterTaskDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterTaskDefinition"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>You must specify a <code>family</code> for a task definition, which allows
     * you to track multiple versions of the same task definition. The
     * <code>family</code> is used as a name for your task definition. Up to 255
     * letters (uppercase and lowercase), numbers, and hyphens are allowed.</p>
     */
    inline const Aws::String& GetFamily() const{ return m_family; }

    /**
     * <p>You must specify a <code>family</code> for a task definition, which allows
     * you to track multiple versions of the same task definition. The
     * <code>family</code> is used as a name for your task definition. Up to 255
     * letters (uppercase and lowercase), numbers, and hyphens are allowed.</p>
     */
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }

    /**
     * <p>You must specify a <code>family</code> for a task definition, which allows
     * you to track multiple versions of the same task definition. The
     * <code>family</code> is used as a name for your task definition. Up to 255
     * letters (uppercase and lowercase), numbers, and hyphens are allowed.</p>
     */
    inline void SetFamily(const Aws::String& value) { m_familyHasBeenSet = true; m_family = value; }

    /**
     * <p>You must specify a <code>family</code> for a task definition, which allows
     * you to track multiple versions of the same task definition. The
     * <code>family</code> is used as a name for your task definition. Up to 255
     * letters (uppercase and lowercase), numbers, and hyphens are allowed.</p>
     */
    inline void SetFamily(Aws::String&& value) { m_familyHasBeenSet = true; m_family = std::move(value); }

    /**
     * <p>You must specify a <code>family</code> for a task definition, which allows
     * you to track multiple versions of the same task definition. The
     * <code>family</code> is used as a name for your task definition. Up to 255
     * letters (uppercase and lowercase), numbers, and hyphens are allowed.</p>
     */
    inline void SetFamily(const char* value) { m_familyHasBeenSet = true; m_family.assign(value); }

    /**
     * <p>You must specify a <code>family</code> for a task definition, which allows
     * you to track multiple versions of the same task definition. The
     * <code>family</code> is used as a name for your task definition. Up to 255
     * letters (uppercase and lowercase), numbers, and hyphens are allowed.</p>
     */
    inline RegisterTaskDefinitionRequest& WithFamily(const Aws::String& value) { SetFamily(value); return *this;}

    /**
     * <p>You must specify a <code>family</code> for a task definition, which allows
     * you to track multiple versions of the same task definition. The
     * <code>family</code> is used as a name for your task definition. Up to 255
     * letters (uppercase and lowercase), numbers, and hyphens are allowed.</p>
     */
    inline RegisterTaskDefinitionRequest& WithFamily(Aws::String&& value) { SetFamily(std::move(value)); return *this;}

    /**
     * <p>You must specify a <code>family</code> for a task definition, which allows
     * you to track multiple versions of the same task definition. The
     * <code>family</code> is used as a name for your task definition. Up to 255
     * letters (uppercase and lowercase), numbers, and hyphens are allowed.</p>
     */
    inline RegisterTaskDefinitionRequest& WithFamily(const char* value) { SetFamily(value); return *this;}


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the IAM role that
     * containers in this task can assume. All containers in this task are granted the
     * permissions that are specified in this role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Roles for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetTaskRoleArn() const{ return m_taskRoleArn; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the IAM role that
     * containers in this task can assume. All containers in this task are granted the
     * permissions that are specified in this role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Roles for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool TaskRoleArnHasBeenSet() const { return m_taskRoleArnHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the IAM role that
     * containers in this task can assume. All containers in this task are granted the
     * permissions that are specified in this role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Roles for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetTaskRoleArn(const Aws::String& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the IAM role that
     * containers in this task can assume. All containers in this task are granted the
     * permissions that are specified in this role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Roles for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetTaskRoleArn(Aws::String&& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the IAM role that
     * containers in this task can assume. All containers in this task are granted the
     * permissions that are specified in this role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Roles for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetTaskRoleArn(const char* value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the IAM role that
     * containers in this task can assume. All containers in this task are granted the
     * permissions that are specified in this role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Roles for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline RegisterTaskDefinitionRequest& WithTaskRoleArn(const Aws::String& value) { SetTaskRoleArn(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the IAM role that
     * containers in this task can assume. All containers in this task are granted the
     * permissions that are specified in this role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Roles for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline RegisterTaskDefinitionRequest& WithTaskRoleArn(Aws::String&& value) { SetTaskRoleArn(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the IAM role that
     * containers in this task can assume. All containers in this task are granted the
     * permissions that are specified in this role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Roles for Tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline RegisterTaskDefinitionRequest& WithTaskRoleArn(const char* value) { SetTaskRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that the Amazon ECS
     * container agent and the Docker daemon can assume.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that the Amazon ECS
     * container agent and the Docker daemon can assume.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

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
    inline RegisterTaskDefinitionRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that the Amazon ECS
     * container agent and the Docker daemon can assume.</p>
     */
    inline RegisterTaskDefinitionRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that the Amazon ECS
     * container agent and the Docker daemon can assume.</p>
     */
    inline RegisterTaskDefinitionRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, <code>awsvpc</code>, and
     * <code>host</code>. The default Docker network mode is <code>bridge</code>. If
     * you are using the Fargate launch type, the <code>awsvpc</code> network mode is
     * required. If you are using the EC2 launch type, any network mode can be used. If
     * the network mode is set to <code>none</code>, you cannot specify port mappings
     * in your container definitions, and the tasks containers do not have external
     * connectivity. The <code>host</code> and <code>awsvpc</code> network modes offer
     * the highest networking performance for containers because they use the EC2
     * network stack instead of the virtualized network stack provided by the
     * <code>bridge</code> mode.</p> <p>With the <code>host</code> and
     * <code>awsvpc</code> network modes, exposed container ports are mapped directly
     * to the corresponding host port (for the <code>host</code> network mode) or the
     * attached elastic network interface port (for the <code>awsvpc</code> network
     * mode), so you cannot take advantage of dynamic host port mappings. </p> <p>If
     * the network mode is <code>awsvpc</code>, the task is allocated an elastic
     * network interface, and you must specify a <a>NetworkConfiguration</a> value when
     * you create a service or run a task with the task definition. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <note> <p>Currently, only Amazon ECS-optimized AMIs, other Amazon
     * Linux variants with the <code>ecs-init</code> package, or AWS Fargate
     * infrastructure support the <code>awsvpc</code> network mode. </p> </note> <p>If
     * the network mode is <code>host</code>, you cannot run multiple instantiations of
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
     * you are using the Fargate launch type, the <code>awsvpc</code> network mode is
     * required. If you are using the EC2 launch type, any network mode can be used. If
     * the network mode is set to <code>none</code>, you cannot specify port mappings
     * in your container definitions, and the tasks containers do not have external
     * connectivity. The <code>host</code> and <code>awsvpc</code> network modes offer
     * the highest networking performance for containers because they use the EC2
     * network stack instead of the virtualized network stack provided by the
     * <code>bridge</code> mode.</p> <p>With the <code>host</code> and
     * <code>awsvpc</code> network modes, exposed container ports are mapped directly
     * to the corresponding host port (for the <code>host</code> network mode) or the
     * attached elastic network interface port (for the <code>awsvpc</code> network
     * mode), so you cannot take advantage of dynamic host port mappings. </p> <p>If
     * the network mode is <code>awsvpc</code>, the task is allocated an elastic
     * network interface, and you must specify a <a>NetworkConfiguration</a> value when
     * you create a service or run a task with the task definition. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <note> <p>Currently, only Amazon ECS-optimized AMIs, other Amazon
     * Linux variants with the <code>ecs-init</code> package, or AWS Fargate
     * infrastructure support the <code>awsvpc</code> network mode. </p> </note> <p>If
     * the network mode is <code>host</code>, you cannot run multiple instantiations of
     * the same task on a single container instance when port mappings are used.</p>
     * <p>Docker for Windows uses different network modes than Docker for Linux. When
     * you register a task definition with Windows containers, you must not specify a
     * network mode. If you use the console to register a task definition with Windows
     * containers, you must choose the <code>&lt;default&gt;</code> network mode
     * object. </p> <p>For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#network-settings">Network
     * settings</a> in the <i>Docker run reference</i>.</p>
     */
    inline bool NetworkModeHasBeenSet() const { return m_networkModeHasBeenSet; }

    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, <code>awsvpc</code>, and
     * <code>host</code>. The default Docker network mode is <code>bridge</code>. If
     * you are using the Fargate launch type, the <code>awsvpc</code> network mode is
     * required. If you are using the EC2 launch type, any network mode can be used. If
     * the network mode is set to <code>none</code>, you cannot specify port mappings
     * in your container definitions, and the tasks containers do not have external
     * connectivity. The <code>host</code> and <code>awsvpc</code> network modes offer
     * the highest networking performance for containers because they use the EC2
     * network stack instead of the virtualized network stack provided by the
     * <code>bridge</code> mode.</p> <p>With the <code>host</code> and
     * <code>awsvpc</code> network modes, exposed container ports are mapped directly
     * to the corresponding host port (for the <code>host</code> network mode) or the
     * attached elastic network interface port (for the <code>awsvpc</code> network
     * mode), so you cannot take advantage of dynamic host port mappings. </p> <p>If
     * the network mode is <code>awsvpc</code>, the task is allocated an elastic
     * network interface, and you must specify a <a>NetworkConfiguration</a> value when
     * you create a service or run a task with the task definition. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <note> <p>Currently, only Amazon ECS-optimized AMIs, other Amazon
     * Linux variants with the <code>ecs-init</code> package, or AWS Fargate
     * infrastructure support the <code>awsvpc</code> network mode. </p> </note> <p>If
     * the network mode is <code>host</code>, you cannot run multiple instantiations of
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
     * you are using the Fargate launch type, the <code>awsvpc</code> network mode is
     * required. If you are using the EC2 launch type, any network mode can be used. If
     * the network mode is set to <code>none</code>, you cannot specify port mappings
     * in your container definitions, and the tasks containers do not have external
     * connectivity. The <code>host</code> and <code>awsvpc</code> network modes offer
     * the highest networking performance for containers because they use the EC2
     * network stack instead of the virtualized network stack provided by the
     * <code>bridge</code> mode.</p> <p>With the <code>host</code> and
     * <code>awsvpc</code> network modes, exposed container ports are mapped directly
     * to the corresponding host port (for the <code>host</code> network mode) or the
     * attached elastic network interface port (for the <code>awsvpc</code> network
     * mode), so you cannot take advantage of dynamic host port mappings. </p> <p>If
     * the network mode is <code>awsvpc</code>, the task is allocated an elastic
     * network interface, and you must specify a <a>NetworkConfiguration</a> value when
     * you create a service or run a task with the task definition. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <note> <p>Currently, only Amazon ECS-optimized AMIs, other Amazon
     * Linux variants with the <code>ecs-init</code> package, or AWS Fargate
     * infrastructure support the <code>awsvpc</code> network mode. </p> </note> <p>If
     * the network mode is <code>host</code>, you cannot run multiple instantiations of
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
     * you are using the Fargate launch type, the <code>awsvpc</code> network mode is
     * required. If you are using the EC2 launch type, any network mode can be used. If
     * the network mode is set to <code>none</code>, you cannot specify port mappings
     * in your container definitions, and the tasks containers do not have external
     * connectivity. The <code>host</code> and <code>awsvpc</code> network modes offer
     * the highest networking performance for containers because they use the EC2
     * network stack instead of the virtualized network stack provided by the
     * <code>bridge</code> mode.</p> <p>With the <code>host</code> and
     * <code>awsvpc</code> network modes, exposed container ports are mapped directly
     * to the corresponding host port (for the <code>host</code> network mode) or the
     * attached elastic network interface port (for the <code>awsvpc</code> network
     * mode), so you cannot take advantage of dynamic host port mappings. </p> <p>If
     * the network mode is <code>awsvpc</code>, the task is allocated an elastic
     * network interface, and you must specify a <a>NetworkConfiguration</a> value when
     * you create a service or run a task with the task definition. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <note> <p>Currently, only Amazon ECS-optimized AMIs, other Amazon
     * Linux variants with the <code>ecs-init</code> package, or AWS Fargate
     * infrastructure support the <code>awsvpc</code> network mode. </p> </note> <p>If
     * the network mode is <code>host</code>, you cannot run multiple instantiations of
     * the same task on a single container instance when port mappings are used.</p>
     * <p>Docker for Windows uses different network modes than Docker for Linux. When
     * you register a task definition with Windows containers, you must not specify a
     * network mode. If you use the console to register a task definition with Windows
     * containers, you must choose the <code>&lt;default&gt;</code> network mode
     * object. </p> <p>For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#network-settings">Network
     * settings</a> in the <i>Docker run reference</i>.</p>
     */
    inline RegisterTaskDefinitionRequest& WithNetworkMode(const NetworkMode& value) { SetNetworkMode(value); return *this;}

    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, <code>awsvpc</code>, and
     * <code>host</code>. The default Docker network mode is <code>bridge</code>. If
     * you are using the Fargate launch type, the <code>awsvpc</code> network mode is
     * required. If you are using the EC2 launch type, any network mode can be used. If
     * the network mode is set to <code>none</code>, you cannot specify port mappings
     * in your container definitions, and the tasks containers do not have external
     * connectivity. The <code>host</code> and <code>awsvpc</code> network modes offer
     * the highest networking performance for containers because they use the EC2
     * network stack instead of the virtualized network stack provided by the
     * <code>bridge</code> mode.</p> <p>With the <code>host</code> and
     * <code>awsvpc</code> network modes, exposed container ports are mapped directly
     * to the corresponding host port (for the <code>host</code> network mode) or the
     * attached elastic network interface port (for the <code>awsvpc</code> network
     * mode), so you cannot take advantage of dynamic host port mappings. </p> <p>If
     * the network mode is <code>awsvpc</code>, the task is allocated an elastic
     * network interface, and you must specify a <a>NetworkConfiguration</a> value when
     * you create a service or run a task with the task definition. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <note> <p>Currently, only Amazon ECS-optimized AMIs, other Amazon
     * Linux variants with the <code>ecs-init</code> package, or AWS Fargate
     * infrastructure support the <code>awsvpc</code> network mode. </p> </note> <p>If
     * the network mode is <code>host</code>, you cannot run multiple instantiations of
     * the same task on a single container instance when port mappings are used.</p>
     * <p>Docker for Windows uses different network modes than Docker for Linux. When
     * you register a task definition with Windows containers, you must not specify a
     * network mode. If you use the console to register a task definition with Windows
     * containers, you must choose the <code>&lt;default&gt;</code> network mode
     * object. </p> <p>For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#network-settings">Network
     * settings</a> in the <i>Docker run reference</i>.</p>
     */
    inline RegisterTaskDefinitionRequest& WithNetworkMode(NetworkMode&& value) { SetNetworkMode(std::move(value)); return *this;}


    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task.</p>
     */
    inline const Aws::Vector<ContainerDefinition>& GetContainerDefinitions() const{ return m_containerDefinitions; }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task.</p>
     */
    inline bool ContainerDefinitionsHasBeenSet() const { return m_containerDefinitionsHasBeenSet; }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task.</p>
     */
    inline void SetContainerDefinitions(const Aws::Vector<ContainerDefinition>& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = value; }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task.</p>
     */
    inline void SetContainerDefinitions(Aws::Vector<ContainerDefinition>&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = std::move(value); }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task.</p>
     */
    inline RegisterTaskDefinitionRequest& WithContainerDefinitions(const Aws::Vector<ContainerDefinition>& value) { SetContainerDefinitions(value); return *this;}

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task.</p>
     */
    inline RegisterTaskDefinitionRequest& WithContainerDefinitions(Aws::Vector<ContainerDefinition>&& value) { SetContainerDefinitions(std::move(value)); return *this;}

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task.</p>
     */
    inline RegisterTaskDefinitionRequest& AddContainerDefinitions(const ContainerDefinition& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.push_back(value); return *this; }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task.</p>
     */
    inline RegisterTaskDefinitionRequest& AddContainerDefinitions(ContainerDefinition&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of volume definitions in JSON format that containers in your task may
     * use.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>A list of volume definitions in JSON format that containers in your task may
     * use.</p>
     */
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }

    /**
     * <p>A list of volume definitions in JSON format that containers in your task may
     * use.</p>
     */
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>A list of volume definitions in JSON format that containers in your task may
     * use.</p>
     */
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }

    /**
     * <p>A list of volume definitions in JSON format that containers in your task may
     * use.</p>
     */
    inline RegisterTaskDefinitionRequest& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}

    /**
     * <p>A list of volume definitions in JSON format that containers in your task may
     * use.</p>
     */
    inline RegisterTaskDefinitionRequest& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p>A list of volume definitions in JSON format that containers in your task may
     * use.</p>
     */
    inline RegisterTaskDefinitionRequest& AddVolumes(const Volume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>A list of volume definitions in JSON format that containers in your task may
     * use.</p>
     */
    inline RegisterTaskDefinitionRequest& AddVolumes(Volume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * a maximum of 10 constraints per task (this limit includes constraints in the
     * task definition and those specified at runtime).</p>
     */
    inline const Aws::Vector<TaskDefinitionPlacementConstraint>& GetPlacementConstraints() const{ return m_placementConstraints; }

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * a maximum of 10 constraints per task (this limit includes constraints in the
     * task definition and those specified at runtime).</p>
     */
    inline bool PlacementConstraintsHasBeenSet() const { return m_placementConstraintsHasBeenSet; }

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * a maximum of 10 constraints per task (this limit includes constraints in the
     * task definition and those specified at runtime).</p>
     */
    inline void SetPlacementConstraints(const Aws::Vector<TaskDefinitionPlacementConstraint>& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = value; }

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * a maximum of 10 constraints per task (this limit includes constraints in the
     * task definition and those specified at runtime).</p>
     */
    inline void SetPlacementConstraints(Aws::Vector<TaskDefinitionPlacementConstraint>&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = std::move(value); }

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * a maximum of 10 constraints per task (this limit includes constraints in the
     * task definition and those specified at runtime).</p>
     */
    inline RegisterTaskDefinitionRequest& WithPlacementConstraints(const Aws::Vector<TaskDefinitionPlacementConstraint>& value) { SetPlacementConstraints(value); return *this;}

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * a maximum of 10 constraints per task (this limit includes constraints in the
     * task definition and those specified at runtime).</p>
     */
    inline RegisterTaskDefinitionRequest& WithPlacementConstraints(Aws::Vector<TaskDefinitionPlacementConstraint>&& value) { SetPlacementConstraints(std::move(value)); return *this;}

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * a maximum of 10 constraints per task (this limit includes constraints in the
     * task definition and those specified at runtime).</p>
     */
    inline RegisterTaskDefinitionRequest& AddPlacementConstraints(const TaskDefinitionPlacementConstraint& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(value); return *this; }

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * a maximum of 10 constraints per task (this limit includes constraints in the
     * task definition and those specified at runtime).</p>
     */
    inline RegisterTaskDefinitionRequest& AddPlacementConstraints(TaskDefinitionPlacementConstraint&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(std::move(value)); return *this; }


    /**
     * <p>The launch type required by the task. If no value is specified, it defaults
     * to <code>EC2</code>.</p>
     */
    inline const Aws::Vector<Compatibility>& GetRequiresCompatibilities() const{ return m_requiresCompatibilities; }

    /**
     * <p>The launch type required by the task. If no value is specified, it defaults
     * to <code>EC2</code>.</p>
     */
    inline bool RequiresCompatibilitiesHasBeenSet() const { return m_requiresCompatibilitiesHasBeenSet; }

    /**
     * <p>The launch type required by the task. If no value is specified, it defaults
     * to <code>EC2</code>.</p>
     */
    inline void SetRequiresCompatibilities(const Aws::Vector<Compatibility>& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities = value; }

    /**
     * <p>The launch type required by the task. If no value is specified, it defaults
     * to <code>EC2</code>.</p>
     */
    inline void SetRequiresCompatibilities(Aws::Vector<Compatibility>&& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities = std::move(value); }

    /**
     * <p>The launch type required by the task. If no value is specified, it defaults
     * to <code>EC2</code>.</p>
     */
    inline RegisterTaskDefinitionRequest& WithRequiresCompatibilities(const Aws::Vector<Compatibility>& value) { SetRequiresCompatibilities(value); return *this;}

    /**
     * <p>The launch type required by the task. If no value is specified, it defaults
     * to <code>EC2</code>.</p>
     */
    inline RegisterTaskDefinitionRequest& WithRequiresCompatibilities(Aws::Vector<Compatibility>&& value) { SetRequiresCompatibilities(std::move(value)); return *this;}

    /**
     * <p>The launch type required by the task. If no value is specified, it defaults
     * to <code>EC2</code>.</p>
     */
    inline RegisterTaskDefinitionRequest& AddRequiresCompatibilities(const Compatibility& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities.push_back(value); return *this; }

    /**
     * <p>The launch type required by the task. If no value is specified, it defaults
     * to <code>EC2</code>.</p>
     */
    inline RegisterTaskDefinitionRequest& AddRequiresCompatibilities(Compatibility&& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of CPU units used by the task. It can be expressed as an integer
     * using CPU units, for example <code>1024</code>, or as a string using vCPUs, for
     * example <code>1 vCPU</code> or <code>1 vcpu</code>, in a task definition. String
     * values are converted to an integer indicating the CPU units when the task
     * definition is registered.</p> <note> <p>Task-level CPU and memory parameters are
     * ignored for Windows containers. We recommend specifying container-level
     * resources for Windows containers.</p> </note> <p>If you are using the EC2 launch
     * type, this field is optional. Supported values are between <code>128</code> CPU
     * units (<code>0.125</code> vCPUs) and <code>10240</code> CPU units
     * (<code>10</code> vCPUs).</p> <p>If you are using the Fargate launch type, this
     * field is required and you must use one of the following values, which determines
     * your range of supported values for the <code>memory</code> parameter:</p> <ul>
     * <li> <p>256 (.25 vCPU) - Available <code>memory</code> values: 512 (0.5 GB),
     * 1024 (1 GB), 2048 (2 GB)</p> </li> <li> <p>512 (.5 vCPU) - Available
     * <code>memory</code> values: 1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB)</p> </li> <li> <p>1024 (1 vCPU) - Available <code>memory</code> values: 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB)</p> </li> <li> <p>2048 (2 vCPU) - Available <code>memory</code> values:
     * Between 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB)</p> </li>
     * <li> <p>4096 (4 vCPU) - Available <code>memory</code> values: Between 8192 (8
     * GB) and 30720 (30 GB) in increments of 1024 (1 GB)</p> </li> </ul>
     */
    inline const Aws::String& GetCpu() const{ return m_cpu; }

    /**
     * <p>The number of CPU units used by the task. It can be expressed as an integer
     * using CPU units, for example <code>1024</code>, or as a string using vCPUs, for
     * example <code>1 vCPU</code> or <code>1 vcpu</code>, in a task definition. String
     * values are converted to an integer indicating the CPU units when the task
     * definition is registered.</p> <note> <p>Task-level CPU and memory parameters are
     * ignored for Windows containers. We recommend specifying container-level
     * resources for Windows containers.</p> </note> <p>If you are using the EC2 launch
     * type, this field is optional. Supported values are between <code>128</code> CPU
     * units (<code>0.125</code> vCPUs) and <code>10240</code> CPU units
     * (<code>10</code> vCPUs).</p> <p>If you are using the Fargate launch type, this
     * field is required and you must use one of the following values, which determines
     * your range of supported values for the <code>memory</code> parameter:</p> <ul>
     * <li> <p>256 (.25 vCPU) - Available <code>memory</code> values: 512 (0.5 GB),
     * 1024 (1 GB), 2048 (2 GB)</p> </li> <li> <p>512 (.5 vCPU) - Available
     * <code>memory</code> values: 1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB)</p> </li> <li> <p>1024 (1 vCPU) - Available <code>memory</code> values: 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB)</p> </li> <li> <p>2048 (2 vCPU) - Available <code>memory</code> values:
     * Between 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB)</p> </li>
     * <li> <p>4096 (4 vCPU) - Available <code>memory</code> values: Between 8192 (8
     * GB) and 30720 (30 GB) in increments of 1024 (1 GB)</p> </li> </ul>
     */
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }

    /**
     * <p>The number of CPU units used by the task. It can be expressed as an integer
     * using CPU units, for example <code>1024</code>, or as a string using vCPUs, for
     * example <code>1 vCPU</code> or <code>1 vcpu</code>, in a task definition. String
     * values are converted to an integer indicating the CPU units when the task
     * definition is registered.</p> <note> <p>Task-level CPU and memory parameters are
     * ignored for Windows containers. We recommend specifying container-level
     * resources for Windows containers.</p> </note> <p>If you are using the EC2 launch
     * type, this field is optional. Supported values are between <code>128</code> CPU
     * units (<code>0.125</code> vCPUs) and <code>10240</code> CPU units
     * (<code>10</code> vCPUs).</p> <p>If you are using the Fargate launch type, this
     * field is required and you must use one of the following values, which determines
     * your range of supported values for the <code>memory</code> parameter:</p> <ul>
     * <li> <p>256 (.25 vCPU) - Available <code>memory</code> values: 512 (0.5 GB),
     * 1024 (1 GB), 2048 (2 GB)</p> </li> <li> <p>512 (.5 vCPU) - Available
     * <code>memory</code> values: 1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB)</p> </li> <li> <p>1024 (1 vCPU) - Available <code>memory</code> values: 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB)</p> </li> <li> <p>2048 (2 vCPU) - Available <code>memory</code> values:
     * Between 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB)</p> </li>
     * <li> <p>4096 (4 vCPU) - Available <code>memory</code> values: Between 8192 (8
     * GB) and 30720 (30 GB) in increments of 1024 (1 GB)</p> </li> </ul>
     */
    inline void SetCpu(const Aws::String& value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /**
     * <p>The number of CPU units used by the task. It can be expressed as an integer
     * using CPU units, for example <code>1024</code>, or as a string using vCPUs, for
     * example <code>1 vCPU</code> or <code>1 vcpu</code>, in a task definition. String
     * values are converted to an integer indicating the CPU units when the task
     * definition is registered.</p> <note> <p>Task-level CPU and memory parameters are
     * ignored for Windows containers. We recommend specifying container-level
     * resources for Windows containers.</p> </note> <p>If you are using the EC2 launch
     * type, this field is optional. Supported values are between <code>128</code> CPU
     * units (<code>0.125</code> vCPUs) and <code>10240</code> CPU units
     * (<code>10</code> vCPUs).</p> <p>If you are using the Fargate launch type, this
     * field is required and you must use one of the following values, which determines
     * your range of supported values for the <code>memory</code> parameter:</p> <ul>
     * <li> <p>256 (.25 vCPU) - Available <code>memory</code> values: 512 (0.5 GB),
     * 1024 (1 GB), 2048 (2 GB)</p> </li> <li> <p>512 (.5 vCPU) - Available
     * <code>memory</code> values: 1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB)</p> </li> <li> <p>1024 (1 vCPU) - Available <code>memory</code> values: 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB)</p> </li> <li> <p>2048 (2 vCPU) - Available <code>memory</code> values:
     * Between 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB)</p> </li>
     * <li> <p>4096 (4 vCPU) - Available <code>memory</code> values: Between 8192 (8
     * GB) and 30720 (30 GB) in increments of 1024 (1 GB)</p> </li> </ul>
     */
    inline void SetCpu(Aws::String&& value) { m_cpuHasBeenSet = true; m_cpu = std::move(value); }

    /**
     * <p>The number of CPU units used by the task. It can be expressed as an integer
     * using CPU units, for example <code>1024</code>, or as a string using vCPUs, for
     * example <code>1 vCPU</code> or <code>1 vcpu</code>, in a task definition. String
     * values are converted to an integer indicating the CPU units when the task
     * definition is registered.</p> <note> <p>Task-level CPU and memory parameters are
     * ignored for Windows containers. We recommend specifying container-level
     * resources for Windows containers.</p> </note> <p>If you are using the EC2 launch
     * type, this field is optional. Supported values are between <code>128</code> CPU
     * units (<code>0.125</code> vCPUs) and <code>10240</code> CPU units
     * (<code>10</code> vCPUs).</p> <p>If you are using the Fargate launch type, this
     * field is required and you must use one of the following values, which determines
     * your range of supported values for the <code>memory</code> parameter:</p> <ul>
     * <li> <p>256 (.25 vCPU) - Available <code>memory</code> values: 512 (0.5 GB),
     * 1024 (1 GB), 2048 (2 GB)</p> </li> <li> <p>512 (.5 vCPU) - Available
     * <code>memory</code> values: 1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB)</p> </li> <li> <p>1024 (1 vCPU) - Available <code>memory</code> values: 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB)</p> </li> <li> <p>2048 (2 vCPU) - Available <code>memory</code> values:
     * Between 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB)</p> </li>
     * <li> <p>4096 (4 vCPU) - Available <code>memory</code> values: Between 8192 (8
     * GB) and 30720 (30 GB) in increments of 1024 (1 GB)</p> </li> </ul>
     */
    inline void SetCpu(const char* value) { m_cpuHasBeenSet = true; m_cpu.assign(value); }

    /**
     * <p>The number of CPU units used by the task. It can be expressed as an integer
     * using CPU units, for example <code>1024</code>, or as a string using vCPUs, for
     * example <code>1 vCPU</code> or <code>1 vcpu</code>, in a task definition. String
     * values are converted to an integer indicating the CPU units when the task
     * definition is registered.</p> <note> <p>Task-level CPU and memory parameters are
     * ignored for Windows containers. We recommend specifying container-level
     * resources for Windows containers.</p> </note> <p>If you are using the EC2 launch
     * type, this field is optional. Supported values are between <code>128</code> CPU
     * units (<code>0.125</code> vCPUs) and <code>10240</code> CPU units
     * (<code>10</code> vCPUs).</p> <p>If you are using the Fargate launch type, this
     * field is required and you must use one of the following values, which determines
     * your range of supported values for the <code>memory</code> parameter:</p> <ul>
     * <li> <p>256 (.25 vCPU) - Available <code>memory</code> values: 512 (0.5 GB),
     * 1024 (1 GB), 2048 (2 GB)</p> </li> <li> <p>512 (.5 vCPU) - Available
     * <code>memory</code> values: 1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB)</p> </li> <li> <p>1024 (1 vCPU) - Available <code>memory</code> values: 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB)</p> </li> <li> <p>2048 (2 vCPU) - Available <code>memory</code> values:
     * Between 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB)</p> </li>
     * <li> <p>4096 (4 vCPU) - Available <code>memory</code> values: Between 8192 (8
     * GB) and 30720 (30 GB) in increments of 1024 (1 GB)</p> </li> </ul>
     */
    inline RegisterTaskDefinitionRequest& WithCpu(const Aws::String& value) { SetCpu(value); return *this;}

    /**
     * <p>The number of CPU units used by the task. It can be expressed as an integer
     * using CPU units, for example <code>1024</code>, or as a string using vCPUs, for
     * example <code>1 vCPU</code> or <code>1 vcpu</code>, in a task definition. String
     * values are converted to an integer indicating the CPU units when the task
     * definition is registered.</p> <note> <p>Task-level CPU and memory parameters are
     * ignored for Windows containers. We recommend specifying container-level
     * resources for Windows containers.</p> </note> <p>If you are using the EC2 launch
     * type, this field is optional. Supported values are between <code>128</code> CPU
     * units (<code>0.125</code> vCPUs) and <code>10240</code> CPU units
     * (<code>10</code> vCPUs).</p> <p>If you are using the Fargate launch type, this
     * field is required and you must use one of the following values, which determines
     * your range of supported values for the <code>memory</code> parameter:</p> <ul>
     * <li> <p>256 (.25 vCPU) - Available <code>memory</code> values: 512 (0.5 GB),
     * 1024 (1 GB), 2048 (2 GB)</p> </li> <li> <p>512 (.5 vCPU) - Available
     * <code>memory</code> values: 1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB)</p> </li> <li> <p>1024 (1 vCPU) - Available <code>memory</code> values: 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB)</p> </li> <li> <p>2048 (2 vCPU) - Available <code>memory</code> values:
     * Between 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB)</p> </li>
     * <li> <p>4096 (4 vCPU) - Available <code>memory</code> values: Between 8192 (8
     * GB) and 30720 (30 GB) in increments of 1024 (1 GB)</p> </li> </ul>
     */
    inline RegisterTaskDefinitionRequest& WithCpu(Aws::String&& value) { SetCpu(std::move(value)); return *this;}

    /**
     * <p>The number of CPU units used by the task. It can be expressed as an integer
     * using CPU units, for example <code>1024</code>, or as a string using vCPUs, for
     * example <code>1 vCPU</code> or <code>1 vcpu</code>, in a task definition. String
     * values are converted to an integer indicating the CPU units when the task
     * definition is registered.</p> <note> <p>Task-level CPU and memory parameters are
     * ignored for Windows containers. We recommend specifying container-level
     * resources for Windows containers.</p> </note> <p>If you are using the EC2 launch
     * type, this field is optional. Supported values are between <code>128</code> CPU
     * units (<code>0.125</code> vCPUs) and <code>10240</code> CPU units
     * (<code>10</code> vCPUs).</p> <p>If you are using the Fargate launch type, this
     * field is required and you must use one of the following values, which determines
     * your range of supported values for the <code>memory</code> parameter:</p> <ul>
     * <li> <p>256 (.25 vCPU) - Available <code>memory</code> values: 512 (0.5 GB),
     * 1024 (1 GB), 2048 (2 GB)</p> </li> <li> <p>512 (.5 vCPU) - Available
     * <code>memory</code> values: 1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB)</p> </li> <li> <p>1024 (1 vCPU) - Available <code>memory</code> values: 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB)</p> </li> <li> <p>2048 (2 vCPU) - Available <code>memory</code> values:
     * Between 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB)</p> </li>
     * <li> <p>4096 (4 vCPU) - Available <code>memory</code> values: Between 8192 (8
     * GB) and 30720 (30 GB) in increments of 1024 (1 GB)</p> </li> </ul>
     */
    inline RegisterTaskDefinitionRequest& WithCpu(const char* value) { SetCpu(value); return *this;}


    /**
     * <p>The amount of memory (in MiB) used by the task. It can be expressed as an
     * integer using MiB, for example <code>1024</code>, or as a string using GB, for
     * example <code>1GB</code> or <code>1 GB</code>, in a task definition. String
     * values are converted to an integer indicating the MiB when the task definition
     * is registered.</p> <note> <p>Task-level CPU and memory parameters are ignored
     * for Windows containers. We recommend specifying container-level resources for
     * Windows containers.</p> </note> <p>If using the EC2 launch type, this field is
     * optional.</p> <p>If using the Fargate launch type, this field is required and
     * you must use one of the following values, which determines your range of
     * supported values for the <code>cpu</code> parameter:</p> <ul> <li> <p>512 (0.5
     * GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code> values: 256 (.25
     * vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4 GB) -
     * Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2 GB),
     * 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB) -
     * Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between 4096
     * (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and
     * 30720 (30 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 4096 (4 vCPU)</p> </li> </ul>
     */
    inline const Aws::String& GetMemory() const{ return m_memory; }

    /**
     * <p>The amount of memory (in MiB) used by the task. It can be expressed as an
     * integer using MiB, for example <code>1024</code>, or as a string using GB, for
     * example <code>1GB</code> or <code>1 GB</code>, in a task definition. String
     * values are converted to an integer indicating the MiB when the task definition
     * is registered.</p> <note> <p>Task-level CPU and memory parameters are ignored
     * for Windows containers. We recommend specifying container-level resources for
     * Windows containers.</p> </note> <p>If using the EC2 launch type, this field is
     * optional.</p> <p>If using the Fargate launch type, this field is required and
     * you must use one of the following values, which determines your range of
     * supported values for the <code>cpu</code> parameter:</p> <ul> <li> <p>512 (0.5
     * GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code> values: 256 (.25
     * vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4 GB) -
     * Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2 GB),
     * 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB) -
     * Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between 4096
     * (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and
     * 30720 (30 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 4096 (4 vCPU)</p> </li> </ul>
     */
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }

    /**
     * <p>The amount of memory (in MiB) used by the task. It can be expressed as an
     * integer using MiB, for example <code>1024</code>, or as a string using GB, for
     * example <code>1GB</code> or <code>1 GB</code>, in a task definition. String
     * values are converted to an integer indicating the MiB when the task definition
     * is registered.</p> <note> <p>Task-level CPU and memory parameters are ignored
     * for Windows containers. We recommend specifying container-level resources for
     * Windows containers.</p> </note> <p>If using the EC2 launch type, this field is
     * optional.</p> <p>If using the Fargate launch type, this field is required and
     * you must use one of the following values, which determines your range of
     * supported values for the <code>cpu</code> parameter:</p> <ul> <li> <p>512 (0.5
     * GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code> values: 256 (.25
     * vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4 GB) -
     * Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2 GB),
     * 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB) -
     * Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between 4096
     * (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and
     * 30720 (30 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 4096 (4 vCPU)</p> </li> </ul>
     */
    inline void SetMemory(const Aws::String& value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p>The amount of memory (in MiB) used by the task. It can be expressed as an
     * integer using MiB, for example <code>1024</code>, or as a string using GB, for
     * example <code>1GB</code> or <code>1 GB</code>, in a task definition. String
     * values are converted to an integer indicating the MiB when the task definition
     * is registered.</p> <note> <p>Task-level CPU and memory parameters are ignored
     * for Windows containers. We recommend specifying container-level resources for
     * Windows containers.</p> </note> <p>If using the EC2 launch type, this field is
     * optional.</p> <p>If using the Fargate launch type, this field is required and
     * you must use one of the following values, which determines your range of
     * supported values for the <code>cpu</code> parameter:</p> <ul> <li> <p>512 (0.5
     * GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code> values: 256 (.25
     * vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4 GB) -
     * Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2 GB),
     * 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB) -
     * Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between 4096
     * (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and
     * 30720 (30 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 4096 (4 vCPU)</p> </li> </ul>
     */
    inline void SetMemory(Aws::String&& value) { m_memoryHasBeenSet = true; m_memory = std::move(value); }

    /**
     * <p>The amount of memory (in MiB) used by the task. It can be expressed as an
     * integer using MiB, for example <code>1024</code>, or as a string using GB, for
     * example <code>1GB</code> or <code>1 GB</code>, in a task definition. String
     * values are converted to an integer indicating the MiB when the task definition
     * is registered.</p> <note> <p>Task-level CPU and memory parameters are ignored
     * for Windows containers. We recommend specifying container-level resources for
     * Windows containers.</p> </note> <p>If using the EC2 launch type, this field is
     * optional.</p> <p>If using the Fargate launch type, this field is required and
     * you must use one of the following values, which determines your range of
     * supported values for the <code>cpu</code> parameter:</p> <ul> <li> <p>512 (0.5
     * GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code> values: 256 (.25
     * vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4 GB) -
     * Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2 GB),
     * 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB) -
     * Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between 4096
     * (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and
     * 30720 (30 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 4096 (4 vCPU)</p> </li> </ul>
     */
    inline void SetMemory(const char* value) { m_memoryHasBeenSet = true; m_memory.assign(value); }

    /**
     * <p>The amount of memory (in MiB) used by the task. It can be expressed as an
     * integer using MiB, for example <code>1024</code>, or as a string using GB, for
     * example <code>1GB</code> or <code>1 GB</code>, in a task definition. String
     * values are converted to an integer indicating the MiB when the task definition
     * is registered.</p> <note> <p>Task-level CPU and memory parameters are ignored
     * for Windows containers. We recommend specifying container-level resources for
     * Windows containers.</p> </note> <p>If using the EC2 launch type, this field is
     * optional.</p> <p>If using the Fargate launch type, this field is required and
     * you must use one of the following values, which determines your range of
     * supported values for the <code>cpu</code> parameter:</p> <ul> <li> <p>512 (0.5
     * GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code> values: 256 (.25
     * vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4 GB) -
     * Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2 GB),
     * 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB) -
     * Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between 4096
     * (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and
     * 30720 (30 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 4096 (4 vCPU)</p> </li> </ul>
     */
    inline RegisterTaskDefinitionRequest& WithMemory(const Aws::String& value) { SetMemory(value); return *this;}

    /**
     * <p>The amount of memory (in MiB) used by the task. It can be expressed as an
     * integer using MiB, for example <code>1024</code>, or as a string using GB, for
     * example <code>1GB</code> or <code>1 GB</code>, in a task definition. String
     * values are converted to an integer indicating the MiB when the task definition
     * is registered.</p> <note> <p>Task-level CPU and memory parameters are ignored
     * for Windows containers. We recommend specifying container-level resources for
     * Windows containers.</p> </note> <p>If using the EC2 launch type, this field is
     * optional.</p> <p>If using the Fargate launch type, this field is required and
     * you must use one of the following values, which determines your range of
     * supported values for the <code>cpu</code> parameter:</p> <ul> <li> <p>512 (0.5
     * GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code> values: 256 (.25
     * vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4 GB) -
     * Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2 GB),
     * 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB) -
     * Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between 4096
     * (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and
     * 30720 (30 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 4096 (4 vCPU)</p> </li> </ul>
     */
    inline RegisterTaskDefinitionRequest& WithMemory(Aws::String&& value) { SetMemory(std::move(value)); return *this;}

    /**
     * <p>The amount of memory (in MiB) used by the task. It can be expressed as an
     * integer using MiB, for example <code>1024</code>, or as a string using GB, for
     * example <code>1GB</code> or <code>1 GB</code>, in a task definition. String
     * values are converted to an integer indicating the MiB when the task definition
     * is registered.</p> <note> <p>Task-level CPU and memory parameters are ignored
     * for Windows containers. We recommend specifying container-level resources for
     * Windows containers.</p> </note> <p>If using the EC2 launch type, this field is
     * optional.</p> <p>If using the Fargate launch type, this field is required and
     * you must use one of the following values, which determines your range of
     * supported values for the <code>cpu</code> parameter:</p> <ul> <li> <p>512 (0.5
     * GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code> values: 256 (.25
     * vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4 GB) -
     * Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2 GB),
     * 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB) -
     * Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between 4096
     * (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and
     * 30720 (30 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 4096 (4 vCPU)</p> </li> </ul>
     */
    inline RegisterTaskDefinitionRequest& WithMemory(const char* value) { SetMemory(value); return *this;}


    /**
     * <p>The metadata that you apply to the task definition to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define. Tag keys can have a maximum character length of 128 characters, and
     * tag values can have a maximum length of 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata that you apply to the task definition to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define. Tag keys can have a maximum character length of 128 characters, and
     * tag values can have a maximum length of 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata that you apply to the task definition to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define. Tag keys can have a maximum character length of 128 characters, and
     * tag values can have a maximum length of 256 characters.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata that you apply to the task definition to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define. Tag keys can have a maximum character length of 128 characters, and
     * tag values can have a maximum length of 256 characters.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata that you apply to the task definition to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define. Tag keys can have a maximum character length of 128 characters, and
     * tag values can have a maximum length of 256 characters.</p>
     */
    inline RegisterTaskDefinitionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata that you apply to the task definition to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define. Tag keys can have a maximum character length of 128 characters, and
     * tag values can have a maximum length of 256 characters.</p>
     */
    inline RegisterTaskDefinitionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata that you apply to the task definition to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define. Tag keys can have a maximum character length of 128 characters, and
     * tag values can have a maximum length of 256 characters.</p>
     */
    inline RegisterTaskDefinitionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The metadata that you apply to the task definition to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define. Tag keys can have a maximum character length of 128 characters, and
     * tag values can have a maximum length of 256 characters.</p>
     */
    inline RegisterTaskDefinitionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. If <code>host</code> is specified,
     * then all containers within the tasks that specified the <code>host</code> PID
     * mode on the same container instance share the same IPC resources with the host
     * Amazon EC2 instance. If <code>task</code> is specified, all containers within
     * the specified task share the same process namespace. If no value is specified,
     * the default is a private namespace. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the <i>Docker run reference</i>.</p> <p>If the <code>host</code>
     * PID mode is used, be aware that there is a heightened risk of undesired process
     * namespace expose. For more information, see <a
     * href="https://docs.docker.com/engine/security/security/">Docker
     * security</a>.</p> <note> <p>This parameter is not supported for Windows
     * containers or tasks using the Fargate launch type.</p> </note>
     */
    inline const PidMode& GetPidMode() const{ return m_pidMode; }

    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. If <code>host</code> is specified,
     * then all containers within the tasks that specified the <code>host</code> PID
     * mode on the same container instance share the same IPC resources with the host
     * Amazon EC2 instance. If <code>task</code> is specified, all containers within
     * the specified task share the same process namespace. If no value is specified,
     * the default is a private namespace. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the <i>Docker run reference</i>.</p> <p>If the <code>host</code>
     * PID mode is used, be aware that there is a heightened risk of undesired process
     * namespace expose. For more information, see <a
     * href="https://docs.docker.com/engine/security/security/">Docker
     * security</a>.</p> <note> <p>This parameter is not supported for Windows
     * containers or tasks using the Fargate launch type.</p> </note>
     */
    inline bool PidModeHasBeenSet() const { return m_pidModeHasBeenSet; }

    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. If <code>host</code> is specified,
     * then all containers within the tasks that specified the <code>host</code> PID
     * mode on the same container instance share the same IPC resources with the host
     * Amazon EC2 instance. If <code>task</code> is specified, all containers within
     * the specified task share the same process namespace. If no value is specified,
     * the default is a private namespace. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the <i>Docker run reference</i>.</p> <p>If the <code>host</code>
     * PID mode is used, be aware that there is a heightened risk of undesired process
     * namespace expose. For more information, see <a
     * href="https://docs.docker.com/engine/security/security/">Docker
     * security</a>.</p> <note> <p>This parameter is not supported for Windows
     * containers or tasks using the Fargate launch type.</p> </note>
     */
    inline void SetPidMode(const PidMode& value) { m_pidModeHasBeenSet = true; m_pidMode = value; }

    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. If <code>host</code> is specified,
     * then all containers within the tasks that specified the <code>host</code> PID
     * mode on the same container instance share the same IPC resources with the host
     * Amazon EC2 instance. If <code>task</code> is specified, all containers within
     * the specified task share the same process namespace. If no value is specified,
     * the default is a private namespace. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the <i>Docker run reference</i>.</p> <p>If the <code>host</code>
     * PID mode is used, be aware that there is a heightened risk of undesired process
     * namespace expose. For more information, see <a
     * href="https://docs.docker.com/engine/security/security/">Docker
     * security</a>.</p> <note> <p>This parameter is not supported for Windows
     * containers or tasks using the Fargate launch type.</p> </note>
     */
    inline void SetPidMode(PidMode&& value) { m_pidModeHasBeenSet = true; m_pidMode = std::move(value); }

    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. If <code>host</code> is specified,
     * then all containers within the tasks that specified the <code>host</code> PID
     * mode on the same container instance share the same IPC resources with the host
     * Amazon EC2 instance. If <code>task</code> is specified, all containers within
     * the specified task share the same process namespace. If no value is specified,
     * the default is a private namespace. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the <i>Docker run reference</i>.</p> <p>If the <code>host</code>
     * PID mode is used, be aware that there is a heightened risk of undesired process
     * namespace expose. For more information, see <a
     * href="https://docs.docker.com/engine/security/security/">Docker
     * security</a>.</p> <note> <p>This parameter is not supported for Windows
     * containers or tasks using the Fargate launch type.</p> </note>
     */
    inline RegisterTaskDefinitionRequest& WithPidMode(const PidMode& value) { SetPidMode(value); return *this;}

    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. If <code>host</code> is specified,
     * then all containers within the tasks that specified the <code>host</code> PID
     * mode on the same container instance share the same IPC resources with the host
     * Amazon EC2 instance. If <code>task</code> is specified, all containers within
     * the specified task share the same process namespace. If no value is specified,
     * the default is a private namespace. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the <i>Docker run reference</i>.</p> <p>If the <code>host</code>
     * PID mode is used, be aware that there is a heightened risk of undesired process
     * namespace expose. For more information, see <a
     * href="https://docs.docker.com/engine/security/security/">Docker
     * security</a>.</p> <note> <p>This parameter is not supported for Windows
     * containers or tasks using the Fargate launch type.</p> </note>
     */
    inline RegisterTaskDefinitionRequest& WithPidMode(PidMode&& value) { SetPidMode(std::move(value)); return *this;}


    /**
     * <p>The IPC resource namespace to use for the containers in the task. The valid
     * values are <code>host</code>, <code>task</code>, or <code>none</code>. If
     * <code>host</code> is specified, then all containers within the tasks that
     * specified the <code>host</code> IPC mode on the same container instance share
     * the same IPC resources with the host Amazon EC2 instance. If <code>task</code>
     * is specified, all containers within the specified task share the same IPC
     * resources. If <code>none</code> is specified, then IPC resources within the
     * containers of a task are private and not shared with other containers in a task
     * or on the container instance. If no value is specified, then the IPC resource
     * namespace sharing depends on the Docker daemon setting on the container
     * instance. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#ipc-settings---ipc">IPC
     * settings</a> in the <i>Docker run reference</i>.</p> <p>If the <code>host</code>
     * IPC mode is used, be aware that there is a heightened risk of undesired IPC
     * namespace expose. For more information, see <a
     * href="https://docs.docker.com/engine/security/security/">Docker
     * security</a>.</p> <p>If you are setting namespaced kernel parameters using
     * <code>systemControls</code> for the containers in the task, the following will
     * apply to your IPC resource namespace. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html">System
     * Controls</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     * <ul> <li> <p>For tasks that use the <code>host</code> IPC mode, IPC namespace
     * related <code>systemControls</code> are not supported.</p> </li> <li> <p>For
     * tasks that use the <code>task</code> IPC mode, IPC namespace related
     * <code>systemControls</code> will apply to all containers within a task.</p>
     * </li> </ul> <note> <p>This parameter is not supported for Windows containers or
     * tasks using the Fargate launch type.</p> </note>
     */
    inline const IpcMode& GetIpcMode() const{ return m_ipcMode; }

    /**
     * <p>The IPC resource namespace to use for the containers in the task. The valid
     * values are <code>host</code>, <code>task</code>, or <code>none</code>. If
     * <code>host</code> is specified, then all containers within the tasks that
     * specified the <code>host</code> IPC mode on the same container instance share
     * the same IPC resources with the host Amazon EC2 instance. If <code>task</code>
     * is specified, all containers within the specified task share the same IPC
     * resources. If <code>none</code> is specified, then IPC resources within the
     * containers of a task are private and not shared with other containers in a task
     * or on the container instance. If no value is specified, then the IPC resource
     * namespace sharing depends on the Docker daemon setting on the container
     * instance. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#ipc-settings---ipc">IPC
     * settings</a> in the <i>Docker run reference</i>.</p> <p>If the <code>host</code>
     * IPC mode is used, be aware that there is a heightened risk of undesired IPC
     * namespace expose. For more information, see <a
     * href="https://docs.docker.com/engine/security/security/">Docker
     * security</a>.</p> <p>If you are setting namespaced kernel parameters using
     * <code>systemControls</code> for the containers in the task, the following will
     * apply to your IPC resource namespace. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html">System
     * Controls</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     * <ul> <li> <p>For tasks that use the <code>host</code> IPC mode, IPC namespace
     * related <code>systemControls</code> are not supported.</p> </li> <li> <p>For
     * tasks that use the <code>task</code> IPC mode, IPC namespace related
     * <code>systemControls</code> will apply to all containers within a task.</p>
     * </li> </ul> <note> <p>This parameter is not supported for Windows containers or
     * tasks using the Fargate launch type.</p> </note>
     */
    inline bool IpcModeHasBeenSet() const { return m_ipcModeHasBeenSet; }

    /**
     * <p>The IPC resource namespace to use for the containers in the task. The valid
     * values are <code>host</code>, <code>task</code>, or <code>none</code>. If
     * <code>host</code> is specified, then all containers within the tasks that
     * specified the <code>host</code> IPC mode on the same container instance share
     * the same IPC resources with the host Amazon EC2 instance. If <code>task</code>
     * is specified, all containers within the specified task share the same IPC
     * resources. If <code>none</code> is specified, then IPC resources within the
     * containers of a task are private and not shared with other containers in a task
     * or on the container instance. If no value is specified, then the IPC resource
     * namespace sharing depends on the Docker daemon setting on the container
     * instance. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#ipc-settings---ipc">IPC
     * settings</a> in the <i>Docker run reference</i>.</p> <p>If the <code>host</code>
     * IPC mode is used, be aware that there is a heightened risk of undesired IPC
     * namespace expose. For more information, see <a
     * href="https://docs.docker.com/engine/security/security/">Docker
     * security</a>.</p> <p>If you are setting namespaced kernel parameters using
     * <code>systemControls</code> for the containers in the task, the following will
     * apply to your IPC resource namespace. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html">System
     * Controls</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     * <ul> <li> <p>For tasks that use the <code>host</code> IPC mode, IPC namespace
     * related <code>systemControls</code> are not supported.</p> </li> <li> <p>For
     * tasks that use the <code>task</code> IPC mode, IPC namespace related
     * <code>systemControls</code> will apply to all containers within a task.</p>
     * </li> </ul> <note> <p>This parameter is not supported for Windows containers or
     * tasks using the Fargate launch type.</p> </note>
     */
    inline void SetIpcMode(const IpcMode& value) { m_ipcModeHasBeenSet = true; m_ipcMode = value; }

    /**
     * <p>The IPC resource namespace to use for the containers in the task. The valid
     * values are <code>host</code>, <code>task</code>, or <code>none</code>. If
     * <code>host</code> is specified, then all containers within the tasks that
     * specified the <code>host</code> IPC mode on the same container instance share
     * the same IPC resources with the host Amazon EC2 instance. If <code>task</code>
     * is specified, all containers within the specified task share the same IPC
     * resources. If <code>none</code> is specified, then IPC resources within the
     * containers of a task are private and not shared with other containers in a task
     * or on the container instance. If no value is specified, then the IPC resource
     * namespace sharing depends on the Docker daemon setting on the container
     * instance. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#ipc-settings---ipc">IPC
     * settings</a> in the <i>Docker run reference</i>.</p> <p>If the <code>host</code>
     * IPC mode is used, be aware that there is a heightened risk of undesired IPC
     * namespace expose. For more information, see <a
     * href="https://docs.docker.com/engine/security/security/">Docker
     * security</a>.</p> <p>If you are setting namespaced kernel parameters using
     * <code>systemControls</code> for the containers in the task, the following will
     * apply to your IPC resource namespace. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html">System
     * Controls</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     * <ul> <li> <p>For tasks that use the <code>host</code> IPC mode, IPC namespace
     * related <code>systemControls</code> are not supported.</p> </li> <li> <p>For
     * tasks that use the <code>task</code> IPC mode, IPC namespace related
     * <code>systemControls</code> will apply to all containers within a task.</p>
     * </li> </ul> <note> <p>This parameter is not supported for Windows containers or
     * tasks using the Fargate launch type.</p> </note>
     */
    inline void SetIpcMode(IpcMode&& value) { m_ipcModeHasBeenSet = true; m_ipcMode = std::move(value); }

    /**
     * <p>The IPC resource namespace to use for the containers in the task. The valid
     * values are <code>host</code>, <code>task</code>, or <code>none</code>. If
     * <code>host</code> is specified, then all containers within the tasks that
     * specified the <code>host</code> IPC mode on the same container instance share
     * the same IPC resources with the host Amazon EC2 instance. If <code>task</code>
     * is specified, all containers within the specified task share the same IPC
     * resources. If <code>none</code> is specified, then IPC resources within the
     * containers of a task are private and not shared with other containers in a task
     * or on the container instance. If no value is specified, then the IPC resource
     * namespace sharing depends on the Docker daemon setting on the container
     * instance. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#ipc-settings---ipc">IPC
     * settings</a> in the <i>Docker run reference</i>.</p> <p>If the <code>host</code>
     * IPC mode is used, be aware that there is a heightened risk of undesired IPC
     * namespace expose. For more information, see <a
     * href="https://docs.docker.com/engine/security/security/">Docker
     * security</a>.</p> <p>If you are setting namespaced kernel parameters using
     * <code>systemControls</code> for the containers in the task, the following will
     * apply to your IPC resource namespace. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html">System
     * Controls</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     * <ul> <li> <p>For tasks that use the <code>host</code> IPC mode, IPC namespace
     * related <code>systemControls</code> are not supported.</p> </li> <li> <p>For
     * tasks that use the <code>task</code> IPC mode, IPC namespace related
     * <code>systemControls</code> will apply to all containers within a task.</p>
     * </li> </ul> <note> <p>This parameter is not supported for Windows containers or
     * tasks using the Fargate launch type.</p> </note>
     */
    inline RegisterTaskDefinitionRequest& WithIpcMode(const IpcMode& value) { SetIpcMode(value); return *this;}

    /**
     * <p>The IPC resource namespace to use for the containers in the task. The valid
     * values are <code>host</code>, <code>task</code>, or <code>none</code>. If
     * <code>host</code> is specified, then all containers within the tasks that
     * specified the <code>host</code> IPC mode on the same container instance share
     * the same IPC resources with the host Amazon EC2 instance. If <code>task</code>
     * is specified, all containers within the specified task share the same IPC
     * resources. If <code>none</code> is specified, then IPC resources within the
     * containers of a task are private and not shared with other containers in a task
     * or on the container instance. If no value is specified, then the IPC resource
     * namespace sharing depends on the Docker daemon setting on the container
     * instance. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#ipc-settings---ipc">IPC
     * settings</a> in the <i>Docker run reference</i>.</p> <p>If the <code>host</code>
     * IPC mode is used, be aware that there is a heightened risk of undesired IPC
     * namespace expose. For more information, see <a
     * href="https://docs.docker.com/engine/security/security/">Docker
     * security</a>.</p> <p>If you are setting namespaced kernel parameters using
     * <code>systemControls</code> for the containers in the task, the following will
     * apply to your IPC resource namespace. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html">System
     * Controls</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     * <ul> <li> <p>For tasks that use the <code>host</code> IPC mode, IPC namespace
     * related <code>systemControls</code> are not supported.</p> </li> <li> <p>For
     * tasks that use the <code>task</code> IPC mode, IPC namespace related
     * <code>systemControls</code> will apply to all containers within a task.</p>
     * </li> </ul> <note> <p>This parameter is not supported for Windows containers or
     * tasks using the Fargate launch type.</p> </note>
     */
    inline RegisterTaskDefinitionRequest& WithIpcMode(IpcMode&& value) { SetIpcMode(std::move(value)); return *this;}


    
    inline const ProxyConfiguration& GetProxyConfiguration() const{ return m_proxyConfiguration; }

    
    inline bool ProxyConfigurationHasBeenSet() const { return m_proxyConfigurationHasBeenSet; }

    
    inline void SetProxyConfiguration(const ProxyConfiguration& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = value; }

    
    inline void SetProxyConfiguration(ProxyConfiguration&& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = std::move(value); }

    
    inline RegisterTaskDefinitionRequest& WithProxyConfiguration(const ProxyConfiguration& value) { SetProxyConfiguration(value); return *this;}

    
    inline RegisterTaskDefinitionRequest& WithProxyConfiguration(ProxyConfiguration&& value) { SetProxyConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_family;
    bool m_familyHasBeenSet;

    Aws::String m_taskRoleArn;
    bool m_taskRoleArnHasBeenSet;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet;

    NetworkMode m_networkMode;
    bool m_networkModeHasBeenSet;

    Aws::Vector<ContainerDefinition> m_containerDefinitions;
    bool m_containerDefinitionsHasBeenSet;

    Aws::Vector<Volume> m_volumes;
    bool m_volumesHasBeenSet;

    Aws::Vector<TaskDefinitionPlacementConstraint> m_placementConstraints;
    bool m_placementConstraintsHasBeenSet;

    Aws::Vector<Compatibility> m_requiresCompatibilities;
    bool m_requiresCompatibilitiesHasBeenSet;

    Aws::String m_cpu;
    bool m_cpuHasBeenSet;

    Aws::String m_memory;
    bool m_memoryHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    PidMode m_pidMode;
    bool m_pidModeHasBeenSet;

    IpcMode m_ipcMode;
    bool m_ipcModeHasBeenSet;

    ProxyConfiguration m_proxyConfiguration;
    bool m_proxyConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
