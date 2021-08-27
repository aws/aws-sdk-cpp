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
   * <p>Describes association information for an Elastic IP address
   * (IPv4).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceNetworkInterfaceAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API InstanceNetworkInterfaceAssociation
  {
  public:
    InstanceNetworkInterfaceAssociation();
    InstanceNetworkInterfaceAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceNetworkInterfaceAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The carrier IP address associated with the network interface.</p>
     */
    inline const Aws::String& GetCarrierIp() const{ return m_carrierIp; }

    /**
     * <p>The carrier IP address associated with the network interface.</p>
     */
    inline bool CarrierIpHasBeenSet() const { return m_carrierIpHasBeenSet; }

    /**
     * <p>The carrier IP address associated with the network interface.</p>
     */
    inline void SetCarrierIp(const Aws::String& value) { m_carrierIpHasBeenSet = true; m_carrierIp = value; }

    /**
     * <p>The carrier IP address associated with the network interface.</p>
     */
    inline void SetCarrierIp(Aws::String&& value) { m_carrierIpHasBeenSet = true; m_carrierIp = std::move(value); }

    /**
     * <p>The carrier IP address associated with the network interface.</p>
     */
    inline void SetCarrierIp(const char* value) { m_carrierIpHasBeenSet = true; m_carrierIp.assign(value); }

    /**
     * <p>The carrier IP address associated with the network interface.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithCarrierIp(const Aws::String& value) { SetCarrierIp(value); return *this;}

    /**
     * <p>The carrier IP address associated with the network interface.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithCarrierIp(Aws::String&& value) { SetCarrierIp(std::move(value)); return *this;}

    /**
     * <p>The carrier IP address associated with the network interface.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithCarrierIp(const char* value) { SetCarrierIp(value); return *this;}


    /**
     * <p>The ID of the owner of the Elastic IP address.</p>
     */
    inline const Aws::String& GetIpOwnerId() const{ return m_ipOwnerId; }

    /**
     * <p>The ID of the owner of the Elastic IP address.</p>
     */
    inline bool IpOwnerIdHasBeenSet() const { return m_ipOwnerIdHasBeenSet; }

    /**
     * <p>The ID of the owner of the Elastic IP address.</p>
     */
    inline void SetIpOwnerId(const Aws::String& value) { m_ipOwnerIdHasBeenSet = true; m_ipOwnerId = value; }

    /**
     * <p>The ID of the owner of the Elastic IP address.</p>
     */
    inline void SetIpOwnerId(Aws::String&& value) { m_ipOwnerIdHasBeenSet = true; m_ipOwnerId = std::move(value); }

    /**
     * <p>The ID of the owner of the Elastic IP address.</p>
     */
    inline void SetIpOwnerId(const char* value) { m_ipOwnerIdHasBeenSet = true; m_ipOwnerId.assign(value); }

    /**
     * <p>The ID of the owner of the Elastic IP address.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithIpOwnerId(const Aws::String& value) { SetIpOwnerId(value); return *this;}

    /**
     * <p>The ID of the owner of the Elastic IP address.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithIpOwnerId(Aws::String&& value) { SetIpOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the owner of the Elastic IP address.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithIpOwnerId(const char* value) { SetIpOwnerId(value); return *this;}


    /**
     * <p>The public DNS name.</p>
     */
    inline const Aws::String& GetPublicDnsName() const{ return m_publicDnsName; }

    /**
     * <p>The public DNS name.</p>
     */
    inline bool PublicDnsNameHasBeenSet() const { return m_publicDnsNameHasBeenSet; }

    /**
     * <p>The public DNS name.</p>
     */
    inline void SetPublicDnsName(const Aws::String& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = value; }

    /**
     * <p>The public DNS name.</p>
     */
    inline void SetPublicDnsName(Aws::String&& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = std::move(value); }

    /**
     * <p>The public DNS name.</p>
     */
    inline void SetPublicDnsName(const char* value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName.assign(value); }

    /**
     * <p>The public DNS name.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithPublicDnsName(const Aws::String& value) { SetPublicDnsName(value); return *this;}

    /**
     * <p>The public DNS name.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithPublicDnsName(Aws::String&& value) { SetPublicDnsName(std::move(value)); return *this;}

    /**
     * <p>The public DNS name.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithPublicDnsName(const char* value) { SetPublicDnsName(value); return *this;}


    /**
     * <p>The public IP address or Elastic IP address bound to the network
     * interface.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }

    /**
     * <p>The public IP address or Elastic IP address bound to the network
     * interface.</p>
     */
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }

    /**
     * <p>The public IP address or Elastic IP address bound to the network
     * interface.</p>
     */
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }

    /**
     * <p>The public IP address or Elastic IP address bound to the network
     * interface.</p>
     */
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }

    /**
     * <p>The public IP address or Elastic IP address bound to the network
     * interface.</p>
     */
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }

    /**
     * <p>The public IP address or Elastic IP address bound to the network
     * interface.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * <p>The public IP address or Elastic IP address bound to the network
     * interface.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}

    /**
     * <p>The public IP address or Elastic IP address bound to the network
     * interface.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}

  private:

    Aws::String m_carrierIp;
    bool m_carrierIpHasBeenSet;

    Aws::String m_ipOwnerId;
    bool m_ipOwnerIdHasBeenSet;

    Aws::String m_publicDnsName;
    bool m_publicDnsNameHasBeenSet;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
