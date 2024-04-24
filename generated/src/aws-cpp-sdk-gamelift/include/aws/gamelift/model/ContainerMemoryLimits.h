/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>

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
   * <p>Specifies how much memory is available to a container. You can't change this
   * value after you create this object. </p> <p> <b>Part of: </b>
   * <a>ContainerDefinition$MemoryLimits</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerMemoryLimits">AWS
   * API Reference</a></p>
   */
  class ContainerMemoryLimits
  {
  public:
    AWS_GAMELIFT_API ContainerMemoryLimits();
    AWS_GAMELIFT_API ContainerMemoryLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerMemoryLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of memory that is reserved for a container. When the container
     * group's shared memory is under contention, the system attempts to maintain the
     * container memory usage at this soft limit. However, the container can use more
     * memory when needed, if available. This property is similar to the Amazon ECS
     * container definition parameter <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#ContainerDefinition-memoryReservation">memoryreservation</a>
     * (<i>Amazon Elastic Container Service Developer Guide</i>).</p>
     */
    inline int GetSoftLimit() const{ return m_softLimit; }

    /**
     * <p>The amount of memory that is reserved for a container. When the container
     * group's shared memory is under contention, the system attempts to maintain the
     * container memory usage at this soft limit. However, the container can use more
     * memory when needed, if available. This property is similar to the Amazon ECS
     * container definition parameter <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#ContainerDefinition-memoryReservation">memoryreservation</a>
     * (<i>Amazon Elastic Container Service Developer Guide</i>).</p>
     */
    inline bool SoftLimitHasBeenSet() const { return m_softLimitHasBeenSet; }

    /**
     * <p>The amount of memory that is reserved for a container. When the container
     * group's shared memory is under contention, the system attempts to maintain the
     * container memory usage at this soft limit. However, the container can use more
     * memory when needed, if available. This property is similar to the Amazon ECS
     * container definition parameter <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#ContainerDefinition-memoryReservation">memoryreservation</a>
     * (<i>Amazon Elastic Container Service Developer Guide</i>).</p>
     */
    inline void SetSoftLimit(int value) { m_softLimitHasBeenSet = true; m_softLimit = value; }

    /**
     * <p>The amount of memory that is reserved for a container. When the container
     * group's shared memory is under contention, the system attempts to maintain the
     * container memory usage at this soft limit. However, the container can use more
     * memory when needed, if available. This property is similar to the Amazon ECS
     * container definition parameter <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#ContainerDefinition-memoryReservation">memoryreservation</a>
     * (<i>Amazon Elastic Container Service Developer Guide</i>).</p>
     */
    inline ContainerMemoryLimits& WithSoftLimit(int value) { SetSoftLimit(value); return *this;}


    /**
     * <p>The maximum amount of memory that the container can use. If a container
     * attempts to exceed this limit, the container is stopped. This property is
     * similar to the Amazon ECS container definition parameter <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#container_definition_memory">memory</a>
     * in the <i>Amazon Elastic Container Service Developer Guide.</i> </p>
     */
    inline int GetHardLimit() const{ return m_hardLimit; }

    /**
     * <p>The maximum amount of memory that the container can use. If a container
     * attempts to exceed this limit, the container is stopped. This property is
     * similar to the Amazon ECS container definition parameter <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#container_definition_memory">memory</a>
     * in the <i>Amazon Elastic Container Service Developer Guide.</i> </p>
     */
    inline bool HardLimitHasBeenSet() const { return m_hardLimitHasBeenSet; }

    /**
     * <p>The maximum amount of memory that the container can use. If a container
     * attempts to exceed this limit, the container is stopped. This property is
     * similar to the Amazon ECS container definition parameter <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#container_definition_memory">memory</a>
     * in the <i>Amazon Elastic Container Service Developer Guide.</i> </p>
     */
    inline void SetHardLimit(int value) { m_hardLimitHasBeenSet = true; m_hardLimit = value; }

    /**
     * <p>The maximum amount of memory that the container can use. If a container
     * attempts to exceed this limit, the container is stopped. This property is
     * similar to the Amazon ECS container definition parameter <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#container_definition_memory">memory</a>
     * in the <i>Amazon Elastic Container Service Developer Guide.</i> </p>
     */
    inline ContainerMemoryLimits& WithHardLimit(int value) { SetHardLimit(value); return *this;}

  private:

    int m_softLimit;
    bool m_softLimitHasBeenSet = false;

    int m_hardLimit;
    bool m_hardLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
