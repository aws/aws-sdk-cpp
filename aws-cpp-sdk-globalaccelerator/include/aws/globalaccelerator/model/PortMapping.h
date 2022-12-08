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
    AWS_GLOBALACCELERATOR_API PortMapping();
    AWS_GLOBALACCELERATOR_API PortMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API PortMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The accelerator port.</p>
     */
    inline int GetAcceleratorPort() const{ return m_acceleratorPort; }

    /**
     * <p>The accelerator port.</p>
     */
    inline bool AcceleratorPortHasBeenSet() const { return m_acceleratorPortHasBeenSet; }

    /**
     * <p>The accelerator port.</p>
     */
    inline void SetAcceleratorPort(int value) { m_acceleratorPortHasBeenSet = true; m_acceleratorPort = value; }

    /**
     * <p>The accelerator port.</p>
     */
    inline PortMapping& WithAcceleratorPort(int value) { SetAcceleratorPort(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline const Aws::String& GetEndpointGroupArn() const{ return m_endpointGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline bool EndpointGroupArnHasBeenSet() const { return m_endpointGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline void SetEndpointGroupArn(const Aws::String& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline void SetEndpointGroupArn(Aws::String&& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline void SetEndpointGroupArn(const char* value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline PortMapping& WithEndpointGroupArn(const Aws::String& value) { SetEndpointGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline PortMapping& WithEndpointGroupArn(Aws::String&& value) { SetEndpointGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline PortMapping& WithEndpointGroupArn(const char* value) { SetEndpointGroupArn(value); return *this;}


    /**
     * <p>The IP address of the VPC subnet (the subnet ID).</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }

    /**
     * <p>The IP address of the VPC subnet (the subnet ID).</p>
     */
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }

    /**
     * <p>The IP address of the VPC subnet (the subnet ID).</p>
     */
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }

    /**
     * <p>The IP address of the VPC subnet (the subnet ID).</p>
     */
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }

    /**
     * <p>The IP address of the VPC subnet (the subnet ID).</p>
     */
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }

    /**
     * <p>The IP address of the VPC subnet (the subnet ID).</p>
     */
    inline PortMapping& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}

    /**
     * <p>The IP address of the VPC subnet (the subnet ID).</p>
     */
    inline PortMapping& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}

    /**
     * <p>The IP address of the VPC subnet (the subnet ID).</p>
     */
    inline PortMapping& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}


    /**
     * <p>The EC2 instance IP address and port number in the virtual private cloud
     * (VPC) subnet.</p>
     */
    inline const SocketAddress& GetDestinationSocketAddress() const{ return m_destinationSocketAddress; }

    /**
     * <p>The EC2 instance IP address and port number in the virtual private cloud
     * (VPC) subnet.</p>
     */
    inline bool DestinationSocketAddressHasBeenSet() const { return m_destinationSocketAddressHasBeenSet; }

    /**
     * <p>The EC2 instance IP address and port number in the virtual private cloud
     * (VPC) subnet.</p>
     */
    inline void SetDestinationSocketAddress(const SocketAddress& value) { m_destinationSocketAddressHasBeenSet = true; m_destinationSocketAddress = value; }

    /**
     * <p>The EC2 instance IP address and port number in the virtual private cloud
     * (VPC) subnet.</p>
     */
    inline void SetDestinationSocketAddress(SocketAddress&& value) { m_destinationSocketAddressHasBeenSet = true; m_destinationSocketAddress = std::move(value); }

    /**
     * <p>The EC2 instance IP address and port number in the virtual private cloud
     * (VPC) subnet.</p>
     */
    inline PortMapping& WithDestinationSocketAddress(const SocketAddress& value) { SetDestinationSocketAddress(value); return *this;}

    /**
     * <p>The EC2 instance IP address and port number in the virtual private cloud
     * (VPC) subnet.</p>
     */
    inline PortMapping& WithDestinationSocketAddress(SocketAddress&& value) { SetDestinationSocketAddress(std::move(value)); return *this;}


    /**
     * <p>The protocols supported by the endpoint group.</p>
     */
    inline const Aws::Vector<CustomRoutingProtocol>& GetProtocols() const{ return m_protocols; }

    /**
     * <p>The protocols supported by the endpoint group.</p>
     */
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }

    /**
     * <p>The protocols supported by the endpoint group.</p>
     */
    inline void SetProtocols(const Aws::Vector<CustomRoutingProtocol>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }

    /**
     * <p>The protocols supported by the endpoint group.</p>
     */
    inline void SetProtocols(Aws::Vector<CustomRoutingProtocol>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }

    /**
     * <p>The protocols supported by the endpoint group.</p>
     */
    inline PortMapping& WithProtocols(const Aws::Vector<CustomRoutingProtocol>& value) { SetProtocols(value); return *this;}

    /**
     * <p>The protocols supported by the endpoint group.</p>
     */
    inline PortMapping& WithProtocols(Aws::Vector<CustomRoutingProtocol>&& value) { SetProtocols(std::move(value)); return *this;}

    /**
     * <p>The protocols supported by the endpoint group.</p>
     */
    inline PortMapping& AddProtocols(const CustomRoutingProtocol& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }

    /**
     * <p>The protocols supported by the endpoint group.</p>
     */
    inline PortMapping& AddProtocols(CustomRoutingProtocol&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether or not a port mapping destination can receive traffic. The
     * value is either ALLOW, if traffic is allowed to the destination, or DENY, if
     * traffic is not allowed to the destination.</p>
     */
    inline const CustomRoutingDestinationTrafficState& GetDestinationTrafficState() const{ return m_destinationTrafficState; }

    /**
     * <p>Indicates whether or not a port mapping destination can receive traffic. The
     * value is either ALLOW, if traffic is allowed to the destination, or DENY, if
     * traffic is not allowed to the destination.</p>
     */
    inline bool DestinationTrafficStateHasBeenSet() const { return m_destinationTrafficStateHasBeenSet; }

    /**
     * <p>Indicates whether or not a port mapping destination can receive traffic. The
     * value is either ALLOW, if traffic is allowed to the destination, or DENY, if
     * traffic is not allowed to the destination.</p>
     */
    inline void SetDestinationTrafficState(const CustomRoutingDestinationTrafficState& value) { m_destinationTrafficStateHasBeenSet = true; m_destinationTrafficState = value; }

    /**
     * <p>Indicates whether or not a port mapping destination can receive traffic. The
     * value is either ALLOW, if traffic is allowed to the destination, or DENY, if
     * traffic is not allowed to the destination.</p>
     */
    inline void SetDestinationTrafficState(CustomRoutingDestinationTrafficState&& value) { m_destinationTrafficStateHasBeenSet = true; m_destinationTrafficState = std::move(value); }

    /**
     * <p>Indicates whether or not a port mapping destination can receive traffic. The
     * value is either ALLOW, if traffic is allowed to the destination, or DENY, if
     * traffic is not allowed to the destination.</p>
     */
    inline PortMapping& WithDestinationTrafficState(const CustomRoutingDestinationTrafficState& value) { SetDestinationTrafficState(value); return *this;}

    /**
     * <p>Indicates whether or not a port mapping destination can receive traffic. The
     * value is either ALLOW, if traffic is allowed to the destination, or DENY, if
     * traffic is not allowed to the destination.</p>
     */
    inline PortMapping& WithDestinationTrafficState(CustomRoutingDestinationTrafficState&& value) { SetDestinationTrafficState(std::move(value)); return *this;}

  private:

    int m_acceleratorPort;
    bool m_acceleratorPortHasBeenSet = false;

    Aws::String m_endpointGroupArn;
    bool m_endpointGroupArnHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    SocketAddress m_destinationSocketAddress;
    bool m_destinationSocketAddressHasBeenSet = false;

    Aws::Vector<CustomRoutingProtocol> m_protocols;
    bool m_protocolsHasBeenSet = false;

    CustomRoutingDestinationTrafficState m_destinationTrafficState;
    bool m_destinationTrafficStateHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
