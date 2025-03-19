/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class NeighborConnectionDetail
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API NeighborConnectionDetail() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API NeighborConnectionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API NeighborConnectionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the server that opened the network connection.</p>
     */
    inline const Aws::String& GetSourceServerId() const { return m_sourceServerId; }
    inline bool SourceServerIdHasBeenSet() const { return m_sourceServerIdHasBeenSet; }
    template<typename SourceServerIdT = Aws::String>
    void SetSourceServerId(SourceServerIdT&& value) { m_sourceServerIdHasBeenSet = true; m_sourceServerId = std::forward<SourceServerIdT>(value); }
    template<typename SourceServerIdT = Aws::String>
    NeighborConnectionDetail& WithSourceServerId(SourceServerIdT&& value) { SetSourceServerId(std::forward<SourceServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the server that accepted the network connection.</p>
     */
    inline const Aws::String& GetDestinationServerId() const { return m_destinationServerId; }
    inline bool DestinationServerIdHasBeenSet() const { return m_destinationServerIdHasBeenSet; }
    template<typename DestinationServerIdT = Aws::String>
    void SetDestinationServerId(DestinationServerIdT&& value) { m_destinationServerIdHasBeenSet = true; m_destinationServerId = std::forward<DestinationServerIdT>(value); }
    template<typename DestinationServerIdT = Aws::String>
    NeighborConnectionDetail& WithDestinationServerId(DestinationServerIdT&& value) { SetDestinationServerId(std::forward<DestinationServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination network port for the connection.</p>
     */
    inline int GetDestinationPort() const { return m_destinationPort; }
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }
    inline void SetDestinationPort(int value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }
    inline NeighborConnectionDetail& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network protocol used for the connection.</p>
     */
    inline const Aws::String& GetTransportProtocol() const { return m_transportProtocol; }
    inline bool TransportProtocolHasBeenSet() const { return m_transportProtocolHasBeenSet; }
    template<typename TransportProtocolT = Aws::String>
    void SetTransportProtocol(TransportProtocolT&& value) { m_transportProtocolHasBeenSet = true; m_transportProtocol = std::forward<TransportProtocolT>(value); }
    template<typename TransportProtocolT = Aws::String>
    NeighborConnectionDetail& WithTransportProtocol(TransportProtocolT&& value) { SetTransportProtocol(std::forward<TransportProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of open network connections with the neighboring server.</p>
     */
    inline long long GetConnectionsCount() const { return m_connectionsCount; }
    inline bool ConnectionsCountHasBeenSet() const { return m_connectionsCountHasBeenSet; }
    inline void SetConnectionsCount(long long value) { m_connectionsCountHasBeenSet = true; m_connectionsCount = value; }
    inline NeighborConnectionDetail& WithConnectionsCount(long long value) { SetConnectionsCount(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceServerId;
    bool m_sourceServerIdHasBeenSet = false;

    Aws::String m_destinationServerId;
    bool m_destinationServerIdHasBeenSet = false;

    int m_destinationPort{0};
    bool m_destinationPortHasBeenSet = false;

    Aws::String m_transportProtocol;
    bool m_transportProtocolHasBeenSet = false;

    long long m_connectionsCount{0};
    bool m_connectionsCountHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
