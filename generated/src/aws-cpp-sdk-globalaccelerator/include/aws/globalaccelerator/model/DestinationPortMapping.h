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
    AWS_GLOBALACCELERATOR_API DestinationPortMapping() = default;
    AWS_GLOBALACCELERATOR_API DestinationPortMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API DestinationPortMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom routing accelerator that you
     * have port mappings for.</p>
     */
    inline const Aws::String& GetAcceleratorArn() const { return m_acceleratorArn; }
    inline bool AcceleratorArnHasBeenSet() const { return m_acceleratorArnHasBeenSet; }
    template<typename AcceleratorArnT = Aws::String>
    void SetAcceleratorArn(AcceleratorArnT&& value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn = std::forward<AcceleratorArnT>(value); }
    template<typename AcceleratorArnT = Aws::String>
    DestinationPortMapping& WithAcceleratorArn(AcceleratorArnT&& value) { SetAcceleratorArn(std::forward<AcceleratorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address/port combinations (sockets) that map to a given destination
     * socket address.</p>
     */
    inline const Aws::Vector<SocketAddress>& GetAcceleratorSocketAddresses() const { return m_acceleratorSocketAddresses; }
    inline bool AcceleratorSocketAddressesHasBeenSet() const { return m_acceleratorSocketAddressesHasBeenSet; }
    template<typename AcceleratorSocketAddressesT = Aws::Vector<SocketAddress>>
    void SetAcceleratorSocketAddresses(AcceleratorSocketAddressesT&& value) { m_acceleratorSocketAddressesHasBeenSet = true; m_acceleratorSocketAddresses = std::forward<AcceleratorSocketAddressesT>(value); }
    template<typename AcceleratorSocketAddressesT = Aws::Vector<SocketAddress>>
    DestinationPortMapping& WithAcceleratorSocketAddresses(AcceleratorSocketAddressesT&& value) { SetAcceleratorSocketAddresses(std::forward<AcceleratorSocketAddressesT>(value)); return *this;}
    template<typename AcceleratorSocketAddressesT = SocketAddress>
    DestinationPortMapping& AddAcceleratorSocketAddresses(AcceleratorSocketAddressesT&& value) { m_acceleratorSocketAddressesHasBeenSet = true; m_acceleratorSocketAddresses.emplace_back(std::forward<AcceleratorSocketAddressesT>(value)); return *this; }
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
    DestinationPortMapping& WithEndpointGroupArn(EndpointGroupArnT&& value) { SetEndpointGroupArn(std::forward<EndpointGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the virtual private cloud (VPC) subnet.</p>
     */
    inline const Aws::String& GetEndpointId() const { return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    template<typename EndpointIdT = Aws::String>
    void SetEndpointId(EndpointIdT&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::forward<EndpointIdT>(value); }
    template<typename EndpointIdT = Aws::String>
    DestinationPortMapping& WithEndpointId(EndpointIdT&& value) { SetEndpointId(std::forward<EndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region for the endpoint group.</p>
     */
    inline const Aws::String& GetEndpointGroupRegion() const { return m_endpointGroupRegion; }
    inline bool EndpointGroupRegionHasBeenSet() const { return m_endpointGroupRegionHasBeenSet; }
    template<typename EndpointGroupRegionT = Aws::String>
    void SetEndpointGroupRegion(EndpointGroupRegionT&& value) { m_endpointGroupRegionHasBeenSet = true; m_endpointGroupRegion = std::forward<EndpointGroupRegionT>(value); }
    template<typename EndpointGroupRegionT = Aws::String>
    DestinationPortMapping& WithEndpointGroupRegion(EndpointGroupRegionT&& value) { SetEndpointGroupRegion(std::forward<EndpointGroupRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint IP address/port combination for traffic received on the
     * accelerator socket address.</p>
     */
    inline const SocketAddress& GetDestinationSocketAddress() const { return m_destinationSocketAddress; }
    inline bool DestinationSocketAddressHasBeenSet() const { return m_destinationSocketAddressHasBeenSet; }
    template<typename DestinationSocketAddressT = SocketAddress>
    void SetDestinationSocketAddress(DestinationSocketAddressT&& value) { m_destinationSocketAddressHasBeenSet = true; m_destinationSocketAddress = std::forward<DestinationSocketAddressT>(value); }
    template<typename DestinationSocketAddressT = SocketAddress>
    DestinationPortMapping& WithDestinationSocketAddress(DestinationSocketAddressT&& value) { SetDestinationSocketAddress(std::forward<DestinationSocketAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type that an accelerator supports. For a custom routing
     * accelerator, the value must be IPV4.</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline DestinationPortMapping& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
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
    inline DestinationPortMapping& WithDestinationTrafficState(CustomRoutingDestinationTrafficState value) { SetDestinationTrafficState(value); return *this;}
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

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    CustomRoutingDestinationTrafficState m_destinationTrafficState{CustomRoutingDestinationTrafficState::NOT_SET};
    bool m_destinationTrafficStateHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
