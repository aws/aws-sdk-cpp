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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p>Details about neighboring servers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/NeighborConnectionDetail">AWS
   * API Reference</a></p>
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API NeighborConnectionDetail
  {
  public:
    NeighborConnectionDetail();
    NeighborConnectionDetail(Aws::Utils::Json::JsonView jsonValue);
    NeighborConnectionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the server that opened the network connection.</p>
     */
    inline const Aws::String& GetSourceServerId() const{ return m_sourceServerId; }

    /**
     * <p>The ID of the server that opened the network connection.</p>
     */
    inline bool SourceServerIdHasBeenSet() const { return m_sourceServerIdHasBeenSet; }

    /**
     * <p>The ID of the server that opened the network connection.</p>
     */
    inline void SetSourceServerId(const Aws::String& value) { m_sourceServerIdHasBeenSet = true; m_sourceServerId = value; }

    /**
     * <p>The ID of the server that opened the network connection.</p>
     */
    inline void SetSourceServerId(Aws::String&& value) { m_sourceServerIdHasBeenSet = true; m_sourceServerId = std::move(value); }

    /**
     * <p>The ID of the server that opened the network connection.</p>
     */
    inline void SetSourceServerId(const char* value) { m_sourceServerIdHasBeenSet = true; m_sourceServerId.assign(value); }

    /**
     * <p>The ID of the server that opened the network connection.</p>
     */
    inline NeighborConnectionDetail& WithSourceServerId(const Aws::String& value) { SetSourceServerId(value); return *this;}

    /**
     * <p>The ID of the server that opened the network connection.</p>
     */
    inline NeighborConnectionDetail& WithSourceServerId(Aws::String&& value) { SetSourceServerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the server that opened the network connection.</p>
     */
    inline NeighborConnectionDetail& WithSourceServerId(const char* value) { SetSourceServerId(value); return *this;}


    /**
     * <p>The ID of the server that accepted the network connection.</p>
     */
    inline const Aws::String& GetDestinationServerId() const{ return m_destinationServerId; }

    /**
     * <p>The ID of the server that accepted the network connection.</p>
     */
    inline bool DestinationServerIdHasBeenSet() const { return m_destinationServerIdHasBeenSet; }

    /**
     * <p>The ID of the server that accepted the network connection.</p>
     */
    inline void SetDestinationServerId(const Aws::String& value) { m_destinationServerIdHasBeenSet = true; m_destinationServerId = value; }

    /**
     * <p>The ID of the server that accepted the network connection.</p>
     */
    inline void SetDestinationServerId(Aws::String&& value) { m_destinationServerIdHasBeenSet = true; m_destinationServerId = std::move(value); }

    /**
     * <p>The ID of the server that accepted the network connection.</p>
     */
    inline void SetDestinationServerId(const char* value) { m_destinationServerIdHasBeenSet = true; m_destinationServerId.assign(value); }

    /**
     * <p>The ID of the server that accepted the network connection.</p>
     */
    inline NeighborConnectionDetail& WithDestinationServerId(const Aws::String& value) { SetDestinationServerId(value); return *this;}

    /**
     * <p>The ID of the server that accepted the network connection.</p>
     */
    inline NeighborConnectionDetail& WithDestinationServerId(Aws::String&& value) { SetDestinationServerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the server that accepted the network connection.</p>
     */
    inline NeighborConnectionDetail& WithDestinationServerId(const char* value) { SetDestinationServerId(value); return *this;}


    /**
     * <p>The destination network port for the connection.</p>
     */
    inline int GetDestinationPort() const{ return m_destinationPort; }

    /**
     * <p>The destination network port for the connection.</p>
     */
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }

    /**
     * <p>The destination network port for the connection.</p>
     */
    inline void SetDestinationPort(int value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }

    /**
     * <p>The destination network port for the connection.</p>
     */
    inline NeighborConnectionDetail& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}


    /**
     * <p>The network protocol used for the connection.</p>
     */
    inline const Aws::String& GetTransportProtocol() const{ return m_transportProtocol; }

    /**
     * <p>The network protocol used for the connection.</p>
     */
    inline bool TransportProtocolHasBeenSet() const { return m_transportProtocolHasBeenSet; }

    /**
     * <p>The network protocol used for the connection.</p>
     */
    inline void SetTransportProtocol(const Aws::String& value) { m_transportProtocolHasBeenSet = true; m_transportProtocol = value; }

    /**
     * <p>The network protocol used for the connection.</p>
     */
    inline void SetTransportProtocol(Aws::String&& value) { m_transportProtocolHasBeenSet = true; m_transportProtocol = std::move(value); }

    /**
     * <p>The network protocol used for the connection.</p>
     */
    inline void SetTransportProtocol(const char* value) { m_transportProtocolHasBeenSet = true; m_transportProtocol.assign(value); }

    /**
     * <p>The network protocol used for the connection.</p>
     */
    inline NeighborConnectionDetail& WithTransportProtocol(const Aws::String& value) { SetTransportProtocol(value); return *this;}

    /**
     * <p>The network protocol used for the connection.</p>
     */
    inline NeighborConnectionDetail& WithTransportProtocol(Aws::String&& value) { SetTransportProtocol(std::move(value)); return *this;}

    /**
     * <p>The network protocol used for the connection.</p>
     */
    inline NeighborConnectionDetail& WithTransportProtocol(const char* value) { SetTransportProtocol(value); return *this;}


    /**
     * <p>The number of open network connections with the neighboring server.</p>
     */
    inline long long GetConnectionsCount() const{ return m_connectionsCount; }

    /**
     * <p>The number of open network connections with the neighboring server.</p>
     */
    inline bool ConnectionsCountHasBeenSet() const { return m_connectionsCountHasBeenSet; }

    /**
     * <p>The number of open network connections with the neighboring server.</p>
     */
    inline void SetConnectionsCount(long long value) { m_connectionsCountHasBeenSet = true; m_connectionsCount = value; }

    /**
     * <p>The number of open network connections with the neighboring server.</p>
     */
    inline NeighborConnectionDetail& WithConnectionsCount(long long value) { SetConnectionsCount(value); return *this;}

  private:

    Aws::String m_sourceServerId;
    bool m_sourceServerIdHasBeenSet;

    Aws::String m_destinationServerId;
    bool m_destinationServerIdHasBeenSet;

    int m_destinationPort;
    bool m_destinationPortHasBeenSet;

    Aws::String m_transportProtocol;
    bool m_transportProtocolHasBeenSet;

    long long m_connectionsCount;
    bool m_connectionsCountHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
