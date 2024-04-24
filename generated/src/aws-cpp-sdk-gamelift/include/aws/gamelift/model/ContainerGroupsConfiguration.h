/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ConnectionPortRange.h>
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
   * is currently in public preview.</b> </p> <p>Configuration details for a set of
   * container groups, for use when creating a fleet with compute type
   * <code>CONTAINER</code>. </p> <p> <b>Used with:</b> <a>CreateFleet</a>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerGroupsConfiguration">AWS
   * API Reference</a></p>
   */
  class ContainerGroupsConfiguration
  {
  public:
    AWS_GAMELIFT_API ContainerGroupsConfiguration();
    AWS_GAMELIFT_API ContainerGroupsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerGroupsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of container group definition names to deploy to a new container
     * fleet.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerGroupDefinitionNames() const{ return m_containerGroupDefinitionNames; }

    /**
     * <p>The list of container group definition names to deploy to a new container
     * fleet.</p>
     */
    inline bool ContainerGroupDefinitionNamesHasBeenSet() const { return m_containerGroupDefinitionNamesHasBeenSet; }

    /**
     * <p>The list of container group definition names to deploy to a new container
     * fleet.</p>
     */
    inline void SetContainerGroupDefinitionNames(const Aws::Vector<Aws::String>& value) { m_containerGroupDefinitionNamesHasBeenSet = true; m_containerGroupDefinitionNames = value; }

    /**
     * <p>The list of container group definition names to deploy to a new container
     * fleet.</p>
     */
    inline void SetContainerGroupDefinitionNames(Aws::Vector<Aws::String>&& value) { m_containerGroupDefinitionNamesHasBeenSet = true; m_containerGroupDefinitionNames = std::move(value); }

    /**
     * <p>The list of container group definition names to deploy to a new container
     * fleet.</p>
     */
    inline ContainerGroupsConfiguration& WithContainerGroupDefinitionNames(const Aws::Vector<Aws::String>& value) { SetContainerGroupDefinitionNames(value); return *this;}

    /**
     * <p>The list of container group definition names to deploy to a new container
     * fleet.</p>
     */
    inline ContainerGroupsConfiguration& WithContainerGroupDefinitionNames(Aws::Vector<Aws::String>&& value) { SetContainerGroupDefinitionNames(std::move(value)); return *this;}

    /**
     * <p>The list of container group definition names to deploy to a new container
     * fleet.</p>
     */
    inline ContainerGroupsConfiguration& AddContainerGroupDefinitionNames(const Aws::String& value) { m_containerGroupDefinitionNamesHasBeenSet = true; m_containerGroupDefinitionNames.push_back(value); return *this; }

    /**
     * <p>The list of container group definition names to deploy to a new container
     * fleet.</p>
     */
    inline ContainerGroupsConfiguration& AddContainerGroupDefinitionNames(Aws::String&& value) { m_containerGroupDefinitionNamesHasBeenSet = true; m_containerGroupDefinitionNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of container group definition names to deploy to a new container
     * fleet.</p>
     */
    inline ContainerGroupsConfiguration& AddContainerGroupDefinitionNames(const char* value) { m_containerGroupDefinitionNamesHasBeenSet = true; m_containerGroupDefinitionNames.push_back(value); return *this; }


    /**
     * <p>A set of ports to allow inbound traffic, including game clients, to connect
     * to processes running in the container fleet. </p> <p>Connection ports are
     * dynamically mapped to container ports, which are assigned to individual
     * processes running in a container. The connection port range must have enough
     * ports to map to all container ports across a fleet instance. To calculate the
     * minimum connection ports needed, use the following formula: </p> <p> <i>[Total
     * number of container ports as defined for containers in the replica container
     * group] * [Desired or calculated number of replica container groups per instance]
     * + [Total number of container ports as defined for containers in the daemon
     * container group]</i> </p> <p>As a best practice, double the minimum number of
     * connection ports.</p>  <p>Use the fleet's
     * <code>EC2InboundPermissions</code> property to control external access to
     * connection ports. Set this property to the connection port numbers that you want
     * to open access to. See <a>IpPermission</a> for more details.</p> 
     */
    inline const ConnectionPortRange& GetConnectionPortRange() const{ return m_connectionPortRange; }

    /**
     * <p>A set of ports to allow inbound traffic, including game clients, to connect
     * to processes running in the container fleet. </p> <p>Connection ports are
     * dynamically mapped to container ports, which are assigned to individual
     * processes running in a container. The connection port range must have enough
     * ports to map to all container ports across a fleet instance. To calculate the
     * minimum connection ports needed, use the following formula: </p> <p> <i>[Total
     * number of container ports as defined for containers in the replica container
     * group] * [Desired or calculated number of replica container groups per instance]
     * + [Total number of container ports as defined for containers in the daemon
     * container group]</i> </p> <p>As a best practice, double the minimum number of
     * connection ports.</p>  <p>Use the fleet's
     * <code>EC2InboundPermissions</code> property to control external access to
     * connection ports. Set this property to the connection port numbers that you want
     * to open access to. See <a>IpPermission</a> for more details.</p> 
     */
    inline bool ConnectionPortRangeHasBeenSet() const { return m_connectionPortRangeHasBeenSet; }

    /**
     * <p>A set of ports to allow inbound traffic, including game clients, to connect
     * to processes running in the container fleet. </p> <p>Connection ports are
     * dynamically mapped to container ports, which are assigned to individual
     * processes running in a container. The connection port range must have enough
     * ports to map to all container ports across a fleet instance. To calculate the
     * minimum connection ports needed, use the following formula: </p> <p> <i>[Total
     * number of container ports as defined for containers in the replica container
     * group] * [Desired or calculated number of replica container groups per instance]
     * + [Total number of container ports as defined for containers in the daemon
     * container group]</i> </p> <p>As a best practice, double the minimum number of
     * connection ports.</p>  <p>Use the fleet's
     * <code>EC2InboundPermissions</code> property to control external access to
     * connection ports. Set this property to the connection port numbers that you want
     * to open access to. See <a>IpPermission</a> for more details.</p> 
     */
    inline void SetConnectionPortRange(const ConnectionPortRange& value) { m_connectionPortRangeHasBeenSet = true; m_connectionPortRange = value; }

    /**
     * <p>A set of ports to allow inbound traffic, including game clients, to connect
     * to processes running in the container fleet. </p> <p>Connection ports are
     * dynamically mapped to container ports, which are assigned to individual
     * processes running in a container. The connection port range must have enough
     * ports to map to all container ports across a fleet instance. To calculate the
     * minimum connection ports needed, use the following formula: </p> <p> <i>[Total
     * number of container ports as defined for containers in the replica container
     * group] * [Desired or calculated number of replica container groups per instance]
     * + [Total number of container ports as defined for containers in the daemon
     * container group]</i> </p> <p>As a best practice, double the minimum number of
     * connection ports.</p>  <p>Use the fleet's
     * <code>EC2InboundPermissions</code> property to control external access to
     * connection ports. Set this property to the connection port numbers that you want
     * to open access to. See <a>IpPermission</a> for more details.</p> 
     */
    inline void SetConnectionPortRange(ConnectionPortRange&& value) { m_connectionPortRangeHasBeenSet = true; m_connectionPortRange = std::move(value); }

    /**
     * <p>A set of ports to allow inbound traffic, including game clients, to connect
     * to processes running in the container fleet. </p> <p>Connection ports are
     * dynamically mapped to container ports, which are assigned to individual
     * processes running in a container. The connection port range must have enough
     * ports to map to all container ports across a fleet instance. To calculate the
     * minimum connection ports needed, use the following formula: </p> <p> <i>[Total
     * number of container ports as defined for containers in the replica container
     * group] * [Desired or calculated number of replica container groups per instance]
     * + [Total number of container ports as defined for containers in the daemon
     * container group]</i> </p> <p>As a best practice, double the minimum number of
     * connection ports.</p>  <p>Use the fleet's
     * <code>EC2InboundPermissions</code> property to control external access to
     * connection ports. Set this property to the connection port numbers that you want
     * to open access to. See <a>IpPermission</a> for more details.</p> 
     */
    inline ContainerGroupsConfiguration& WithConnectionPortRange(const ConnectionPortRange& value) { SetConnectionPortRange(value); return *this;}

    /**
     * <p>A set of ports to allow inbound traffic, including game clients, to connect
     * to processes running in the container fleet. </p> <p>Connection ports are
     * dynamically mapped to container ports, which are assigned to individual
     * processes running in a container. The connection port range must have enough
     * ports to map to all container ports across a fleet instance. To calculate the
     * minimum connection ports needed, use the following formula: </p> <p> <i>[Total
     * number of container ports as defined for containers in the replica container
     * group] * [Desired or calculated number of replica container groups per instance]
     * + [Total number of container ports as defined for containers in the daemon
     * container group]</i> </p> <p>As a best practice, double the minimum number of
     * connection ports.</p>  <p>Use the fleet's
     * <code>EC2InboundPermissions</code> property to control external access to
     * connection ports. Set this property to the connection port numbers that you want
     * to open access to. See <a>IpPermission</a> for more details.</p> 
     */
    inline ContainerGroupsConfiguration& WithConnectionPortRange(ConnectionPortRange&& value) { SetConnectionPortRange(std::move(value)); return *this;}


    /**
     * <p>The number of times to replicate the replica container group on each instance
     * in a container fleet. By default, Amazon GameLift calculates the maximum number
     * of replica container groups that can fit on a fleet instance (based on CPU and
     * memory resources). Leave this parameter empty if you want to use the maximum
     * number, or specify a desired number to override the maximum. The desired number
     * is used if it's less than the maximum number.</p>
     */
    inline int GetDesiredReplicaContainerGroupsPerInstance() const{ return m_desiredReplicaContainerGroupsPerInstance; }

    /**
     * <p>The number of times to replicate the replica container group on each instance
     * in a container fleet. By default, Amazon GameLift calculates the maximum number
     * of replica container groups that can fit on a fleet instance (based on CPU and
     * memory resources). Leave this parameter empty if you want to use the maximum
     * number, or specify a desired number to override the maximum. The desired number
     * is used if it's less than the maximum number.</p>
     */
    inline bool DesiredReplicaContainerGroupsPerInstanceHasBeenSet() const { return m_desiredReplicaContainerGroupsPerInstanceHasBeenSet; }

    /**
     * <p>The number of times to replicate the replica container group on each instance
     * in a container fleet. By default, Amazon GameLift calculates the maximum number
     * of replica container groups that can fit on a fleet instance (based on CPU and
     * memory resources). Leave this parameter empty if you want to use the maximum
     * number, or specify a desired number to override the maximum. The desired number
     * is used if it's less than the maximum number.</p>
     */
    inline void SetDesiredReplicaContainerGroupsPerInstance(int value) { m_desiredReplicaContainerGroupsPerInstanceHasBeenSet = true; m_desiredReplicaContainerGroupsPerInstance = value; }

    /**
     * <p>The number of times to replicate the replica container group on each instance
     * in a container fleet. By default, Amazon GameLift calculates the maximum number
     * of replica container groups that can fit on a fleet instance (based on CPU and
     * memory resources). Leave this parameter empty if you want to use the maximum
     * number, or specify a desired number to override the maximum. The desired number
     * is used if it's less than the maximum number.</p>
     */
    inline ContainerGroupsConfiguration& WithDesiredReplicaContainerGroupsPerInstance(int value) { SetDesiredReplicaContainerGroupsPerInstance(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_containerGroupDefinitionNames;
    bool m_containerGroupDefinitionNamesHasBeenSet = false;

    ConnectionPortRange m_connectionPortRange;
    bool m_connectionPortRangeHasBeenSet = false;

    int m_desiredReplicaContainerGroupsPerInstance;
    bool m_desiredReplicaContainerGroupsPerInstanceHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
