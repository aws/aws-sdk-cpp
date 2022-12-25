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
  class DenyCustomRoutingTrafficRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API DenyCustomRoutingTrafficRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DenyCustomRoutingTraffic"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline DenyCustomRoutingTrafficRequest& WithEndpointGroupArn(const Aws::String& value) { SetEndpointGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline DenyCustomRoutingTrafficRequest& WithEndpointGroupArn(Aws::String&& value) { SetEndpointGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline DenyCustomRoutingTrafficRequest& WithEndpointGroupArn(const char* value) { SetEndpointGroupArn(value); return *this;}


    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID.</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID.</p>
     */
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID.</p>
     */
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID.</p>
     */
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID.</p>
     */
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID.</p>
     */
    inline DenyCustomRoutingTrafficRequest& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID.</p>
     */
    inline DenyCustomRoutingTrafficRequest& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID.</p>
     */
    inline DenyCustomRoutingTrafficRequest& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}


    /**
     * <p>A list of specific Amazon EC2 instance IP addresses (destination addresses)
     * in a subnet that you want to prevent from receiving traffic. The IP addresses
     * must be a subset of the IP addresses allowed for the VPC subnet associated with
     * the endpoint group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationAddresses() const{ return m_destinationAddresses; }

    /**
     * <p>A list of specific Amazon EC2 instance IP addresses (destination addresses)
     * in a subnet that you want to prevent from receiving traffic. The IP addresses
     * must be a subset of the IP addresses allowed for the VPC subnet associated with
     * the endpoint group.</p>
     */
    inline bool DestinationAddressesHasBeenSet() const { return m_destinationAddressesHasBeenSet; }

    /**
     * <p>A list of specific Amazon EC2 instance IP addresses (destination addresses)
     * in a subnet that you want to prevent from receiving traffic. The IP addresses
     * must be a subset of the IP addresses allowed for the VPC subnet associated with
     * the endpoint group.</p>
     */
    inline void SetDestinationAddresses(const Aws::Vector<Aws::String>& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses = value; }

    /**
     * <p>A list of specific Amazon EC2 instance IP addresses (destination addresses)
     * in a subnet that you want to prevent from receiving traffic. The IP addresses
     * must be a subset of the IP addresses allowed for the VPC subnet associated with
     * the endpoint group.</p>
     */
    inline void SetDestinationAddresses(Aws::Vector<Aws::String>&& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses = std::move(value); }

    /**
     * <p>A list of specific Amazon EC2 instance IP addresses (destination addresses)
     * in a subnet that you want to prevent from receiving traffic. The IP addresses
     * must be a subset of the IP addresses allowed for the VPC subnet associated with
     * the endpoint group.</p>
     */
    inline DenyCustomRoutingTrafficRequest& WithDestinationAddresses(const Aws::Vector<Aws::String>& value) { SetDestinationAddresses(value); return *this;}

    /**
     * <p>A list of specific Amazon EC2 instance IP addresses (destination addresses)
     * in a subnet that you want to prevent from receiving traffic. The IP addresses
     * must be a subset of the IP addresses allowed for the VPC subnet associated with
     * the endpoint group.</p>
     */
    inline DenyCustomRoutingTrafficRequest& WithDestinationAddresses(Aws::Vector<Aws::String>&& value) { SetDestinationAddresses(std::move(value)); return *this;}

    /**
     * <p>A list of specific Amazon EC2 instance IP addresses (destination addresses)
     * in a subnet that you want to prevent from receiving traffic. The IP addresses
     * must be a subset of the IP addresses allowed for the VPC subnet associated with
     * the endpoint group.</p>
     */
    inline DenyCustomRoutingTrafficRequest& AddDestinationAddresses(const Aws::String& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses.push_back(value); return *this; }

    /**
     * <p>A list of specific Amazon EC2 instance IP addresses (destination addresses)
     * in a subnet that you want to prevent from receiving traffic. The IP addresses
     * must be a subset of the IP addresses allowed for the VPC subnet associated with
     * the endpoint group.</p>
     */
    inline DenyCustomRoutingTrafficRequest& AddDestinationAddresses(Aws::String&& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of specific Amazon EC2 instance IP addresses (destination addresses)
     * in a subnet that you want to prevent from receiving traffic. The IP addresses
     * must be a subset of the IP addresses allowed for the VPC subnet associated with
     * the endpoint group.</p>
     */
    inline DenyCustomRoutingTrafficRequest& AddDestinationAddresses(const char* value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses.push_back(value); return *this; }


    /**
     * <p>A list of specific Amazon EC2 instance ports (destination ports) in a subnet
     * endpoint that you want to prevent from receiving traffic.</p>
     */
    inline const Aws::Vector<int>& GetDestinationPorts() const{ return m_destinationPorts; }

    /**
     * <p>A list of specific Amazon EC2 instance ports (destination ports) in a subnet
     * endpoint that you want to prevent from receiving traffic.</p>
     */
    inline bool DestinationPortsHasBeenSet() const { return m_destinationPortsHasBeenSet; }

    /**
     * <p>A list of specific Amazon EC2 instance ports (destination ports) in a subnet
     * endpoint that you want to prevent from receiving traffic.</p>
     */
    inline void SetDestinationPorts(const Aws::Vector<int>& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = value; }

    /**
     * <p>A list of specific Amazon EC2 instance ports (destination ports) in a subnet
     * endpoint that you want to prevent from receiving traffic.</p>
     */
    inline void SetDestinationPorts(Aws::Vector<int>&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = std::move(value); }

    /**
     * <p>A list of specific Amazon EC2 instance ports (destination ports) in a subnet
     * endpoint that you want to prevent from receiving traffic.</p>
     */
    inline DenyCustomRoutingTrafficRequest& WithDestinationPorts(const Aws::Vector<int>& value) { SetDestinationPorts(value); return *this;}

    /**
     * <p>A list of specific Amazon EC2 instance ports (destination ports) in a subnet
     * endpoint that you want to prevent from receiving traffic.</p>
     */
    inline DenyCustomRoutingTrafficRequest& WithDestinationPorts(Aws::Vector<int>&& value) { SetDestinationPorts(std::move(value)); return *this;}

    /**
     * <p>A list of specific Amazon EC2 instance ports (destination ports) in a subnet
     * endpoint that you want to prevent from receiving traffic.</p>
     */
    inline DenyCustomRoutingTrafficRequest& AddDestinationPorts(int value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.push_back(value); return *this; }


    /**
     * <p>Indicates whether all destination IP addresses and ports for a specified VPC
     * subnet endpoint <i>cannot</i> receive traffic from a custom routing accelerator.
     * The value is TRUE or FALSE. </p> <p>When set to TRUE, <i>no</i> destinations in
     * the custom routing VPC subnet can receive traffic. Note that you cannot specify
     * destination IP addresses and ports when the value is set to TRUE.</p> <p>When
     * set to FALSE (or not specified), you <i>must</i> specify a list of destination
     * IP addresses that cannot receive traffic. A list of ports is optional. If you
     * don't specify a list of ports, the ports that can accept traffic is the same as
     * the ports configured for the endpoint group.</p> <p>The default value is
     * FALSE.</p>
     */
    inline bool GetDenyAllTrafficToEndpoint() const{ return m_denyAllTrafficToEndpoint; }

    /**
     * <p>Indicates whether all destination IP addresses and ports for a specified VPC
     * subnet endpoint <i>cannot</i> receive traffic from a custom routing accelerator.
     * The value is TRUE or FALSE. </p> <p>When set to TRUE, <i>no</i> destinations in
     * the custom routing VPC subnet can receive traffic. Note that you cannot specify
     * destination IP addresses and ports when the value is set to TRUE.</p> <p>When
     * set to FALSE (or not specified), you <i>must</i> specify a list of destination
     * IP addresses that cannot receive traffic. A list of ports is optional. If you
     * don't specify a list of ports, the ports that can accept traffic is the same as
     * the ports configured for the endpoint group.</p> <p>The default value is
     * FALSE.</p>
     */
    inline bool DenyAllTrafficToEndpointHasBeenSet() const { return m_denyAllTrafficToEndpointHasBeenSet; }

    /**
     * <p>Indicates whether all destination IP addresses and ports for a specified VPC
     * subnet endpoint <i>cannot</i> receive traffic from a custom routing accelerator.
     * The value is TRUE or FALSE. </p> <p>When set to TRUE, <i>no</i> destinations in
     * the custom routing VPC subnet can receive traffic. Note that you cannot specify
     * destination IP addresses and ports when the value is set to TRUE.</p> <p>When
     * set to FALSE (or not specified), you <i>must</i> specify a list of destination
     * IP addresses that cannot receive traffic. A list of ports is optional. If you
     * don't specify a list of ports, the ports that can accept traffic is the same as
     * the ports configured for the endpoint group.</p> <p>The default value is
     * FALSE.</p>
     */
    inline void SetDenyAllTrafficToEndpoint(bool value) { m_denyAllTrafficToEndpointHasBeenSet = true; m_denyAllTrafficToEndpoint = value; }

    /**
     * <p>Indicates whether all destination IP addresses and ports for a specified VPC
     * subnet endpoint <i>cannot</i> receive traffic from a custom routing accelerator.
     * The value is TRUE or FALSE. </p> <p>When set to TRUE, <i>no</i> destinations in
     * the custom routing VPC subnet can receive traffic. Note that you cannot specify
     * destination IP addresses and ports when the value is set to TRUE.</p> <p>When
     * set to FALSE (or not specified), you <i>must</i> specify a list of destination
     * IP addresses that cannot receive traffic. A list of ports is optional. If you
     * don't specify a list of ports, the ports that can accept traffic is the same as
     * the ports configured for the endpoint group.</p> <p>The default value is
     * FALSE.</p>
     */
    inline DenyCustomRoutingTrafficRequest& WithDenyAllTrafficToEndpoint(bool value) { SetDenyAllTrafficToEndpoint(value); return *this;}

  private:

    Aws::String m_endpointGroupArn;
    bool m_endpointGroupArnHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinationAddresses;
    bool m_destinationAddressesHasBeenSet = false;

    Aws::Vector<int> m_destinationPorts;
    bool m_destinationPortsHasBeenSet = false;

    bool m_denyAllTrafficToEndpoint;
    bool m_denyAllTrafficToEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
