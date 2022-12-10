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
   * <p>Describes association information for an Elastic IP address (IPv4 only), or a
   * Carrier IP address (for a network interface which resides in a subnet in a
   * Wavelength Zone).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkInterfaceAssociation">AWS
   * API Reference</a></p>
   */
  class NetworkInterfaceAssociation
  {
  public:
    AWS_EC2_API NetworkInterfaceAssociation();
    AWS_EC2_API NetworkInterfaceAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInterfaceAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The allocation ID.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }

    /**
     * <p>The allocation ID.</p>
     */
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }

    /**
     * <p>The allocation ID.</p>
     */
    inline void SetAllocationId(const Aws::String& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }

    /**
     * <p>The allocation ID.</p>
     */
    inline void SetAllocationId(Aws::String&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::move(value); }

    /**
     * <p>The allocation ID.</p>
     */
    inline void SetAllocationId(const char* value) { m_allocationIdHasBeenSet = true; m_allocationId.assign(value); }

    /**
     * <p>The allocation ID.</p>
     */
    inline NetworkInterfaceAssociation& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}

    /**
     * <p>The allocation ID.</p>
     */
    inline NetworkInterfaceAssociation& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}

    /**
     * <p>The allocation ID.</p>
     */
    inline NetworkInterfaceAssociation& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}


    /**
     * <p>The association ID.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The association ID.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The association ID.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The association ID.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The association ID.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The association ID.</p>
     */
    inline NetworkInterfaceAssociation& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The association ID.</p>
     */
    inline NetworkInterfaceAssociation& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The association ID.</p>
     */
    inline NetworkInterfaceAssociation& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>The ID of the Elastic IP address owner.</p>
     */
    inline const Aws::String& GetIpOwnerId() const{ return m_ipOwnerId; }

    /**
     * <p>The ID of the Elastic IP address owner.</p>
     */
    inline bool IpOwnerIdHasBeenSet() const { return m_ipOwnerIdHasBeenSet; }

    /**
     * <p>The ID of the Elastic IP address owner.</p>
     */
    inline void SetIpOwnerId(const Aws::String& value) { m_ipOwnerIdHasBeenSet = true; m_ipOwnerId = value; }

    /**
     * <p>The ID of the Elastic IP address owner.</p>
     */
    inline void SetIpOwnerId(Aws::String&& value) { m_ipOwnerIdHasBeenSet = true; m_ipOwnerId = std::move(value); }

    /**
     * <p>The ID of the Elastic IP address owner.</p>
     */
    inline void SetIpOwnerId(const char* value) { m_ipOwnerIdHasBeenSet = true; m_ipOwnerId.assign(value); }

    /**
     * <p>The ID of the Elastic IP address owner.</p>
     */
    inline NetworkInterfaceAssociation& WithIpOwnerId(const Aws::String& value) { SetIpOwnerId(value); return *this;}

    /**
     * <p>The ID of the Elastic IP address owner.</p>
     */
    inline NetworkInterfaceAssociation& WithIpOwnerId(Aws::String&& value) { SetIpOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Elastic IP address owner.</p>
     */
    inline NetworkInterfaceAssociation& WithIpOwnerId(const char* value) { SetIpOwnerId(value); return *this;}


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
    inline NetworkInterfaceAssociation& WithPublicDnsName(const Aws::String& value) { SetPublicDnsName(value); return *this;}

    /**
     * <p>The public DNS name.</p>
     */
    inline NetworkInterfaceAssociation& WithPublicDnsName(Aws::String&& value) { SetPublicDnsName(std::move(value)); return *this;}

    /**
     * <p>The public DNS name.</p>
     */
    inline NetworkInterfaceAssociation& WithPublicDnsName(const char* value) { SetPublicDnsName(value); return *this;}


    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline NetworkInterfaceAssociation& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline NetworkInterfaceAssociation& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline NetworkInterfaceAssociation& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}


    /**
     * <p>The customer-owned IP address associated with the network interface.</p>
     */
    inline const Aws::String& GetCustomerOwnedIp() const{ return m_customerOwnedIp; }

    /**
     * <p>The customer-owned IP address associated with the network interface.</p>
     */
    inline bool CustomerOwnedIpHasBeenSet() const { return m_customerOwnedIpHasBeenSet; }

    /**
     * <p>The customer-owned IP address associated with the network interface.</p>
     */
    inline void SetCustomerOwnedIp(const Aws::String& value) { m_customerOwnedIpHasBeenSet = true; m_customerOwnedIp = value; }

    /**
     * <p>The customer-owned IP address associated with the network interface.</p>
     */
    inline void SetCustomerOwnedIp(Aws::String&& value) { m_customerOwnedIpHasBeenSet = true; m_customerOwnedIp = std::move(value); }

    /**
     * <p>The customer-owned IP address associated with the network interface.</p>
     */
    inline void SetCustomerOwnedIp(const char* value) { m_customerOwnedIpHasBeenSet = true; m_customerOwnedIp.assign(value); }

    /**
     * <p>The customer-owned IP address associated with the network interface.</p>
     */
    inline NetworkInterfaceAssociation& WithCustomerOwnedIp(const Aws::String& value) { SetCustomerOwnedIp(value); return *this;}

    /**
     * <p>The customer-owned IP address associated with the network interface.</p>
     */
    inline NetworkInterfaceAssociation& WithCustomerOwnedIp(Aws::String&& value) { SetCustomerOwnedIp(std::move(value)); return *this;}

    /**
     * <p>The customer-owned IP address associated with the network interface.</p>
     */
    inline NetworkInterfaceAssociation& WithCustomerOwnedIp(const char* value) { SetCustomerOwnedIp(value); return *this;}


    /**
     * <p>The carrier IP address associated with the network interface.</p> <p>This
     * option is only available when the network interface is in a subnet which is
     * associated with a Wavelength Zone.</p>
     */
    inline const Aws::String& GetCarrierIp() const{ return m_carrierIp; }

    /**
     * <p>The carrier IP address associated with the network interface.</p> <p>This
     * option is only available when the network interface is in a subnet which is
     * associated with a Wavelength Zone.</p>
     */
    inline bool CarrierIpHasBeenSet() const { return m_carrierIpHasBeenSet; }

    /**
     * <p>The carrier IP address associated with the network interface.</p> <p>This
     * option is only available when the network interface is in a subnet which is
     * associated with a Wavelength Zone.</p>
     */
    inline void SetCarrierIp(const Aws::String& value) { m_carrierIpHasBeenSet = true; m_carrierIp = value; }

    /**
     * <p>The carrier IP address associated with the network interface.</p> <p>This
     * option is only available when the network interface is in a subnet which is
     * associated with a Wavelength Zone.</p>
     */
    inline void SetCarrierIp(Aws::String&& value) { m_carrierIpHasBeenSet = true; m_carrierIp = std::move(value); }

    /**
     * <p>The carrier IP address associated with the network interface.</p> <p>This
     * option is only available when the network interface is in a subnet which is
     * associated with a Wavelength Zone.</p>
     */
    inline void SetCarrierIp(const char* value) { m_carrierIpHasBeenSet = true; m_carrierIp.assign(value); }

    /**
     * <p>The carrier IP address associated with the network interface.</p> <p>This
     * option is only available when the network interface is in a subnet which is
     * associated with a Wavelength Zone.</p>
     */
    inline NetworkInterfaceAssociation& WithCarrierIp(const Aws::String& value) { SetCarrierIp(value); return *this;}

    /**
     * <p>The carrier IP address associated with the network interface.</p> <p>This
     * option is only available when the network interface is in a subnet which is
     * associated with a Wavelength Zone.</p>
     */
    inline NetworkInterfaceAssociation& WithCarrierIp(Aws::String&& value) { SetCarrierIp(std::move(value)); return *this;}

    /**
     * <p>The carrier IP address associated with the network interface.</p> <p>This
     * option is only available when the network interface is in a subnet which is
     * associated with a Wavelength Zone.</p>
     */
    inline NetworkInterfaceAssociation& WithCarrierIp(const char* value) { SetCarrierIp(value); return *this;}

  private:

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_ipOwnerId;
    bool m_ipOwnerIdHasBeenSet = false;

    Aws::String m_publicDnsName;
    bool m_publicDnsNameHasBeenSet = false;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet = false;

    Aws::String m_customerOwnedIp;
    bool m_customerOwnedIpHasBeenSet = false;

    Aws::String m_carrierIp;
    bool m_carrierIpHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
