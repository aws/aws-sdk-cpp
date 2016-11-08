/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecs/model/ContainerDefinition.h>
#include <aws/ecs/model/Volume.h>

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
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>You must specify a <code>family</code> for a task definition, which allows
     * you to track multiple versions of the same task definition. The
     * <code>family</code> is used as a name for your task definition. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline const Aws::String& GetFamily() const{ return m_family; }

    /**
     * <p>You must specify a <code>family</code> for a task definition, which allows
     * you to track multiple versions of the same task definition. The
     * <code>family</code> is used as a name for your task definition. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline void SetFamily(const Aws::String& value) { m_familyHasBeenSet = true; m_family = value; }

    /**
     * <p>You must specify a <code>family</code> for a task definition, which allows
     * you to track multiple versions of the same task definition. The
     * <code>family</code> is used as a name for your task definition. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline void SetFamily(Aws::String&& value) { m_familyHasBeenSet = true; m_family = value; }

    /**
     * <p>You must specify a <code>family</code> for a task definition, which allows
     * you to track multiple versions of the same task definition. The
     * <code>family</code> is used as a name for your task definition. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline void SetFamily(const char* value) { m_familyHasBeenSet = true; m_family.assign(value); }

    /**
     * <p>You must specify a <code>family</code> for a task definition, which allows
     * you to track multiple versions of the same task definition. The
     * <code>family</code> is used as a name for your task definition. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline RegisterTaskDefinitionRequest& WithFamily(const Aws::String& value) { SetFamily(value); return *this;}

    /**
     * <p>You must specify a <code>family</code> for a task definition, which allows
     * you to track multiple versions of the same task definition. The
     * <code>family</code> is used as a name for your task definition. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline RegisterTaskDefinitionRequest& WithFamily(Aws::String&& value) { SetFamily(value); return *this;}

    /**
     * <p>You must specify a <code>family</code> for a task definition, which allows
     * you to track multiple versions of the same task definition. The
     * <code>family</code> is used as a name for your task definition. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline RegisterTaskDefinitionRequest& WithFamily(const char* value) { SetFamily(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the IAM role that
     * containers in this task can assume. All containers in this task are granted the
     * permissions that are specified in this role. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Roles for Tasks</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetTaskRoleArn() const{ return m_taskRoleArn; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the IAM role that
     * containers in this task can assume. All containers in this task are granted the
     * permissions that are specified in this role. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Roles for Tasks</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetTaskRoleArn(const Aws::String& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the IAM role that
     * containers in this task can assume. All containers in this task are granted the
     * permissions that are specified in this role. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Roles for Tasks</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetTaskRoleArn(Aws::String&& value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the IAM role that
     * containers in this task can assume. All containers in this task are granted the
     * permissions that are specified in this role. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Roles for Tasks</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetTaskRoleArn(const char* value) { m_taskRoleArnHasBeenSet = true; m_taskRoleArn.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the IAM role that
     * containers in this task can assume. All containers in this task are granted the
     * permissions that are specified in this role. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Roles for Tasks</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline RegisterTaskDefinitionRequest& WithTaskRoleArn(const Aws::String& value) { SetTaskRoleArn(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the IAM role that
     * containers in this task can assume. All containers in this task are granted the
     * permissions that are specified in this role. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Roles for Tasks</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline RegisterTaskDefinitionRequest& WithTaskRoleArn(Aws::String&& value) { SetTaskRoleArn(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the IAM role that
     * containers in this task can assume. All containers in this task are granted the
     * permissions that are specified in this role. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * Roles for Tasks</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline RegisterTaskDefinitionRequest& WithTaskRoleArn(const char* value) { SetTaskRoleArn(value); return *this;}

    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, and <code>host</code>. </p>
     * <p>The default Docker network mode is <code>bridge</code>. If the network mode
     * is set to <code>none</code>, you cannot specify port mappings in your container
     * definitions, and the task's containers do not have external connectivity. The
     * <code>host</code> network mode offers the highest networking performance for
     * containers because they use the host network stack instead of the virtualized
     * network stack provided by the <code>bridge</code> mode; however, exposed
     * container ports are mapped directly to the corresponding host port, so you
     * cannot take advantage of dynamic host port mappings or run multiple
     * instantiations of the same task on a single container instance if port mappings
     * are used.</p> <p>For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#network-settings">Network
     * settings</a> in the <i>Docker run reference</i>.</p>
     */
    inline const NetworkMode& GetNetworkMode() const{ return m_networkMode; }

    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, and <code>host</code>. </p>
     * <p>The default Docker network mode is <code>bridge</code>. If the network mode
     * is set to <code>none</code>, you cannot specify port mappings in your container
     * definitions, and the task's containers do not have external connectivity. The
     * <code>host</code> network mode offers the highest networking performance for
     * containers because they use the host network stack instead of the virtualized
     * network stack provided by the <code>bridge</code> mode; however, exposed
     * container ports are mapped directly to the corresponding host port, so you
     * cannot take advantage of dynamic host port mappings or run multiple
     * instantiations of the same task on a single container instance if port mappings
     * are used.</p> <p>For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#network-settings">Network
     * settings</a> in the <i>Docker run reference</i>.</p>
     */
    inline void SetNetworkMode(const NetworkMode& value) { m_networkModeHasBeenSet = true; m_networkMode = value; }

    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, and <code>host</code>. </p>
     * <p>The default Docker network mode is <code>bridge</code>. If the network mode
     * is set to <code>none</code>, you cannot specify port mappings in your container
     * definitions, and the task's containers do not have external connectivity. The
     * <code>host</code> network mode offers the highest networking performance for
     * containers because they use the host network stack instead of the virtualized
     * network stack provided by the <code>bridge</code> mode; however, exposed
     * container ports are mapped directly to the corresponding host port, so you
     * cannot take advantage of dynamic host port mappings or run multiple
     * instantiations of the same task on a single container instance if port mappings
     * are used.</p> <p>For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#network-settings">Network
     * settings</a> in the <i>Docker run reference</i>.</p>
     */
    inline void SetNetworkMode(NetworkMode&& value) { m_networkModeHasBeenSet = true; m_networkMode = value; }

    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, and <code>host</code>. </p>
     * <p>The default Docker network mode is <code>bridge</code>. If the network mode
     * is set to <code>none</code>, you cannot specify port mappings in your container
     * definitions, and the task's containers do not have external connectivity. The
     * <code>host</code> network mode offers the highest networking performance for
     * containers because they use the host network stack instead of the virtualized
     * network stack provided by the <code>bridge</code> mode; however, exposed
     * container ports are mapped directly to the corresponding host port, so you
     * cannot take advantage of dynamic host port mappings or run multiple
     * instantiations of the same task on a single container instance if port mappings
     * are used.</p> <p>For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#network-settings">Network
     * settings</a> in the <i>Docker run reference</i>.</p>
     */
    inline RegisterTaskDefinitionRequest& WithNetworkMode(const NetworkMode& value) { SetNetworkMode(value); return *this;}

    /**
     * <p>The Docker networking mode to use for the containers in the task. The valid
     * values are <code>none</code>, <code>bridge</code>, and <code>host</code>. </p>
     * <p>The default Docker network mode is <code>bridge</code>. If the network mode
     * is set to <code>none</code>, you cannot specify port mappings in your container
     * definitions, and the task's containers do not have external connectivity. The
     * <code>host</code> network mode offers the highest networking performance for
     * containers because they use the host network stack instead of the virtualized
     * network stack provided by the <code>bridge</code> mode; however, exposed
     * container ports are mapped directly to the corresponding host port, so you
     * cannot take advantage of dynamic host port mappings or run multiple
     * instantiations of the same task on a single container instance if port mappings
     * are used.</p> <p>For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#network-settings">Network
     * settings</a> in the <i>Docker run reference</i>.</p>
     */
    inline RegisterTaskDefinitionRequest& WithNetworkMode(NetworkMode&& value) { SetNetworkMode(value); return *this;}

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task.</p>
     */
    inline const Aws::Vector<ContainerDefinition>& GetContainerDefinitions() const{ return m_containerDefinitions; }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task.</p>
     */
    inline void SetContainerDefinitions(const Aws::Vector<ContainerDefinition>& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = value; }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task.</p>
     */
    inline void SetContainerDefinitions(Aws::Vector<ContainerDefinition>&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = value; }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task.</p>
     */
    inline RegisterTaskDefinitionRequest& WithContainerDefinitions(const Aws::Vector<ContainerDefinition>& value) { SetContainerDefinitions(value); return *this;}

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task.</p>
     */
    inline RegisterTaskDefinitionRequest& WithContainerDefinitions(Aws::Vector<ContainerDefinition>&& value) { SetContainerDefinitions(value); return *this;}

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task.</p>
     */
    inline RegisterTaskDefinitionRequest& AddContainerDefinitions(const ContainerDefinition& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.push_back(value); return *this; }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task.</p>
     */
    inline RegisterTaskDefinitionRequest& AddContainerDefinitions(ContainerDefinition&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.push_back(value); return *this; }

    /**
     * <p>A list of volume definitions in JSON format that containers in your task may
     * use.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>A list of volume definitions in JSON format that containers in your task may
     * use.</p>
     */
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>A list of volume definitions in JSON format that containers in your task may
     * use.</p>
     */
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>A list of volume definitions in JSON format that containers in your task may
     * use.</p>
     */
    inline RegisterTaskDefinitionRequest& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}

    /**
     * <p>A list of volume definitions in JSON format that containers in your task may
     * use.</p>
     */
    inline RegisterTaskDefinitionRequest& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(value); return *this;}

    /**
     * <p>A list of volume definitions in JSON format that containers in your task may
     * use.</p>
     */
    inline RegisterTaskDefinitionRequest& AddVolumes(const Volume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>A list of volume definitions in JSON format that containers in your task may
     * use.</p>
     */
    inline RegisterTaskDefinitionRequest& AddVolumes(Volume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

  private:
    Aws::String m_family;
    bool m_familyHasBeenSet;
    Aws::String m_taskRoleArn;
    bool m_taskRoleArnHasBeenSet;
    NetworkMode m_networkMode;
    bool m_networkModeHasBeenSet;
    Aws::Vector<ContainerDefinition> m_containerDefinitions;
    bool m_containerDefinitionsHasBeenSet;
    Aws::Vector<Volume> m_volumes;
    bool m_volumesHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
