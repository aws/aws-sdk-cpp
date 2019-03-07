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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ContainerCondition.h>
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
   * <p>The dependencies defined for container startup. A container can contain
   * multiple dependencies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ContainerDependency">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API ContainerDependency
  {
  public:
    ContainerDependency();
    ContainerDependency(Aws::Utils::Json::JsonView jsonValue);
    ContainerDependency& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a container.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p>The name of a container.</p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>The name of a container.</p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p>The name of a container.</p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p>The name of a container.</p>
     */
    inline ContainerDependency& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p>The name of a container.</p>
     */
    inline ContainerDependency& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p>The name of a container.</p>
     */
    inline ContainerDependency& WithContainerName(const char* value) { SetContainerName(value); return *this;}


    /**
     * <p>The dependency condition of the container. The following are the available
     * conditions and their behavior:</p> <ul> <li> <p> <code>START</code> - This
     * condition emulates the behavior of links and volumes today. It validates that a
     * dependent container is started before permitting other containers to start.</p>
     * </li> <li> <p> <code>COMPLETE</code> - This condition validates that a dependent
     * container runs to completion (exits) before permitting other containers to
     * start. This can be useful for non-essential containers that run a script and
     * then subsequently exit.</p> </li> <li> <p> <code>SUCCESS</code> - This condition
     * is the same as <code>COMPLETE</code>, but it will also require that the
     * container exits with a <code>zero</code> status.</p> </li> <li> <p>
     * <code>HEALTHY</code> - This condition validates that the dependent container
     * passes its Docker health check before permitting other containers to start. This
     * requires that the dependent container has health checks configured. This
     * condition will only be confirmed at task startup.</p> </li> </ul>
     */
    inline const ContainerCondition& GetCondition() const{ return m_condition; }

    /**
     * <p>The dependency condition of the container. The following are the available
     * conditions and their behavior:</p> <ul> <li> <p> <code>START</code> - This
     * condition emulates the behavior of links and volumes today. It validates that a
     * dependent container is started before permitting other containers to start.</p>
     * </li> <li> <p> <code>COMPLETE</code> - This condition validates that a dependent
     * container runs to completion (exits) before permitting other containers to
     * start. This can be useful for non-essential containers that run a script and
     * then subsequently exit.</p> </li> <li> <p> <code>SUCCESS</code> - This condition
     * is the same as <code>COMPLETE</code>, but it will also require that the
     * container exits with a <code>zero</code> status.</p> </li> <li> <p>
     * <code>HEALTHY</code> - This condition validates that the dependent container
     * passes its Docker health check before permitting other containers to start. This
     * requires that the dependent container has health checks configured. This
     * condition will only be confirmed at task startup.</p> </li> </ul>
     */
    inline void SetCondition(const ContainerCondition& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>The dependency condition of the container. The following are the available
     * conditions and their behavior:</p> <ul> <li> <p> <code>START</code> - This
     * condition emulates the behavior of links and volumes today. It validates that a
     * dependent container is started before permitting other containers to start.</p>
     * </li> <li> <p> <code>COMPLETE</code> - This condition validates that a dependent
     * container runs to completion (exits) before permitting other containers to
     * start. This can be useful for non-essential containers that run a script and
     * then subsequently exit.</p> </li> <li> <p> <code>SUCCESS</code> - This condition
     * is the same as <code>COMPLETE</code>, but it will also require that the
     * container exits with a <code>zero</code> status.</p> </li> <li> <p>
     * <code>HEALTHY</code> - This condition validates that the dependent container
     * passes its Docker health check before permitting other containers to start. This
     * requires that the dependent container has health checks configured. This
     * condition will only be confirmed at task startup.</p> </li> </ul>
     */
    inline void SetCondition(ContainerCondition&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>The dependency condition of the container. The following are the available
     * conditions and their behavior:</p> <ul> <li> <p> <code>START</code> - This
     * condition emulates the behavior of links and volumes today. It validates that a
     * dependent container is started before permitting other containers to start.</p>
     * </li> <li> <p> <code>COMPLETE</code> - This condition validates that a dependent
     * container runs to completion (exits) before permitting other containers to
     * start. This can be useful for non-essential containers that run a script and
     * then subsequently exit.</p> </li> <li> <p> <code>SUCCESS</code> - This condition
     * is the same as <code>COMPLETE</code>, but it will also require that the
     * container exits with a <code>zero</code> status.</p> </li> <li> <p>
     * <code>HEALTHY</code> - This condition validates that the dependent container
     * passes its Docker health check before permitting other containers to start. This
     * requires that the dependent container has health checks configured. This
     * condition will only be confirmed at task startup.</p> </li> </ul>
     */
    inline ContainerDependency& WithCondition(const ContainerCondition& value) { SetCondition(value); return *this;}

    /**
     * <p>The dependency condition of the container. The following are the available
     * conditions and their behavior:</p> <ul> <li> <p> <code>START</code> - This
     * condition emulates the behavior of links and volumes today. It validates that a
     * dependent container is started before permitting other containers to start.</p>
     * </li> <li> <p> <code>COMPLETE</code> - This condition validates that a dependent
     * container runs to completion (exits) before permitting other containers to
     * start. This can be useful for non-essential containers that run a script and
     * then subsequently exit.</p> </li> <li> <p> <code>SUCCESS</code> - This condition
     * is the same as <code>COMPLETE</code>, but it will also require that the
     * container exits with a <code>zero</code> status.</p> </li> <li> <p>
     * <code>HEALTHY</code> - This condition validates that the dependent container
     * passes its Docker health check before permitting other containers to start. This
     * requires that the dependent container has health checks configured. This
     * condition will only be confirmed at task startup.</p> </li> </ul>
     */
    inline ContainerDependency& WithCondition(ContainerCondition&& value) { SetCondition(std::move(value)); return *this;}

  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet;

    ContainerCondition m_condition;
    bool m_conditionHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
