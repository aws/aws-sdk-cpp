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
   * <p> <b>This data type is used with the Amazon GameLift containers feature, which
   * is currently in public preview.</b> </p> <p>Determines how many replica
   * container groups that Amazon GameLift deploys to each instance in a container
   * fleet. </p> <p>Amazon GameLift calculates the maximum possible replica groups
   * per instance based on the instance 's CPU and memory resources. When deploying a
   * fleet, Amazon GameLift places replica container groups on each fleet instance
   * based on the following:</p> <ul> <li> <p>If no desired value is set, Amazon
   * GameLift places the calculated maximum. </p> </li> <li> <p>If a desired number
   * is set to a value higher than the calculated maximum, Amazon GameLift places the
   * calculated maximum.</p> </li> <li> <p>If a desired number is set to a value
   * lower than the calculated maximum, Amazon GameLift places the desired
   * number.</p> </li> </ul> <p> <b>Part of:</b> <a>ContainerGroupsConfiguration</a>,
   * <a>ContainerGroupsAttributes</a> </p> <p> <b>Returned by:</b>
   * <a>DescribeFleetAttributes</a>, <a>CreateFleet</a> </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerGroupsPerInstance">AWS
   * API Reference</a></p>
   */
  class ContainerGroupsPerInstance
  {
  public:
    AWS_GAMELIFT_API ContainerGroupsPerInstance();
    AWS_GAMELIFT_API ContainerGroupsPerInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerGroupsPerInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The desired number of replica container groups to place on each fleet
     * instance.</p>
     */
    inline int GetDesiredReplicaContainerGroupsPerInstance() const{ return m_desiredReplicaContainerGroupsPerInstance; }

    /**
     * <p>The desired number of replica container groups to place on each fleet
     * instance.</p>
     */
    inline bool DesiredReplicaContainerGroupsPerInstanceHasBeenSet() const { return m_desiredReplicaContainerGroupsPerInstanceHasBeenSet; }

    /**
     * <p>The desired number of replica container groups to place on each fleet
     * instance.</p>
     */
    inline void SetDesiredReplicaContainerGroupsPerInstance(int value) { m_desiredReplicaContainerGroupsPerInstanceHasBeenSet = true; m_desiredReplicaContainerGroupsPerInstance = value; }

    /**
     * <p>The desired number of replica container groups to place on each fleet
     * instance.</p>
     */
    inline ContainerGroupsPerInstance& WithDesiredReplicaContainerGroupsPerInstance(int value) { SetDesiredReplicaContainerGroupsPerInstance(value); return *this;}


    /**
     * <p>The maximum possible number of replica container groups that each fleet
     * instance can have.</p>
     */
    inline int GetMaxReplicaContainerGroupsPerInstance() const{ return m_maxReplicaContainerGroupsPerInstance; }

    /**
     * <p>The maximum possible number of replica container groups that each fleet
     * instance can have.</p>
     */
    inline bool MaxReplicaContainerGroupsPerInstanceHasBeenSet() const { return m_maxReplicaContainerGroupsPerInstanceHasBeenSet; }

    /**
     * <p>The maximum possible number of replica container groups that each fleet
     * instance can have.</p>
     */
    inline void SetMaxReplicaContainerGroupsPerInstance(int value) { m_maxReplicaContainerGroupsPerInstanceHasBeenSet = true; m_maxReplicaContainerGroupsPerInstance = value; }

    /**
     * <p>The maximum possible number of replica container groups that each fleet
     * instance can have.</p>
     */
    inline ContainerGroupsPerInstance& WithMaxReplicaContainerGroupsPerInstance(int value) { SetMaxReplicaContainerGroupsPerInstance(value); return *this;}

  private:

    int m_desiredReplicaContainerGroupsPerInstance;
    bool m_desiredReplicaContainerGroupsPerInstanceHasBeenSet = false;

    int m_maxReplicaContainerGroupsPerInstance;
    bool m_maxReplicaContainerGroupsPerInstanceHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
