﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The dependencies defined for container startup and shutdown. A container can
   * contain multiple dependencies. When a dependency is defined for container
   * startup, for container shutdown it is reversed.</p> <p>Your Amazon ECS container
   * instances require at least version 1.26.0 of the container agent to use
   * container dependencies. However, we recommend using the latest container agent
   * version. For information about checking your agent version and updating to the
   * latest version, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
   * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
   * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
   * instance needs at least version 1.26.0-1 of the <code>ecs-init</code> package.
   * If your container instances are launched from version <code>20190301</code> or
   * later, then they contain the required versions of the container agent and
   * <code>ecs-init</code>. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
   * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p>  <p>For tasks that use the Fargate launch type, the task or
   * service requires the following platforms:</p> <ul> <li> <p>Linux platform
   * version <code>1.3.0</code> or later.</p> </li> <li> <p>Windows platform version
   * <code>1.0.0</code> or later.</p> </li> </ul>  <p>For more information
   * about how to create a container dependency, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/example_task_definitions.html#example_task_definition-containerdependency">Container
   * dependency</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ContainerDependency">AWS
   * API Reference</a></p>
   */
  class ContainerDependency
  {
  public:
    AWS_ECS_API ContainerDependency() = default;
    AWS_ECS_API ContainerDependency(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ContainerDependency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a container.</p>
     */
    inline const Aws::String& GetContainerName() const { return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    template<typename ContainerNameT = Aws::String>
    void SetContainerName(ContainerNameT&& value) { m_containerNameHasBeenSet = true; m_containerName = std::forward<ContainerNameT>(value); }
    template<typename ContainerNameT = Aws::String>
    ContainerDependency& WithContainerName(ContainerNameT&& value) { SetContainerName(std::forward<ContainerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dependency condition of the container. The following are the available
     * conditions and their behavior:</p> <ul> <li> <p> <code>START</code> - This
     * condition emulates the behavior of links and volumes today. It validates that a
     * dependent container is started before permitting other containers to start.</p>
     * </li> <li> <p> <code>COMPLETE</code> - This condition validates that a dependent
     * container runs to completion (exits) before permitting other containers to
     * start. This can be useful for nonessential containers that run a script and then
     * exit. This condition can't be set on an essential container.</p> </li> <li> <p>
     * <code>SUCCESS</code> - This condition is the same as <code>COMPLETE</code>, but
     * it also requires that the container exits with a <code>zero</code> status. This
     * condition can't be set on an essential container.</p> </li> <li> <p>
     * <code>HEALTHY</code> - This condition validates that the dependent container
     * passes its Docker health check before permitting other containers to start. This
     * requires that the dependent container has health checks configured. This
     * condition is confirmed only at task startup.</p> </li> </ul>
     */
    inline ContainerCondition GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(ContainerCondition value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline ContainerDependency& WithCondition(ContainerCondition value) { SetCondition(value); return *this;}
    ///@}
  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    ContainerCondition m_condition{ContainerCondition::NOT_SET};
    bool m_conditionHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
