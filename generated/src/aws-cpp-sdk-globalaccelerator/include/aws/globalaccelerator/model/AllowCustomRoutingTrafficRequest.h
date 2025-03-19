/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class AllowCustomRoutingTrafficRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API AllowCustomRoutingTrafficRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AllowCustomRoutingTraffic"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline const Aws::String& GetEndpointGroupArn() const { return m_endpointGroupArn; }
    inline bool EndpointGroupArnHasBeenSet() const { return m_endpointGroupArnHasBeenSet; }
    template<typename EndpointGroupArnT = Aws::String>
    void SetEndpointGroupArn(EndpointGroupArnT&& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = std::forward<EndpointGroupArnT>(value); }
    template<typename EndpointGroupArnT = Aws::String>
    AllowCustomRoutingTrafficRequest& WithEndpointGroupArn(EndpointGroupArnT&& value) { SetEndpointGroupArn(std::forward<EndpointGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID.</p>
     */
    inline const Aws::String& GetEndpointId() const { return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    template<typename EndpointIdT = Aws::String>
    void SetEndpointId(EndpointIdT&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::forward<EndpointIdT>(value); }
    template<typename EndpointIdT = Aws::String>
    AllowCustomRoutingTrafficRequest& WithEndpointId(EndpointIdT&& value) { SetEndpointId(std::forward<EndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of specific Amazon EC2 instance IP addresses (destination addresses)
     * in a subnet that you want to allow to receive traffic. The IP addresses must be
     * a subset of the IP addresses that you specified for the endpoint group.</p> <p>
     * <code>DestinationAddresses</code> is required if
     * <code>AllowAllTrafficToEndpoint</code> is <code>FALSE</code> or is not
     * specified.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationAddresses() const { return m_destinationAddresses; }
    inline bool DestinationAddressesHasBeenSet() const { return m_destinationAddressesHasBeenSet; }
    template<typename DestinationAddressesT = Aws::Vector<Aws::String>>
    void SetDestinationAddresses(DestinationAddressesT&& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses = std::forward<DestinationAddressesT>(value); }
    template<typename DestinationAddressesT = Aws::Vector<Aws::String>>
    AllowCustomRoutingTrafficRequest& WithDestinationAddresses(DestinationAddressesT&& value) { SetDestinationAddresses(std::forward<DestinationAddressesT>(value)); return *this;}
    template<typename DestinationAddressesT = Aws::String>
    AllowCustomRoutingTrafficRequest& AddDestinationAddresses(DestinationAddressesT&& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses.emplace_back(std::forward<DestinationAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of specific Amazon EC2 instance ports (destination ports) that you
     * want to allow to receive traffic.</p>
     */
    inline const Aws::Vector<int>& GetDestinationPorts() const { return m_destinationPorts; }
    inline bool DestinationPortsHasBeenSet() const { return m_destinationPortsHasBeenSet; }
    template<typename DestinationPortsT = Aws::Vector<int>>
    void SetDestinationPorts(DestinationPortsT&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = std::forward<DestinationPortsT>(value); }
    template<typename DestinationPortsT = Aws::Vector<int>>
    AllowCustomRoutingTrafficRequest& WithDestinationPorts(DestinationPortsT&& value) { SetDestinationPorts(std::forward<DestinationPortsT>(value)); return *this;}
    inline AllowCustomRoutingTrafficRequest& AddDestinationPorts(int value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether all destination IP addresses and ports for a specified VPC
     * subnet endpoint can receive traffic from a custom routing accelerator. The value
     * is TRUE or FALSE. </p> <p>When set to TRUE, <i>all</i> destinations in the
     * custom routing VPC subnet can receive traffic. Note that you cannot specify
     * destination IP addresses and ports when the value is set to TRUE.</p> <p>When
     * set to FALSE (or not specified), you <i>must</i> specify a list of destination
     * IP addresses that are allowed to receive traffic. A list of ports is optional.
     * If you don't specify a list of ports, the ports that can accept traffic is the
     * same as the ports configured for the endpoint group.</p> <p>The default value is
     * FALSE.</p>
     */
    inline bool GetAllowAllTrafficToEndpoint() const { return m_allowAllTrafficToEndpoint; }
    inline bool AllowAllTrafficToEndpointHasBeenSet() const { return m_allowAllTrafficToEndpointHasBeenSet; }
    inline void SetAllowAllTrafficToEndpoint(bool value) { m_allowAllTrafficToEndpointHasBeenSet = true; m_allowAllTrafficToEndpoint = value; }
    inline AllowCustomRoutingTrafficRequest& WithAllowAllTrafficToEndpoint(bool value) { SetAllowAllTrafficToEndpoint(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointGroupArn;
    bool m_endpointGroupArnHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinationAddresses;
    bool m_destinationAddressesHasBeenSet = false;

    Aws::Vector<int> m_destinationPorts;
    bool m_destinationPortsHasBeenSet = false;

    bool m_allowAllTrafficToEndpoint{false};
    bool m_allowAllTrafficToEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
