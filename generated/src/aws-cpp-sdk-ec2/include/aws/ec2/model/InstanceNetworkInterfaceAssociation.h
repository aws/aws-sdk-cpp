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
  class InstanceNetworkInterfaceAssociation
  {
  public:
    AWS_EC2_API InstanceNetworkInterfaceAssociation();
    AWS_EC2_API InstanceNetworkInterfaceAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceNetworkInterfaceAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The carrier IP address associated with the network interface.</p>
     */
    inline const Aws::String& GetCarrierIp() const{ return m_carrierIp; }
    inline bool CarrierIpHasBeenSet() const { return m_carrierIpHasBeenSet; }
    inline void SetCarrierIp(const Aws::String& value) { m_carrierIpHasBeenSet = true; m_carrierIp = value; }
    inline void SetCarrierIp(Aws::String&& value) { m_carrierIpHasBeenSet = true; m_carrierIp = std::move(value); }
    inline void SetCarrierIp(const char* value) { m_carrierIpHasBeenSet = true; m_carrierIp.assign(value); }
    inline InstanceNetworkInterfaceAssociation& WithCarrierIp(const Aws::String& value) { SetCarrierIp(value); return *this;}
    inline InstanceNetworkInterfaceAssociation& WithCarrierIp(Aws::String&& value) { SetCarrierIp(std::move(value)); return *this;}
    inline InstanceNetworkInterfaceAssociation& WithCarrierIp(const char* value) { SetCarrierIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-owned IP address associated with the network interface.</p>
     */
    inline const Aws::String& GetCustomerOwnedIp() const{ return m_customerOwnedIp; }
    inline bool CustomerOwnedIpHasBeenSet() const { return m_customerOwnedIpHasBeenSet; }
    inline void SetCustomerOwnedIp(const Aws::String& value) { m_customerOwnedIpHasBeenSet = true; m_customerOwnedIp = value; }
    inline void SetCustomerOwnedIp(Aws::String&& value) { m_customerOwnedIpHasBeenSet = true; m_customerOwnedIp = std::move(value); }
    inline void SetCustomerOwnedIp(const char* value) { m_customerOwnedIpHasBeenSet = true; m_customerOwnedIp.assign(value); }
    inline InstanceNetworkInterfaceAssociation& WithCustomerOwnedIp(const Aws::String& value) { SetCustomerOwnedIp(value); return *this;}
    inline InstanceNetworkInterfaceAssociation& WithCustomerOwnedIp(Aws::String&& value) { SetCustomerOwnedIp(std::move(value)); return *this;}
    inline InstanceNetworkInterfaceAssociation& WithCustomerOwnedIp(const char* value) { SetCustomerOwnedIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the owner of the Elastic IP address.</p>
     */
    inline const Aws::String& GetIpOwnerId() const{ return m_ipOwnerId; }
    inline bool IpOwnerIdHasBeenSet() const { return m_ipOwnerIdHasBeenSet; }
    inline void SetIpOwnerId(const Aws::String& value) { m_ipOwnerIdHasBeenSet = true; m_ipOwnerId = value; }
    inline void SetIpOwnerId(Aws::String&& value) { m_ipOwnerIdHasBeenSet = true; m_ipOwnerId = std::move(value); }
    inline void SetIpOwnerId(const char* value) { m_ipOwnerIdHasBeenSet = true; m_ipOwnerId.assign(value); }
    inline InstanceNetworkInterfaceAssociation& WithIpOwnerId(const Aws::String& value) { SetIpOwnerId(value); return *this;}
    inline InstanceNetworkInterfaceAssociation& WithIpOwnerId(Aws::String&& value) { SetIpOwnerId(std::move(value)); return *this;}
    inline InstanceNetworkInterfaceAssociation& WithIpOwnerId(const char* value) { SetIpOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public DNS name.</p>
     */
    inline const Aws::String& GetPublicDnsName() const{ return m_publicDnsName; }
    inline bool PublicDnsNameHasBeenSet() const { return m_publicDnsNameHasBeenSet; }
    inline void SetPublicDnsName(const Aws::String& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = value; }
    inline void SetPublicDnsName(Aws::String&& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = std::move(value); }
    inline void SetPublicDnsName(const char* value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName.assign(value); }
    inline InstanceNetworkInterfaceAssociation& WithPublicDnsName(const Aws::String& value) { SetPublicDnsName(value); return *this;}
    inline InstanceNetworkInterfaceAssociation& WithPublicDnsName(Aws::String&& value) { SetPublicDnsName(std::move(value)); return *this;}
    inline InstanceNetworkInterfaceAssociation& WithPublicDnsName(const char* value) { SetPublicDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public IP address or Elastic IP address bound to the network
     * interface.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }
    inline InstanceNetworkInterfaceAssociation& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}
    inline InstanceNetworkInterfaceAssociation& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}
    inline InstanceNetworkInterfaceAssociation& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}
    ///@}
  private:

    Aws::String m_carrierIp;
    bool m_carrierIpHasBeenSet = false;

    Aws::String m_customerOwnedIp;
    bool m_customerOwnedIpHasBeenSet = false;

    Aws::String m_ipOwnerId;
    bool m_ipOwnerIdHasBeenSet = false;

    Aws::String m_publicDnsName;
    bool m_publicDnsNameHasBeenSet = false;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
