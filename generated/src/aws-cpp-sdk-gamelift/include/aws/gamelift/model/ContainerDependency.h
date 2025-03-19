/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ContainerDependencyCondition.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>A container's dependency on another container in the same container group.
   * The dependency impacts how the dependent container is able to start or shut down
   * based the status of the other container.</p> <p>For example, <i>ContainerA</i>
   * is configured with the following dependency: a <code>START</code> dependency on
   * <i>ContainerB</i>. This means that <i>ContainerA</i> can't start until
   * <i>ContainerB</i> has started. It also means that <i>ContainerA</i> must shut
   * down before <i>ContainerB</i>.</p> <p> <b>Part of:</b> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_GameServerContainerDefinition.html">GameServerContainerDefinition</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_GameServerContainerDefinitionInput.html">GameServerContainerDefinitionInput</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_SupportContainerDefinition.html">SupportContainerDefinition</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_SupportContainerDefinitionInput.html">SupportContainerDefinitionInput</a>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerDependency">AWS
   * API Reference</a></p>
   */
  class ContainerDependency
  {
  public:
    AWS_GAMELIFT_API ContainerDependency() = default;
    AWS_GAMELIFT_API ContainerDependency(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerDependency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A descriptive label for the container definition that this container depends
     * on.</p>
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
     * <p>The condition that the dependency container must reach before the dependent
     * container can start. Valid conditions include: </p> <ul> <li> <p>START - The
     * dependency container must have started. </p> </li> <li> <p>COMPLETE - The
     * dependency container has run to completion (exits). Use this condition with
     * nonessential containers, such as those that run a script and then exit. The
     * dependency container can't be an essential container. </p> </li> <li> <p>SUCCESS
     * - The dependency container has run to completion and exited with a zero status.
     * The dependency container can't be an essential container. </p> </li> <li>
     * <p>HEALTHY - The dependency container has passed its Docker health check. Use
     * this condition with dependency containers that have health checks configured.
     * This condition is confirmed at container group startup only.</p> </li> </ul>
     */
    inline ContainerDependencyCondition GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(ContainerDependencyCondition value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline ContainerDependency& WithCondition(ContainerDependencyCondition value) { SetCondition(value); return *this;}
    ///@}
  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    ContainerDependencyCondition m_condition{ContainerDependencyCondition::NOT_SET};
    bool m_conditionHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
