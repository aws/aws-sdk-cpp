/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the IP addresses and network interface associated with a NAT
   * gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NatGatewayAddress">AWS
   * API Reference</a></p>
   */
  class NatGatewayAddress
  {
  public:
    AWS_EC2_API NatGatewayAddress();
    AWS_EC2_API NatGatewayAddress(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NatGatewayAddress& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>[Public NAT gateway only] The allocation ID of the Elastic IP address that's
     * associated with the NAT gateway.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }

    /**
     * <p>[Public NAT gateway only] The allocation ID of the Elastic IP address that's
     * associated with the NAT gateway.</p>
     */
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }

    /**
     * <p>[Public NAT gateway only] The allocation ID of the Elastic IP address that's
     * associated with the NAT gateway.</p>
     */
    inline void SetAllocationId(const Aws::String& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }

    /**
     * <p>[Public NAT gateway only] The allocation ID of the Elastic IP address that's
     * associated with the NAT gateway.</p>
     */
    inline void SetAllocationId(Aws::String&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::move(value); }

    /**
     * <p>[Public NAT gateway only] The allocation ID of the Elastic IP address that's
     * associated with the NAT gateway.</p>
     */
    inline void SetAllocationId(const char* value) { m_allocationIdHasBeenSet = true; m_allocationId.assign(value); }

    /**
     * <p>[Public NAT gateway only] The allocation ID of the Elastic IP address that's
     * associated with the NAT gateway.</p>
     */
    inline NatGatewayAddress& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}

    /**
     * <p>[Public NAT gateway only] The allocation ID of the Elastic IP address that's
     * associated with the NAT gateway.</p>
     */
    inline NatGatewayAddress& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}

    /**
     * <p>[Public NAT gateway only] The allocation ID of the Elastic IP address that's
     * associated with the NAT gateway.</p>
     */
    inline NatGatewayAddress& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}


    /**
     * <p>The ID of the network interface associated with the NAT gateway.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the network interface associated with the NAT gateway.</p>
     */
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of the network interface associated with the NAT gateway.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of the network interface associated with the NAT gateway.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the network interface associated with the NAT gateway.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the network interface associated with the NAT gateway.</p>
     */
    inline NatGatewayAddress& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface associated with the NAT gateway.</p>
     */
    inline NatGatewayAddress& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface associated with the NAT gateway.</p>
     */
    inline NatGatewayAddress& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The private IP address associated with the NAT gateway.</p>
     */
    inline const Aws::String& GetPrivateIp() const{ return m_privateIp; }

    /**
     * <p>The private IP address associated with the NAT gateway.</p>
     */
    inline bool PrivateIpHasBeenSet() const { return m_privateIpHasBeenSet; }

    /**
     * <p>The private IP address associated with the NAT gateway.</p>
     */
    inline void SetPrivateIp(const Aws::String& value) { m_privateIpHasBeenSet = true; m_privateIp = value; }

    /**
     * <p>The private IP address associated with the NAT gateway.</p>
     */
    inline void SetPrivateIp(Aws::String&& value) { m_privateIpHasBeenSet = true; m_privateIp = std::move(value); }

    /**
     * <p>The private IP address associated with the NAT gateway.</p>
     */
    inline void SetPrivateIp(const char* value) { m_privateIpHasBeenSet = true; m_privateIp.assign(value); }

    /**
     * <p>The private IP address associated with the NAT gateway.</p>
     */
    inline NatGatewayAddress& WithPrivateIp(const Aws::String& value) { SetPrivateIp(value); return *this;}

    /**
     * <p>The private IP address associated with the NAT gateway.</p>
     */
    inline NatGatewayAddress& WithPrivateIp(Aws::String&& value) { SetPrivateIp(std::move(value)); return *this;}

    /**
     * <p>The private IP address associated with the NAT gateway.</p>
     */
    inline NatGatewayAddress& WithPrivateIp(const char* value) { SetPrivateIp(value); return *this;}


    /**
     * <p>[Public NAT gateway only] The Elastic IP address associated with the NAT
     * gateway.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }

    /**
     * <p>[Public NAT gateway only] The Elastic IP address associated with the NAT
     * gateway.</p>
     */
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }

    /**
     * <p>[Public NAT gateway only] The Elastic IP address associated with the NAT
     * gateway.</p>
     */
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }

    /**
     * <p>[Public NAT gateway only] The Elastic IP address associated with the NAT
     * gateway.</p>
     */
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }

    /**
     * <p>[Public NAT gateway only] The Elastic IP address associated with the NAT
     * gateway.</p>
     */
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }

    /**
     * <p>[Public NAT gateway only] The Elastic IP address associated with the NAT
     * gateway.</p>
     */
    inline NatGatewayAddress& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * <p>[Public NAT gateway only] The Elastic IP address associated with the NAT
     * gateway.</p>
     */
    inline NatGatewayAddress& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}

    /**
     * <p>[Public NAT gateway only] The Elastic IP address associated with the NAT
     * gateway.</p>
     */
    inline NatGatewayAddress& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}

  private:

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_privateIp;
    bool m_privateIpHasBeenSet = false;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
