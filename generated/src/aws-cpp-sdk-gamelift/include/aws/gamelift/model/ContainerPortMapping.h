/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/IpProtocol.h>
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
   * is currently in public preview.</b> </p> <p> Defines how an internal-facing
   * container port is mapped to an external-facing connection port on a fleet
   * instance of compute type <code>CONTAINER</code>. Incoming traffic, such as a
   * game client, uses a connection port to connect to a process in the container
   * fleet. Amazon GameLift directs the inbound traffic to the container port that is
   * assigned to the process, such as a game session, running on a container.</p> <p>
   * <b>Part of:</b> <a>ContainerAttributes</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerPortMapping">AWS
   * API Reference</a></p>
   */
  class ContainerPortMapping
  {
  public:
    AWS_GAMELIFT_API ContainerPortMapping();
    AWS_GAMELIFT_API ContainerPortMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerPortMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The port opened on the container.</p>
     */
    inline int GetContainerPort() const{ return m_containerPort; }
    inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }
    inline void SetContainerPort(int value) { m_containerPortHasBeenSet = true; m_containerPort = value; }
    inline ContainerPortMapping& WithContainerPort(int value) { SetContainerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port opened on the fleet instance. This is also called the "host
     * port".</p>
     */
    inline int GetConnectionPort() const{ return m_connectionPort; }
    inline bool ConnectionPortHasBeenSet() const { return m_connectionPortHasBeenSet; }
    inline void SetConnectionPort(int value) { m_connectionPortHasBeenSet = true; m_connectionPort = value; }
    inline ContainerPortMapping& WithConnectionPort(int value) { SetConnectionPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network protocol that this mapping supports.</p>
     */
    inline const IpProtocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const IpProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(IpProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline ContainerPortMapping& WithProtocol(const IpProtocol& value) { SetProtocol(value); return *this;}
    inline ContainerPortMapping& WithProtocol(IpProtocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}
  private:

    int m_containerPort;
    bool m_containerPortHasBeenSet = false;

    int m_connectionPort;
    bool m_connectionPortHasBeenSet = false;

    IpProtocol m_protocol;
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
