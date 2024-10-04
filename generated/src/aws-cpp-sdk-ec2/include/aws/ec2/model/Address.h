/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/DomainType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes an Elastic IP address, or a carrier IP address.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Address">AWS API
   * Reference</a></p>
   */
  class Address
  {
  public:
    AWS_EC2_API Address();
    AWS_EC2_API Address(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Address& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID representing the allocation of the address.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }
    inline void SetAllocationId(const Aws::String& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }
    inline void SetAllocationId(Aws::String&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::move(value); }
    inline void SetAllocationId(const char* value) { m_allocationIdHasBeenSet = true; m_allocationId.assign(value); }
    inline Address& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}
    inline Address& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}
    inline Address& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID representing the association of the address with an instance.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }
    inline Address& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline Address& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline Address& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network (<code>vpc</code>).</p>
     */
    inline const DomainType& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const DomainType& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(DomainType&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline Address& WithDomain(const DomainType& value) { SetDomain(value); return *this;}
    inline Address& WithDomain(DomainType&& value) { SetDomain(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }
    inline Address& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline Address& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline Address& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the network
     * interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceOwnerId() const{ return m_networkInterfaceOwnerId; }
    inline bool NetworkInterfaceOwnerIdHasBeenSet() const { return m_networkInterfaceOwnerIdHasBeenSet; }
    inline void SetNetworkInterfaceOwnerId(const Aws::String& value) { m_networkInterfaceOwnerIdHasBeenSet = true; m_networkInterfaceOwnerId = value; }
    inline void SetNetworkInterfaceOwnerId(Aws::String&& value) { m_networkInterfaceOwnerIdHasBeenSet = true; m_networkInterfaceOwnerId = std::move(value); }
    inline void SetNetworkInterfaceOwnerId(const char* value) { m_networkInterfaceOwnerIdHasBeenSet = true; m_networkInterfaceOwnerId.assign(value); }
    inline Address& WithNetworkInterfaceOwnerId(const Aws::String& value) { SetNetworkInterfaceOwnerId(value); return *this;}
    inline Address& WithNetworkInterfaceOwnerId(Aws::String&& value) { SetNetworkInterfaceOwnerId(std::move(value)); return *this;}
    inline Address& WithNetworkInterfaceOwnerId(const char* value) { SetNetworkInterfaceOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IP address associated with the Elastic IP address.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }
    inline Address& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}
    inline Address& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}
    inline Address& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the Elastic IP address.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Address& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Address& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Address& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Address& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of an address pool.</p>
     */
    inline const Aws::String& GetPublicIpv4Pool() const{ return m_publicIpv4Pool; }
    inline bool PublicIpv4PoolHasBeenSet() const { return m_publicIpv4PoolHasBeenSet; }
    inline void SetPublicIpv4Pool(const Aws::String& value) { m_publicIpv4PoolHasBeenSet = true; m_publicIpv4Pool = value; }
    inline void SetPublicIpv4Pool(Aws::String&& value) { m_publicIpv4PoolHasBeenSet = true; m_publicIpv4Pool = std::move(value); }
    inline void SetPublicIpv4Pool(const char* value) { m_publicIpv4PoolHasBeenSet = true; m_publicIpv4Pool.assign(value); }
    inline Address& WithPublicIpv4Pool(const Aws::String& value) { SetPublicIpv4Pool(value); return *this;}
    inline Address& WithPublicIpv4Pool(Aws::String&& value) { SetPublicIpv4Pool(std::move(value)); return *this;}
    inline Address& WithPublicIpv4Pool(const char* value) { SetPublicIpv4Pool(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the unique set of Availability Zones, Local Zones, or Wavelength
     * Zones from which Amazon Web Services advertises IP addresses.</p>
     */
    inline const Aws::String& GetNetworkBorderGroup() const{ return m_networkBorderGroup; }
    inline bool NetworkBorderGroupHasBeenSet() const { return m_networkBorderGroupHasBeenSet; }
    inline void SetNetworkBorderGroup(const Aws::String& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = value; }
    inline void SetNetworkBorderGroup(Aws::String&& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = std::move(value); }
    inline void SetNetworkBorderGroup(const char* value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup.assign(value); }
    inline Address& WithNetworkBorderGroup(const Aws::String& value) { SetNetworkBorderGroup(value); return *this;}
    inline Address& WithNetworkBorderGroup(Aws::String&& value) { SetNetworkBorderGroup(std::move(value)); return *this;}
    inline Address& WithNetworkBorderGroup(const char* value) { SetNetworkBorderGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-owned IP address.</p>
     */
    inline const Aws::String& GetCustomerOwnedIp() const{ return m_customerOwnedIp; }
    inline bool CustomerOwnedIpHasBeenSet() const { return m_customerOwnedIpHasBeenSet; }
    inline void SetCustomerOwnedIp(const Aws::String& value) { m_customerOwnedIpHasBeenSet = true; m_customerOwnedIp = value; }
    inline void SetCustomerOwnedIp(Aws::String&& value) { m_customerOwnedIpHasBeenSet = true; m_customerOwnedIp = std::move(value); }
    inline void SetCustomerOwnedIp(const char* value) { m_customerOwnedIpHasBeenSet = true; m_customerOwnedIp.assign(value); }
    inline Address& WithCustomerOwnedIp(const Aws::String& value) { SetCustomerOwnedIp(value); return *this;}
    inline Address& WithCustomerOwnedIp(Aws::String&& value) { SetCustomerOwnedIp(std::move(value)); return *this;}
    inline Address& WithCustomerOwnedIp(const char* value) { SetCustomerOwnedIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the customer-owned address pool.</p>
     */
    inline const Aws::String& GetCustomerOwnedIpv4Pool() const{ return m_customerOwnedIpv4Pool; }
    inline bool CustomerOwnedIpv4PoolHasBeenSet() const { return m_customerOwnedIpv4PoolHasBeenSet; }
    inline void SetCustomerOwnedIpv4Pool(const Aws::String& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = value; }
    inline void SetCustomerOwnedIpv4Pool(Aws::String&& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = std::move(value); }
    inline void SetCustomerOwnedIpv4Pool(const char* value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool.assign(value); }
    inline Address& WithCustomerOwnedIpv4Pool(const Aws::String& value) { SetCustomerOwnedIpv4Pool(value); return *this;}
    inline Address& WithCustomerOwnedIpv4Pool(Aws::String&& value) { SetCustomerOwnedIpv4Pool(std::move(value)); return *this;}
    inline Address& WithCustomerOwnedIpv4Pool(const char* value) { SetCustomerOwnedIpv4Pool(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The carrier IP address associated. This option is only available for network
     * interfaces which reside in a subnet in a Wavelength Zone (for example an EC2
     * instance). </p>
     */
    inline const Aws::String& GetCarrierIp() const{ return m_carrierIp; }
    inline bool CarrierIpHasBeenSet() const { return m_carrierIpHasBeenSet; }
    inline void SetCarrierIp(const Aws::String& value) { m_carrierIpHasBeenSet = true; m_carrierIp = value; }
    inline void SetCarrierIp(Aws::String&& value) { m_carrierIpHasBeenSet = true; m_carrierIp = std::move(value); }
    inline void SetCarrierIp(const char* value) { m_carrierIpHasBeenSet = true; m_carrierIp.assign(value); }
    inline Address& WithCarrierIp(const Aws::String& value) { SetCarrierIp(value); return *this;}
    inline Address& WithCarrierIp(Aws::String&& value) { SetCarrierIp(std::move(value)); return *this;}
    inline Address& WithCarrierIp(const char* value) { SetCarrierIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance that the address is associated with (if any).</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline Address& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline Address& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline Address& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elastic IP address.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }
    inline Address& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}
    inline Address& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}
    inline Address& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}
    ///@}
  private:

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    DomainType m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_networkInterfaceOwnerId;
    bool m_networkInterfaceOwnerIdHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_publicIpv4Pool;
    bool m_publicIpv4PoolHasBeenSet = false;

    Aws::String m_networkBorderGroup;
    bool m_networkBorderGroupHasBeenSet = false;

    Aws::String m_customerOwnedIp;
    bool m_customerOwnedIpHasBeenSet = false;

    Aws::String m_customerOwnedIpv4Pool;
    bool m_customerOwnedIpv4PoolHasBeenSet = false;

    Aws::String m_carrierIp;
    bool m_carrierIpHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
