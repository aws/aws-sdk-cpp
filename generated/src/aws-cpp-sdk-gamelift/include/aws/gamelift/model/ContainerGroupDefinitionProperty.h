/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/ContainerSchedulingStrategy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> <b>This data type is used with the Amazon GameLift containers feature, which
   * is currently in public preview.</b> </p> <p>The properties of a container group
   * that is deployed to a container fleet.</p> <p> <b>Part of:</b>
   * <a>ContainerGroupsAttributes</a> </p> <p> <b>Returned by:</b>
   * <a>DescribeFleetAttributes</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerGroupDefinitionProperty">AWS
   * API Reference</a></p>
   */
  class ContainerGroupDefinitionProperty
  {
  public:
    AWS_GAMELIFT_API ContainerGroupDefinitionProperty();
    AWS_GAMELIFT_API ContainerGroupDefinitionProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerGroupDefinitionProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The method for scheduling and maintaining copies of the container group
     * across a container fleet. </p>
     */
    inline const ContainerSchedulingStrategy& GetSchedulingStrategy() const{ return m_schedulingStrategy; }

    /**
     * <p>The method for scheduling and maintaining copies of the container group
     * across a container fleet. </p>
     */
    inline bool SchedulingStrategyHasBeenSet() const { return m_schedulingStrategyHasBeenSet; }

    /**
     * <p>The method for scheduling and maintaining copies of the container group
     * across a container fleet. </p>
     */
    inline void SetSchedulingStrategy(const ContainerSchedulingStrategy& value) { m_schedulingStrategyHasBeenSet = true; m_schedulingStrategy = value; }

    /**
     * <p>The method for scheduling and maintaining copies of the container group
     * across a container fleet. </p>
     */
    inline void SetSchedulingStrategy(ContainerSchedulingStrategy&& value) { m_schedulingStrategyHasBeenSet = true; m_schedulingStrategy = std::move(value); }

    /**
     * <p>The method for scheduling and maintaining copies of the container group
     * across a container fleet. </p>
     */
    inline ContainerGroupDefinitionProperty& WithSchedulingStrategy(const ContainerSchedulingStrategy& value) { SetSchedulingStrategy(value); return *this;}

    /**
     * <p>The method for scheduling and maintaining copies of the container group
     * across a container fleet. </p>
     */
    inline ContainerGroupDefinitionProperty& WithSchedulingStrategy(ContainerSchedulingStrategy&& value) { SetSchedulingStrategy(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the container group definition.</p>
     */
    inline const Aws::String& GetContainerGroupDefinitionName() const{ return m_containerGroupDefinitionName; }

    /**
     * <p>The unique identifier for the container group definition.</p>
     */
    inline bool ContainerGroupDefinitionNameHasBeenSet() const { return m_containerGroupDefinitionNameHasBeenSet; }

    /**
     * <p>The unique identifier for the container group definition.</p>
     */
    inline void SetContainerGroupDefinitionName(const Aws::String& value) { m_containerGroupDefinitionNameHasBeenSet = true; m_containerGroupDefinitionName = value; }

    /**
     * <p>The unique identifier for the container group definition.</p>
     */
    inline void SetContainerGroupDefinitionName(Aws::String&& value) { m_containerGroupDefinitionNameHasBeenSet = true; m_containerGroupDefinitionName = std::move(value); }

    /**
     * <p>The unique identifier for the container group definition.</p>
     */
    inline void SetContainerGroupDefinitionName(const char* value) { m_containerGroupDefinitionNameHasBeenSet = true; m_containerGroupDefinitionName.assign(value); }

    /**
     * <p>The unique identifier for the container group definition.</p>
     */
    inline ContainerGroupDefinitionProperty& WithContainerGroupDefinitionName(const Aws::String& value) { SetContainerGroupDefinitionName(value); return *this;}

    /**
     * <p>The unique identifier for the container group definition.</p>
     */
    inline ContainerGroupDefinitionProperty& WithContainerGroupDefinitionName(Aws::String&& value) { SetContainerGroupDefinitionName(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the container group definition.</p>
     */
    inline ContainerGroupDefinitionProperty& WithContainerGroupDefinitionName(const char* value) { SetContainerGroupDefinitionName(value); return *this;}

  private:

    ContainerSchedulingStrategy m_schedulingStrategy;
    bool m_schedulingStrategyHasBeenSet = false;

    Aws::String m_containerGroupDefinitionName;
    bool m_containerGroupDefinitionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
