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
    AWS_EC2_API NetworkInterfaceAssociation() = default;
    AWS_EC2_API NetworkInterfaceAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInterfaceAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The allocation ID.</p>
     */
    inline const Aws::String& GetAllocationId() const { return m_allocationId; }
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }
    template<typename AllocationIdT = Aws::String>
    void SetAllocationId(AllocationIdT&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::forward<AllocationIdT>(value); }
    template<typename AllocationIdT = Aws::String>
    NetworkInterfaceAssociation& WithAllocationId(AllocationIdT&& value) { SetAllocationId(std::forward<AllocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association ID.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    NetworkInterfaceAssociation& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Elastic IP address owner.</p>
     */
    inline const Aws::String& GetIpOwnerId() const { return m_ipOwnerId; }
    inline bool IpOwnerIdHasBeenSet() const { return m_ipOwnerIdHasBeenSet; }
    template<typename IpOwnerIdT = Aws::String>
    void SetIpOwnerId(IpOwnerIdT&& value) { m_ipOwnerIdHasBeenSet = true; m_ipOwnerId = std::forward<IpOwnerIdT>(value); }
    template<typename IpOwnerIdT = Aws::String>
    NetworkInterfaceAssociation& WithIpOwnerId(IpOwnerIdT&& value) { SetIpOwnerId(std::forward<IpOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public DNS name.</p>
     */
    inline const Aws::String& GetPublicDnsName() const { return m_publicDnsName; }
    inline bool PublicDnsNameHasBeenSet() const { return m_publicDnsNameHasBeenSet; }
    template<typename PublicDnsNameT = Aws::String>
    void SetPublicDnsName(PublicDnsNameT&& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = std::forward<PublicDnsNameT>(value); }
    template<typename PublicDnsNameT = Aws::String>
    NetworkInterfaceAssociation& WithPublicDnsName(PublicDnsNameT&& value) { SetPublicDnsName(std::forward<PublicDnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline const Aws::String& GetPublicIp() const { return m_publicIp; }
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }
    template<typename PublicIpT = Aws::String>
    void SetPublicIp(PublicIpT&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::forward<PublicIpT>(value); }
    template<typename PublicIpT = Aws::String>
    NetworkInterfaceAssociation& WithPublicIp(PublicIpT&& value) { SetPublicIp(std::forward<PublicIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-owned IP address associated with the network interface.</p>
     */
    inline const Aws::String& GetCustomerOwnedIp() const { return m_customerOwnedIp; }
    inline bool CustomerOwnedIpHasBeenSet() const { return m_customerOwnedIpHasBeenSet; }
    template<typename CustomerOwnedIpT = Aws::String>
    void SetCustomerOwnedIp(CustomerOwnedIpT&& value) { m_customerOwnedIpHasBeenSet = true; m_customerOwnedIp = std::forward<CustomerOwnedIpT>(value); }
    template<typename CustomerOwnedIpT = Aws::String>
    NetworkInterfaceAssociation& WithCustomerOwnedIp(CustomerOwnedIpT&& value) { SetCustomerOwnedIp(std::forward<CustomerOwnedIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The carrier IP address associated with the network interface.</p> <p>This
     * option is only available when the network interface is in a subnet which is
     * associated with a Wavelength Zone.</p>
     */
    inline const Aws::String& GetCarrierIp() const { return m_carrierIp; }
    inline bool CarrierIpHasBeenSet() const { return m_carrierIpHasBeenSet; }
    template<typename CarrierIpT = Aws::String>
    void SetCarrierIp(CarrierIpT&& value) { m_carrierIpHasBeenSet = true; m_carrierIp = std::forward<CarrierIpT>(value); }
    template<typename CarrierIpT = Aws::String>
    NetworkInterfaceAssociation& WithCarrierIp(CarrierIpT&& value) { SetCarrierIp(std::forward<CarrierIpT>(value)); return *this;}
    ///@}
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
