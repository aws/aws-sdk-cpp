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
#include <aws/ecs/model/TransportProtocol.h>
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
   * <p>Port mappings allow containers to access ports on the host container instance
   * to send or receive traffic. Port mappings are specified as part of the container
   * definition.</p> <p>If you are using containers in a task with the
   * <code>awsvpc</code> or <code>host</code> network mode, exposed ports should be
   * specified using <code>containerPort</code>. The <code>hostPort</code> can be
   * left blank or it must be the same value as the <code>containerPort</code>.</p>
   * <p>After a task reaches the <code>RUNNING</code> status, manual and automatic
   * host and container port assignments are visible in the
   * <code>networkBindings</code> section of <a>DescribeTasks</a> API
   * responses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/PortMapping">AWS API
   * Reference</a></p>
   */
  class AWS_ECS_API PortMapping
  {
  public:
    PortMapping();
    PortMapping(Aws::Utils::Json::JsonView jsonValue);
    PortMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The port number on the container that is bound to the user-specified or
     * automatically assigned host port.</p> <p>If you are using containers in a task
     * with the <code>awsvpc</code> or <code>host</code> network mode, exposed ports
     * should be specified using <code>containerPort</code>.</p> <p>If you are using
     * containers in a task with the <code>bridge</code> network mode and you specify a
     * container port and not a host port, your container automatically receives a host
     * port in the ephemeral port range. For more information, see
     * <code>hostPort</code>. Port mappings that are automatically assigned in this way
     * do not count toward the 100 reserved ports limit of a container instance.</p>
     * <important> <p>You cannot expose the same container port for multiple protocols.
     * An error will be returned if this is attempted.</p> </important>
     */
    inline int GetContainerPort() const{ return m_containerPort; }

    /**
     * <p>The port number on the container that is bound to the user-specified or
     * automatically assigned host port.</p> <p>If you are using containers in a task
     * with the <code>awsvpc</code> or <code>host</code> network mode, exposed ports
     * should be specified using <code>containerPort</code>.</p> <p>If you are using
     * containers in a task with the <code>bridge</code> network mode and you specify a
     * container port and not a host port, your container automatically receives a host
     * port in the ephemeral port range. For more information, see
     * <code>hostPort</code>. Port mappings that are automatically assigned in this way
     * do not count toward the 100 reserved ports limit of a container instance.</p>
     * <important> <p>You cannot expose the same container port for multiple protocols.
     * An error will be returned if this is attempted.</p> </important>
     */
    inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }

    /**
     * <p>The port number on the container that is bound to the user-specified or
     * automatically assigned host port.</p> <p>If you are using containers in a task
     * with the <code>awsvpc</code> or <code>host</code> network mode, exposed ports
     * should be specified using <code>containerPort</code>.</p> <p>If you are using
     * containers in a task with the <code>bridge</code> network mode and you specify a
     * container port and not a host port, your container automatically receives a host
     * port in the ephemeral port range. For more information, see
     * <code>hostPort</code>. Port mappings that are automatically assigned in this way
     * do not count toward the 100 reserved ports limit of a container instance.</p>
     * <important> <p>You cannot expose the same container port for multiple protocols.
     * An error will be returned if this is attempted.</p> </important>
     */
    inline void SetContainerPort(int value) { m_containerPortHasBeenSet = true; m_containerPort = value; }

    /**
     * <p>The port number on the container that is bound to the user-specified or
     * automatically assigned host port.</p> <p>If you are using containers in a task
     * with the <code>awsvpc</code> or <code>host</code> network mode, exposed ports
     * should be specified using <code>containerPort</code>.</p> <p>If you are using
     * containers in a task with the <code>bridge</code> network mode and you specify a
     * container port and not a host port, your container automatically receives a host
     * port in the ephemeral port range. For more information, see
     * <code>hostPort</code>. Port mappings that are automatically assigned in this way
     * do not count toward the 100 reserved ports limit of a container instance.</p>
     * <important> <p>You cannot expose the same container port for multiple protocols.
     * An error will be returned if this is attempted.</p> </important>
     */
    inline PortMapping& WithContainerPort(int value) { SetContainerPort(value); return *this;}


    /**
     * <p>The port number on the container instance to reserve for your container.</p>
     * <p>If you are using containers in a task with the <code>awsvpc</code> or
     * <code>host</code> network mode, the <code>hostPort</code> can either be left
     * blank or set to the same value as the <code>containerPort</code>.</p> <p>If you
     * are using containers in a task with the <code>bridge</code> network mode, you
     * can specify a non-reserved host port for your container port mapping, or you can
     * omit the <code>hostPort</code> (or set it to <code>0</code>) while specifying a
     * <code>containerPort</code> and your container automatically receives a port in
     * the ephemeral port range for your container instance operating system and Docker
     * version.</p> <p>The default ephemeral port range for Docker version 1.6.0 and
     * later is listed on the instance under
     * <code>/proc/sys/net/ipv4/ip_local_port_range</code>. If this kernel parameter is
     * unavailable, the default ephemeral port range from 49153 through 65535 is used.
     * Do not attempt to specify a host port in the ephemeral port range as these are
     * reserved for automatic assignment. In general, ports below 32768 are outside of
     * the ephemeral port range.</p> <note> <p>The default ephemeral port range from
     * 49153 through 65535 is always used for Docker versions before 1.6.0.</p> </note>
     * <p>The default reserved ports are 22 for SSH, the Docker ports 2375 and 2376,
     * and the Amazon ECS container agent ports 51678-51680. Any host port that was
     * previously specified in a running task is also reserved while the task is
     * running (after a task stops, the host port is released). The current reserved
     * ports are displayed in the <code>remainingResources</code> of
     * <a>DescribeContainerInstances</a> output. A container instance can have up to
     * 100 reserved ports at a time, including the default reserved ports.
     * Automatically assigned ports don't count toward the 100 reserved ports
     * limit.</p>
     */
    inline int GetHostPort() const{ return m_hostPort; }

    /**
     * <p>The port number on the container instance to reserve for your container.</p>
     * <p>If you are using containers in a task with the <code>awsvpc</code> or
     * <code>host</code> network mode, the <code>hostPort</code> can either be left
     * blank or set to the same value as the <code>containerPort</code>.</p> <p>If you
     * are using containers in a task with the <code>bridge</code> network mode, you
     * can specify a non-reserved host port for your container port mapping, or you can
     * omit the <code>hostPort</code> (or set it to <code>0</code>) while specifying a
     * <code>containerPort</code> and your container automatically receives a port in
     * the ephemeral port range for your container instance operating system and Docker
     * version.</p> <p>The default ephemeral port range for Docker version 1.6.0 and
     * later is listed on the instance under
     * <code>/proc/sys/net/ipv4/ip_local_port_range</code>. If this kernel parameter is
     * unavailable, the default ephemeral port range from 49153 through 65535 is used.
     * Do not attempt to specify a host port in the ephemeral port range as these are
     * reserved for automatic assignment. In general, ports below 32768 are outside of
     * the ephemeral port range.</p> <note> <p>The default ephemeral port range from
     * 49153 through 65535 is always used for Docker versions before 1.6.0.</p> </note>
     * <p>The default reserved ports are 22 for SSH, the Docker ports 2375 and 2376,
     * and the Amazon ECS container agent ports 51678-51680. Any host port that was
     * previously specified in a running task is also reserved while the task is
     * running (after a task stops, the host port is released). The current reserved
     * ports are displayed in the <code>remainingResources</code> of
     * <a>DescribeContainerInstances</a> output. A container instance can have up to
     * 100 reserved ports at a time, including the default reserved ports.
     * Automatically assigned ports don't count toward the 100 reserved ports
     * limit.</p>
     */
    inline bool HostPortHasBeenSet() const { return m_hostPortHasBeenSet; }

    /**
     * <p>The port number on the container instance to reserve for your container.</p>
     * <p>If you are using containers in a task with the <code>awsvpc</code> or
     * <code>host</code> network mode, the <code>hostPort</code> can either be left
     * blank or set to the same value as the <code>containerPort</code>.</p> <p>If you
     * are using containers in a task with the <code>bridge</code> network mode, you
     * can specify a non-reserved host port for your container port mapping, or you can
     * omit the <code>hostPort</code> (or set it to <code>0</code>) while specifying a
     * <code>containerPort</code> and your container automatically receives a port in
     * the ephemeral port range for your container instance operating system and Docker
     * version.</p> <p>The default ephemeral port range for Docker version 1.6.0 and
     * later is listed on the instance under
     * <code>/proc/sys/net/ipv4/ip_local_port_range</code>. If this kernel parameter is
     * unavailable, the default ephemeral port range from 49153 through 65535 is used.
     * Do not attempt to specify a host port in the ephemeral port range as these are
     * reserved for automatic assignment. In general, ports below 32768 are outside of
     * the ephemeral port range.</p> <note> <p>The default ephemeral port range from
     * 49153 through 65535 is always used for Docker versions before 1.6.0.</p> </note>
     * <p>The default reserved ports are 22 for SSH, the Docker ports 2375 and 2376,
     * and the Amazon ECS container agent ports 51678-51680. Any host port that was
     * previously specified in a running task is also reserved while the task is
     * running (after a task stops, the host port is released). The current reserved
     * ports are displayed in the <code>remainingResources</code> of
     * <a>DescribeContainerInstances</a> output. A container instance can have up to
     * 100 reserved ports at a time, including the default reserved ports.
     * Automatically assigned ports don't count toward the 100 reserved ports
     * limit.</p>
     */
    inline void SetHostPort(int value) { m_hostPortHasBeenSet = true; m_hostPort = value; }

    /**
     * <p>The port number on the container instance to reserve for your container.</p>
     * <p>If you are using containers in a task with the <code>awsvpc</code> or
     * <code>host</code> network mode, the <code>hostPort</code> can either be left
     * blank or set to the same value as the <code>containerPort</code>.</p> <p>If you
     * are using containers in a task with the <code>bridge</code> network mode, you
     * can specify a non-reserved host port for your container port mapping, or you can
     * omit the <code>hostPort</code> (or set it to <code>0</code>) while specifying a
     * <code>containerPort</code> and your container automatically receives a port in
     * the ephemeral port range for your container instance operating system and Docker
     * version.</p> <p>The default ephemeral port range for Docker version 1.6.0 and
     * later is listed on the instance under
     * <code>/proc/sys/net/ipv4/ip_local_port_range</code>. If this kernel parameter is
     * unavailable, the default ephemeral port range from 49153 through 65535 is used.
     * Do not attempt to specify a host port in the ephemeral port range as these are
     * reserved for automatic assignment. In general, ports below 32768 are outside of
     * the ephemeral port range.</p> <note> <p>The default ephemeral port range from
     * 49153 through 65535 is always used for Docker versions before 1.6.0.</p> </note>
     * <p>The default reserved ports are 22 for SSH, the Docker ports 2375 and 2376,
     * and the Amazon ECS container agent ports 51678-51680. Any host port that was
     * previously specified in a running task is also reserved while the task is
     * running (after a task stops, the host port is released). The current reserved
     * ports are displayed in the <code>remainingResources</code> of
     * <a>DescribeContainerInstances</a> output. A container instance can have up to
     * 100 reserved ports at a time, including the default reserved ports.
     * Automatically assigned ports don't count toward the 100 reserved ports
     * limit.</p>
     */
    inline PortMapping& WithHostPort(int value) { SetHostPort(value); return *this;}


    /**
     * <p>The protocol used for the port mapping. Valid values are <code>tcp</code> and
     * <code>udp</code>. The default is <code>tcp</code>.</p>
     */
    inline const TransportProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol used for the port mapping. Valid values are <code>tcp</code> and
     * <code>udp</code>. The default is <code>tcp</code>.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol used for the port mapping. Valid values are <code>tcp</code> and
     * <code>udp</code>. The default is <code>tcp</code>.</p>
     */
    inline void SetProtocol(const TransportProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol used for the port mapping. Valid values are <code>tcp</code> and
     * <code>udp</code>. The default is <code>tcp</code>.</p>
     */
    inline void SetProtocol(TransportProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol used for the port mapping. Valid values are <code>tcp</code> and
     * <code>udp</code>. The default is <code>tcp</code>.</p>
     */
    inline PortMapping& WithProtocol(const TransportProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol used for the port mapping. Valid values are <code>tcp</code> and
     * <code>udp</code>. The default is <code>tcp</code>.</p>
     */
    inline PortMapping& WithProtocol(TransportProtocol&& value) { SetProtocol(std::move(value)); return *this;}

  private:

    int m_containerPort;
    bool m_containerPortHasBeenSet;

    int m_hostPort;
    bool m_hostPortHasBeenSet;

    TransportProtocol m_protocol;
    bool m_protocolHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
