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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/NetworkProtocol.h>
#include <aws/lightsail/model/PortState.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the port state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InstancePortState">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API InstancePortState
  {
  public:
    InstancePortState();
    InstancePortState(Aws::Utils::Json::JsonView jsonValue);
    InstancePortState& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The first port in the range.</p>
     */
    inline int GetFromPort() const{ return m_fromPort; }

    /**
     * <p>The first port in the range.</p>
     */
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }

    /**
     * <p>The first port in the range.</p>
     */
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }

    /**
     * <p>The first port in the range.</p>
     */
    inline InstancePortState& WithFromPort(int value) { SetFromPort(value); return *this;}


    /**
     * <p>The last port in the range.</p>
     */
    inline int GetToPort() const{ return m_toPort; }

    /**
     * <p>The last port in the range.</p>
     */
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }

    /**
     * <p>The last port in the range.</p>
     */
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }

    /**
     * <p>The last port in the range.</p>
     */
    inline InstancePortState& WithToPort(int value) { SetToPort(value); return *this;}


    /**
     * <p>The protocol being used. Can be one of the following.</p> <ul> <li> <p>
     * <code>tcp</code> - Transmission Control Protocol (TCP) provides reliable,
     * ordered, and error-checked delivery of streamed data between applications
     * running on hosts communicating by an IP network. If you have an application that
     * doesn't require reliable data stream service, use UDP instead.</p> </li> <li>
     * <p> <code>all</code> - All transport layer protocol types. For more general
     * information, see <a
     * href="https://en.wikipedia.org/wiki/Transport_layer">Transport layer</a> on
     * Wikipedia.</p> </li> <li> <p> <code>udp</code> - With User Datagram Protocol
     * (UDP), computer applications can send messages (or datagrams) to other hosts on
     * an Internet Protocol (IP) network. Prior communications are not required to set
     * up transmission channels or data paths. Applications that don't require reliable
     * data stream service can use UDP, which provides a connectionless datagram
     * service that emphasizes reduced latency over reliability. If you do require
     * reliable data stream service, use TCP instead.</p> </li> </ul>
     */
    inline const NetworkProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol being used. Can be one of the following.</p> <ul> <li> <p>
     * <code>tcp</code> - Transmission Control Protocol (TCP) provides reliable,
     * ordered, and error-checked delivery of streamed data between applications
     * running on hosts communicating by an IP network. If you have an application that
     * doesn't require reliable data stream service, use UDP instead.</p> </li> <li>
     * <p> <code>all</code> - All transport layer protocol types. For more general
     * information, see <a
     * href="https://en.wikipedia.org/wiki/Transport_layer">Transport layer</a> on
     * Wikipedia.</p> </li> <li> <p> <code>udp</code> - With User Datagram Protocol
     * (UDP), computer applications can send messages (or datagrams) to other hosts on
     * an Internet Protocol (IP) network. Prior communications are not required to set
     * up transmission channels or data paths. Applications that don't require reliable
     * data stream service can use UDP, which provides a connectionless datagram
     * service that emphasizes reduced latency over reliability. If you do require
     * reliable data stream service, use TCP instead.</p> </li> </ul>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol being used. Can be one of the following.</p> <ul> <li> <p>
     * <code>tcp</code> - Transmission Control Protocol (TCP) provides reliable,
     * ordered, and error-checked delivery of streamed data between applications
     * running on hosts communicating by an IP network. If you have an application that
     * doesn't require reliable data stream service, use UDP instead.</p> </li> <li>
     * <p> <code>all</code> - All transport layer protocol types. For more general
     * information, see <a
     * href="https://en.wikipedia.org/wiki/Transport_layer">Transport layer</a> on
     * Wikipedia.</p> </li> <li> <p> <code>udp</code> - With User Datagram Protocol
     * (UDP), computer applications can send messages (or datagrams) to other hosts on
     * an Internet Protocol (IP) network. Prior communications are not required to set
     * up transmission channels or data paths. Applications that don't require reliable
     * data stream service can use UDP, which provides a connectionless datagram
     * service that emphasizes reduced latency over reliability. If you do require
     * reliable data stream service, use TCP instead.</p> </li> </ul>
     */
    inline void SetProtocol(const NetworkProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol being used. Can be one of the following.</p> <ul> <li> <p>
     * <code>tcp</code> - Transmission Control Protocol (TCP) provides reliable,
     * ordered, and error-checked delivery of streamed data between applications
     * running on hosts communicating by an IP network. If you have an application that
     * doesn't require reliable data stream service, use UDP instead.</p> </li> <li>
     * <p> <code>all</code> - All transport layer protocol types. For more general
     * information, see <a
     * href="https://en.wikipedia.org/wiki/Transport_layer">Transport layer</a> on
     * Wikipedia.</p> </li> <li> <p> <code>udp</code> - With User Datagram Protocol
     * (UDP), computer applications can send messages (or datagrams) to other hosts on
     * an Internet Protocol (IP) network. Prior communications are not required to set
     * up transmission channels or data paths. Applications that don't require reliable
     * data stream service can use UDP, which provides a connectionless datagram
     * service that emphasizes reduced latency over reliability. If you do require
     * reliable data stream service, use TCP instead.</p> </li> </ul>
     */
    inline void SetProtocol(NetworkProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol being used. Can be one of the following.</p> <ul> <li> <p>
     * <code>tcp</code> - Transmission Control Protocol (TCP) provides reliable,
     * ordered, and error-checked delivery of streamed data between applications
     * running on hosts communicating by an IP network. If you have an application that
     * doesn't require reliable data stream service, use UDP instead.</p> </li> <li>
     * <p> <code>all</code> - All transport layer protocol types. For more general
     * information, see <a
     * href="https://en.wikipedia.org/wiki/Transport_layer">Transport layer</a> on
     * Wikipedia.</p> </li> <li> <p> <code>udp</code> - With User Datagram Protocol
     * (UDP), computer applications can send messages (or datagrams) to other hosts on
     * an Internet Protocol (IP) network. Prior communications are not required to set
     * up transmission channels or data paths. Applications that don't require reliable
     * data stream service can use UDP, which provides a connectionless datagram
     * service that emphasizes reduced latency over reliability. If you do require
     * reliable data stream service, use TCP instead.</p> </li> </ul>
     */
    inline InstancePortState& WithProtocol(const NetworkProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol being used. Can be one of the following.</p> <ul> <li> <p>
     * <code>tcp</code> - Transmission Control Protocol (TCP) provides reliable,
     * ordered, and error-checked delivery of streamed data between applications
     * running on hosts communicating by an IP network. If you have an application that
     * doesn't require reliable data stream service, use UDP instead.</p> </li> <li>
     * <p> <code>all</code> - All transport layer protocol types. For more general
     * information, see <a
     * href="https://en.wikipedia.org/wiki/Transport_layer">Transport layer</a> on
     * Wikipedia.</p> </li> <li> <p> <code>udp</code> - With User Datagram Protocol
     * (UDP), computer applications can send messages (or datagrams) to other hosts on
     * an Internet Protocol (IP) network. Prior communications are not required to set
     * up transmission channels or data paths. Applications that don't require reliable
     * data stream service can use UDP, which provides a connectionless datagram
     * service that emphasizes reduced latency over reliability. If you do require
     * reliable data stream service, use TCP instead.</p> </li> </ul>
     */
    inline InstancePortState& WithProtocol(NetworkProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the instance port is <code>open</code> or
     * <code>closed</code>.</p>
     */
    inline const PortState& GetState() const{ return m_state; }

    /**
     * <p>Specifies whether the instance port is <code>open</code> or
     * <code>closed</code>.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Specifies whether the instance port is <code>open</code> or
     * <code>closed</code>.</p>
     */
    inline void SetState(const PortState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Specifies whether the instance port is <code>open</code> or
     * <code>closed</code>.</p>
     */
    inline void SetState(PortState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Specifies whether the instance port is <code>open</code> or
     * <code>closed</code>.</p>
     */
    inline InstancePortState& WithState(const PortState& value) { SetState(value); return *this;}

    /**
     * <p>Specifies whether the instance port is <code>open</code> or
     * <code>closed</code>.</p>
     */
    inline InstancePortState& WithState(PortState&& value) { SetState(std::move(value)); return *this;}

  private:

    int m_fromPort;
    bool m_fromPortHasBeenSet;

    int m_toPort;
    bool m_toPortHasBeenSet;

    NetworkProtocol m_protocol;
    bool m_protocolHasBeenSet;

    PortState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
