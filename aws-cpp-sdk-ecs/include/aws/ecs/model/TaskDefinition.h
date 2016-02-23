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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/TaskDefinitionStatus.h>
#include <aws/ecs/model/ContainerDefinition.h>
#include <aws/ecs/model/Volume.h>
#include <aws/ecs/model/Attribute.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>Details of a task definition.</p>
   */
  class AWS_ECS_API TaskDefinition
  {
  public:
    TaskDefinition();
    TaskDefinition(const Aws::Utils::Json::JsonValue& jsonValue);
    TaskDefinition& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The full Amazon Resource Name (ARN) of the of the task definition.</p>
     */
    inline const Aws::String& GetTaskDefinitionArn() const{ return m_taskDefinitionArn; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the of the task definition.</p>
     */
    inline void SetTaskDefinitionArn(const Aws::String& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = value; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the of the task definition.</p>
     */
    inline void SetTaskDefinitionArn(Aws::String&& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = value; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the of the task definition.</p>
     */
    inline void SetTaskDefinitionArn(const char* value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn.assign(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the of the task definition.</p>
     */
    inline TaskDefinition& WithTaskDefinitionArn(const Aws::String& value) { SetTaskDefinitionArn(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the of the task definition.</p>
     */
    inline TaskDefinition& WithTaskDefinitionArn(Aws::String&& value) { SetTaskDefinitionArn(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the of the task definition.</p>
     */
    inline TaskDefinition& WithTaskDefinitionArn(const char* value) { SetTaskDefinitionArn(value); return *this;}

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<ContainerDefinition>& GetContainerDefinitions() const{ return m_containerDefinitions; }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetContainerDefinitions(const Aws::Vector<ContainerDefinition>& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = value; }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetContainerDefinitions(Aws::Vector<ContainerDefinition>&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions = value; }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithContainerDefinitions(const Aws::Vector<ContainerDefinition>& value) { SetContainerDefinitions(value); return *this;}

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithContainerDefinitions(Aws::Vector<ContainerDefinition>&& value) { SetContainerDefinitions(value); return *this;}

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& AddContainerDefinitions(const ContainerDefinition& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.push_back(value); return *this; }

    /**
     * <p>A list of container definitions in JSON format that describe the different
     * containers that make up your task. For more information about container
     * definition parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& AddContainerDefinitions(ContainerDefinition&& value) { m_containerDefinitionsHasBeenSet = true; m_containerDefinitions.push_back(value); return *this; }

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
    inline void SetFamily(Aws::String&& value) { m_familyHasBeenSet = true; m_family = value; }

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
    inline TaskDefinition& WithFamily(Aws::String&& value) { SetFamily(value); return *this;}

    /**
     * <p>The family of your task definition, used as the definition name.</p>
     */
    inline TaskDefinition& WithFamily(const char* value) { SetFamily(value); return *this;}

    /**
     * <p>The revision of the task in a particular family. The revision is a version
     * number of a task definition in a family. When you register a task definition for
     * the first time, the revision is <code>1</code>; each time you register a new
     * revision of a task definition in the same family, the revision value always
     * increases by one (even if you have deregistered previous revisions in this
     * family).</p>
     */
    inline long GetRevision() const{ return m_revision; }

    /**
     * <p>The revision of the task in a particular family. The revision is a version
     * number of a task definition in a family. When you register a task definition for
     * the first time, the revision is <code>1</code>; each time you register a new
     * revision of a task definition in the same family, the revision value always
     * increases by one (even if you have deregistered previous revisions in this
     * family).</p>
     */
    inline void SetRevision(long value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The revision of the task in a particular family. The revision is a version
     * number of a task definition in a family. When you register a task definition for
     * the first time, the revision is <code>1</code>; each time you register a new
     * revision of a task definition in the same family, the revision value always
     * increases by one (even if you have deregistered previous revisions in this
     * family).</p>
     */
    inline TaskDefinition& WithRevision(long value) { SetRevision(value); return *this;}

    /**
     * <p>The list of volumes in a task. For more information about volume definition
     * parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>The list of volumes in a task. For more information about volume definition
     * parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>The list of volumes in a task. For more information about volume definition
     * parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>The list of volumes in a task. For more information about volume definition
     * parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}

    /**
     * <p>The list of volumes in a task. For more information about volume definition
     * parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(value); return *this;}

    /**
     * <p>The list of volumes in a task. For more information about volume definition
     * parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& AddVolumes(const Volume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>The list of volumes in a task. For more information about volume definition
     * parameters and defaults, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Amazon
     * ECS Task Definitions</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinition& AddVolumes(Volume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

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
    inline void SetStatus(TaskDefinitionStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the task definition.</p>
     */
    inline TaskDefinition& WithStatus(const TaskDefinitionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the task definition.</p>
     */
    inline TaskDefinition& WithStatus(TaskDefinitionStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>The container instance attributes required by your task.</p>
     */
    inline const Aws::Vector<Attribute>& GetRequiresAttributes() const{ return m_requiresAttributes; }

    /**
     * <p>The container instance attributes required by your task.</p>
     */
    inline void SetRequiresAttributes(const Aws::Vector<Attribute>& value) { m_requiresAttributesHasBeenSet = true; m_requiresAttributes = value; }

    /**
     * <p>The container instance attributes required by your task.</p>
     */
    inline void SetRequiresAttributes(Aws::Vector<Attribute>&& value) { m_requiresAttributesHasBeenSet = true; m_requiresAttributes = value; }

    /**
     * <p>The container instance attributes required by your task.</p>
     */
    inline TaskDefinition& WithRequiresAttributes(const Aws::Vector<Attribute>& value) { SetRequiresAttributes(value); return *this;}

    /**
     * <p>The container instance attributes required by your task.</p>
     */
    inline TaskDefinition& WithRequiresAttributes(Aws::Vector<Attribute>&& value) { SetRequiresAttributes(value); return *this;}

    /**
     * <p>The container instance attributes required by your task.</p>
     */
    inline TaskDefinition& AddRequiresAttributes(const Attribute& value) { m_requiresAttributesHasBeenSet = true; m_requiresAttributes.push_back(value); return *this; }

    /**
     * <p>The container instance attributes required by your task.</p>
     */
    inline TaskDefinition& AddRequiresAttributes(Attribute&& value) { m_requiresAttributesHasBeenSet = true; m_requiresAttributes.push_back(value); return *this; }

  private:
    Aws::String m_taskDefinitionArn;
    bool m_taskDefinitionArnHasBeenSet;
    Aws::Vector<ContainerDefinition> m_containerDefinitions;
    bool m_containerDefinitionsHasBeenSet;
    Aws::String m_family;
    bool m_familyHasBeenSet;
    long m_revision;
    bool m_revisionHasBeenSet;
    Aws::Vector<Volume> m_volumes;
    bool m_volumesHasBeenSet;
    TaskDefinitionStatus m_status;
    bool m_statusHasBeenSet;
    Aws::Vector<Attribute> m_requiresAttributes;
    bool m_requiresAttributesHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
