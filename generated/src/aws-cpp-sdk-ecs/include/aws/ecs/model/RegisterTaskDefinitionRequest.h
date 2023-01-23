/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/ecs/model/EphemeralStorage.h>
#include <aws/ecs/model/RuntimePlatform.h>
#include <aws/ecs/model/ContainerDefinition.h>
#include <aws/ecs/model/Volume.h>
#include <aws/ecs/model/TaskDefinitionPlacementConstraint.h>
#include <aws/ecs/model/Compatibility.h>
#include <aws/ecs/model/Tag.h>
#include <aws/ecs/model/InferenceAccelerator.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class RegisterTaskDefinitionRequest : public ECSRequest
  {
  public:
    AWS_ECS_API RegisterTaskDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterTaskDefinition"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>You must specify a <code>family</code> for a task definition. You can use it
     * track multiple versions of the same task definition. The <code>family</code> is
     * used as a name for your task definition. Up to 255 letters (uppercase and
     * lowercase), numbers, underscores, and hyphens are allowed.</p>
     */
    inline const Aws::String& GetFamily() const{ return m_family; }

    /**
     * <p>You must specify a <code>family</code> for a task definition. You can use it
     * track multiple versions of the same task definition. The <code>family</code> is
     * used as a name for your task definition. Up to 255 letters (uppercase and
     * lowercase), numbers, underscores, and hyphens are allowed.</p>
     */
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }

    /**
     * <p>You must specify a <code>family</code> for a task definition. You can use it
     * track multiple versions of the same task definition. The <code>family</code> is
     * used as a name for your task definition. Up to 255 letters (uppercase and
     * lowercase), numbers, underscores, and hyphens are allowed.</p>
     */
    inline void SetFamily(const Aws::String& value) { m_familyHasBeenSet = true; m_family = value; }

    /**
     * <p>You must specify a <code>family</code> for a task definition. You can use it
     * track multiple versions of the same task definition. The <code>family</code> is
     * used as a name for your task definition. Up to 255 letters (uppercase and
     * lowercase), numbers, underscores, and hyphens are allowed.</p>
     */
    inline void SetFamily(Aws::String&& value) { m_familyHasBeenSet = true; m_family = std::move(value); }

    /**
     * <p>You must specify a <code>family</code> for a task definition. You can use it
     * track multiple versions of the same task definition. The <code>family</code> is
     * used as a name for your task definition. Up to 255 letters (uppercase and
     * lowercase), numbers, underscores, and hyphens are allowed.</p>
     */
    inline void SetFamily(const char* value) { m_familyHasBeenSet = true; m_family.assign(value); }

    /**
     * <p>You must specify a <code>family</code> for a task definition. You can use it
     * track multiple versions of the same task definition. The <code>family</code> is
     * used as a name for your task definition. Up to 255 letters (uppercase and
     * lowercase), numbers, underscores, and hyphens are allowed.</p>
     */
    inline RegisterTaskDefinitionRequest& WithFamily(const Aws::String& value) { SetFamily(value); return *this;}

    /**
     * <p>You must specify a <code>family</code> for a task definition. You can use it
     * track multiple versions of the same task definition. The <code>family</code> is
     * used as a name for your task definition. Up to 255 letters (uppercase and
     * lowercase), numbers, underscores, and hyphens are allowed.</p>
     */
    inline RegisterTaskDefinitionRequest& WithFamily(Aws::String&& value) { SetFamily(std::move(value)); return *this;}

    /**
     * <p>You must specify a <code>family</code> for a task definition. You can use it
     * track multiple versions of the same task definition. The <code>family</code> is
     * used as a name for your task definition. Up to 255 letters (uppercase and
     * lowercase), numbers, underscores, and hyphens are allowed.</p>
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
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
     * Amazon ECS container agent permission to make Amazon Web Services API calls on
     * your behalf. The task execution IAM role is required depending on the
     * requirements of your task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
     * Amazon ECS container agent permission to make Amazon Web Services API calls on
     * your behalf. The task execution IAM role is required depending on the
     * requirements of your task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
     * Amazon ECS container agent permission to make Amazon Web Services API calls on
     * your behalf. The task execution IAM role is required depending on the
     * requirements of your task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
     * Amazon ECS container agent permission to make Amazon Web Services API calls on
     * your behalf. The task execution IAM role is required depending on the
     * requirements of your task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
     * Amazon ECS container agent permission to make Amazon Web Services API calls on
     * your behalf. The task execution IAM role is required depending on the
     * requirements of your task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
     * Amazon ECS container agent permission to make Amazon Web Services API calls on
     * your behalf. The task execution IAM role is required depending on the
     * requirements of your task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline RegisterTaskDefinitionRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
     * Amazon ECS container agent permission to make Amazon Web Services API calls on
     * your behalf. The task execution IAM role is required depending on the
     * requirements of your task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline RegisterTaskDefinitionRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
     * Amazon ECS container agent permission to make Amazon Web Services API calls on
     * your behalf. The task execution IAM role is required depending on the
     * requirements of your task. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline RegisterTaskDefinitionRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, <code>awsvpc</code>, and
     * <code>host</code>. If no network mode is specified, the default is
     * <code>bridge</code>.</p> <p>For Amazon ECS tasks on Fargate, the
     * <code>awsvpc</code> network mode is required. For Amazon ECS tasks on Amazon EC2
     * Linux instances, any network mode can be used. For Amazon ECS tasks on Amazon
     * EC2 Windows instances, <code>&lt;default&gt;</code> or <code>awsvpc</code> can
     * be used. If the network mode is set to <code>none</code>, you cannot specify
     * port mappings in your container definitions, and the tasks containers do not
     * have external connectivity. The <code>host</code> and <code>awsvpc</code>
     * network modes offer the highest networking performance for containers because
     * they use the EC2 network stack instead of the virtualized network stack provided
     * by the <code>bridge</code> mode.</p> <p>With the <code>host</code> and
     * <code>awsvpc</code> network modes, exposed container ports are mapped directly
     * to the corresponding host port (for the <code>host</code> network mode) or the
     * attached elastic network interface port (for the <code>awsvpc</code> network
     * mode), so you cannot take advantage of dynamic host port mappings. </p>
     *  <p>When using the <code>host</code> network mode, you should not run
     * containers using the root user (UID 0). It is considered best practice to use a
     * non-root user.</p>  <p>If the network mode is <code>awsvpc</code>,
     * the task is allocated an elastic network interface, and you must specify a
     * <a>NetworkConfiguration</a> value when you create a service or run a task with
     * the task definition. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>If the network mode is <code>host</code>, you cannot run
     * multiple instantiations of the same task on a single container instance when
     * port mappings are used.</p> <p>For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#network-settings">Network
     * settings</a> in the <i>Docker run reference</i>.</p>
     */
    inline const NetworkMode& GetNetworkMode() const{ return m_networkMode; }

    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, <code>awsvpc</code>, and
     * <code>host</code>. If no network mode is specified, the default is
     * <code>bridge</code>.</p> <p>For Amazon ECS tasks on Fargate, the
     * <code>awsvpc</code> network mode is required. For Amazon ECS tasks on Amazon EC2
     * Linux instances, any network mode can be used. For Amazon ECS tasks on Amazon
     * EC2 Windows instances, <code>&lt;default&gt;</code> or <code>awsvpc</code> can
     * be used. If the network mode is set to <code>none</code>, you cannot specify
     * port mappings in your container definitions, and the tasks containers do not
     * have external connectivity. The <code>host</code> and <code>awsvpc</code>
     * network modes offer the highest networking performance for containers because
     * they use the EC2 network stack instead of the virtualized network stack provided
     * by the <code>bridge</code> mode.</p> <p>With the <code>host</code> and
     * <code>awsvpc</code> network modes, exposed container ports are mapped directly
     * to the corresponding host port (for the <code>host</code> network mode) or the
     * attached elastic network interface port (for the <code>awsvpc</code> network
     * mode), so you cannot take advantage of dynamic host port mappings. </p>
     *  <p>When using the <code>host</code> network mode, you should not run
     * containers using the root user (UID 0). It is considered best practice to use a
     * non-root user.</p>  <p>If the network mode is <code>awsvpc</code>,
     * the task is allocated an elastic network interface, and you must specify a
     * <a>NetworkConfiguration</a> value when you create a service or run a task with
     * the task definition. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>If the network mode is <code>host</code>, you cannot run
     * multiple instantiations of the same task on a single container instance when
     * port mappings are used.</p> <p>For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#network-settings">Network
     * settings</a> in the <i>Docker run reference</i>.</p>
     */
    inline bool NetworkModeHasBeenSet() const { return m_networkModeHasBeenSet; }

    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, <code>awsvpc</code>, and
     * <code>host</code>. If no network mode is specified, the default is
     * <code>bridge</code>.</p> <p>For Amazon ECS tasks on Fargate, the
     * <code>awsvpc</code> network mode is required. For Amazon ECS tasks on Amazon EC2
     * Linux instances, any network mode can be used. For Amazon ECS tasks on Amazon
     * EC2 Windows instances, <code>&lt;default&gt;</code> or <code>awsvpc</code> can
     * be used. If the network mode is set to <code>none</code>, you cannot specify
     * port mappings in your container definitions, and the tasks containers do not
     * have external connectivity. The <code>host</code> and <code>awsvpc</code>
     * network modes offer the highest networking performance for containers because
     * they use the EC2 network stack instead of the virtualized network stack provided
     * by the <code>bridge</code> mode.</p> <p>With the <code>host</code> and
     * <code>awsvpc</code> network modes, exposed container ports are mapped directly
     * to the corresponding host port (for the <code>host</code> network mode) or the
     * attached elastic network interface port (for the <code>awsvpc</code> network
     * mode), so you cannot take advantage of dynamic host port mappings. </p>
     *  <p>When using the <code>host</code> network mode, you should not run
     * containers using the root user (UID 0). It is considered best practice to use a
     * non-root user.</p>  <p>If the network mode is <code>awsvpc</code>,
     * the task is allocated an elastic network interface, and you must specify a
     * <a>NetworkConfiguration</a> value when you create a service or run a task with
     * the task definition. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>If the network mode is <code>host</code>, you cannot run
     * multiple instantiations of the same task on a single container instance when
     * port mappings are used.</p> <p>For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#network-settings">Network
     * settings</a> in the <i>Docker run reference</i>.</p>
     */
    inline void SetNetworkMode(const NetworkMode& value) { m_networkModeHasBeenSet = true; m_networkMode = value; }

    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, <code>awsvpc</code>, and
     * <code>host</code>. If no network mode is specified, the default is
     * <code>bridge</code>.</p> <p>For Amazon ECS tasks on Fargate, the
     * <code>awsvpc</code> network mode is required. For Amazon ECS tasks on Amazon EC2
     * Linux instances, any network mode can be used. For Amazon ECS tasks on Amazon
     * EC2 Windows instances, <code>&lt;default&gt;</code> or <code>awsvpc</code> can
     * be used. If the network mode is set to <code>none</code>, you cannot specify
     * port mappings in your container definitions, and the tasks containers do not
     * have external connectivity. The <code>host</code> and <code>awsvpc</code>
     * network modes offer the highest networking performance for containers because
     * they use the EC2 network stack instead of the virtualized network stack provided
     * by the <code>bridge</code> mode.</p> <p>With the <code>host</code> and
     * <code>awsvpc</code> network modes, exposed container ports are mapped directly
     * to the corresponding host port (for the <code>host</code> network mode) or the
     * attached elastic network interface port (for the <code>awsvpc</code> network
     * mode), so you cannot take advantage of dynamic host port mappings. </p>
     *  <p>When using the <code>host</code> network mode, you should not run
     * containers using the root user (UID 0). It is considered best practice to use a
     * non-root user.</p>  <p>If the network mode is <code>awsvpc</code>,
     * the task is allocated an elastic network interface, and you must specify a
     * <a>NetworkConfiguration</a> value when you create a service or run a task with
     * the task definition. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>If the network mode is <code>host</code>, you cannot run
     * multiple instantiations of the same task on a single container instance when
     * port mappings are used.</p> <p>For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#network-settings">Network
     * settings</a> in the <i>Docker run reference</i>.</p>
     */
    inline void SetNetworkMode(NetworkMode&& value) { m_networkModeHasBeenSet = true; m_networkMode = std::move(value); }

    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, <code>awsvpc</code>, and
     * <code>host</code>. If no network mode is specified, the default is
     * <code>bridge</code>.</p> <p>For Amazon ECS tasks on Fargate, the
     * <code>awsvpc</code> network mode is required. For Amazon ECS tasks on Amazon EC2
     * Linux instances, any network mode can be used. For Amazon ECS tasks on Amazon
     * EC2 Windows instances, <code>&lt;default&gt;</code> or <code>awsvpc</code> can
     * be used. If the network mode is set to <code>none</code>, you cannot specify
     * port mappings in your container definitions, and the tasks containers do not
     * have external connectivity. The <code>host</code> and <code>awsvpc</code>
     * network modes offer the highest networking performance for containers because
     * they use the EC2 network stack instead of the virtualized network stack provided
     * by the <code>bridge</code> mode.</p> <p>With the <code>host</code> and
     * <code>awsvpc</code> network modes, exposed container ports are mapped directly
     * to the corresponding host port (for the <code>host</code> network mode) or the
     * attached elastic network interface port (for the <code>awsvpc</code> network
     * mode), so you cannot take advantage of dynamic host port mappings. </p>
     *  <p>When using the <code>host</code> network mode, you should not run
     * containers using the root user (UID 0). It is considered best practice to use a
     * non-root user.</p>  <p>If the network mode is <code>awsvpc</code>,
     * the task is allocated an elastic network interface, and you must specify a
     * <a>NetworkConfiguration</a> value when you create a service or run a task with
     * the task definition. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>If the network mode is <code>host</code>, you cannot run
     * multiple instantiations of the same task on a single container instance when
     * port mappings are used.</p> <p>For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#network-settings">Network
     * settings</a> in the <i>Docker run reference</i>.</p>
     */
    inline RegisterTaskDefinitionRequest& WithNetworkMode(const NetworkMode& value) { SetNetworkMode(value); return *this;}

    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, <code>awsvpc</code>, and
     * <code>host</code>. If no network mode is specified, the default is
     * <code>bridge</code>.</p> <p>For Amazon ECS tasks on Fargate, the
     * <code>awsvpc</code> network mode is required. For Amazon ECS tasks on Amazon EC2
     * Linux instances, any network mode can be used. For Amazon ECS tasks on Amazon
     * EC2 Windows instances, <code>&lt;default&gt;</code> or <code>awsvpc</code> can
     * be used. If the network mode is set to <code>none</code>, you cannot specify
     * port mappings in your container definitions, and the tasks containers do not
     * have external connectivity. The <code>host</code> and <code>awsvpc</code>
     * network modes offer the highest networking performance for containers because
     * they use the EC2 network stack instead of the virtualized network stack provided
     * by the <code>bridge</code> mode.</p> <p>With the <code>host</code> and
     * <code>awsvpc</code> network modes, exposed container ports are mapped directly
     * to the corresponding host port (for the <code>host</code> network mode) or the
     * attached elastic network interface port (for the <code>awsvpc</code> network
     * mode), so you cannot take advantage of dynamic host port mappings. </p>
     *  <p>When using the <code>host</code> network mode, you should not run
     * containers using the root user (UID 0). It is considered best practice to use a
     * non-root user.</p>  <p>If the network mode is <code>awsvpc</code>,
     * the task is allocated an elastic network interface, and you must specify a
     * <a>NetworkConfiguration</a> value when you create a service or run a task with
     * the task definition. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>If the network mode is <code>host</code>, you cannot run
     * multiple instantiations of the same task on a single container instance when
     * port mappings are used.</p> <p>For more information, see <a
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
     * <p>A list of volume definitions in JSON format that containers in your task
     * might use.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>A list of volume definitions in JSON format that containers in your task
     * might use.</p>
     */
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }

    /**
     * <p>A list of volume definitions in JSON format that containers in your task
     * might use.</p>
     */
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>A list of volume definitions in JSON format that containers in your task
     * might use.</p>
     */
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }

    /**
     * <p>A list of volume definitions in JSON format that containers in your task
     * might use.</p>
     */
    inline RegisterTaskDefinitionRequest& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}

    /**
     * <p>A list of volume definitions in JSON format that containers in your task
     * might use.</p>
     */
    inline RegisterTaskDefinitionRequest& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p>A list of volume definitions in JSON format that containers in your task
     * might use.</p>
     */
    inline RegisterTaskDefinitionRequest& AddVolumes(const Volume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>A list of volume definitions in JSON format that containers in your task
     * might use.</p>
     */
    inline RegisterTaskDefinitionRequest& AddVolumes(Volume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * a maximum of 10 constraints for each task. This limit includes constraints in
     * the task definition and those specified at runtime.</p>
     */
    inline const Aws::Vector<TaskDefinitionPlacementConstraint>& GetPlacementConstraints() const{ return m_placementConstraints; }

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * a maximum of 10 constraints for each task. This limit includes constraints in
     * the task definition and those specified at runtime.</p>
     */
    inline bool PlacementConstraintsHasBeenSet() const { return m_placementConstraintsHasBeenSet; }

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * a maximum of 10 constraints for each task. This limit includes constraints in
     * the task definition and those specified at runtime.</p>
     */
    inline void SetPlacementConstraints(const Aws::Vector<TaskDefinitionPlacementConstraint>& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = value; }

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * a maximum of 10 constraints for each task. This limit includes constraints in
     * the task definition and those specified at runtime.</p>
     */
    inline void SetPlacementConstraints(Aws::Vector<TaskDefinitionPlacementConstraint>&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = std::move(value); }

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * a maximum of 10 constraints for each task. This limit includes constraints in
     * the task definition and those specified at runtime.</p>
     */
    inline RegisterTaskDefinitionRequest& WithPlacementConstraints(const Aws::Vector<TaskDefinitionPlacementConstraint>& value) { SetPlacementConstraints(value); return *this;}

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * a maximum of 10 constraints for each task. This limit includes constraints in
     * the task definition and those specified at runtime.</p>
     */
    inline RegisterTaskDefinitionRequest& WithPlacementConstraints(Aws::Vector<TaskDefinitionPlacementConstraint>&& value) { SetPlacementConstraints(std::move(value)); return *this;}

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * a maximum of 10 constraints for each task. This limit includes constraints in
     * the task definition and those specified at runtime.</p>
     */
    inline RegisterTaskDefinitionRequest& AddPlacementConstraints(const TaskDefinitionPlacementConstraint& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(value); return *this; }

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * a maximum of 10 constraints for each task. This limit includes constraints in
     * the task definition and those specified at runtime.</p>
     */
    inline RegisterTaskDefinitionRequest& AddPlacementConstraints(TaskDefinitionPlacementConstraint&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(std::move(value)); return *this; }


    /**
     * <p>The task launch type that Amazon ECS validates the task definition against. A
     * client exception is returned if the task definition doesn't validate against the
     * compatibilities specified. If no value is specified, the parameter is omitted
     * from the response.</p>
     */
    inline const Aws::Vector<Compatibility>& GetRequiresCompatibilities() const{ return m_requiresCompatibilities; }

    /**
     * <p>The task launch type that Amazon ECS validates the task definition against. A
     * client exception is returned if the task definition doesn't validate against the
     * compatibilities specified. If no value is specified, the parameter is omitted
     * from the response.</p>
     */
    inline bool RequiresCompatibilitiesHasBeenSet() const { return m_requiresCompatibilitiesHasBeenSet; }

    /**
     * <p>The task launch type that Amazon ECS validates the task definition against. A
     * client exception is returned if the task definition doesn't validate against the
     * compatibilities specified. If no value is specified, the parameter is omitted
     * from the response.</p>
     */
    inline void SetRequiresCompatibilities(const Aws::Vector<Compatibility>& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities = value; }

    /**
     * <p>The task launch type that Amazon ECS validates the task definition against. A
     * client exception is returned if the task definition doesn't validate against the
     * compatibilities specified. If no value is specified, the parameter is omitted
     * from the response.</p>
     */
    inline void SetRequiresCompatibilities(Aws::Vector<Compatibility>&& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities = std::move(value); }

    /**
     * <p>The task launch type that Amazon ECS validates the task definition against. A
     * client exception is returned if the task definition doesn't validate against the
     * compatibilities specified. If no value is specified, the parameter is omitted
     * from the response.</p>
     */
    inline RegisterTaskDefinitionRequest& WithRequiresCompatibilities(const Aws::Vector<Compatibility>& value) { SetRequiresCompatibilities(value); return *this;}

    /**
     * <p>The task launch type that Amazon ECS validates the task definition against. A
     * client exception is returned if the task definition doesn't validate against the
     * compatibilities specified. If no value is specified, the parameter is omitted
     * from the response.</p>
     */
    inline RegisterTaskDefinitionRequest& WithRequiresCompatibilities(Aws::Vector<Compatibility>&& value) { SetRequiresCompatibilities(std::move(value)); return *this;}

    /**
     * <p>The task launch type that Amazon ECS validates the task definition against. A
     * client exception is returned if the task definition doesn't validate against the
     * compatibilities specified. If no value is specified, the parameter is omitted
     * from the response.</p>
     */
    inline RegisterTaskDefinitionRequest& AddRequiresCompatibilities(const Compatibility& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities.push_back(value); return *this; }

    /**
     * <p>The task launch type that Amazon ECS validates the task definition against. A
     * client exception is returned if the task definition doesn't validate against the
     * compatibilities specified. If no value is specified, the parameter is omitted
     * from the response.</p>
     */
    inline RegisterTaskDefinitionRequest& AddRequiresCompatibilities(Compatibility&& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of CPU units used by the task. It can be expressed as an integer
     * using CPU units (for example, <code>1024</code>) or as a string using vCPUs (for
     * example, <code>1 vCPU</code> or <code>1 vcpu</code>) in a task definition.
     * String values are converted to an integer indicating the CPU units when the task
     * definition is registered.</p>  <p>Task-level CPU and memory parameters are
     * ignored for Windows containers. We recommend specifying container-level
     * resources for Windows containers.</p>  <p>If you're using the EC2 launch
     * type, this field is optional. Supported values are between <code>128</code> CPU
     * units (<code>0.125</code> vCPUs) and <code>10240</code> CPU units
     * (<code>10</code> vCPUs). If you do not specify a value, the parameter is
     * ignored.</p> <p>If you're using the Fargate launch type, this field is required
     * and you must use one of the following values, which determines your range of
     * supported values for the <code>memory</code> parameter:</p> <p>The CPU units
     * cannot be less than 1 vCPU when you use Windows containers on Fargate.</p> <ul>
     * <li> <p>256 (.25 vCPU) - Available <code>memory</code> values: 512 (0.5 GB),
     * 1024 (1 GB), 2048 (2 GB)</p> </li> <li> <p>512 (.5 vCPU) - Available
     * <code>memory</code> values: 1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB)</p> </li> <li> <p>1024 (1 vCPU) - Available <code>memory</code> values: 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB)</p> </li> <li> <p>2048 (2 vCPU) - Available <code>memory</code> values: 4096
     * (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4
     * vCPU) - Available <code>memory</code> values: 8192 (8 GB) and 30720 (30 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>8192 (8 vCPU) - Available
     * <code>memory</code> values: 16 GB and 60 GB in 4 GB increments</p> <p>This
     * option requires Linux platform <code>1.4.0</code> or later.</p> </li> <li>
     * <p>16384 (16vCPU) - Available <code>memory</code> values: 32GB and 120 GB in 8
     * GB increments</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> </ul>
     */
    inline const Aws::String& GetCpu() const{ return m_cpu; }

    /**
     * <p>The number of CPU units used by the task. It can be expressed as an integer
     * using CPU units (for example, <code>1024</code>) or as a string using vCPUs (for
     * example, <code>1 vCPU</code> or <code>1 vcpu</code>) in a task definition.
     * String values are converted to an integer indicating the CPU units when the task
     * definition is registered.</p>  <p>Task-level CPU and memory parameters are
     * ignored for Windows containers. We recommend specifying container-level
     * resources for Windows containers.</p>  <p>If you're using the EC2 launch
     * type, this field is optional. Supported values are between <code>128</code> CPU
     * units (<code>0.125</code> vCPUs) and <code>10240</code> CPU units
     * (<code>10</code> vCPUs). If you do not specify a value, the parameter is
     * ignored.</p> <p>If you're using the Fargate launch type, this field is required
     * and you must use one of the following values, which determines your range of
     * supported values for the <code>memory</code> parameter:</p> <p>The CPU units
     * cannot be less than 1 vCPU when you use Windows containers on Fargate.</p> <ul>
     * <li> <p>256 (.25 vCPU) - Available <code>memory</code> values: 512 (0.5 GB),
     * 1024 (1 GB), 2048 (2 GB)</p> </li> <li> <p>512 (.5 vCPU) - Available
     * <code>memory</code> values: 1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB)</p> </li> <li> <p>1024 (1 vCPU) - Available <code>memory</code> values: 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB)</p> </li> <li> <p>2048 (2 vCPU) - Available <code>memory</code> values: 4096
     * (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4
     * vCPU) - Available <code>memory</code> values: 8192 (8 GB) and 30720 (30 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>8192 (8 vCPU) - Available
     * <code>memory</code> values: 16 GB and 60 GB in 4 GB increments</p> <p>This
     * option requires Linux platform <code>1.4.0</code> or later.</p> </li> <li>
     * <p>16384 (16vCPU) - Available <code>memory</code> values: 32GB and 120 GB in 8
     * GB increments</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> </ul>
     */
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }

    /**
     * <p>The number of CPU units used by the task. It can be expressed as an integer
     * using CPU units (for example, <code>1024</code>) or as a string using vCPUs (for
     * example, <code>1 vCPU</code> or <code>1 vcpu</code>) in a task definition.
     * String values are converted to an integer indicating the CPU units when the task
     * definition is registered.</p>  <p>Task-level CPU and memory parameters are
     * ignored for Windows containers. We recommend specifying container-level
     * resources for Windows containers.</p>  <p>If you're using the EC2 launch
     * type, this field is optional. Supported values are between <code>128</code> CPU
     * units (<code>0.125</code> vCPUs) and <code>10240</code> CPU units
     * (<code>10</code> vCPUs). If you do not specify a value, the parameter is
     * ignored.</p> <p>If you're using the Fargate launch type, this field is required
     * and you must use one of the following values, which determines your range of
     * supported values for the <code>memory</code> parameter:</p> <p>The CPU units
     * cannot be less than 1 vCPU when you use Windows containers on Fargate.</p> <ul>
     * <li> <p>256 (.25 vCPU) - Available <code>memory</code> values: 512 (0.5 GB),
     * 1024 (1 GB), 2048 (2 GB)</p> </li> <li> <p>512 (.5 vCPU) - Available
     * <code>memory</code> values: 1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB)</p> </li> <li> <p>1024 (1 vCPU) - Available <code>memory</code> values: 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB)</p> </li> <li> <p>2048 (2 vCPU) - Available <code>memory</code> values: 4096
     * (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4
     * vCPU) - Available <code>memory</code> values: 8192 (8 GB) and 30720 (30 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>8192 (8 vCPU) - Available
     * <code>memory</code> values: 16 GB and 60 GB in 4 GB increments</p> <p>This
     * option requires Linux platform <code>1.4.0</code> or later.</p> </li> <li>
     * <p>16384 (16vCPU) - Available <code>memory</code> values: 32GB and 120 GB in 8
     * GB increments</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> </ul>
     */
    inline void SetCpu(const Aws::String& value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /**
     * <p>The number of CPU units used by the task. It can be expressed as an integer
     * using CPU units (for example, <code>1024</code>) or as a string using vCPUs (for
     * example, <code>1 vCPU</code> or <code>1 vcpu</code>) in a task definition.
     * String values are converted to an integer indicating the CPU units when the task
     * definition is registered.</p>  <p>Task-level CPU and memory parameters are
     * ignored for Windows containers. We recommend specifying container-level
     * resources for Windows containers.</p>  <p>If you're using the EC2 launch
     * type, this field is optional. Supported values are between <code>128</code> CPU
     * units (<code>0.125</code> vCPUs) and <code>10240</code> CPU units
     * (<code>10</code> vCPUs). If you do not specify a value, the parameter is
     * ignored.</p> <p>If you're using the Fargate launch type, this field is required
     * and you must use one of the following values, which determines your range of
     * supported values for the <code>memory</code> parameter:</p> <p>The CPU units
     * cannot be less than 1 vCPU when you use Windows containers on Fargate.</p> <ul>
     * <li> <p>256 (.25 vCPU) - Available <code>memory</code> values: 512 (0.5 GB),
     * 1024 (1 GB), 2048 (2 GB)</p> </li> <li> <p>512 (.5 vCPU) - Available
     * <code>memory</code> values: 1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB)</p> </li> <li> <p>1024 (1 vCPU) - Available <code>memory</code> values: 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB)</p> </li> <li> <p>2048 (2 vCPU) - Available <code>memory</code> values: 4096
     * (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4
     * vCPU) - Available <code>memory</code> values: 8192 (8 GB) and 30720 (30 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>8192 (8 vCPU) - Available
     * <code>memory</code> values: 16 GB and 60 GB in 4 GB increments</p> <p>This
     * option requires Linux platform <code>1.4.0</code> or later.</p> </li> <li>
     * <p>16384 (16vCPU) - Available <code>memory</code> values: 32GB and 120 GB in 8
     * GB increments</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> </ul>
     */
    inline void SetCpu(Aws::String&& value) { m_cpuHasBeenSet = true; m_cpu = std::move(value); }

    /**
     * <p>The number of CPU units used by the task. It can be expressed as an integer
     * using CPU units (for example, <code>1024</code>) or as a string using vCPUs (for
     * example, <code>1 vCPU</code> or <code>1 vcpu</code>) in a task definition.
     * String values are converted to an integer indicating the CPU units when the task
     * definition is registered.</p>  <p>Task-level CPU and memory parameters are
     * ignored for Windows containers. We recommend specifying container-level
     * resources for Windows containers.</p>  <p>If you're using the EC2 launch
     * type, this field is optional. Supported values are between <code>128</code> CPU
     * units (<code>0.125</code> vCPUs) and <code>10240</code> CPU units
     * (<code>10</code> vCPUs). If you do not specify a value, the parameter is
     * ignored.</p> <p>If you're using the Fargate launch type, this field is required
     * and you must use one of the following values, which determines your range of
     * supported values for the <code>memory</code> parameter:</p> <p>The CPU units
     * cannot be less than 1 vCPU when you use Windows containers on Fargate.</p> <ul>
     * <li> <p>256 (.25 vCPU) - Available <code>memory</code> values: 512 (0.5 GB),
     * 1024 (1 GB), 2048 (2 GB)</p> </li> <li> <p>512 (.5 vCPU) - Available
     * <code>memory</code> values: 1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB)</p> </li> <li> <p>1024 (1 vCPU) - Available <code>memory</code> values: 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB)</p> </li> <li> <p>2048 (2 vCPU) - Available <code>memory</code> values: 4096
     * (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4
     * vCPU) - Available <code>memory</code> values: 8192 (8 GB) and 30720 (30 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>8192 (8 vCPU) - Available
     * <code>memory</code> values: 16 GB and 60 GB in 4 GB increments</p> <p>This
     * option requires Linux platform <code>1.4.0</code> or later.</p> </li> <li>
     * <p>16384 (16vCPU) - Available <code>memory</code> values: 32GB and 120 GB in 8
     * GB increments</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> </ul>
     */
    inline void SetCpu(const char* value) { m_cpuHasBeenSet = true; m_cpu.assign(value); }

    /**
     * <p>The number of CPU units used by the task. It can be expressed as an integer
     * using CPU units (for example, <code>1024</code>) or as a string using vCPUs (for
     * example, <code>1 vCPU</code> or <code>1 vcpu</code>) in a task definition.
     * String values are converted to an integer indicating the CPU units when the task
     * definition is registered.</p>  <p>Task-level CPU and memory parameters are
     * ignored for Windows containers. We recommend specifying container-level
     * resources for Windows containers.</p>  <p>If you're using the EC2 launch
     * type, this field is optional. Supported values are between <code>128</code> CPU
     * units (<code>0.125</code> vCPUs) and <code>10240</code> CPU units
     * (<code>10</code> vCPUs). If you do not specify a value, the parameter is
     * ignored.</p> <p>If you're using the Fargate launch type, this field is required
     * and you must use one of the following values, which determines your range of
     * supported values for the <code>memory</code> parameter:</p> <p>The CPU units
     * cannot be less than 1 vCPU when you use Windows containers on Fargate.</p> <ul>
     * <li> <p>256 (.25 vCPU) - Available <code>memory</code> values: 512 (0.5 GB),
     * 1024 (1 GB), 2048 (2 GB)</p> </li> <li> <p>512 (.5 vCPU) - Available
     * <code>memory</code> values: 1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB)</p> </li> <li> <p>1024 (1 vCPU) - Available <code>memory</code> values: 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB)</p> </li> <li> <p>2048 (2 vCPU) - Available <code>memory</code> values: 4096
     * (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4
     * vCPU) - Available <code>memory</code> values: 8192 (8 GB) and 30720 (30 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>8192 (8 vCPU) - Available
     * <code>memory</code> values: 16 GB and 60 GB in 4 GB increments</p> <p>This
     * option requires Linux platform <code>1.4.0</code> or later.</p> </li> <li>
     * <p>16384 (16vCPU) - Available <code>memory</code> values: 32GB and 120 GB in 8
     * GB increments</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> </ul>
     */
    inline RegisterTaskDefinitionRequest& WithCpu(const Aws::String& value) { SetCpu(value); return *this;}

    /**
     * <p>The number of CPU units used by the task. It can be expressed as an integer
     * using CPU units (for example, <code>1024</code>) or as a string using vCPUs (for
     * example, <code>1 vCPU</code> or <code>1 vcpu</code>) in a task definition.
     * String values are converted to an integer indicating the CPU units when the task
     * definition is registered.</p>  <p>Task-level CPU and memory parameters are
     * ignored for Windows containers. We recommend specifying container-level
     * resources for Windows containers.</p>  <p>If you're using the EC2 launch
     * type, this field is optional. Supported values are between <code>128</code> CPU
     * units (<code>0.125</code> vCPUs) and <code>10240</code> CPU units
     * (<code>10</code> vCPUs). If you do not specify a value, the parameter is
     * ignored.</p> <p>If you're using the Fargate launch type, this field is required
     * and you must use one of the following values, which determines your range of
     * supported values for the <code>memory</code> parameter:</p> <p>The CPU units
     * cannot be less than 1 vCPU when you use Windows containers on Fargate.</p> <ul>
     * <li> <p>256 (.25 vCPU) - Available <code>memory</code> values: 512 (0.5 GB),
     * 1024 (1 GB), 2048 (2 GB)</p> </li> <li> <p>512 (.5 vCPU) - Available
     * <code>memory</code> values: 1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB)</p> </li> <li> <p>1024 (1 vCPU) - Available <code>memory</code> values: 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB)</p> </li> <li> <p>2048 (2 vCPU) - Available <code>memory</code> values: 4096
     * (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4
     * vCPU) - Available <code>memory</code> values: 8192 (8 GB) and 30720 (30 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>8192 (8 vCPU) - Available
     * <code>memory</code> values: 16 GB and 60 GB in 4 GB increments</p> <p>This
     * option requires Linux platform <code>1.4.0</code> or later.</p> </li> <li>
     * <p>16384 (16vCPU) - Available <code>memory</code> values: 32GB and 120 GB in 8
     * GB increments</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> </ul>
     */
    inline RegisterTaskDefinitionRequest& WithCpu(Aws::String&& value) { SetCpu(std::move(value)); return *this;}

    /**
     * <p>The number of CPU units used by the task. It can be expressed as an integer
     * using CPU units (for example, <code>1024</code>) or as a string using vCPUs (for
     * example, <code>1 vCPU</code> or <code>1 vcpu</code>) in a task definition.
     * String values are converted to an integer indicating the CPU units when the task
     * definition is registered.</p>  <p>Task-level CPU and memory parameters are
     * ignored for Windows containers. We recommend specifying container-level
     * resources for Windows containers.</p>  <p>If you're using the EC2 launch
     * type, this field is optional. Supported values are between <code>128</code> CPU
     * units (<code>0.125</code> vCPUs) and <code>10240</code> CPU units
     * (<code>10</code> vCPUs). If you do not specify a value, the parameter is
     * ignored.</p> <p>If you're using the Fargate launch type, this field is required
     * and you must use one of the following values, which determines your range of
     * supported values for the <code>memory</code> parameter:</p> <p>The CPU units
     * cannot be less than 1 vCPU when you use Windows containers on Fargate.</p> <ul>
     * <li> <p>256 (.25 vCPU) - Available <code>memory</code> values: 512 (0.5 GB),
     * 1024 (1 GB), 2048 (2 GB)</p> </li> <li> <p>512 (.5 vCPU) - Available
     * <code>memory</code> values: 1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB)</p> </li> <li> <p>1024 (1 vCPU) - Available <code>memory</code> values: 2048
     * (2 GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB)</p> </li> <li> <p>2048 (2 vCPU) - Available <code>memory</code> values: 4096
     * (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB)</p> </li> <li> <p>4096 (4
     * vCPU) - Available <code>memory</code> values: 8192 (8 GB) and 30720 (30 GB) in
     * increments of 1024 (1 GB)</p> </li> <li> <p>8192 (8 vCPU) - Available
     * <code>memory</code> values: 16 GB and 60 GB in 4 GB increments</p> <p>This
     * option requires Linux platform <code>1.4.0</code> or later.</p> </li> <li>
     * <p>16384 (16vCPU) - Available <code>memory</code> values: 32GB and 120 GB in 8
     * GB increments</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> </ul>
     */
    inline RegisterTaskDefinitionRequest& WithCpu(const char* value) { SetCpu(value); return *this;}


    /**
     * <p>The amount of memory (in MiB) used by the task. It can be expressed as an
     * integer using MiB (for example ,<code>1024</code>) or as a string using GB (for
     * example, <code>1GB</code> or <code>1 GB</code>) in a task definition. String
     * values are converted to an integer indicating the MiB when the task definition
     * is registered.</p>  <p>Task-level CPU and memory parameters are ignored
     * for Windows containers. We recommend specifying container-level resources for
     * Windows containers.</p>  <p>If using the EC2 launch type, this field is
     * optional.</p> <p>If using the Fargate launch type, this field is required and
     * you must use one of the following values. This determines your range of
     * supported values for the <code>cpu</code> parameter.</p> <p>The CPU units cannot
     * be less than 1 vCPU when you use Windows containers on Fargate.</p> <ul> <li>
     * <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code> values:
     * 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB) - Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2
     * GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB) - Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between
     * 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and
     * 30720 (30 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 4096 (4 vCPU)</p> </li> <li> <p>Between 16 GB and 60 GB in 4 GB increments -
     * Available <code>cpu</code> values: 8192 (8 vCPU)</p> <p>This option requires
     * Linux platform <code>1.4.0</code> or later.</p> </li> <li> <p>Between 32GB and
     * 120 GB in 8 GB increments - Available <code>cpu</code> values: 16384 (16
     * vCPU)</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> </ul>
     */
    inline const Aws::String& GetMemory() const{ return m_memory; }

    /**
     * <p>The amount of memory (in MiB) used by the task. It can be expressed as an
     * integer using MiB (for example ,<code>1024</code>) or as a string using GB (for
     * example, <code>1GB</code> or <code>1 GB</code>) in a task definition. String
     * values are converted to an integer indicating the MiB when the task definition
     * is registered.</p>  <p>Task-level CPU and memory parameters are ignored
     * for Windows containers. We recommend specifying container-level resources for
     * Windows containers.</p>  <p>If using the EC2 launch type, this field is
     * optional.</p> <p>If using the Fargate launch type, this field is required and
     * you must use one of the following values. This determines your range of
     * supported values for the <code>cpu</code> parameter.</p> <p>The CPU units cannot
     * be less than 1 vCPU when you use Windows containers on Fargate.</p> <ul> <li>
     * <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code> values:
     * 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB) - Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2
     * GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB) - Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between
     * 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and
     * 30720 (30 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 4096 (4 vCPU)</p> </li> <li> <p>Between 16 GB and 60 GB in 4 GB increments -
     * Available <code>cpu</code> values: 8192 (8 vCPU)</p> <p>This option requires
     * Linux platform <code>1.4.0</code> or later.</p> </li> <li> <p>Between 32GB and
     * 120 GB in 8 GB increments - Available <code>cpu</code> values: 16384 (16
     * vCPU)</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> </ul>
     */
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }

    /**
     * <p>The amount of memory (in MiB) used by the task. It can be expressed as an
     * integer using MiB (for example ,<code>1024</code>) or as a string using GB (for
     * example, <code>1GB</code> or <code>1 GB</code>) in a task definition. String
     * values are converted to an integer indicating the MiB when the task definition
     * is registered.</p>  <p>Task-level CPU and memory parameters are ignored
     * for Windows containers. We recommend specifying container-level resources for
     * Windows containers.</p>  <p>If using the EC2 launch type, this field is
     * optional.</p> <p>If using the Fargate launch type, this field is required and
     * you must use one of the following values. This determines your range of
     * supported values for the <code>cpu</code> parameter.</p> <p>The CPU units cannot
     * be less than 1 vCPU when you use Windows containers on Fargate.</p> <ul> <li>
     * <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code> values:
     * 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB) - Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2
     * GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB) - Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between
     * 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and
     * 30720 (30 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 4096 (4 vCPU)</p> </li> <li> <p>Between 16 GB and 60 GB in 4 GB increments -
     * Available <code>cpu</code> values: 8192 (8 vCPU)</p> <p>This option requires
     * Linux platform <code>1.4.0</code> or later.</p> </li> <li> <p>Between 32GB and
     * 120 GB in 8 GB increments - Available <code>cpu</code> values: 16384 (16
     * vCPU)</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> </ul>
     */
    inline void SetMemory(const Aws::String& value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p>The amount of memory (in MiB) used by the task. It can be expressed as an
     * integer using MiB (for example ,<code>1024</code>) or as a string using GB (for
     * example, <code>1GB</code> or <code>1 GB</code>) in a task definition. String
     * values are converted to an integer indicating the MiB when the task definition
     * is registered.</p>  <p>Task-level CPU and memory parameters are ignored
     * for Windows containers. We recommend specifying container-level resources for
     * Windows containers.</p>  <p>If using the EC2 launch type, this field is
     * optional.</p> <p>If using the Fargate launch type, this field is required and
     * you must use one of the following values. This determines your range of
     * supported values for the <code>cpu</code> parameter.</p> <p>The CPU units cannot
     * be less than 1 vCPU when you use Windows containers on Fargate.</p> <ul> <li>
     * <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code> values:
     * 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB) - Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2
     * GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB) - Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between
     * 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and
     * 30720 (30 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 4096 (4 vCPU)</p> </li> <li> <p>Between 16 GB and 60 GB in 4 GB increments -
     * Available <code>cpu</code> values: 8192 (8 vCPU)</p> <p>This option requires
     * Linux platform <code>1.4.0</code> or later.</p> </li> <li> <p>Between 32GB and
     * 120 GB in 8 GB increments - Available <code>cpu</code> values: 16384 (16
     * vCPU)</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> </ul>
     */
    inline void SetMemory(Aws::String&& value) { m_memoryHasBeenSet = true; m_memory = std::move(value); }

    /**
     * <p>The amount of memory (in MiB) used by the task. It can be expressed as an
     * integer using MiB (for example ,<code>1024</code>) or as a string using GB (for
     * example, <code>1GB</code> or <code>1 GB</code>) in a task definition. String
     * values are converted to an integer indicating the MiB when the task definition
     * is registered.</p>  <p>Task-level CPU and memory parameters are ignored
     * for Windows containers. We recommend specifying container-level resources for
     * Windows containers.</p>  <p>If using the EC2 launch type, this field is
     * optional.</p> <p>If using the Fargate launch type, this field is required and
     * you must use one of the following values. This determines your range of
     * supported values for the <code>cpu</code> parameter.</p> <p>The CPU units cannot
     * be less than 1 vCPU when you use Windows containers on Fargate.</p> <ul> <li>
     * <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code> values:
     * 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB) - Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2
     * GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB) - Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between
     * 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and
     * 30720 (30 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 4096 (4 vCPU)</p> </li> <li> <p>Between 16 GB and 60 GB in 4 GB increments -
     * Available <code>cpu</code> values: 8192 (8 vCPU)</p> <p>This option requires
     * Linux platform <code>1.4.0</code> or later.</p> </li> <li> <p>Between 32GB and
     * 120 GB in 8 GB increments - Available <code>cpu</code> values: 16384 (16
     * vCPU)</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> </ul>
     */
    inline void SetMemory(const char* value) { m_memoryHasBeenSet = true; m_memory.assign(value); }

    /**
     * <p>The amount of memory (in MiB) used by the task. It can be expressed as an
     * integer using MiB (for example ,<code>1024</code>) or as a string using GB (for
     * example, <code>1GB</code> or <code>1 GB</code>) in a task definition. String
     * values are converted to an integer indicating the MiB when the task definition
     * is registered.</p>  <p>Task-level CPU and memory parameters are ignored
     * for Windows containers. We recommend specifying container-level resources for
     * Windows containers.</p>  <p>If using the EC2 launch type, this field is
     * optional.</p> <p>If using the Fargate launch type, this field is required and
     * you must use one of the following values. This determines your range of
     * supported values for the <code>cpu</code> parameter.</p> <p>The CPU units cannot
     * be less than 1 vCPU when you use Windows containers on Fargate.</p> <ul> <li>
     * <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code> values:
     * 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB) - Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2
     * GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB) - Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between
     * 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and
     * 30720 (30 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 4096 (4 vCPU)</p> </li> <li> <p>Between 16 GB and 60 GB in 4 GB increments -
     * Available <code>cpu</code> values: 8192 (8 vCPU)</p> <p>This option requires
     * Linux platform <code>1.4.0</code> or later.</p> </li> <li> <p>Between 32GB and
     * 120 GB in 8 GB increments - Available <code>cpu</code> values: 16384 (16
     * vCPU)</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> </ul>
     */
    inline RegisterTaskDefinitionRequest& WithMemory(const Aws::String& value) { SetMemory(value); return *this;}

    /**
     * <p>The amount of memory (in MiB) used by the task. It can be expressed as an
     * integer using MiB (for example ,<code>1024</code>) or as a string using GB (for
     * example, <code>1GB</code> or <code>1 GB</code>) in a task definition. String
     * values are converted to an integer indicating the MiB when the task definition
     * is registered.</p>  <p>Task-level CPU and memory parameters are ignored
     * for Windows containers. We recommend specifying container-level resources for
     * Windows containers.</p>  <p>If using the EC2 launch type, this field is
     * optional.</p> <p>If using the Fargate launch type, this field is required and
     * you must use one of the following values. This determines your range of
     * supported values for the <code>cpu</code> parameter.</p> <p>The CPU units cannot
     * be less than 1 vCPU when you use Windows containers on Fargate.</p> <ul> <li>
     * <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code> values:
     * 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB) - Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2
     * GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB) - Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between
     * 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and
     * 30720 (30 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 4096 (4 vCPU)</p> </li> <li> <p>Between 16 GB and 60 GB in 4 GB increments -
     * Available <code>cpu</code> values: 8192 (8 vCPU)</p> <p>This option requires
     * Linux platform <code>1.4.0</code> or later.</p> </li> <li> <p>Between 32GB and
     * 120 GB in 8 GB increments - Available <code>cpu</code> values: 16384 (16
     * vCPU)</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> </ul>
     */
    inline RegisterTaskDefinitionRequest& WithMemory(Aws::String&& value) { SetMemory(std::move(value)); return *this;}

    /**
     * <p>The amount of memory (in MiB) used by the task. It can be expressed as an
     * integer using MiB (for example ,<code>1024</code>) or as a string using GB (for
     * example, <code>1GB</code> or <code>1 GB</code>) in a task definition. String
     * values are converted to an integer indicating the MiB when the task definition
     * is registered.</p>  <p>Task-level CPU and memory parameters are ignored
     * for Windows containers. We recommend specifying container-level resources for
     * Windows containers.</p>  <p>If using the EC2 launch type, this field is
     * optional.</p> <p>If using the Fargate launch type, this field is required and
     * you must use one of the following values. This determines your range of
     * supported values for the <code>cpu</code> parameter.</p> <p>The CPU units cannot
     * be less than 1 vCPU when you use Windows containers on Fargate.</p> <ul> <li>
     * <p>512 (0.5 GB), 1024 (1 GB), 2048 (2 GB) - Available <code>cpu</code> values:
     * 256 (.25 vCPU)</p> </li> <li> <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4
     * GB) - Available <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2
     * GB), 3072 (3 GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8
     * GB) - Available <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between
     * 4096 (4 GB) and 16384 (16 GB) in increments of 1024 (1 GB) - Available
     * <code>cpu</code> values: 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and
     * 30720 (30 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 4096 (4 vCPU)</p> </li> <li> <p>Between 16 GB and 60 GB in 4 GB increments -
     * Available <code>cpu</code> values: 8192 (8 vCPU)</p> <p>This option requires
     * Linux platform <code>1.4.0</code> or later.</p> </li> <li> <p>Between 32GB and
     * 120 GB in 8 GB increments - Available <code>cpu</code> values: 16384 (16
     * vCPU)</p> <p>This option requires Linux platform <code>1.4.0</code> or
     * later.</p> </li> </ul>
     */
    inline RegisterTaskDefinitionRequest& WithMemory(const char* value) { SetMemory(value); return *this;}


    /**
     * <p>The metadata that you apply to the task definition to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define both
     * of them.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
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
     * <p>The metadata that you apply to the task definition to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define both
     * of them.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
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
     * <p>The metadata that you apply to the task definition to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define both
     * of them.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
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
     * <p>The metadata that you apply to the task definition to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define both
     * of them.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
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
     * <p>The metadata that you apply to the task definition to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define both
     * of them.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
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
    inline RegisterTaskDefinitionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata that you apply to the task definition to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define both
     * of them.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
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
    inline RegisterTaskDefinitionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata that you apply to the task definition to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define both
     * of them.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
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
    inline RegisterTaskDefinitionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The metadata that you apply to the task definition to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define both
     * of them.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
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
    inline RegisterTaskDefinitionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. If <code>host</code> is specified,
     * then all containers within the tasks that specified the <code>host</code> PID
     * mode on the same container instance share the same process namespace with the
     * host Amazon EC2 instance. If <code>task</code> is specified, all containers
     * within the specified task share the same process namespace. If no value is
     * specified, the default is a private namespace. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the <i>Docker run reference</i>.</p> <p>If the <code>host</code>
     * PID mode is used, be aware that there is a heightened risk of undesired process
     * namespace expose. For more information, see <a
     * href="https://docs.docker.com/engine/security/security/">Docker
     * security</a>.</p>  <p>This parameter is not supported for Windows
     * containers or tasks run on Fargate.</p> 
     */
    inline const PidMode& GetPidMode() const{ return m_pidMode; }

    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. If <code>host</code> is specified,
     * then all containers within the tasks that specified the <code>host</code> PID
     * mode on the same container instance share the same process namespace with the
     * host Amazon EC2 instance. If <code>task</code> is specified, all containers
     * within the specified task share the same process namespace. If no value is
     * specified, the default is a private namespace. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the <i>Docker run reference</i>.</p> <p>If the <code>host</code>
     * PID mode is used, be aware that there is a heightened risk of undesired process
     * namespace expose. For more information, see <a
     * href="https://docs.docker.com/engine/security/security/">Docker
     * security</a>.</p>  <p>This parameter is not supported for Windows
     * containers or tasks run on Fargate.</p> 
     */
    inline bool PidModeHasBeenSet() const { return m_pidModeHasBeenSet; }

    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. If <code>host</code> is specified,
     * then all containers within the tasks that specified the <code>host</code> PID
     * mode on the same container instance share the same process namespace with the
     * host Amazon EC2 instance. If <code>task</code> is specified, all containers
     * within the specified task share the same process namespace. If no value is
     * specified, the default is a private namespace. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the <i>Docker run reference</i>.</p> <p>If the <code>host</code>
     * PID mode is used, be aware that there is a heightened risk of undesired process
     * namespace expose. For more information, see <a
     * href="https://docs.docker.com/engine/security/security/">Docker
     * security</a>.</p>  <p>This parameter is not supported for Windows
     * containers or tasks run on Fargate.</p> 
     */
    inline void SetPidMode(const PidMode& value) { m_pidModeHasBeenSet = true; m_pidMode = value; }

    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. If <code>host</code> is specified,
     * then all containers within the tasks that specified the <code>host</code> PID
     * mode on the same container instance share the same process namespace with the
     * host Amazon EC2 instance. If <code>task</code> is specified, all containers
     * within the specified task share the same process namespace. If no value is
     * specified, the default is a private namespace. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the <i>Docker run reference</i>.</p> <p>If the <code>host</code>
     * PID mode is used, be aware that there is a heightened risk of undesired process
     * namespace expose. For more information, see <a
     * href="https://docs.docker.com/engine/security/security/">Docker
     * security</a>.</p>  <p>This parameter is not supported for Windows
     * containers or tasks run on Fargate.</p> 
     */
    inline void SetPidMode(PidMode&& value) { m_pidModeHasBeenSet = true; m_pidMode = std::move(value); }

    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. If <code>host</code> is specified,
     * then all containers within the tasks that specified the <code>host</code> PID
     * mode on the same container instance share the same process namespace with the
     * host Amazon EC2 instance. If <code>task</code> is specified, all containers
     * within the specified task share the same process namespace. If no value is
     * specified, the default is a private namespace. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the <i>Docker run reference</i>.</p> <p>If the <code>host</code>
     * PID mode is used, be aware that there is a heightened risk of undesired process
     * namespace expose. For more information, see <a
     * href="https://docs.docker.com/engine/security/security/">Docker
     * security</a>.</p>  <p>This parameter is not supported for Windows
     * containers or tasks run on Fargate.</p> 
     */
    inline RegisterTaskDefinitionRequest& WithPidMode(const PidMode& value) { SetPidMode(value); return *this;}

    /**
     * <p>The process namespace to use for the containers in the task. The valid values
     * are <code>host</code> or <code>task</code>. If <code>host</code> is specified,
     * then all containers within the tasks that specified the <code>host</code> PID
     * mode on the same container instance share the same process namespace with the
     * host Amazon EC2 instance. If <code>task</code> is specified, all containers
     * within the specified task share the same process namespace. If no value is
     * specified, the default is a private namespace. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#pid-settings---pid">PID
     * settings</a> in the <i>Docker run reference</i>.</p> <p>If the <code>host</code>
     * PID mode is used, be aware that there is a heightened risk of undesired process
     * namespace expose. For more information, see <a
     * href="https://docs.docker.com/engine/security/security/">Docker
     * security</a>.</p>  <p>This parameter is not supported for Windows
     * containers or tasks run on Fargate.</p> 
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
     * </li> </ul>  <p>This parameter is not supported for Windows containers or
     * tasks run on Fargate.</p> 
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
     * </li> </ul>  <p>This parameter is not supported for Windows containers or
     * tasks run on Fargate.</p> 
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
     * </li> </ul>  <p>This parameter is not supported for Windows containers or
     * tasks run on Fargate.</p> 
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
     * </li> </ul>  <p>This parameter is not supported for Windows containers or
     * tasks run on Fargate.</p> 
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
     * </li> </ul>  <p>This parameter is not supported for Windows containers or
     * tasks run on Fargate.</p> 
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
     * </li> </ul>  <p>This parameter is not supported for Windows containers or
     * tasks run on Fargate.</p> 
     */
    inline RegisterTaskDefinitionRequest& WithIpcMode(IpcMode&& value) { SetIpcMode(std::move(value)); return *this;}


    /**
     * <p>The configuration details for the App Mesh proxy.</p> <p>For tasks hosted on
     * Amazon EC2 instances, the container instances require at least version
     * <code>1.26.0</code> of the container agent and at least version
     * <code>1.26.0-1</code> of the <code>ecs-init</code> package to use a proxy
     * configuration. If your container instances are launched from the Amazon
     * ECS-optimized AMI version <code>20190301</code> or later, then they contain the
     * required versions of the container agent and <code>ecs-init</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-ami-versions.html">Amazon
     * ECS-optimized AMI versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline const ProxyConfiguration& GetProxyConfiguration() const{ return m_proxyConfiguration; }

    /**
     * <p>The configuration details for the App Mesh proxy.</p> <p>For tasks hosted on
     * Amazon EC2 instances, the container instances require at least version
     * <code>1.26.0</code> of the container agent and at least version
     * <code>1.26.0-1</code> of the <code>ecs-init</code> package to use a proxy
     * configuration. If your container instances are launched from the Amazon
     * ECS-optimized AMI version <code>20190301</code> or later, then they contain the
     * required versions of the container agent and <code>ecs-init</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-ami-versions.html">Amazon
     * ECS-optimized AMI versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline bool ProxyConfigurationHasBeenSet() const { return m_proxyConfigurationHasBeenSet; }

    /**
     * <p>The configuration details for the App Mesh proxy.</p> <p>For tasks hosted on
     * Amazon EC2 instances, the container instances require at least version
     * <code>1.26.0</code> of the container agent and at least version
     * <code>1.26.0-1</code> of the <code>ecs-init</code> package to use a proxy
     * configuration. If your container instances are launched from the Amazon
     * ECS-optimized AMI version <code>20190301</code> or later, then they contain the
     * required versions of the container agent and <code>ecs-init</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-ami-versions.html">Amazon
     * ECS-optimized AMI versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetProxyConfiguration(const ProxyConfiguration& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = value; }

    /**
     * <p>The configuration details for the App Mesh proxy.</p> <p>For tasks hosted on
     * Amazon EC2 instances, the container instances require at least version
     * <code>1.26.0</code> of the container agent and at least version
     * <code>1.26.0-1</code> of the <code>ecs-init</code> package to use a proxy
     * configuration. If your container instances are launched from the Amazon
     * ECS-optimized AMI version <code>20190301</code> or later, then they contain the
     * required versions of the container agent and <code>ecs-init</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-ami-versions.html">Amazon
     * ECS-optimized AMI versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetProxyConfiguration(ProxyConfiguration&& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = std::move(value); }

    /**
     * <p>The configuration details for the App Mesh proxy.</p> <p>For tasks hosted on
     * Amazon EC2 instances, the container instances require at least version
     * <code>1.26.0</code> of the container agent and at least version
     * <code>1.26.0-1</code> of the <code>ecs-init</code> package to use a proxy
     * configuration. If your container instances are launched from the Amazon
     * ECS-optimized AMI version <code>20190301</code> or later, then they contain the
     * required versions of the container agent and <code>ecs-init</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-ami-versions.html">Amazon
     * ECS-optimized AMI versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline RegisterTaskDefinitionRequest& WithProxyConfiguration(const ProxyConfiguration& value) { SetProxyConfiguration(value); return *this;}

    /**
     * <p>The configuration details for the App Mesh proxy.</p> <p>For tasks hosted on
     * Amazon EC2 instances, the container instances require at least version
     * <code>1.26.0</code> of the container agent and at least version
     * <code>1.26.0-1</code> of the <code>ecs-init</code> package to use a proxy
     * configuration. If your container instances are launched from the Amazon
     * ECS-optimized AMI version <code>20190301</code> or later, then they contain the
     * required versions of the container agent and <code>ecs-init</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-ami-versions.html">Amazon
     * ECS-optimized AMI versions</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline RegisterTaskDefinitionRequest& WithProxyConfiguration(ProxyConfiguration&& value) { SetProxyConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Elastic Inference accelerators to use for the containers in the task.</p>
     */
    inline const Aws::Vector<InferenceAccelerator>& GetInferenceAccelerators() const{ return m_inferenceAccelerators; }

    /**
     * <p>The Elastic Inference accelerators to use for the containers in the task.</p>
     */
    inline bool InferenceAcceleratorsHasBeenSet() const { return m_inferenceAcceleratorsHasBeenSet; }

    /**
     * <p>The Elastic Inference accelerators to use for the containers in the task.</p>
     */
    inline void SetInferenceAccelerators(const Aws::Vector<InferenceAccelerator>& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators = value; }

    /**
     * <p>The Elastic Inference accelerators to use for the containers in the task.</p>
     */
    inline void SetInferenceAccelerators(Aws::Vector<InferenceAccelerator>&& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators = std::move(value); }

    /**
     * <p>The Elastic Inference accelerators to use for the containers in the task.</p>
     */
    inline RegisterTaskDefinitionRequest& WithInferenceAccelerators(const Aws::Vector<InferenceAccelerator>& value) { SetInferenceAccelerators(value); return *this;}

    /**
     * <p>The Elastic Inference accelerators to use for the containers in the task.</p>
     */
    inline RegisterTaskDefinitionRequest& WithInferenceAccelerators(Aws::Vector<InferenceAccelerator>&& value) { SetInferenceAccelerators(std::move(value)); return *this;}

    /**
     * <p>The Elastic Inference accelerators to use for the containers in the task.</p>
     */
    inline RegisterTaskDefinitionRequest& AddInferenceAccelerators(const InferenceAccelerator& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators.push_back(value); return *this; }

    /**
     * <p>The Elastic Inference accelerators to use for the containers in the task.</p>
     */
    inline RegisterTaskDefinitionRequest& AddInferenceAccelerators(InferenceAccelerator&& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators.push_back(std::move(value)); return *this; }


    /**
     * <p>The amount of ephemeral storage to allocate for the task. This parameter is
     * used to expand the total amount of ephemeral storage available, beyond the
     * default amount, for tasks hosted on Fargate. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/userguide/using_data_volumes.html">Fargate
     * task storage</a> in the <i>Amazon ECS User Guide for Fargate</i>.</p> 
     * <p>This parameter is only supported for tasks hosted on Fargate using the
     * following platform versions:</p> <ul> <li> <p>Linux platform version
     * <code>1.4.0</code> or later.</p> </li> </ul> 
     */
    inline const EphemeralStorage& GetEphemeralStorage() const{ return m_ephemeralStorage; }

    /**
     * <p>The amount of ephemeral storage to allocate for the task. This parameter is
     * used to expand the total amount of ephemeral storage available, beyond the
     * default amount, for tasks hosted on Fargate. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/userguide/using_data_volumes.html">Fargate
     * task storage</a> in the <i>Amazon ECS User Guide for Fargate</i>.</p> 
     * <p>This parameter is only supported for tasks hosted on Fargate using the
     * following platform versions:</p> <ul> <li> <p>Linux platform version
     * <code>1.4.0</code> or later.</p> </li> </ul> 
     */
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }

    /**
     * <p>The amount of ephemeral storage to allocate for the task. This parameter is
     * used to expand the total amount of ephemeral storage available, beyond the
     * default amount, for tasks hosted on Fargate. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/userguide/using_data_volumes.html">Fargate
     * task storage</a> in the <i>Amazon ECS User Guide for Fargate</i>.</p> 
     * <p>This parameter is only supported for tasks hosted on Fargate using the
     * following platform versions:</p> <ul> <li> <p>Linux platform version
     * <code>1.4.0</code> or later.</p> </li> </ul> 
     */
    inline void SetEphemeralStorage(const EphemeralStorage& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = value; }

    /**
     * <p>The amount of ephemeral storage to allocate for the task. This parameter is
     * used to expand the total amount of ephemeral storage available, beyond the
     * default amount, for tasks hosted on Fargate. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/userguide/using_data_volumes.html">Fargate
     * task storage</a> in the <i>Amazon ECS User Guide for Fargate</i>.</p> 
     * <p>This parameter is only supported for tasks hosted on Fargate using the
     * following platform versions:</p> <ul> <li> <p>Linux platform version
     * <code>1.4.0</code> or later.</p> </li> </ul> 
     */
    inline void SetEphemeralStorage(EphemeralStorage&& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = std::move(value); }

    /**
     * <p>The amount of ephemeral storage to allocate for the task. This parameter is
     * used to expand the total amount of ephemeral storage available, beyond the
     * default amount, for tasks hosted on Fargate. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/userguide/using_data_volumes.html">Fargate
     * task storage</a> in the <i>Amazon ECS User Guide for Fargate</i>.</p> 
     * <p>This parameter is only supported for tasks hosted on Fargate using the
     * following platform versions:</p> <ul> <li> <p>Linux platform version
     * <code>1.4.0</code> or later.</p> </li> </ul> 
     */
    inline RegisterTaskDefinitionRequest& WithEphemeralStorage(const EphemeralStorage& value) { SetEphemeralStorage(value); return *this;}

    /**
     * <p>The amount of ephemeral storage to allocate for the task. This parameter is
     * used to expand the total amount of ephemeral storage available, beyond the
     * default amount, for tasks hosted on Fargate. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/userguide/using_data_volumes.html">Fargate
     * task storage</a> in the <i>Amazon ECS User Guide for Fargate</i>.</p> 
     * <p>This parameter is only supported for tasks hosted on Fargate using the
     * following platform versions:</p> <ul> <li> <p>Linux platform version
     * <code>1.4.0</code> or later.</p> </li> </ul> 
     */
    inline RegisterTaskDefinitionRequest& WithEphemeralStorage(EphemeralStorage&& value) { SetEphemeralStorage(std::move(value)); return *this;}


    /**
     * <p>The operating system that your tasks definitions run on. A platform family is
     * specified only for tasks using the Fargate launch type. </p> <p>When you specify
     * a task definition in a service, this value must match the
     * <code>runtimePlatform</code> value of the service.</p>
     */
    inline const RuntimePlatform& GetRuntimePlatform() const{ return m_runtimePlatform; }

    /**
     * <p>The operating system that your tasks definitions run on. A platform family is
     * specified only for tasks using the Fargate launch type. </p> <p>When you specify
     * a task definition in a service, this value must match the
     * <code>runtimePlatform</code> value of the service.</p>
     */
    inline bool RuntimePlatformHasBeenSet() const { return m_runtimePlatformHasBeenSet; }

    /**
     * <p>The operating system that your tasks definitions run on. A platform family is
     * specified only for tasks using the Fargate launch type. </p> <p>When you specify
     * a task definition in a service, this value must match the
     * <code>runtimePlatform</code> value of the service.</p>
     */
    inline void SetRuntimePlatform(const RuntimePlatform& value) { m_runtimePlatformHasBeenSet = true; m_runtimePlatform = value; }

    /**
     * <p>The operating system that your tasks definitions run on. A platform family is
     * specified only for tasks using the Fargate launch type. </p> <p>When you specify
     * a task definition in a service, this value must match the
     * <code>runtimePlatform</code> value of the service.</p>
     */
    inline void SetRuntimePlatform(RuntimePlatform&& value) { m_runtimePlatformHasBeenSet = true; m_runtimePlatform = std::move(value); }

    /**
     * <p>The operating system that your tasks definitions run on. A platform family is
     * specified only for tasks using the Fargate launch type. </p> <p>When you specify
     * a task definition in a service, this value must match the
     * <code>runtimePlatform</code> value of the service.</p>
     */
    inline RegisterTaskDefinitionRequest& WithRuntimePlatform(const RuntimePlatform& value) { SetRuntimePlatform(value); return *this;}

    /**
     * <p>The operating system that your tasks definitions run on. A platform family is
     * specified only for tasks using the Fargate launch type. </p> <p>When you specify
     * a task definition in a service, this value must match the
     * <code>runtimePlatform</code> value of the service.</p>
     */
    inline RegisterTaskDefinitionRequest& WithRuntimePlatform(RuntimePlatform&& value) { SetRuntimePlatform(std::move(value)); return *this;}

  private:

    Aws::String m_family;
    bool m_familyHasBeenSet = false;

    Aws::String m_taskRoleArn;
    bool m_taskRoleArnHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    NetworkMode m_networkMode;
    bool m_networkModeHasBeenSet = false;

    Aws::Vector<ContainerDefinition> m_containerDefinitions;
    bool m_containerDefinitionsHasBeenSet = false;

    Aws::Vector<Volume> m_volumes;
    bool m_volumesHasBeenSet = false;

    Aws::Vector<TaskDefinitionPlacementConstraint> m_placementConstraints;
    bool m_placementConstraintsHasBeenSet = false;

    Aws::Vector<Compatibility> m_requiresCompatibilities;
    bool m_requiresCompatibilitiesHasBeenSet = false;

    Aws::String m_cpu;
    bool m_cpuHasBeenSet = false;

    Aws::String m_memory;
    bool m_memoryHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    PidMode m_pidMode;
    bool m_pidModeHasBeenSet = false;

    IpcMode m_ipcMode;
    bool m_ipcModeHasBeenSet = false;

    ProxyConfiguration m_proxyConfiguration;
    bool m_proxyConfigurationHasBeenSet = false;

    Aws::Vector<InferenceAccelerator> m_inferenceAccelerators;
    bool m_inferenceAcceleratorsHasBeenSet = false;

    EphemeralStorage m_ephemeralStorage;
    bool m_ephemeralStorageHasBeenSet = false;

    RuntimePlatform m_runtimePlatform;
    bool m_runtimePlatformHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
