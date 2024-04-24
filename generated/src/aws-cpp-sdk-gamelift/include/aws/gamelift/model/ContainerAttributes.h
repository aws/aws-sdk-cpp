/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ContainerPortMapping.h>
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
   * is currently in public preview.</b> </p> <p>Describes attributes of containers
   * that are deployed to a fleet with compute type <code>CONTAINER</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerAttributes">AWS
   * API Reference</a></p>
   */
  class ContainerAttributes
  {
  public:
    AWS_GAMELIFT_API ContainerAttributes();
    AWS_GAMELIFT_API ContainerAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Describes how container ports map to connection ports on the fleet instance.
     * Incoming traffic connects to a game via a connection port. A
     * <code>ContainerPortMapping</code> directs the traffic from a connection port to
     * a port on the container that hosts the game session. </p>
     */
    inline const Aws::Vector<ContainerPortMapping>& GetContainerPortMappings() const{ return m_containerPortMappings; }

    /**
     * <p> Describes how container ports map to connection ports on the fleet instance.
     * Incoming traffic connects to a game via a connection port. A
     * <code>ContainerPortMapping</code> directs the traffic from a connection port to
     * a port on the container that hosts the game session. </p>
     */
    inline bool ContainerPortMappingsHasBeenSet() const { return m_containerPortMappingsHasBeenSet; }

    /**
     * <p> Describes how container ports map to connection ports on the fleet instance.
     * Incoming traffic connects to a game via a connection port. A
     * <code>ContainerPortMapping</code> directs the traffic from a connection port to
     * a port on the container that hosts the game session. </p>
     */
    inline void SetContainerPortMappings(const Aws::Vector<ContainerPortMapping>& value) { m_containerPortMappingsHasBeenSet = true; m_containerPortMappings = value; }

    /**
     * <p> Describes how container ports map to connection ports on the fleet instance.
     * Incoming traffic connects to a game via a connection port. A
     * <code>ContainerPortMapping</code> directs the traffic from a connection port to
     * a port on the container that hosts the game session. </p>
     */
    inline void SetContainerPortMappings(Aws::Vector<ContainerPortMapping>&& value) { m_containerPortMappingsHasBeenSet = true; m_containerPortMappings = std::move(value); }

    /**
     * <p> Describes how container ports map to connection ports on the fleet instance.
     * Incoming traffic connects to a game via a connection port. A
     * <code>ContainerPortMapping</code> directs the traffic from a connection port to
     * a port on the container that hosts the game session. </p>
     */
    inline ContainerAttributes& WithContainerPortMappings(const Aws::Vector<ContainerPortMapping>& value) { SetContainerPortMappings(value); return *this;}

    /**
     * <p> Describes how container ports map to connection ports on the fleet instance.
     * Incoming traffic connects to a game via a connection port. A
     * <code>ContainerPortMapping</code> directs the traffic from a connection port to
     * a port on the container that hosts the game session. </p>
     */
    inline ContainerAttributes& WithContainerPortMappings(Aws::Vector<ContainerPortMapping>&& value) { SetContainerPortMappings(std::move(value)); return *this;}

    /**
     * <p> Describes how container ports map to connection ports on the fleet instance.
     * Incoming traffic connects to a game via a connection port. A
     * <code>ContainerPortMapping</code> directs the traffic from a connection port to
     * a port on the container that hosts the game session. </p>
     */
    inline ContainerAttributes& AddContainerPortMappings(const ContainerPortMapping& value) { m_containerPortMappingsHasBeenSet = true; m_containerPortMappings.push_back(value); return *this; }

    /**
     * <p> Describes how container ports map to connection ports on the fleet instance.
     * Incoming traffic connects to a game via a connection port. A
     * <code>ContainerPortMapping</code> directs the traffic from a connection port to
     * a port on the container that hosts the game session. </p>
     */
    inline ContainerAttributes& AddContainerPortMappings(ContainerPortMapping&& value) { m_containerPortMappingsHasBeenSet = true; m_containerPortMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ContainerPortMapping> m_containerPortMappings;
    bool m_containerPortMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
