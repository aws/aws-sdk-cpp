/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/globalaccelerator/model/SocketAddress.h>
#include <aws/globalaccelerator/model/IpAddressType.h>
#include <aws/globalaccelerator/model/CustomRoutingDestinationTrafficState.h>
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
   * <p>The port mappings for a specified endpoint IP address
   * (destination).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/DestinationPortMapping">AWS
   * API Reference</a></p>
   */
  class DestinationPortMapping
  {
  public:
    AWS_GLOBALACCELERATOR_API DestinationPortMapping();
    AWS_GLOBALACCELERATOR_API DestinationPortMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API DestinationPortMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom routing accelerator that you
     * have port mappings for.</p>
     */
    inline const Aws::String& GetAcceleratorArn() const{ return m_acceleratorArn; }
    inline bool AcceleratorArnHasBeenSet() const { return m_acceleratorArnHasBeenSet; }
    inline void SetAcceleratorArn(const Aws::String& value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn = value; }
    inline void SetAcceleratorArn(Aws::String&& value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn = std::move(value); }
    inline void SetAcceleratorArn(const char* value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn.assign(value); }
    inline DestinationPortMapping& WithAcceleratorArn(const Aws::String& value) { SetAcceleratorArn(value); return *this;}
    inline DestinationPortMapping& WithAcceleratorArn(Aws::String&& value) { SetAcceleratorArn(std::move(value)); return *this;}
    inline DestinationPortMapping& WithAcceleratorArn(const char* value) { SetAcceleratorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address/port combinations (sockets) that map to a given destination
     * socket address.</p>
     */
    inline const Aws::Vector<SocketAddress>& GetAcceleratorSocketAddresses() const{ return m_acceleratorSocketAddresses; }
    inline bool AcceleratorSocketAddressesHasBeenSet() const { return m_acceleratorSocketAddressesHasBeenSet; }
    inline void SetAcceleratorSocketAddresses(const Aws::Vector<SocketAddress>& value) { m_acceleratorSocketAddressesHasBeenSet = true; m_acceleratorSocketAddresses = value; }
    inline void SetAcceleratorSocketAddresses(Aws::Vector<SocketAddress>&& value) { m_acceleratorSocketAddressesHasBeenSet = true; m_acceleratorSocketAddresses = std::move(value); }
    inline DestinationPortMapping& WithAcceleratorSocketAddresses(const Aws::Vector<SocketAddress>& value) { SetAcceleratorSocketAddresses(value); return *this;}
    inline DestinationPortMapping& WithAcceleratorSocketAddresses(Aws::Vector<SocketAddress>&& value) { SetAcceleratorSocketAddresses(std::move(value)); return *this;}
    inline DestinationPortMapping& AddAcceleratorSocketAddresses(const SocketAddress& value) { m_acceleratorSocketAddressesHasBeenSet = true; m_acceleratorSocketAddresses.push_back(value); return *this; }
    inline DestinationPortMapping& AddAcceleratorSocketAddresses(SocketAddress&& value) { m_acceleratorSocketAddressesHasBeenSet = true; m_acceleratorSocketAddresses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline const Aws::String& GetEndpointGroupArn() const{ return m_endpointGroupArn; }
    inline bool EndpointGroupArnHasBeenSet() const { return m_endpointGroupArnHasBeenSet; }
    inline void SetEndpointGroupArn(const Aws::String& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = value; }
    inline void SetEndpointGroupArn(Aws::String&& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = std::move(value); }
    inline void SetEndpointGroupArn(const char* value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn.assign(value); }
    inline DestinationPortMapping& WithEndpointGroupArn(const Aws::String& value) { SetEndpointGroupArn(value); return *this;}
    inline DestinationPortMapping& WithEndpointGroupArn(Aws::String&& value) { SetEndpointGroupArn(std::move(value)); return *this;}
    inline DestinationPortMapping& WithEndpointGroupArn(const char* value) { SetEndpointGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the virtual private cloud (VPC) subnet.</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }
    inline DestinationPortMapping& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}
    inline DestinationPortMapping& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}
    inline DestinationPortMapping& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region for the endpoint group.</p>
     */
    inline const Aws::String& GetEndpointGroupRegion() const{ return m_endpointGroupRegion; }
    inline bool EndpointGroupRegionHasBeenSet() const { return m_endpointGroupRegionHasBeenSet; }
    inline void SetEndpointGroupRegion(const Aws::String& value) { m_endpointGroupRegionHasBeenSet = true; m_endpointGroupRegion = value; }
    inline void SetEndpointGroupRegion(Aws::String&& value) { m_endpointGroupRegionHasBeenSet = true; m_endpointGroupRegion = std::move(value); }
    inline void SetEndpointGroupRegion(const char* value) { m_endpointGroupRegionHasBeenSet = true; m_endpointGroupRegion.assign(value); }
    inline DestinationPortMapping& WithEndpointGroupRegion(const Aws::String& value) { SetEndpointGroupRegion(value); return *this;}
    inline DestinationPortMapping& WithEndpointGroupRegion(Aws::String&& value) { SetEndpointGroupRegion(std::move(value)); return *this;}
    inline DestinationPortMapping& WithEndpointGroupRegion(const char* value) { SetEndpointGroupRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint IP address/port combination for traffic received on the
     * accelerator socket address.</p>
     */
    inline const SocketAddress& GetDestinationSocketAddress() const{ return m_destinationSocketAddress; }
    inline bool DestinationSocketAddressHasBeenSet() const { return m_destinationSocketAddressHasBeenSet; }
    inline void SetDestinationSocketAddress(const SocketAddress& value) { m_destinationSocketAddressHasBeenSet = true; m_destinationSocketAddress = value; }
    inline void SetDestinationSocketAddress(SocketAddress&& value) { m_destinationSocketAddressHasBeenSet = true; m_destinationSocketAddress = std::move(value); }
    inline DestinationPortMapping& WithDestinationSocketAddress(const SocketAddress& value) { SetDestinationSocketAddress(value); return *this;}
    inline DestinationPortMapping& WithDestinationSocketAddress(SocketAddress&& value) { SetDestinationSocketAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type that an accelerator supports. For a custom routing
     * accelerator, the value must be IPV4.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }
    inline DestinationPortMapping& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}
    inline DestinationPortMapping& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not a port mapping destination can receive traffic. The
     * value is either ALLOW, if traffic is allowed to the destination, or DENY, if
     * traffic is not allowed to the destination.</p>
     */
    inline const CustomRoutingDestinationTrafficState& GetDestinationTrafficState() const{ return m_destinationTrafficState; }
    inline bool DestinationTrafficStateHasBeenSet() const { return m_destinationTrafficStateHasBeenSet; }
    inline void SetDestinationTrafficState(const CustomRoutingDestinationTrafficState& value) { m_destinationTrafficStateHasBeenSet = true; m_destinationTrafficState = value; }
    inline void SetDestinationTrafficState(CustomRoutingDestinationTrafficState&& value) { m_destinationTrafficStateHasBeenSet = true; m_destinationTrafficState = std::move(value); }
    inline DestinationPortMapping& WithDestinationTrafficState(const CustomRoutingDestinationTrafficState& value) { SetDestinationTrafficState(value); return *this;}
    inline DestinationPortMapping& WithDestinationTrafficState(CustomRoutingDestinationTrafficState&& value) { SetDestinationTrafficState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_acceleratorArn;
    bool m_acceleratorArnHasBeenSet = false;

    Aws::Vector<SocketAddress> m_acceleratorSocketAddresses;
    bool m_acceleratorSocketAddressesHasBeenSet = false;

    Aws::String m_endpointGroupArn;
    bool m_endpointGroupArnHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::String m_endpointGroupRegion;
    bool m_endpointGroupRegionHasBeenSet = false;

    SocketAddress m_destinationSocketAddress;
    bool m_destinationSocketAddressHasBeenSet = false;

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    CustomRoutingDestinationTrafficState m_destinationTrafficState;
    bool m_destinationTrafficStateHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
