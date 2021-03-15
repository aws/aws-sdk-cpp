/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/NetworkMode.h>
#include <aws/ecs/model/TaskDefinitionStatus.h>
#include <aws/ecs/model/PidMode.h>
#include <aws/ecs/model/IpcMode.h>
#include <aws/ecs/model/ProxyConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecs/model/ContainerDefinition.h>
#include <aws/ecs/model/Volume.h>
#include <aws/ecs/model/Attribute.h>
#include <aws/ecs/model/TaskDefinitionPlacementConstraint.h>
#include <aws/ecs/model/Compatibility.h>
#include <aws/ecs/model/InferenceAccelerator.h>
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
   * <p>The details of a task definition which describes the container and volume
   * definitions of an Amazon Elastic Container Service task. You can specify which
   * Docker images to use, the required resources, and other configurations related
   * to launching the task definition through an Amazon ECS service or
   * task.</p><p><h3>See Also:</h3>   <a
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
    inline bool TaskDefinitionArnHasBeenSet() const { return m_taskDefinitionArnHasBeenSet; }

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
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<ContainerDefinition>& GetContainerDefinitions() const{ return m_containerDefinitions; }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool ContainerDefinitionsHasBeenSet() const { return m_containerDefinitionsHasBeenSet; }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetContainerDefinitions(const Aws::Vector<ContainerDefinition>& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = value; }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetContainerDefinitions(Aws::Vector<ContainerDefinition>&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = std::move(value); }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithContainerDefinitions(const Aws::Vector<ContainerDefinition>& value) { SetContainerDefinitions(value); return *this;}

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithContainerDefinitions(Aws::Vector<ContainerDefinition>&& value) { SetContainerDefinitions(std::move(value)); return *this;}

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& AddContainerDefinitions(const ContainerDefinition& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.push_back(value); return *this; }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& AddContainerDefinitions(ContainerDefinition&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of a family that this task definition is registered to. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p> <p>A family groups multiple versions of a task definition. Amazon
     * ECS gives the first task definition that you registered to a family a revision
     * number of 1. Amazon ECS gives sequential revision numbers to each task
     * definition that you add.</p>
     */
    inline const Aws::String& GetFamily() const{ return m_family; }

    /**
     * <p>The name of a family that this task definition is registered to. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p> <p>A family groups multiple versions of a task definition. Amazon
     * ECS gives the first task definition that you registered to a family a revision
     * number of 1. Amazon ECS gives sequential revision numbers to each task
     * definition that you add.</p>
     */
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }

    /**
     * <p>The name of a family that this task definition is registered to. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p> <p>A family groups multiple versions of a task definition. Amazon
     * ECS gives the first task definition that you registered to a family a revision
     * number of 1. Amazon ECS gives sequential revision numbers to each task
     * definition that you add.</p>
     */
    inline void SetFamily(const Aws::String& value) { m_familyHasBeenSet = true; m_family = value; }

    /**
     * <p>The name of a family that this task definition is registered to. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p> <p>A family groups multiple versions of a task definition. Amazon
     * ECS gives the first task definition that you registered to a family a revision
     * number of 1. Amazon ECS gives sequential revision numbers to each task
     * definition that you add.</p>
     */
    inline void SetFamily(Aws::String&& value) { m_familyHasBeenSet = true; m_family = std::move(value); }

    /**
     * <p>The name of a family that this task definition is registered to. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p> <p>A family groups multiple versions of a task definition. Amazon
     * ECS gives the first task definition that you registered to a family a revision
     * number of 1. Amazon ECS gives sequential revision numbers to each task
     * definition that you add.</p>
     */
    inline void SetFamily(const char* value) { m_familyHasBeenSet = true; m_family.assign(value); }

    /**
     * <p>The name of a family that this task definition is registered to. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p> <p>A family groups multiple versions of a task definition. Amazon
     * ECS gives the first task definition that you registered to a family a revision
     * number of 1. Amazon ECS gives sequential revision numbers to each task
     * definition that you add.</p>
     */
    inline TaskDefinition& WithFamily(const Aws::String& value) { SetFamily(value); return *this;}

    /**
     * <p>The name of a family that this task definition is registered to. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p> <p>A family groups multiple versions of a task definition. Amazon
     * ECS gives the first task definition that you registered to a family a revision
     * number of 1. Amazon ECS gives sequential revision numbers to each task
     * definition that you add.</p>
     */
    inline TaskDefinition& WithFamily(Aws::String&& value) { SetFamily(std::move(value)); return *this;}

    /**
     * <p>The name of a family that this task definition is registered to. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p> <p>A family groups multiple versions of a task definition. Amazon
     * ECS gives the first task definition that you registered to a family a revision
     * number of 1. Amazon ECS gives sequential revision numbers to each task
     * definition that you add.</p>
     */
    inline TaskDefinition& WithFamily(const char* value) { SetFamily(value); return *this;}


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the AWS Identity and
     * Access Management (IAM) role that grants containers in the task permission to
     * call AWS APIs on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">Amazon
     * ECS Task Role</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>IAM roles for tasks on Windows require that the
     * <code>-EnableTaskIAMRole</code> option is set when you launch the Amazon
     * ECS-optimized Windows AMI. Your containers must also run some configuration code
     * in order to take advantage of the feature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows_task_IAM_roles.html">Windows
     * IAM roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetTaskRoleArn() const{ return m_taskRoleArn; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the AWS Identity and
     * Access Management (IAM) role that grants containers in the task permission to
     * call AWS APIs on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">Amazon
     * ECS Task Role</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>IAM roles for tasks on Windows require that the
     * <code>-EnableTaskIAMRole</code> option is set when you launch the Amazon
     * ECS-optimized Windows AMI. Your containers must also run some configuration code
     * in order to take advantage of the feature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows_task_IAM_roles.html">Windows
     * IAM roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool TaskRoleArnHasBeenSet() const { return m_taskRoleArnHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the AWS Identity and
     * Access Management (IAM) role that grants containers in the task permission to
     * call AWS APIs on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">Amazon
     * ECS Task Role</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>IAM roles for tasks on Windows require that the
     * <code>-EnableTaskIAMRole</code> option is set when you launch the Amazon
     * ECS-optimized Windows AMI. Your containers must also run some configuration code
     * in order to take advantage of the feature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows_task_IAM_roles.html">Windows
     * IAM roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetTaskRoleArn(const Aws::String& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the AWS Identity and
     * Access Management (IAM) role that grants containers in the task permission to
     * call AWS APIs on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">Amazon
     * ECS Task Role</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>IAM roles for tasks on Windows require that the
     * <code>-EnableTaskIAMRole</code> option is set when you launch the Amazon
     * ECS-optimized Windows AMI. Your containers must also run some configuration code
     * in order to take advantage of the feature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows_task_IAM_roles.html">Windows
     * IAM roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetTaskRoleArn(Aws::String&& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the AWS Identity and
     * Access Management (IAM) role that grants containers in the task permission to
     * call AWS APIs on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">Amazon
     * ECS Task Role</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>IAM roles for tasks on Windows require that the
     * <code>-EnableTaskIAMRole</code> option is set when you launch the Amazon
     * ECS-optimized Windows AMI. Your containers must also run some configuration code
     * in order to take advantage of the feature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows_task_IAM_roles.html">Windows
     * IAM roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetTaskRoleArn(const char* value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the AWS Identity and
     * Access Management (IAM) role that grants containers in the task permission to
     * call AWS APIs on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">Amazon
     * ECS Task Role</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>IAM roles for tasks on Windows require that the
     * <code>-EnableTaskIAMRole</code> option is set when you launch the Amazon
     * ECS-optimized Windows AMI. Your containers must also run some configuration code
     * in order to take advantage of the feature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows_task_IAM_roles.html">Windows
     * IAM roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithTaskRoleArn(const Aws::String& value) { SetTaskRoleArn(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the AWS Identity and
     * Access Management (IAM) role that grants containers in the task permission to
     * call AWS APIs on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">Amazon
     * ECS Task Role</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>IAM roles for tasks on Windows require that the
     * <code>-EnableTaskIAMRole</code> option is set when you launch the Amazon
     * ECS-optimized Windows AMI. Your containers must also run some configuration code
     * in order to take advantage of the feature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows_task_IAM_roles.html">Windows
     * IAM roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithTaskRoleArn(Aws::String&& value) { SetTaskRoleArn(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the AWS Identity and
     * Access Management (IAM) role that grants containers in the task permission to
     * call AWS APIs on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">Amazon
     * ECS Task Role</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>IAM roles for tasks on Windows require that the
     * <code>-EnableTaskIAMRole</code> option is set when you launch the Amazon
     * ECS-optimized Windows AMI. Your containers must also run some configuration code
     * in order to take advantage of the feature. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows_task_IAM_roles.html">Windows
     * IAM roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithTaskRoleArn(const char* value) { SetTaskRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
     * Amazon ECS container agent permission to make AWS API calls on your behalf. The
     * task execution IAM role is required depending on the requirements of your task.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
     * Amazon ECS container agent permission to make AWS API calls on your behalf. The
     * task execution IAM role is required depending on the requirements of your task.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
     * Amazon ECS container agent permission to make AWS API calls on your behalf. The
     * task execution IAM role is required depending on the requirements of your task.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
     * Amazon ECS container agent permission to make AWS API calls on your behalf. The
     * task execution IAM role is required depending on the requirements of your task.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
     * Amazon ECS container agent permission to make AWS API calls on your behalf. The
     * task execution IAM role is required depending on the requirements of your task.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
     * Amazon ECS container agent permission to make AWS API calls on your behalf. The
     * task execution IAM role is required depending on the requirements of your task.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline TaskDefinition& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
     * Amazon ECS container agent permission to make AWS API calls on your behalf. The
     * task execution IAM role is required depending on the requirements of your task.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline TaskDefinition& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
     * Amazon ECS container agent permission to make AWS API calls on your behalf. The
     * task execution IAM role is required depending on the requirements of your task.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_execution_IAM_role.html">Amazon
     * ECS task execution IAM role</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>
     */
    inline TaskDefinition& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, <code>awsvpc</code>, and
     * <code>host</code>. If no network mode is specified, the default is
     * <code>bridge</code>.</p> <p>For Amazon ECS tasks on Fargate, the
     * <code>awsvpc</code> network mode is required. For Amazon ECS tasks on Amazon EC2
     * instances, any network mode can be used. If the network mode is set to
     * <code>none</code>, you cannot specify port mappings in your container
     * definitions, and the tasks containers do not have external connectivity. The
     * <code>host</code> and <code>awsvpc</code> network modes offer the highest
     * networking performance for containers because they use the EC2 network stack
     * instead of the virtualized network stack provided by the <code>bridge</code>
     * mode.</p> <p>With the <code>host</code> and <code>awsvpc</code> network modes,
     * exposed container ports are mapped directly to the corresponding host port (for
     * the <code>host</code> network mode) or the attached elastic network interface
     * port (for the <code>awsvpc</code> network mode), so you cannot take advantage of
     * dynamic host port mappings. </p>  <p>When using the <code>host</code>
     * network mode, you should not run containers using the root user (UID 0). It is
     * considered best practice to use a non-root user.</p>  <p>If the
     * network mode is <code>awsvpc</code>, the task is allocated an elastic network
     * interface, and you must specify a <a>NetworkConfiguration</a> value when you
     * create a service or run a task with the task definition. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>Currently, only Amazon ECS-optimized AMIs, other Amazon
     * Linux variants with the <code>ecs-init</code> package, or AWS Fargate
     * infrastructure support the <code>awsvpc</code> network mode. </p>  <p>If
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
     * <code>host</code>. If no network mode is specified, the default is
     * <code>bridge</code>.</p> <p>For Amazon ECS tasks on Fargate, the
     * <code>awsvpc</code> network mode is required. For Amazon ECS tasks on Amazon EC2
     * instances, any network mode can be used. If the network mode is set to
     * <code>none</code>, you cannot specify port mappings in your container
     * definitions, and the tasks containers do not have external connectivity. The
     * <code>host</code> and <code>awsvpc</code> network modes offer the highest
     * networking performance for containers because they use the EC2 network stack
     * instead of the virtualized network stack provided by the <code>bridge</code>
     * mode.</p> <p>With the <code>host</code> and <code>awsvpc</code> network modes,
     * exposed container ports are mapped directly to the corresponding host port (for
     * the <code>host</code> network mode) or the attached elastic network interface
     * port (for the <code>awsvpc</code> network mode), so you cannot take advantage of
     * dynamic host port mappings. </p>  <p>When using the <code>host</code>
     * network mode, you should not run containers using the root user (UID 0). It is
     * considered best practice to use a non-root user.</p>  <p>If the
     * network mode is <code>awsvpc</code>, the task is allocated an elastic network
     * interface, and you must specify a <a>NetworkConfiguration</a> value when you
     * create a service or run a task with the task definition. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>Currently, only Amazon ECS-optimized AMIs, other Amazon
     * Linux variants with the <code>ecs-init</code> package, or AWS Fargate
     * infrastructure support the <code>awsvpc</code> network mode. </p>  <p>If
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
     * <code>host</code>. If no network mode is specified, the default is
     * <code>bridge</code>.</p> <p>For Amazon ECS tasks on Fargate, the
     * <code>awsvpc</code> network mode is required. For Amazon ECS tasks on Amazon EC2
     * instances, any network mode can be used. If the network mode is set to
     * <code>none</code>, you cannot specify port mappings in your container
     * definitions, and the tasks containers do not have external connectivity. The
     * <code>host</code> and <code>awsvpc</code> network modes offer the highest
     * networking performance for containers because they use the EC2 network stack
     * instead of the virtualized network stack provided by the <code>bridge</code>
     * mode.</p> <p>With the <code>host</code> and <code>awsvpc</code> network modes,
     * exposed container ports are mapped directly to the corresponding host port (for
     * the <code>host</code> network mode) or the attached elastic network interface
     * port (for the <code>awsvpc</code> network mode), so you cannot take advantage of
     * dynamic host port mappings. </p>  <p>When using the <code>host</code>
     * network mode, you should not run containers using the root user (UID 0). It is
     * considered best practice to use a non-root user.</p>  <p>If the
     * network mode is <code>awsvpc</code>, the task is allocated an elastic network
     * interface, and you must specify a <a>NetworkConfiguration</a> value when you
     * create a service or run a task with the task definition. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>Currently, only Amazon ECS-optimized AMIs, other Amazon
     * Linux variants with the <code>ecs-init</code> package, or AWS Fargate
     * infrastructure support the <code>awsvpc</code> network mode. </p>  <p>If
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
     * <code>host</code>. If no network mode is specified, the default is
     * <code>bridge</code>.</p> <p>For Amazon ECS tasks on Fargate, the
     * <code>awsvpc</code> network mode is required. For Amazon ECS tasks on Amazon EC2
     * instances, any network mode can be used. If the network mode is set to
     * <code>none</code>, you cannot specify port mappings in your container
     * definitions, and the tasks containers do not have external connectivity. The
     * <code>host</code> and <code>awsvpc</code> network modes offer the highest
     * networking performance for containers because they use the EC2 network stack
     * instead of the virtualized network stack provided by the <code>bridge</code>
     * mode.</p> <p>With the <code>host</code> and <code>awsvpc</code> network modes,
     * exposed container ports are mapped directly to the corresponding host port (for
     * the <code>host</code> network mode) or the attached elastic network interface
     * port (for the <code>awsvpc</code> network mode), so you cannot take advantage of
     * dynamic host port mappings. </p>  <p>When using the <code>host</code>
     * network mode, you should not run containers using the root user (UID 0). It is
     * considered best practice to use a non-root user.</p>  <p>If the
     * network mode is <code>awsvpc</code>, the task is allocated an elastic network
     * interface, and you must specify a <a>NetworkConfiguration</a> value when you
     * create a service or run a task with the task definition. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>Currently, only Amazon ECS-optimized AMIs, other Amazon
     * Linux variants with the <code>ecs-init</code> package, or AWS Fargate
     * infrastructure support the <code>awsvpc</code> network mode. </p>  <p>If
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
     * <code>host</code>. If no network mode is specified, the default is
     * <code>bridge</code>.</p> <p>For Amazon ECS tasks on Fargate, the
     * <code>awsvpc</code> network mode is required. For Amazon ECS tasks on Amazon EC2
     * instances, any network mode can be used. If the network mode is set to
     * <code>none</code>, you cannot specify port mappings in your container
     * definitions, and the tasks containers do not have external connectivity. The
     * <code>host</code> and <code>awsvpc</code> network modes offer the highest
     * networking performance for containers because they use the EC2 network stack
     * instead of the virtualized network stack provided by the <code>bridge</code>
     * mode.</p> <p>With the <code>host</code> and <code>awsvpc</code> network modes,
     * exposed container ports are mapped directly to the corresponding host port (for
     * the <code>host</code> network mode) or the attached elastic network interface
     * port (for the <code>awsvpc</code> network mode), so you cannot take advantage of
     * dynamic host port mappings. </p>  <p>When using the <code>host</code>
     * network mode, you should not run containers using the root user (UID 0). It is
     * considered best practice to use a non-root user.</p>  <p>If the
     * network mode is <code>awsvpc</code>, the task is allocated an elastic network
     * interface, and you must specify a <a>NetworkConfiguration</a> value when you
     * create a service or run a task with the task definition. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>Currently, only Amazon ECS-optimized AMIs, other Amazon
     * Linux variants with the <code>ecs-init</code> package, or AWS Fargate
     * infrastructure support the <code>awsvpc</code> network mode. </p>  <p>If
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
    inline TaskDefinition& WithNetworkMode(const NetworkMode& value) { SetNetworkMode(value); return *this;}

    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, <code>awsvpc</code>, and
     * <code>host</code>. If no network mode is specified, the default is
     * <code>bridge</code>.</p> <p>For Amazon ECS tasks on Fargate, the
     * <code>awsvpc</code> network mode is required. For Amazon ECS tasks on Amazon EC2
     * instances, any network mode can be used. If the network mode is set to
     * <code>none</code>, you cannot specify port mappings in your container
     * definitions, and the tasks containers do not have external connectivity. The
     * <code>host</code> and <code>awsvpc</code> network modes offer the highest
     * networking performance for containers because they use the EC2 network stack
     * instead of the virtualized network stack provided by the <code>bridge</code>
     * mode.</p> <p>With the <code>host</code> and <code>awsvpc</code> network modes,
     * exposed container ports are mapped directly to the corresponding host port (for
     * the <code>host</code> network mode) or the attached elastic network interface
     * port (for the <code>awsvpc</code> network mode), so you cannot take advantage of
     * dynamic host port mappings. </p>  <p>When using the <code>host</code>
     * network mode, you should not run containers using the root user (UID 0). It is
     * considered best practice to use a non-root user.</p>  <p>If the
     * network mode is <code>awsvpc</code>, the task is allocated an elastic network
     * interface, and you must specify a <a>NetworkConfiguration</a> value when you
     * create a service or run a task with the task definition. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * Networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>Currently, only Amazon ECS-optimized AMIs, other Amazon
     * Linux variants with the <code>ecs-init</code> package, or AWS Fargate
     * infrastructure support the <code>awsvpc</code> network mode. </p>  <p>If
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
    inline TaskDefinition& WithNetworkMode(NetworkMode&& value) { SetNetworkMode(std::move(value)); return *this;}


    /**
     * <p>The revision of the task in a particular family. The revision is a version
     * number of a task definition in a family. When you register a task definition for
     * the first time, the revision is <code>1</code>. Each time that you register a
     * new revision of a task definition in the same family, the revision value always
     * increases by one, even if you have deregistered previous revisions in this
     * family.</p>
     */
    inline int GetRevision() const{ return m_revision; }

    /**
     * <p>The revision of the task in a particular family. The revision is a version
     * number of a task definition in a family. When you register a task definition for
     * the first time, the revision is <code>1</code>. Each time that you register a
     * new revision of a task definition in the same family, the revision value always
     * increases by one, even if you have deregistered previous revisions in this
     * family.</p>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p>The revision of the task in a particular family. The revision is a version
     * number of a task definition in a family. When you register a task definition for
     * the first time, the revision is <code>1</code>. Each time that you register a
     * new revision of a task definition in the same family, the revision value always
     * increases by one, even if you have deregistered previous revisions in this
     * family.</p>
     */
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The revision of the task in a particular family. The revision is a version
     * number of a task definition in a family. When you register a task definition for
     * the first time, the revision is <code>1</code>. Each time that you register a
     * new revision of a task definition in the same family, the revision value always
     * increases by one, even if you have deregistered previous revisions in this
     * family.</p>
     */
    inline TaskDefinition& WithRevision(int value) { SetRevision(value); return *this;}


    /**
     * <p>The list of data volume definitions for the task. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_data_volumes.html">Using
     * data volumes in tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>The <code>host</code> and <code>sourcePath</code>
     * parameters are not supported for tasks run on AWS Fargate.</p> 
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>The list of data volume definitions for the task. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_data_volumes.html">Using
     * data volumes in tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>The <code>host</code> and <code>sourcePath</code>
     * parameters are not supported for tasks run on AWS Fargate.</p> 
     */
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }

    /**
     * <p>The list of data volume definitions for the task. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_data_volumes.html">Using
     * data volumes in tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>The <code>host</code> and <code>sourcePath</code>
     * parameters are not supported for tasks run on AWS Fargate.</p> 
     */
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>The list of data volume definitions for the task. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_data_volumes.html">Using
     * data volumes in tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>The <code>host</code> and <code>sourcePath</code>
     * parameters are not supported for tasks run on AWS Fargate.</p> 
     */
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }

    /**
     * <p>The list of data volume definitions for the task. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_data_volumes.html">Using
     * data volumes in tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>The <code>host</code> and <code>sourcePath</code>
     * parameters are not supported for tasks run on AWS Fargate.</p> 
     */
    inline TaskDefinition& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}

    /**
     * <p>The list of data volume definitions for the task. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_data_volumes.html">Using
     * data volumes in tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>The <code>host</code> and <code>sourcePath</code>
     * parameters are not supported for tasks run on AWS Fargate.</p> 
     */
    inline TaskDefinition& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p>The list of data volume definitions for the task. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_data_volumes.html">Using
     * data volumes in tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>The <code>host</code> and <code>sourcePath</code>
     * parameters are not supported for tasks run on AWS Fargate.</p> 
     */
    inline TaskDefinition& AddVolumes(const Volume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>The list of data volume definitions for the task. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_data_volumes.html">Using
     * data volumes in tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>The <code>host</code> and <code>sourcePath</code>
     * parameters are not supported for tasks run on AWS Fargate.</p> 
     */
    inline TaskDefinition& AddVolumes(Volume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the task definition.</p>
     */
    inline const TaskDefinitionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the task definition.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
     * <p>The container instance attributes required by your task. When an Amazon EC2
     * instance is registered to your cluster, the Amazon ECS container agent assigns
     * some standard attributes to the instance. You can apply custom attributes,
     * specified as key-value pairs using the Amazon ECS console or the
     * <a>PutAttributes</a> API. These attributes are used when considering task
     * placement for tasks hosted on Amazon EC2 instances. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-constraints.html#attributes">Attributes</a>
     * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p> 
     * <p>This parameter is not supported for tasks run on AWS Fargate.</p> 
     */
    inline const Aws::Vector<Attribute>& GetRequiresAttributes() const{ return m_requiresAttributes; }

    /**
     * <p>The container instance attributes required by your task. When an Amazon EC2
     * instance is registered to your cluster, the Amazon ECS container agent assigns
     * some standard attributes to the instance. You can apply custom attributes,
     * specified as key-value pairs using the Amazon ECS console or the
     * <a>PutAttributes</a> API. These attributes are used when considering task
     * placement for tasks hosted on Amazon EC2 instances. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-constraints.html#attributes">Attributes</a>
     * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p> 
     * <p>This parameter is not supported for tasks run on AWS Fargate.</p> 
     */
    inline bool RequiresAttributesHasBeenSet() const { return m_requiresAttributesHasBeenSet; }

    /**
     * <p>The container instance attributes required by your task. When an Amazon EC2
     * instance is registered to your cluster, the Amazon ECS container agent assigns
     * some standard attributes to the instance. You can apply custom attributes,
     * specified as key-value pairs using the Amazon ECS console or the
     * <a>PutAttributes</a> API. These attributes are used when considering task
     * placement for tasks hosted on Amazon EC2 instances. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-constraints.html#attributes">Attributes</a>
     * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p> 
     * <p>This parameter is not supported for tasks run on AWS Fargate.</p> 
     */
    inline void SetRequiresAttributes(const Aws::Vector<Attribute>& value) { m_requiresAttributesHasBeenSet = true; m_requiresAttributes = value; }

    /**
     * <p>The container instance attributes required by your task. When an Amazon EC2
     * instance is registered to your cluster, the Amazon ECS container agent assigns
     * some standard attributes to the instance. You can apply custom attributes,
     * specified as key-value pairs using the Amazon ECS console or the
     * <a>PutAttributes</a> API. These attributes are used when considering task
     * placement for tasks hosted on Amazon EC2 instances. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-constraints.html#attributes">Attributes</a>
     * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p> 
     * <p>This parameter is not supported for tasks run on AWS Fargate.</p> 
     */
    inline void SetRequiresAttributes(Aws::Vector<Attribute>&& value) { m_requiresAttributesHasBeenSet = true; m_requiresAttributes = std::move(value); }

    /**
     * <p>The container instance attributes required by your task. When an Amazon EC2
     * instance is registered to your cluster, the Amazon ECS container agent assigns
     * some standard attributes to the instance. You can apply custom attributes,
     * specified as key-value pairs using the Amazon ECS console or the
     * <a>PutAttributes</a> API. These attributes are used when considering task
     * placement for tasks hosted on Amazon EC2 instances. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-constraints.html#attributes">Attributes</a>
     * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p> 
     * <p>This parameter is not supported for tasks run on AWS Fargate.</p> 
     */
    inline TaskDefinition& WithRequiresAttributes(const Aws::Vector<Attribute>& value) { SetRequiresAttributes(value); return *this;}

    /**
     * <p>The container instance attributes required by your task. When an Amazon EC2
     * instance is registered to your cluster, the Amazon ECS container agent assigns
     * some standard attributes to the instance. You can apply custom attributes,
     * specified as key-value pairs using the Amazon ECS console or the
     * <a>PutAttributes</a> API. These attributes are used when considering task
     * placement for tasks hosted on Amazon EC2 instances. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-constraints.html#attributes">Attributes</a>
     * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p> 
     * <p>This parameter is not supported for tasks run on AWS Fargate.</p> 
     */
    inline TaskDefinition& WithRequiresAttributes(Aws::Vector<Attribute>&& value) { SetRequiresAttributes(std::move(value)); return *this;}

    /**
     * <p>The container instance attributes required by your task. When an Amazon EC2
     * instance is registered to your cluster, the Amazon ECS container agent assigns
     * some standard attributes to the instance. You can apply custom attributes,
     * specified as key-value pairs using the Amazon ECS console or the
     * <a>PutAttributes</a> API. These attributes are used when considering task
     * placement for tasks hosted on Amazon EC2 instances. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-constraints.html#attributes">Attributes</a>
     * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p> 
     * <p>This parameter is not supported for tasks run on AWS Fargate.</p> 
     */
    inline TaskDefinition& AddRequiresAttributes(const Attribute& value) { m_requiresAttributesHasBeenSet = true; m_requiresAttributes.push_back(value); return *this; }

    /**
     * <p>The container instance attributes required by your task. When an Amazon EC2
     * instance is registered to your cluster, the Amazon ECS container agent assigns
     * some standard attributes to the instance. You can apply custom attributes,
     * specified as key-value pairs using the Amazon ECS console or the
     * <a>PutAttributes</a> API. These attributes are used when considering task
     * placement for tasks hosted on Amazon EC2 instances. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-constraints.html#attributes">Attributes</a>
     * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p> 
     * <p>This parameter is not supported for tasks run on AWS Fargate.</p> 
     */
    inline TaskDefinition& AddRequiresAttributes(Attribute&& value) { m_requiresAttributesHasBeenSet = true; m_requiresAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of placement constraint objects to use for tasks.</p>  <p>This
     * parameter is not supported for tasks run on AWS Fargate.</p> 
     */
    inline const Aws::Vector<TaskDefinitionPlacementConstraint>& GetPlacementConstraints() const{ return m_placementConstraints; }

    /**
     * <p>An array of placement constraint objects to use for tasks.</p>  <p>This
     * parameter is not supported for tasks run on AWS Fargate.</p> 
     */
    inline bool PlacementConstraintsHasBeenSet() const { return m_placementConstraintsHasBeenSet; }

    /**
     * <p>An array of placement constraint objects to use for tasks.</p>  <p>This
     * parameter is not supported for tasks run on AWS Fargate.</p> 
     */
    inline void SetPlacementConstraints(const Aws::Vector<TaskDefinitionPlacementConstraint>& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = value; }

    /**
     * <p>An array of placement constraint objects to use for tasks.</p>  <p>This
     * parameter is not supported for tasks run on AWS Fargate.</p> 
     */
    inline void SetPlacementConstraints(Aws::Vector<TaskDefinitionPlacementConstraint>&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = std::move(value); }

    /**
     * <p>An array of placement constraint objects to use for tasks.</p>  <p>This
     * parameter is not supported for tasks run on AWS Fargate.</p> 
     */
    inline TaskDefinition& WithPlacementConstraints(const Aws::Vector<TaskDefinitionPlacementConstraint>& value) { SetPlacementConstraints(value); return *this;}

    /**
     * <p>An array of placement constraint objects to use for tasks.</p>  <p>This
     * parameter is not supported for tasks run on AWS Fargate.</p> 
     */
    inline TaskDefinition& WithPlacementConstraints(Aws::Vector<TaskDefinitionPlacementConstraint>&& value) { SetPlacementConstraints(std::move(value)); return *this;}

    /**
     * <p>An array of placement constraint objects to use for tasks.</p>  <p>This
     * parameter is not supported for tasks run on AWS Fargate.</p> 
     */
    inline TaskDefinition& AddPlacementConstraints(const TaskDefinitionPlacementConstraint& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(value); return *this; }

    /**
     * <p>An array of placement constraint objects to use for tasks.</p>  <p>This
     * parameter is not supported for tasks run on AWS Fargate.</p> 
     */
    inline TaskDefinition& AddPlacementConstraints(TaskDefinitionPlacementConstraint&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(std::move(value)); return *this; }


    /**
     * <p>The task launch types the task definition validated against during task
     * definition registration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Compatibility>& GetCompatibilities() const{ return m_compatibilities; }

    /**
     * <p>The task launch types the task definition validated against during task
     * definition registration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool CompatibilitiesHasBeenSet() const { return m_compatibilitiesHasBeenSet; }

    /**
     * <p>The task launch types the task definition validated against during task
     * definition registration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetCompatibilities(const Aws::Vector<Compatibility>& value) { m_compatibilitiesHasBeenSet = true; m_compatibilities = value; }

    /**
     * <p>The task launch types the task definition validated against during task
     * definition registration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetCompatibilities(Aws::Vector<Compatibility>&& value) { m_compatibilitiesHasBeenSet = true; m_compatibilities = std::move(value); }

    /**
     * <p>The task launch types the task definition validated against during task
     * definition registration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithCompatibilities(const Aws::Vector<Compatibility>& value) { SetCompatibilities(value); return *this;}

    /**
     * <p>The task launch types the task definition validated against during task
     * definition registration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithCompatibilities(Aws::Vector<Compatibility>&& value) { SetCompatibilities(std::move(value)); return *this;}

    /**
     * <p>The task launch types the task definition validated against during task
     * definition registration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& AddCompatibilities(const Compatibility& value) { m_compatibilitiesHasBeenSet = true; m_compatibilities.push_back(value); return *this; }

    /**
     * <p>The task launch types the task definition validated against during task
     * definition registration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& AddCompatibilities(Compatibility&& value) { m_compatibilitiesHasBeenSet = true; m_compatibilities.push_back(std::move(value)); return *this; }


    /**
     * <p>The task launch types the task definition was validated against. To determine
     * which task launch types the task definition is validated for, see the
     * <a>TaskDefinition$compatibilities</a> parameter.</p>
     */
    inline const Aws::Vector<Compatibility>& GetRequiresCompatibilities() const{ return m_requiresCompatibilities; }

    /**
     * <p>The task launch types the task definition was validated against. To determine
     * which task launch types the task definition is validated for, see the
     * <a>TaskDefinition$compatibilities</a> parameter.</p>
     */
    inline bool RequiresCompatibilitiesHasBeenSet() const { return m_requiresCompatibilitiesHasBeenSet; }

    /**
     * <p>The task launch types the task definition was validated against. To determine
     * which task launch types the task definition is validated for, see the
     * <a>TaskDefinition$compatibilities</a> parameter.</p>
     */
    inline void SetRequiresCompatibilities(const Aws::Vector<Compatibility>& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities = value; }

    /**
     * <p>The task launch types the task definition was validated against. To determine
     * which task launch types the task definition is validated for, see the
     * <a>TaskDefinition$compatibilities</a> parameter.</p>
     */
    inline void SetRequiresCompatibilities(Aws::Vector<Compatibility>&& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities = std::move(value); }

    /**
     * <p>The task launch types the task definition was validated against. To determine
     * which task launch types the task definition is validated for, see the
     * <a>TaskDefinition$compatibilities</a> parameter.</p>
     */
    inline TaskDefinition& WithRequiresCompatibilities(const Aws::Vector<Compatibility>& value) { SetRequiresCompatibilities(value); return *this;}

    /**
     * <p>The task launch types the task definition was validated against. To determine
     * which task launch types the task definition is validated for, see the
     * <a>TaskDefinition$compatibilities</a> parameter.</p>
     */
    inline TaskDefinition& WithRequiresCompatibilities(Aws::Vector<Compatibility>&& value) { SetRequiresCompatibilities(std::move(value)); return *this;}

    /**
     * <p>The task launch types the task definition was validated against. To determine
     * which task launch types the task definition is validated for, see the
     * <a>TaskDefinition$compatibilities</a> parameter.</p>
     */
    inline TaskDefinition& AddRequiresCompatibilities(const Compatibility& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities.push_back(value); return *this; }

    /**
     * <p>The task launch types the task definition was validated against. To determine
     * which task launch types the task definition is validated for, see the
     * <a>TaskDefinition$compatibilities</a> parameter.</p>
     */
    inline TaskDefinition& AddRequiresCompatibilities(Compatibility&& value) { m_requiresCompatibilitiesHasBeenSet = true; m_requiresCompatibilities.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of <code>cpu</code> units used by the task. If you are using the
     * EC2 launch type, this field is optional and any value can be used. If you are
     * using the Fargate launch type, this field is required and you must use one of
     * the following values, which determines your range of valid values for the
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
     * <p>The number of <code>cpu</code> units used by the task. If you are using the
     * EC2 launch type, this field is optional and any value can be used. If you are
     * using the Fargate launch type, this field is required and you must use one of
     * the following values, which determines your range of valid values for the
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
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }

    /**
     * <p>The number of <code>cpu</code> units used by the task. If you are using the
     * EC2 launch type, this field is optional and any value can be used. If you are
     * using the Fargate launch type, this field is required and you must use one of
     * the following values, which determines your range of valid values for the
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
     * <p>The number of <code>cpu</code> units used by the task. If you are using the
     * EC2 launch type, this field is optional and any value can be used. If you are
     * using the Fargate launch type, this field is required and you must use one of
     * the following values, which determines your range of valid values for the
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
     * <p>The number of <code>cpu</code> units used by the task. If you are using the
     * EC2 launch type, this field is optional and any value can be used. If you are
     * using the Fargate launch type, this field is required and you must use one of
     * the following values, which determines your range of valid values for the
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
     * <p>The number of <code>cpu</code> units used by the task. If you are using the
     * EC2 launch type, this field is optional and any value can be used. If you are
     * using the Fargate launch type, this field is required and you must use one of
     * the following values, which determines your range of valid values for the
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
     * <p>The number of <code>cpu</code> units used by the task. If you are using the
     * EC2 launch type, this field is optional and any value can be used. If you are
     * using the Fargate launch type, this field is required and you must use one of
     * the following values, which determines your range of valid values for the
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
     * <p>The number of <code>cpu</code> units used by the task. If you are using the
     * EC2 launch type, this field is optional and any value can be used. If you are
     * using the Fargate launch type, this field is required and you must use one of
     * the following values, which determines your range of valid values for the
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
     * <p>The amount (in MiB) of memory used by the task.</p> <p>If your tasks will be
     * run on Amazon EC2 instances, you must specify either a task-level memory value
     * or a container-level memory value. This field is optional and any value can be
     * used. If a task-level memory value is specified then the container-level memory
     * value is optional. For more information regarding container-level memory and
     * memory reservation, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html">ContainerDefinition</a>.</p>
     * <p>If your tasks will be run on AWS Fargate, this field is required and you must
     * use one of the following values, which determines your range of valid values for
     * the <code>cpu</code> parameter:</p> <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048
     * (2 GB) - Available <code>cpu</code> values: 256 (.25 vCPU)</p> </li> <li>
     * <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4 GB) - Available
     * <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2 GB), 3072 (3
     * GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB) - Available
     * <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between 4096 (4 GB) and
     * 16384 (16 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and 30720 (30 GB) in
     * increments of 1024 (1 GB) - Available <code>cpu</code> values: 4096 (4 vCPU)</p>
     * </li> </ul>
     */
    inline const Aws::String& GetMemory() const{ return m_memory; }

    /**
     * <p>The amount (in MiB) of memory used by the task.</p> <p>If your tasks will be
     * run on Amazon EC2 instances, you must specify either a task-level memory value
     * or a container-level memory value. This field is optional and any value can be
     * used. If a task-level memory value is specified then the container-level memory
     * value is optional. For more information regarding container-level memory and
     * memory reservation, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html">ContainerDefinition</a>.</p>
     * <p>If your tasks will be run on AWS Fargate, this field is required and you must
     * use one of the following values, which determines your range of valid values for
     * the <code>cpu</code> parameter:</p> <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048
     * (2 GB) - Available <code>cpu</code> values: 256 (.25 vCPU)</p> </li> <li>
     * <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4 GB) - Available
     * <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2 GB), 3072 (3
     * GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB) - Available
     * <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between 4096 (4 GB) and
     * 16384 (16 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and 30720 (30 GB) in
     * increments of 1024 (1 GB) - Available <code>cpu</code> values: 4096 (4 vCPU)</p>
     * </li> </ul>
     */
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }

    /**
     * <p>The amount (in MiB) of memory used by the task.</p> <p>If your tasks will be
     * run on Amazon EC2 instances, you must specify either a task-level memory value
     * or a container-level memory value. This field is optional and any value can be
     * used. If a task-level memory value is specified then the container-level memory
     * value is optional. For more information regarding container-level memory and
     * memory reservation, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html">ContainerDefinition</a>.</p>
     * <p>If your tasks will be run on AWS Fargate, this field is required and you must
     * use one of the following values, which determines your range of valid values for
     * the <code>cpu</code> parameter:</p> <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048
     * (2 GB) - Available <code>cpu</code> values: 256 (.25 vCPU)</p> </li> <li>
     * <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4 GB) - Available
     * <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2 GB), 3072 (3
     * GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB) - Available
     * <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between 4096 (4 GB) and
     * 16384 (16 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and 30720 (30 GB) in
     * increments of 1024 (1 GB) - Available <code>cpu</code> values: 4096 (4 vCPU)</p>
     * </li> </ul>
     */
    inline void SetMemory(const Aws::String& value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p>The amount (in MiB) of memory used by the task.</p> <p>If your tasks will be
     * run on Amazon EC2 instances, you must specify either a task-level memory value
     * or a container-level memory value. This field is optional and any value can be
     * used. If a task-level memory value is specified then the container-level memory
     * value is optional. For more information regarding container-level memory and
     * memory reservation, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html">ContainerDefinition</a>.</p>
     * <p>If your tasks will be run on AWS Fargate, this field is required and you must
     * use one of the following values, which determines your range of valid values for
     * the <code>cpu</code> parameter:</p> <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048
     * (2 GB) - Available <code>cpu</code> values: 256 (.25 vCPU)</p> </li> <li>
     * <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4 GB) - Available
     * <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2 GB), 3072 (3
     * GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB) - Available
     * <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between 4096 (4 GB) and
     * 16384 (16 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and 30720 (30 GB) in
     * increments of 1024 (1 GB) - Available <code>cpu</code> values: 4096 (4 vCPU)</p>
     * </li> </ul>
     */
    inline void SetMemory(Aws::String&& value) { m_memoryHasBeenSet = true; m_memory = std::move(value); }

    /**
     * <p>The amount (in MiB) of memory used by the task.</p> <p>If your tasks will be
     * run on Amazon EC2 instances, you must specify either a task-level memory value
     * or a container-level memory value. This field is optional and any value can be
     * used. If a task-level memory value is specified then the container-level memory
     * value is optional. For more information regarding container-level memory and
     * memory reservation, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html">ContainerDefinition</a>.</p>
     * <p>If your tasks will be run on AWS Fargate, this field is required and you must
     * use one of the following values, which determines your range of valid values for
     * the <code>cpu</code> parameter:</p> <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048
     * (2 GB) - Available <code>cpu</code> values: 256 (.25 vCPU)</p> </li> <li>
     * <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4 GB) - Available
     * <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2 GB), 3072 (3
     * GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB) - Available
     * <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between 4096 (4 GB) and
     * 16384 (16 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and 30720 (30 GB) in
     * increments of 1024 (1 GB) - Available <code>cpu</code> values: 4096 (4 vCPU)</p>
     * </li> </ul>
     */
    inline void SetMemory(const char* value) { m_memoryHasBeenSet = true; m_memory.assign(value); }

    /**
     * <p>The amount (in MiB) of memory used by the task.</p> <p>If your tasks will be
     * run on Amazon EC2 instances, you must specify either a task-level memory value
     * or a container-level memory value. This field is optional and any value can be
     * used. If a task-level memory value is specified then the container-level memory
     * value is optional. For more information regarding container-level memory and
     * memory reservation, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html">ContainerDefinition</a>.</p>
     * <p>If your tasks will be run on AWS Fargate, this field is required and you must
     * use one of the following values, which determines your range of valid values for
     * the <code>cpu</code> parameter:</p> <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048
     * (2 GB) - Available <code>cpu</code> values: 256 (.25 vCPU)</p> </li> <li>
     * <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4 GB) - Available
     * <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2 GB), 3072 (3
     * GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB) - Available
     * <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between 4096 (4 GB) and
     * 16384 (16 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and 30720 (30 GB) in
     * increments of 1024 (1 GB) - Available <code>cpu</code> values: 4096 (4 vCPU)</p>
     * </li> </ul>
     */
    inline TaskDefinition& WithMemory(const Aws::String& value) { SetMemory(value); return *this;}

    /**
     * <p>The amount (in MiB) of memory used by the task.</p> <p>If your tasks will be
     * run on Amazon EC2 instances, you must specify either a task-level memory value
     * or a container-level memory value. This field is optional and any value can be
     * used. If a task-level memory value is specified then the container-level memory
     * value is optional. For more information regarding container-level memory and
     * memory reservation, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html">ContainerDefinition</a>.</p>
     * <p>If your tasks will be run on AWS Fargate, this field is required and you must
     * use one of the following values, which determines your range of valid values for
     * the <code>cpu</code> parameter:</p> <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048
     * (2 GB) - Available <code>cpu</code> values: 256 (.25 vCPU)</p> </li> <li>
     * <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4 GB) - Available
     * <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2 GB), 3072 (3
     * GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB) - Available
     * <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between 4096 (4 GB) and
     * 16384 (16 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and 30720 (30 GB) in
     * increments of 1024 (1 GB) - Available <code>cpu</code> values: 4096 (4 vCPU)</p>
     * </li> </ul>
     */
    inline TaskDefinition& WithMemory(Aws::String&& value) { SetMemory(std::move(value)); return *this;}

    /**
     * <p>The amount (in MiB) of memory used by the task.</p> <p>If your tasks will be
     * run on Amazon EC2 instances, you must specify either a task-level memory value
     * or a container-level memory value. This field is optional and any value can be
     * used. If a task-level memory value is specified then the container-level memory
     * value is optional. For more information regarding container-level memory and
     * memory reservation, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ContainerDefinition.html">ContainerDefinition</a>.</p>
     * <p>If your tasks will be run on AWS Fargate, this field is required and you must
     * use one of the following values, which determines your range of valid values for
     * the <code>cpu</code> parameter:</p> <ul> <li> <p>512 (0.5 GB), 1024 (1 GB), 2048
     * (2 GB) - Available <code>cpu</code> values: 256 (.25 vCPU)</p> </li> <li>
     * <p>1024 (1 GB), 2048 (2 GB), 3072 (3 GB), 4096 (4 GB) - Available
     * <code>cpu</code> values: 512 (.5 vCPU)</p> </li> <li> <p>2048 (2 GB), 3072 (3
     * GB), 4096 (4 GB), 5120 (5 GB), 6144 (6 GB), 7168 (7 GB), 8192 (8 GB) - Available
     * <code>cpu</code> values: 1024 (1 vCPU)</p> </li> <li> <p>Between 4096 (4 GB) and
     * 16384 (16 GB) in increments of 1024 (1 GB) - Available <code>cpu</code> values:
     * 2048 (2 vCPU)</p> </li> <li> <p>Between 8192 (8 GB) and 30720 (30 GB) in
     * increments of 1024 (1 GB) - Available <code>cpu</code> values: 4096 (4 vCPU)</p>
     * </li> </ul>
     */
    inline TaskDefinition& WithMemory(const char* value) { SetMemory(value); return *this;}


    /**
     * <p>The Elastic Inference accelerator associated with the task.</p>
     */
    inline const Aws::Vector<InferenceAccelerator>& GetInferenceAccelerators() const{ return m_inferenceAccelerators; }

    /**
     * <p>The Elastic Inference accelerator associated with the task.</p>
     */
    inline bool InferenceAcceleratorsHasBeenSet() const { return m_inferenceAcceleratorsHasBeenSet; }

    /**
     * <p>The Elastic Inference accelerator associated with the task.</p>
     */
    inline void SetInferenceAccelerators(const Aws::Vector<InferenceAccelerator>& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators = value; }

    /**
     * <p>The Elastic Inference accelerator associated with the task.</p>
     */
    inline void SetInferenceAccelerators(Aws::Vector<InferenceAccelerator>&& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators = std::move(value); }

    /**
     * <p>The Elastic Inference accelerator associated with the task.</p>
     */
    inline TaskDefinition& WithInferenceAccelerators(const Aws::Vector<InferenceAccelerator>& value) { SetInferenceAccelerators(value); return *this;}

    /**
     * <p>The Elastic Inference accelerator associated with the task.</p>
     */
    inline TaskDefinition& WithInferenceAccelerators(Aws::Vector<InferenceAccelerator>&& value) { SetInferenceAccelerators(std::move(value)); return *this;}

    /**
     * <p>The Elastic Inference accelerator associated with the task.</p>
     */
    inline TaskDefinition& AddInferenceAccelerators(const InferenceAccelerator& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators.push_back(value); return *this; }

    /**
     * <p>The Elastic Inference accelerator associated with the task.</p>
     */
    inline TaskDefinition& AddInferenceAccelerators(InferenceAccelerator&& value) { m_inferenceAcceleratorsHasBeenSet = true; m_inferenceAccelerators.push_back(std::move(value)); return *this; }


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
     * containers or tasks run on AWS Fargate.</p> 
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
     * containers or tasks run on AWS Fargate.</p> 
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
     * containers or tasks run on AWS Fargate.</p> 
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
     * containers or tasks run on AWS Fargate.</p> 
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
     * containers or tasks run on AWS Fargate.</p> 
     */
    inline TaskDefinition& WithPidMode(const PidMode& value) { SetPidMode(value); return *this;}

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
     * containers or tasks run on AWS Fargate.</p> 
     */
    inline TaskDefinition& WithPidMode(PidMode&& value) { SetPidMode(std::move(value)); return *this;}


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
     * tasks run on AWS Fargate.</p> 
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
     * tasks run on AWS Fargate.</p> 
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
     * tasks run on AWS Fargate.</p> 
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
     * tasks run on AWS Fargate.</p> 
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
     * tasks run on AWS Fargate.</p> 
     */
    inline TaskDefinition& WithIpcMode(const IpcMode& value) { SetIpcMode(value); return *this;}

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
     * tasks run on AWS Fargate.</p> 
     */
    inline TaskDefinition& WithIpcMode(IpcMode&& value) { SetIpcMode(std::move(value)); return *this;}


    /**
     * <p>The configuration details for the App Mesh proxy.</p> <p>Your Amazon ECS
     * container instances require at least version 1.26.0 of the container agent and
     * at least version 1.26.0-1 of the <code>ecs-init</code> package to enable a proxy
     * configuration. If your container instances are launched from the Amazon
     * ECS-optimized AMI version <code>20190301</code> or later, then they contain the
     * required versions of the container agent and <code>ecs-init</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const ProxyConfiguration& GetProxyConfiguration() const{ return m_proxyConfiguration; }

    /**
     * <p>The configuration details for the App Mesh proxy.</p> <p>Your Amazon ECS
     * container instances require at least version 1.26.0 of the container agent and
     * at least version 1.26.0-1 of the <code>ecs-init</code> package to enable a proxy
     * configuration. If your container instances are launched from the Amazon
     * ECS-optimized AMI version <code>20190301</code> or later, then they contain the
     * required versions of the container agent and <code>ecs-init</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool ProxyConfigurationHasBeenSet() const { return m_proxyConfigurationHasBeenSet; }

    /**
     * <p>The configuration details for the App Mesh proxy.</p> <p>Your Amazon ECS
     * container instances require at least version 1.26.0 of the container agent and
     * at least version 1.26.0-1 of the <code>ecs-init</code> package to enable a proxy
     * configuration. If your container instances are launched from the Amazon
     * ECS-optimized AMI version <code>20190301</code> or later, then they contain the
     * required versions of the container agent and <code>ecs-init</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetProxyConfiguration(const ProxyConfiguration& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = value; }

    /**
     * <p>The configuration details for the App Mesh proxy.</p> <p>Your Amazon ECS
     * container instances require at least version 1.26.0 of the container agent and
     * at least version 1.26.0-1 of the <code>ecs-init</code> package to enable a proxy
     * configuration. If your container instances are launched from the Amazon
     * ECS-optimized AMI version <code>20190301</code> or later, then they contain the
     * required versions of the container agent and <code>ecs-init</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetProxyConfiguration(ProxyConfiguration&& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = std::move(value); }

    /**
     * <p>The configuration details for the App Mesh proxy.</p> <p>Your Amazon ECS
     * container instances require at least version 1.26.0 of the container agent and
     * at least version 1.26.0-1 of the <code>ecs-init</code> package to enable a proxy
     * configuration. If your container instances are launched from the Amazon
     * ECS-optimized AMI version <code>20190301</code> or later, then they contain the
     * required versions of the container agent and <code>ecs-init</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithProxyConfiguration(const ProxyConfiguration& value) { SetProxyConfiguration(value); return *this;}

    /**
     * <p>The configuration details for the App Mesh proxy.</p> <p>Your Amazon ECS
     * container instances require at least version 1.26.0 of the container agent and
     * at least version 1.26.0-1 of the <code>ecs-init</code> package to enable a proxy
     * configuration. If your container instances are launched from the Amazon
     * ECS-optimized AMI version <code>20190301</code> or later, then they contain the
     * required versions of the container agent and <code>ecs-init</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithProxyConfiguration(ProxyConfiguration&& value) { SetProxyConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp for when the task definition was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisteredAt() const{ return m_registeredAt; }

    /**
     * <p>The Unix timestamp for when the task definition was registered.</p>
     */
    inline bool RegisteredAtHasBeenSet() const { return m_registeredAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for when the task definition was registered.</p>
     */
    inline void SetRegisteredAt(const Aws::Utils::DateTime& value) { m_registeredAtHasBeenSet = true; m_registeredAt = value; }

    /**
     * <p>The Unix timestamp for when the task definition was registered.</p>
     */
    inline void SetRegisteredAt(Aws::Utils::DateTime&& value) { m_registeredAtHasBeenSet = true; m_registeredAt = std::move(value); }

    /**
     * <p>The Unix timestamp for when the task definition was registered.</p>
     */
    inline TaskDefinition& WithRegisteredAt(const Aws::Utils::DateTime& value) { SetRegisteredAt(value); return *this;}

    /**
     * <p>The Unix timestamp for when the task definition was registered.</p>
     */
    inline TaskDefinition& WithRegisteredAt(Aws::Utils::DateTime&& value) { SetRegisteredAt(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp for when the task definition was deregistered.</p>
     */
    inline const Aws::Utils::DateTime& GetDeregisteredAt() const{ return m_deregisteredAt; }

    /**
     * <p>The Unix timestamp for when the task definition was deregistered.</p>
     */
    inline bool DeregisteredAtHasBeenSet() const { return m_deregisteredAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for when the task definition was deregistered.</p>
     */
    inline void SetDeregisteredAt(const Aws::Utils::DateTime& value) { m_deregisteredAtHasBeenSet = true; m_deregisteredAt = value; }

    /**
     * <p>The Unix timestamp for when the task definition was deregistered.</p>
     */
    inline void SetDeregisteredAt(Aws::Utils::DateTime&& value) { m_deregisteredAtHasBeenSet = true; m_deregisteredAt = std::move(value); }

    /**
     * <p>The Unix timestamp for when the task definition was deregistered.</p>
     */
    inline TaskDefinition& WithDeregisteredAt(const Aws::Utils::DateTime& value) { SetDeregisteredAt(value); return *this;}

    /**
     * <p>The Unix timestamp for when the task definition was deregistered.</p>
     */
    inline TaskDefinition& WithDeregisteredAt(Aws::Utils::DateTime&& value) { SetDeregisteredAt(std::move(value)); return *this;}


    /**
     * <p>The principal that registered the task definition.</p>
     */
    inline const Aws::String& GetRegisteredBy() const{ return m_registeredBy; }

    /**
     * <p>The principal that registered the task definition.</p>
     */
    inline bool RegisteredByHasBeenSet() const { return m_registeredByHasBeenSet; }

    /**
     * <p>The principal that registered the task definition.</p>
     */
    inline void SetRegisteredBy(const Aws::String& value) { m_registeredByHasBeenSet = true; m_registeredBy = value; }

    /**
     * <p>The principal that registered the task definition.</p>
     */
    inline void SetRegisteredBy(Aws::String&& value) { m_registeredByHasBeenSet = true; m_registeredBy = std::move(value); }

    /**
     * <p>The principal that registered the task definition.</p>
     */
    inline void SetRegisteredBy(const char* value) { m_registeredByHasBeenSet = true; m_registeredBy.assign(value); }

    /**
     * <p>The principal that registered the task definition.</p>
     */
    inline TaskDefinition& WithRegisteredBy(const Aws::String& value) { SetRegisteredBy(value); return *this;}

    /**
     * <p>The principal that registered the task definition.</p>
     */
    inline TaskDefinition& WithRegisteredBy(Aws::String&& value) { SetRegisteredBy(std::move(value)); return *this;}

    /**
     * <p>The principal that registered the task definition.</p>
     */
    inline TaskDefinition& WithRegisteredBy(const char* value) { SetRegisteredBy(value); return *this;}

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

    Aws::Vector<InferenceAccelerator> m_inferenceAccelerators;
    bool m_inferenceAcceleratorsHasBeenSet;

    PidMode m_pidMode;
    bool m_pidModeHasBeenSet;

    IpcMode m_ipcMode;
    bool m_ipcModeHasBeenSet;

    ProxyConfiguration m_proxyConfiguration;
    bool m_proxyConfigurationHasBeenSet;

    Aws::Utils::DateTime m_registeredAt;
    bool m_registeredAtHasBeenSet;

    Aws::Utils::DateTime m_deregisteredAt;
    bool m_deregisteredAtHasBeenSet;

    Aws::String m_registeredBy;
    bool m_registeredByHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
