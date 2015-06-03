/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{
  /*
    <p>Port mappings allow containers to access ports on the host container instance to send or receive traffic. Port mappings are specified as part of the container definition.</p>
  */
  class AWS_ECS_API PortMapping
  {
  public:
    PortMapping();
    PortMapping(const Aws::Utils::Json::JsonValue& jsonValue);
    PortMapping& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>The port number on the container that is bound to the user-specified or automatically assigned host port. If you specify a container port and not a host port, your container will automatically receive a host port in the 49153 to 65535 port range.</p>
    */
    inline long GetContainerPort() const{ return m_containerPort; }
    /*
     <p>The port number on the container that is bound to the user-specified or automatically assigned host port. If you specify a container port and not a host port, your container will automatically receive a host port in the 49153 to 65535 port range.</p>
    */
    inline void SetContainerPort(long value) { m_containerPortHasBeenSet = true; m_containerPort = value; }

    /*
     <p>The port number on the container that is bound to the user-specified or automatically assigned host port. If you specify a container port and not a host port, your container will automatically receive a host port in the 49153 to 65535 port range.</p>
    */
    inline PortMapping&  WithContainerPort(long value) { SetContainerPort(value); return *this;}

    /*
     <p>The port number on the container instance to reserve for your container. You can specify a non-reserved host port for your container port mapping, or you can omit the <code>hostPort</code> (or set it to <code>0</code>) while specifying a <code>containerPort</code> and your container will automatically receive a port in the 49153 to 65535 port range. You should not attempt to specify a host port in the 49153 to 65535 port range, since these are reserved for automatic assignment.</p> <p>The default reserved ports are 22 for SSH, the Docker ports 2375 and 2376, and the Amazon ECS Container Agent port 51678. Any host port that was previously specified in a running task is also reserved while the task is running (once a task stops, the host port is released).The current reserved ports are displayed in the <code>remainingResources</code> of <a>DescribeContainerInstances</a> output, and a container instance may have up to 50 reserved ports at a time, including the default reserved ports (automatically assigned ports do not count toward this limit).</p>
    */
    inline long GetHostPort() const{ return m_hostPort; }
    /*
     <p>The port number on the container instance to reserve for your container. You can specify a non-reserved host port for your container port mapping, or you can omit the <code>hostPort</code> (or set it to <code>0</code>) while specifying a <code>containerPort</code> and your container will automatically receive a port in the 49153 to 65535 port range. You should not attempt to specify a host port in the 49153 to 65535 port range, since these are reserved for automatic assignment.</p> <p>The default reserved ports are 22 for SSH, the Docker ports 2375 and 2376, and the Amazon ECS Container Agent port 51678. Any host port that was previously specified in a running task is also reserved while the task is running (once a task stops, the host port is released).The current reserved ports are displayed in the <code>remainingResources</code> of <a>DescribeContainerInstances</a> output, and a container instance may have up to 50 reserved ports at a time, including the default reserved ports (automatically assigned ports do not count toward this limit).</p>
    */
    inline void SetHostPort(long value) { m_hostPortHasBeenSet = true; m_hostPort = value; }

    /*
     <p>The port number on the container instance to reserve for your container. You can specify a non-reserved host port for your container port mapping, or you can omit the <code>hostPort</code> (or set it to <code>0</code>) while specifying a <code>containerPort</code> and your container will automatically receive a port in the 49153 to 65535 port range. You should not attempt to specify a host port in the 49153 to 65535 port range, since these are reserved for automatic assignment.</p> <p>The default reserved ports are 22 for SSH, the Docker ports 2375 and 2376, and the Amazon ECS Container Agent port 51678. Any host port that was previously specified in a running task is also reserved while the task is running (once a task stops, the host port is released).The current reserved ports are displayed in the <code>remainingResources</code> of <a>DescribeContainerInstances</a> output, and a container instance may have up to 50 reserved ports at a time, including the default reserved ports (automatically assigned ports do not count toward this limit).</p>
    */
    inline PortMapping&  WithHostPort(long value) { SetHostPort(value); return *this;}

    /*
     <p>The protocol used for the port mapping. The default is TCP.</p>
    */
    inline const TransportProtocol& GetProtocol() const{ return m_protocol; }
    /*
     <p>The protocol used for the port mapping. The default is TCP.</p>
    */
    inline void SetProtocol(const TransportProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /*
     <p>The protocol used for the port mapping. The default is TCP.</p>
    */
    inline PortMapping&  WithProtocol(const TransportProtocol& value) { SetProtocol(value); return *this;}

  private:
    long m_containerPort;
    bool m_containerPortHasBeenSet;
    long m_hostPort;
    bool m_hostPortHasBeenSet;
    TransportProtocol m_protocol;
    bool m_protocolHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
