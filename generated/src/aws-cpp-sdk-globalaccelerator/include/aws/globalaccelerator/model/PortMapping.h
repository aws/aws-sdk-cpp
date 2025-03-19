/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/SocketAddress.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/globalaccelerator/model/CustomRoutingDestinationTrafficState.h>
#include <aws/globalaccelerator/model/CustomRoutingProtocol.h>
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
namespace GlobalAccelerator
{
namespace Model
{

  /**
   * <p>Returns the ports and associated IP addresses and ports of Amazon EC2
   * instances in your virtual private cloud (VPC) subnets. Custom routing is a port
   * mapping protocol in Global Accelerator that statically associates port ranges
   * with VPC subnets, which allows Global Accelerator to route to specific instances
   * and ports within one or more subnets. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/PortMapping">AWS
   * API Reference</a></p>
   */
  class PortMapping
  {
  public:
    AWS_GLOBALACCELERATOR_API PortMapping() = default;
    AWS_GLOBALACCELERATOR_API PortMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API PortMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The accelerator port.</p>
     */
    inline int GetAcceleratorPort() const { return m_acceleratorPort; }
    inline bool AcceleratorPortHasBeenSet() const { return m_acceleratorPortHasBeenSet; }
    inline void SetAcceleratorPort(int value) { m_acceleratorPortHasBeenSet = true; m_acceleratorPort = value; }
    inline PortMapping& WithAcceleratorPort(int value) { SetAcceleratorPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline const Aws::String& GetEndpointGroupArn() const { return m_endpointGroupArn; }
    inline bool EndpointGroupArnHasBeenSet() const { return m_endpointGroupArnHasBeenSet; }
    template<typename EndpointGroupArnT = Aws::String>
    void SetEndpointGroupArn(EndpointGroupArnT&& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = std::forward<EndpointGroupArnT>(value); }
    template<typename EndpointGroupArnT = Aws::String>
    PortMapping& WithEndpointGroupArn(EndpointGroupArnT&& value) { SetEndpointGroupArn(std::forward<EndpointGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the VPC subnet (the subnet ID).</p>
     */
    inline const Aws::String& GetEndpointId() const { return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    template<typename EndpointIdT = Aws::String>
    void SetEndpointId(EndpointIdT&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::forward<EndpointIdT>(value); }
    template<typename EndpointIdT = Aws::String>
    PortMapping& WithEndpointId(EndpointIdT&& value) { SetEndpointId(std::forward<EndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 instance IP address and port number in the virtual private cloud
     * (VPC) subnet.</p>
     */
    inline const SocketAddress& GetDestinationSocketAddress() const { return m_destinationSocketAddress; }
    inline bool DestinationSocketAddressHasBeenSet() const { return m_destinationSocketAddressHasBeenSet; }
    template<typename DestinationSocketAddressT = SocketAddress>
    void SetDestinationSocketAddress(DestinationSocketAddressT&& value) { m_destinationSocketAddressHasBeenSet = true; m_destinationSocketAddress = std::forward<DestinationSocketAddressT>(value); }
    template<typename DestinationSocketAddressT = SocketAddress>
    PortMapping& WithDestinationSocketAddress(DestinationSocketAddressT&& value) { SetDestinationSocketAddress(std::forward<DestinationSocketAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocols supported by the endpoint group.</p>
     */
    inline const Aws::Vector<CustomRoutingProtocol>& GetProtocols() const { return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    template<typename ProtocolsT = Aws::Vector<CustomRoutingProtocol>>
    void SetProtocols(ProtocolsT&& value) { m_protocolsHasBeenSet = true; m_protocols = std::forward<ProtocolsT>(value); }
    template<typename ProtocolsT = Aws::Vector<CustomRoutingProtocol>>
    PortMapping& WithProtocols(ProtocolsT&& value) { SetProtocols(std::forward<ProtocolsT>(value)); return *this;}
    inline PortMapping& AddProtocols(CustomRoutingProtocol value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not a port mapping destination can receive traffic. The
     * value is either ALLOW, if traffic is allowed to the destination, or DENY, if
     * traffic is not allowed to the destination.</p>
     */
    inline CustomRoutingDestinationTrafficState GetDestinationTrafficState() const { return m_destinationTrafficState; }
    inline bool DestinationTrafficStateHasBeenSet() const { return m_destinationTrafficStateHasBeenSet; }
    inline void SetDestinationTrafficState(CustomRoutingDestinationTrafficState value) { m_destinationTrafficStateHasBeenSet = true; m_destinationTrafficState = value; }
    inline PortMapping& WithDestinationTrafficState(CustomRoutingDestinationTrafficState value) { SetDestinationTrafficState(value); return *this;}
    ///@}
  private:

    int m_acceleratorPort{0};
    bool m_acceleratorPortHasBeenSet = false;

    Aws::String m_endpointGroupArn;
    bool m_endpointGroupArnHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    SocketAddress m_destinationSocketAddress;
    bool m_destinationSocketAddressHasBeenSet = false;

    Aws::Vector<CustomRoutingProtocol> m_protocols;
    bool m_protocolsHasBeenSet = false;

    CustomRoutingDestinationTrafficState m_destinationTrafficState{CustomRoutingDestinationTrafficState::NOT_SET};
    bool m_destinationTrafficStateHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
