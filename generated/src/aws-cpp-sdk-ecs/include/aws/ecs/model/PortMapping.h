﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/TransportProtocol.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ApplicationProtocol.h>
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
   * definition.</p> <p>If you use containers in a task with the <code>awsvpc</code>
   * or <code>host</code> network mode, specify the exposed ports using
   * <code>containerPort</code>. The <code>hostPort</code> can be left blank or it
   * must be the same value as the <code>containerPort</code>.</p> <p>Most fields of
   * this parameter (<code>containerPort</code>, <code>hostPort</code>,
   * <code>protocol</code>) maps to <code>PortBindings</code> in the <a
   * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
   * a container</a> section of the <a
   * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
   * <code>--publish</code> option to <a
   * href="https://docs.docker.com/engine/reference/commandline/run/"> <code>docker
   * run</code> </a>. If the network mode of a task definition is set to
   * <code>host</code>, host ports must either be undefined or match the container
   * port in the port mapping.</p>  <p>You can't expose the same container port
   * for multiple protocols. If you attempt this, an error is returned.</p> 
   * <p>After a task reaches the <code>RUNNING</code> status, manual and automatic
   * host and container port assignments are visible in the
   * <code>networkBindings</code> section of <a>DescribeTasks</a> API
   * responses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/PortMapping">AWS API
   * Reference</a></p>
   */
  class PortMapping
  {
  public:
    AWS_ECS_API PortMapping();
    AWS_ECS_API PortMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API PortMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The port number on the container that's bound to the user-specified or
     * automatically assigned host port.</p> <p>If you use containers in a task with
     * the <code>awsvpc</code> or <code>host</code> network mode, specify the exposed
     * ports using <code>containerPort</code>.</p> <p>If you use containers in a task
     * with the <code>bridge</code> network mode and you specify a container port and
     * not a host port, your container automatically receives a host port in the
     * ephemeral port range. For more information, see <code>hostPort</code>. Port
     * mappings that are automatically assigned in this way do not count toward the 100
     * reserved ports limit of a container instance.</p>
     */
    inline int GetContainerPort() const{ return m_containerPort; }
    inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }
    inline void SetContainerPort(int value) { m_containerPortHasBeenSet = true; m_containerPort = value; }
    inline PortMapping& WithContainerPort(int value) { SetContainerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on the container instance to reserve for your container.</p>
     * <p>If you specify a <code>containerPortRange</code>, leave this field empty and
     * the value of the <code>hostPort</code> is set as follows:</p> <ul> <li> <p>For
     * containers in a task with the <code>awsvpc</code> network mode, the
     * <code>hostPort</code> is set to the same value as the
     * <code>containerPort</code>. This is a static mapping strategy.</p> </li> <li>
     * <p>For containers in a task with the <code>bridge</code> network mode, the
     * Amazon ECS agent finds open ports on the host and automatically binds them to
     * the container ports. This is a dynamic mapping strategy.</p> </li> </ul> <p>If
     * you use containers in a task with the <code>awsvpc</code> or <code>host</code>
     * network mode, the <code>hostPort</code> can either be left blank or set to the
     * same value as the <code>containerPort</code>.</p> <p>If you use containers in a
     * task with the <code>bridge</code> network mode, you can specify a non-reserved
     * host port for your container port mapping, or you can omit the
     * <code>hostPort</code> (or set it to <code>0</code>) while specifying a
     * <code>containerPort</code> and your container automatically receives a port in
     * the ephemeral port range for your container instance operating system and Docker
     * version.</p> <p>The default ephemeral port range for Docker version 1.6.0 and
     * later is listed on the instance under
     * <code>/proc/sys/net/ipv4/ip_local_port_range</code>. If this kernel parameter is
     * unavailable, the default ephemeral port range from 49153 through 65535 (Linux)
     * or 49152 through 65535 (Windows) is used. Do not attempt to specify a host port
     * in the ephemeral port range as these are reserved for automatic assignment. In
     * general, ports below 32768 are outside of the ephemeral port range.</p> <p>The
     * default reserved ports are 22 for SSH, the Docker ports 2375 and 2376, and the
     * Amazon ECS container agent ports 51678-51680. Any host port that was previously
     * specified in a running task is also reserved while the task is running. That is,
     * after a task stops, the host port is released. The current reserved ports are
     * displayed in the <code>remainingResources</code> of <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_DescribeContainerInstances.html">DescribeContainerInstances</a>
     * output. A container instance can have up to 100 reserved ports at a time. This
     * number includes the default reserved ports. Automatically assigned ports aren't
     * included in the 100 reserved ports quota.</p>
     */
    inline int GetHostPort() const{ return m_hostPort; }
    inline bool HostPortHasBeenSet() const { return m_hostPortHasBeenSet; }
    inline void SetHostPort(int value) { m_hostPortHasBeenSet = true; m_hostPort = value; }
    inline PortMapping& WithHostPort(int value) { SetHostPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol used for the port mapping. Valid values are <code>tcp</code> and
     * <code>udp</code>. The default is <code>tcp</code>. <code>protocol</code> is
     * immutable in a Service Connect service. Updating this field requires a service
     * deletion and redeployment. </p>
     */
    inline const TransportProtocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const TransportProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(TransportProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline PortMapping& WithProtocol(const TransportProtocol& value) { SetProtocol(value); return *this;}
    inline PortMapping& WithProtocol(TransportProtocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that's used for the port mapping. This parameter only applies to
     * Service Connect. This parameter is the name that you use in the
     * <code>serviceConnectConfiguration</code> of a service. The name can include up
     * to 64 characters. The characters can include lowercase letters, numbers,
     * underscores (_), and hyphens (-). The name can't start with a hyphen.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PortMapping& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PortMapping& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PortMapping& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application protocol that's used for the port mapping. This parameter
     * only applies to Service Connect. We recommend that you set this parameter to be
     * consistent with the protocol that your application uses. If you set this
     * parameter, Amazon ECS adds protocol-specific connection handling to the Service
     * Connect proxy. If you set this parameter, Amazon ECS adds protocol-specific
     * telemetry in the Amazon ECS console and CloudWatch.</p> <p>If you don't set a
     * value for this parameter, then TCP is used. However, Amazon ECS doesn't add
     * protocol-specific telemetry for TCP.</p> <p> <code>appProtocol</code> is
     * immutable in a Service Connect service. Updating this field requires a service
     * deletion and redeployment.</p> <p>Tasks that run in a namespace can use short
     * names to connect to services in the namespace. Tasks can connect to services
     * across all of the clusters in the namespace. Tasks connect through a managed
     * proxy container that collects logs and metrics for increased visibility. Only
     * the tasks that Amazon ECS services create are supported with Service Connect.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline const ApplicationProtocol& GetAppProtocol() const{ return m_appProtocol; }
    inline bool AppProtocolHasBeenSet() const { return m_appProtocolHasBeenSet; }
    inline void SetAppProtocol(const ApplicationProtocol& value) { m_appProtocolHasBeenSet = true; m_appProtocol = value; }
    inline void SetAppProtocol(ApplicationProtocol&& value) { m_appProtocolHasBeenSet = true; m_appProtocol = std::move(value); }
    inline PortMapping& WithAppProtocol(const ApplicationProtocol& value) { SetAppProtocol(value); return *this;}
    inline PortMapping& WithAppProtocol(ApplicationProtocol&& value) { SetAppProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number range on the container that's bound to the dynamically mapped
     * host port range. </p> <p>The following rules apply when you specify a
     * <code>containerPortRange</code>:</p> <ul> <li> <p>You must use either the
     * <code>bridge</code> network mode or the <code>awsvpc</code> network mode.</p>
     * </li> <li> <p>This parameter is available for both the EC2 and Fargate launch
     * types.</p> </li> <li> <p>This parameter is available for both the Linux and
     * Windows operating systems.</p> </li> <li> <p>The container instance must have at
     * least version 1.67.0 of the container agent and at least version 1.67.0-1 of the
     * <code>ecs-init</code> package </p> </li> <li> <p>You can specify a maximum of
     * 100 port ranges per container.</p> </li> <li> <p>You do not specify a
     * <code>hostPortRange</code>. The value of the <code>hostPortRange</code> is set
     * as follows:</p> <ul> <li> <p>For containers in a task with the
     * <code>awsvpc</code> network mode, the <code>hostPortRange</code> is set to the
     * same value as the <code>containerPortRange</code>. This is a static mapping
     * strategy.</p> </li> <li> <p>For containers in a task with the
     * <code>bridge</code> network mode, the Amazon ECS agent finds open host ports
     * from the default ephemeral range and passes it to docker to bind them to the
     * container ports.</p> </li> </ul> </li> <li> <p>The
     * <code>containerPortRange</code> valid values are between 1 and 65535.</p> </li>
     * <li> <p>A port can only be included in one port mapping per container.</p> </li>
     * <li> <p>You cannot specify overlapping port ranges.</p> </li> <li> <p>The first
     * port in the range must be less than last port in the range.</p> </li> <li>
     * <p>Docker recommends that you turn off the docker-proxy in the Docker daemon
     * config file when you have a large number of ports.</p> <p>For more information,
     * see <a href="https://github.com/moby/moby/issues/11185"> Issue #11185</a> on the
     * Github website.</p> <p>For information about how to turn off the docker-proxy in
     * the Docker daemon config file, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/bootstrap_container_instance.html#bootstrap_docker_daemon">Docker
     * daemon</a> in the <i>Amazon ECS Developer Guide</i>.</p> </li> </ul> <p>You can
     * call <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_DescribeTasks.html">
     * <code>DescribeTasks</code> </a> to view the <code>hostPortRange</code> which are
     * the host ports that are bound to the container ports.</p>
     */
    inline const Aws::String& GetContainerPortRange() const{ return m_containerPortRange; }
    inline bool ContainerPortRangeHasBeenSet() const { return m_containerPortRangeHasBeenSet; }
    inline void SetContainerPortRange(const Aws::String& value) { m_containerPortRangeHasBeenSet = true; m_containerPortRange = value; }
    inline void SetContainerPortRange(Aws::String&& value) { m_containerPortRangeHasBeenSet = true; m_containerPortRange = std::move(value); }
    inline void SetContainerPortRange(const char* value) { m_containerPortRangeHasBeenSet = true; m_containerPortRange.assign(value); }
    inline PortMapping& WithContainerPortRange(const Aws::String& value) { SetContainerPortRange(value); return *this;}
    inline PortMapping& WithContainerPortRange(Aws::String&& value) { SetContainerPortRange(std::move(value)); return *this;}
    inline PortMapping& WithContainerPortRange(const char* value) { SetContainerPortRange(value); return *this;}
    ///@}
  private:

    int m_containerPort;
    bool m_containerPortHasBeenSet = false;

    int m_hostPort;
    bool m_hostPortHasBeenSet = false;

    TransportProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ApplicationProtocol m_appProtocol;
    bool m_appProtocolHasBeenSet = false;

    Aws::String m_containerPortRange;
    bool m_containerPortRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
