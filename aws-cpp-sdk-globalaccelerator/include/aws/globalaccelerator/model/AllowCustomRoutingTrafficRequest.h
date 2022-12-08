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
    AWS_GLOBALACCELERATOR_API AllowCustomRoutingTrafficRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AllowCustomRoutingTraffic"; }

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
    inline AllowCustomRoutingTrafficRequest& WithEndpointGroupArn(const Aws::String& value) { SetEndpointGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline AllowCustomRoutingTrafficRequest& WithEndpointGroupArn(Aws::String&& value) { SetEndpointGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline AllowCustomRoutingTrafficRequest& WithEndpointGroupArn(const char* value) { SetEndpointGroupArn(value); return *this;}


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
    inline AllowCustomRoutingTrafficRequest& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID.</p>
     */
    inline AllowCustomRoutingTrafficRequest& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}

    /**
     * <p>An ID for the endpoint. For custom routing accelerators, this is the virtual
     * private cloud (VPC) subnet ID.</p>
     */
    inline AllowCustomRoutingTrafficRequest& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}


    /**
     * <p>A list of specific Amazon EC2 instance IP addresses (destination addresses)
     * in a subnet that you want to allow to receive traffic. The IP addresses must be
     * a subset of the IP addresses that you specified for the endpoint group.</p> <p>
     * <code>DestinationAddresses</code> is required if
     * <code>AllowAllTrafficToEndpoint</code> is <code>FALSE</code> or is not
     * specified.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationAddresses() const{ return m_destinationAddresses; }

    /**
     * <p>A list of specific Amazon EC2 instance IP addresses (destination addresses)
     * in a subnet that you want to allow to receive traffic. The IP addresses must be
     * a subset of the IP addresses that you specified for the endpoint group.</p> <p>
     * <code>DestinationAddresses</code> is required if
     * <code>AllowAllTrafficToEndpoint</code> is <code>FALSE</code> or is not
     * specified.</p>
     */
    inline bool DestinationAddressesHasBeenSet() const { return m_destinationAddressesHasBeenSet; }

    /**
     * <p>A list of specific Amazon EC2 instance IP addresses (destination addresses)
     * in a subnet that you want to allow to receive traffic. The IP addresses must be
     * a subset of the IP addresses that you specified for the endpoint group.</p> <p>
     * <code>DestinationAddresses</code> is required if
     * <code>AllowAllTrafficToEndpoint</code> is <code>FALSE</code> or is not
     * specified.</p>
     */
    inline void SetDestinationAddresses(const Aws::Vector<Aws::String>& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses = value; }

    /**
     * <p>A list of specific Amazon EC2 instance IP addresses (destination addresses)
     * in a subnet that you want to allow to receive traffic. The IP addresses must be
     * a subset of the IP addresses that you specified for the endpoint group.</p> <p>
     * <code>DestinationAddresses</code> is required if
     * <code>AllowAllTrafficToEndpoint</code> is <code>FALSE</code> or is not
     * specified.</p>
     */
    inline void SetDestinationAddresses(Aws::Vector<Aws::String>&& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses = std::move(value); }

    /**
     * <p>A list of specific Amazon EC2 instance IP addresses (destination addresses)
     * in a subnet that you want to allow to receive traffic. The IP addresses must be
     * a subset of the IP addresses that you specified for the endpoint group.</p> <p>
     * <code>DestinationAddresses</code> is required if
     * <code>AllowAllTrafficToEndpoint</code> is <code>FALSE</code> or is not
     * specified.</p>
     */
    inline AllowCustomRoutingTrafficRequest& WithDestinationAddresses(const Aws::Vector<Aws::String>& value) { SetDestinationAddresses(value); return *this;}

    /**
     * <p>A list of specific Amazon EC2 instance IP addresses (destination addresses)
     * in a subnet that you want to allow to receive traffic. The IP addresses must be
     * a subset of the IP addresses that you specified for the endpoint group.</p> <p>
     * <code>DestinationAddresses</code> is required if
     * <code>AllowAllTrafficToEndpoint</code> is <code>FALSE</code> or is not
     * specified.</p>
     */
    inline AllowCustomRoutingTrafficRequest& WithDestinationAddresses(Aws::Vector<Aws::String>&& value) { SetDestinationAddresses(std::move(value)); return *this;}

    /**
     * <p>A list of specific Amazon EC2 instance IP addresses (destination addresses)
     * in a subnet that you want to allow to receive traffic. The IP addresses must be
     * a subset of the IP addresses that you specified for the endpoint group.</p> <p>
     * <code>DestinationAddresses</code> is required if
     * <code>AllowAllTrafficToEndpoint</code> is <code>FALSE</code> or is not
     * specified.</p>
     */
    inline AllowCustomRoutingTrafficRequest& AddDestinationAddresses(const Aws::String& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses.push_back(value); return *this; }

    /**
     * <p>A list of specific Amazon EC2 instance IP addresses (destination addresses)
     * in a subnet that you want to allow to receive traffic. The IP addresses must be
     * a subset of the IP addresses that you specified for the endpoint group.</p> <p>
     * <code>DestinationAddresses</code> is required if
     * <code>AllowAllTrafficToEndpoint</code> is <code>FALSE</code> or is not
     * specified.</p>
     */
    inline AllowCustomRoutingTrafficRequest& AddDestinationAddresses(Aws::String&& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of specific Amazon EC2 instance IP addresses (destination addresses)
     * in a subnet that you want to allow to receive traffic. The IP addresses must be
     * a subset of the IP addresses that you specified for the endpoint group.</p> <p>
     * <code>DestinationAddresses</code> is required if
     * <code>AllowAllTrafficToEndpoint</code> is <code>FALSE</code> or is not
     * specified.</p>
     */
    inline AllowCustomRoutingTrafficRequest& AddDestinationAddresses(const char* value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses.push_back(value); return *this; }


    /**
     * <p>A list of specific Amazon EC2 instance ports (destination ports) that you
     * want to allow to receive traffic.</p>
     */
    inline const Aws::Vector<int>& GetDestinationPorts() const{ return m_destinationPorts; }

    /**
     * <p>A list of specific Amazon EC2 instance ports (destination ports) that you
     * want to allow to receive traffic.</p>
     */
    inline bool DestinationPortsHasBeenSet() const { return m_destinationPortsHasBeenSet; }

    /**
     * <p>A list of specific Amazon EC2 instance ports (destination ports) that you
     * want to allow to receive traffic.</p>
     */
    inline void SetDestinationPorts(const Aws::Vector<int>& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = value; }

    /**
     * <p>A list of specific Amazon EC2 instance ports (destination ports) that you
     * want to allow to receive traffic.</p>
     */
    inline void SetDestinationPorts(Aws::Vector<int>&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = std::move(value); }

    /**
     * <p>A list of specific Amazon EC2 instance ports (destination ports) that you
     * want to allow to receive traffic.</p>
     */
    inline AllowCustomRoutingTrafficRequest& WithDestinationPorts(const Aws::Vector<int>& value) { SetDestinationPorts(value); return *this;}

    /**
     * <p>A list of specific Amazon EC2 instance ports (destination ports) that you
     * want to allow to receive traffic.</p>
     */
    inline AllowCustomRoutingTrafficRequest& WithDestinationPorts(Aws::Vector<int>&& value) { SetDestinationPorts(std::move(value)); return *this;}

    /**
     * <p>A list of specific Amazon EC2 instance ports (destination ports) that you
     * want to allow to receive traffic.</p>
     */
    inline AllowCustomRoutingTrafficRequest& AddDestinationPorts(int value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.push_back(value); return *this; }


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
    inline bool GetAllowAllTrafficToEndpoint() const{ return m_allowAllTrafficToEndpoint; }

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
    inline bool AllowAllTrafficToEndpointHasBeenSet() const { return m_allowAllTrafficToEndpointHasBeenSet; }

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
    inline void SetAllowAllTrafficToEndpoint(bool value) { m_allowAllTrafficToEndpointHasBeenSet = true; m_allowAllTrafficToEndpoint = value; }

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
    inline AllowCustomRoutingTrafficRequest& WithAllowAllTrafficToEndpoint(bool value) { SetAllowAllTrafficToEndpoint(value); return *this;}

  private:

    Aws::String m_endpointGroupArn;
    bool m_endpointGroupArnHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinationAddresses;
    bool m_destinationAddressesHasBeenSet = false;

    Aws::Vector<int> m_destinationPorts;
    bool m_destinationPortsHasBeenSet = false;

    bool m_allowAllTrafficToEndpoint;
    bool m_allowAllTrafficToEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
