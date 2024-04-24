/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ConnectionPortRange.h>
#include <aws/gamelift/model/ContainerGroupsPerInstance.h>
#include <aws/gamelift/model/ContainerGroupDefinitionProperty.h>
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
   * is currently in public preview.</b> </p> <p>The properties of container groups
   * that are running on a container fleet. Container group properties for a fleet
   * can't be changed.</p> <p> <b>Returned by:</b> <a>DescribeFleetAttributes</a>,
   * <a>CreateFleet</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerGroupsAttributes">AWS
   * API Reference</a></p>
   */
  class ContainerGroupsAttributes
  {
  public:
    AWS_GAMELIFT_API ContainerGroupsAttributes();
    AWS_GAMELIFT_API ContainerGroupsAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerGroupsAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A collection of properties that describe each container group in the fleet. A
     * container fleet is deployed with one or more <a>ContainerGroupDefinition</a>
     * resources, which is where these properties are set.</p>
     */
    inline const Aws::Vector<ContainerGroupDefinitionProperty>& GetContainerGroupDefinitionProperties() const{ return m_containerGroupDefinitionProperties; }

    /**
     * <p>A collection of properties that describe each container group in the fleet. A
     * container fleet is deployed with one or more <a>ContainerGroupDefinition</a>
     * resources, which is where these properties are set.</p>
     */
    inline bool ContainerGroupDefinitionPropertiesHasBeenSet() const { return m_containerGroupDefinitionPropertiesHasBeenSet; }

    /**
     * <p>A collection of properties that describe each container group in the fleet. A
     * container fleet is deployed with one or more <a>ContainerGroupDefinition</a>
     * resources, which is where these properties are set.</p>
     */
    inline void SetContainerGroupDefinitionProperties(const Aws::Vector<ContainerGroupDefinitionProperty>& value) { m_containerGroupDefinitionPropertiesHasBeenSet = true; m_containerGroupDefinitionProperties = value; }

    /**
     * <p>A collection of properties that describe each container group in the fleet. A
     * container fleet is deployed with one or more <a>ContainerGroupDefinition</a>
     * resources, which is where these properties are set.</p>
     */
    inline void SetContainerGroupDefinitionProperties(Aws::Vector<ContainerGroupDefinitionProperty>&& value) { m_containerGroupDefinitionPropertiesHasBeenSet = true; m_containerGroupDefinitionProperties = std::move(value); }

    /**
     * <p>A collection of properties that describe each container group in the fleet. A
     * container fleet is deployed with one or more <a>ContainerGroupDefinition</a>
     * resources, which is where these properties are set.</p>
     */
    inline ContainerGroupsAttributes& WithContainerGroupDefinitionProperties(const Aws::Vector<ContainerGroupDefinitionProperty>& value) { SetContainerGroupDefinitionProperties(value); return *this;}

    /**
     * <p>A collection of properties that describe each container group in the fleet. A
     * container fleet is deployed with one or more <a>ContainerGroupDefinition</a>
     * resources, which is where these properties are set.</p>
     */
    inline ContainerGroupsAttributes& WithContainerGroupDefinitionProperties(Aws::Vector<ContainerGroupDefinitionProperty>&& value) { SetContainerGroupDefinitionProperties(std::move(value)); return *this;}

    /**
     * <p>A collection of properties that describe each container group in the fleet. A
     * container fleet is deployed with one or more <a>ContainerGroupDefinition</a>
     * resources, which is where these properties are set.</p>
     */
    inline ContainerGroupsAttributes& AddContainerGroupDefinitionProperties(const ContainerGroupDefinitionProperty& value) { m_containerGroupDefinitionPropertiesHasBeenSet = true; m_containerGroupDefinitionProperties.push_back(value); return *this; }

    /**
     * <p>A collection of properties that describe each container group in the fleet. A
     * container fleet is deployed with one or more <a>ContainerGroupDefinition</a>
     * resources, which is where these properties are set.</p>
     */
    inline ContainerGroupsAttributes& AddContainerGroupDefinitionProperties(ContainerGroupDefinitionProperty&& value) { m_containerGroupDefinitionPropertiesHasBeenSet = true; m_containerGroupDefinitionProperties.push_back(std::move(value)); return *this; }


    /**
     * <p>A set of ports that allow inbound traffic to connect to processes running in
     * the fleet's container groups. Amazon GameLift maps each connection port to a
     * container port, which is assigned to a specific container process. A fleet's
     * connection port range can't be changed, but you can control access to connection
     * ports by updating a fleet's <code>EC2InboundPermissions</code> with
     * <a>UpdateFleetPortSettings</a>. </p>
     */
    inline const ConnectionPortRange& GetConnectionPortRange() const{ return m_connectionPortRange; }

    /**
     * <p>A set of ports that allow inbound traffic to connect to processes running in
     * the fleet's container groups. Amazon GameLift maps each connection port to a
     * container port, which is assigned to a specific container process. A fleet's
     * connection port range can't be changed, but you can control access to connection
     * ports by updating a fleet's <code>EC2InboundPermissions</code> with
     * <a>UpdateFleetPortSettings</a>. </p>
     */
    inline bool ConnectionPortRangeHasBeenSet() const { return m_connectionPortRangeHasBeenSet; }

    /**
     * <p>A set of ports that allow inbound traffic to connect to processes running in
     * the fleet's container groups. Amazon GameLift maps each connection port to a
     * container port, which is assigned to a specific container process. A fleet's
     * connection port range can't be changed, but you can control access to connection
     * ports by updating a fleet's <code>EC2InboundPermissions</code> with
     * <a>UpdateFleetPortSettings</a>. </p>
     */
    inline void SetConnectionPortRange(const ConnectionPortRange& value) { m_connectionPortRangeHasBeenSet = true; m_connectionPortRange = value; }

    /**
     * <p>A set of ports that allow inbound traffic to connect to processes running in
     * the fleet's container groups. Amazon GameLift maps each connection port to a
     * container port, which is assigned to a specific container process. A fleet's
     * connection port range can't be changed, but you can control access to connection
     * ports by updating a fleet's <code>EC2InboundPermissions</code> with
     * <a>UpdateFleetPortSettings</a>. </p>
     */
    inline void SetConnectionPortRange(ConnectionPortRange&& value) { m_connectionPortRangeHasBeenSet = true; m_connectionPortRange = std::move(value); }

    /**
     * <p>A set of ports that allow inbound traffic to connect to processes running in
     * the fleet's container groups. Amazon GameLift maps each connection port to a
     * container port, which is assigned to a specific container process. A fleet's
     * connection port range can't be changed, but you can control access to connection
     * ports by updating a fleet's <code>EC2InboundPermissions</code> with
     * <a>UpdateFleetPortSettings</a>. </p>
     */
    inline ContainerGroupsAttributes& WithConnectionPortRange(const ConnectionPortRange& value) { SetConnectionPortRange(value); return *this;}

    /**
     * <p>A set of ports that allow inbound traffic to connect to processes running in
     * the fleet's container groups. Amazon GameLift maps each connection port to a
     * container port, which is assigned to a specific container process. A fleet's
     * connection port range can't be changed, but you can control access to connection
     * ports by updating a fleet's <code>EC2InboundPermissions</code> with
     * <a>UpdateFleetPortSettings</a>. </p>
     */
    inline ContainerGroupsAttributes& WithConnectionPortRange(ConnectionPortRange&& value) { SetConnectionPortRange(std::move(value)); return *this;}


    /**
     * <p>Details about the number of replica container groups that Amazon GameLift
     * deploys to each instance in the container fleet.</p>
     */
    inline const ContainerGroupsPerInstance& GetContainerGroupsPerInstance() const{ return m_containerGroupsPerInstance; }

    /**
     * <p>Details about the number of replica container groups that Amazon GameLift
     * deploys to each instance in the container fleet.</p>
     */
    inline bool ContainerGroupsPerInstanceHasBeenSet() const { return m_containerGroupsPerInstanceHasBeenSet; }

    /**
     * <p>Details about the number of replica container groups that Amazon GameLift
     * deploys to each instance in the container fleet.</p>
     */
    inline void SetContainerGroupsPerInstance(const ContainerGroupsPerInstance& value) { m_containerGroupsPerInstanceHasBeenSet = true; m_containerGroupsPerInstance = value; }

    /**
     * <p>Details about the number of replica container groups that Amazon GameLift
     * deploys to each instance in the container fleet.</p>
     */
    inline void SetContainerGroupsPerInstance(ContainerGroupsPerInstance&& value) { m_containerGroupsPerInstanceHasBeenSet = true; m_containerGroupsPerInstance = std::move(value); }

    /**
     * <p>Details about the number of replica container groups that Amazon GameLift
     * deploys to each instance in the container fleet.</p>
     */
    inline ContainerGroupsAttributes& WithContainerGroupsPerInstance(const ContainerGroupsPerInstance& value) { SetContainerGroupsPerInstance(value); return *this;}

    /**
     * <p>Details about the number of replica container groups that Amazon GameLift
     * deploys to each instance in the container fleet.</p>
     */
    inline ContainerGroupsAttributes& WithContainerGroupsPerInstance(ContainerGroupsPerInstance&& value) { SetContainerGroupsPerInstance(std::move(value)); return *this;}

  private:

    Aws::Vector<ContainerGroupDefinitionProperty> m_containerGroupDefinitionProperties;
    bool m_containerGroupDefinitionPropertiesHasBeenSet = false;

    ConnectionPortRange m_connectionPortRange;
    bool m_connectionPortRangeHasBeenSet = false;

    ContainerGroupsPerInstance m_containerGroupsPerInstance;
    bool m_containerGroupsPerInstanceHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
