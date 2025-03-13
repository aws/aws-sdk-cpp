/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/DomainType.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class AllocateAddressResponse
  {
  public:
    AWS_EC2_API AllocateAddressResponse() = default;
    AWS_EC2_API AllocateAddressResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AllocateAddressResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID that represents the allocation of the Elastic IP address.</p>
     */
    inline const Aws::String& GetAllocationId() const { return m_allocationId; }
    template<typename AllocationIdT = Aws::String>
    void SetAllocationId(AllocationIdT&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::forward<AllocationIdT>(value); }
    template<typename AllocationIdT = Aws::String>
    AllocateAddressResponse& WithAllocationId(AllocationIdT&& value) { SetAllocationId(std::forward<AllocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an address pool.</p>
     */
    inline const Aws::String& GetPublicIpv4Pool() const { return m_publicIpv4Pool; }
    template<typename PublicIpv4PoolT = Aws::String>
    void SetPublicIpv4Pool(PublicIpv4PoolT&& value) { m_publicIpv4PoolHasBeenSet = true; m_publicIpv4Pool = std::forward<PublicIpv4PoolT>(value); }
    template<typename PublicIpv4PoolT = Aws::String>
    AllocateAddressResponse& WithPublicIpv4Pool(PublicIpv4PoolT&& value) { SetPublicIpv4Pool(std::forward<PublicIpv4PoolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of Availability Zones, Local Zones, or Wavelength Zones from which
     * Amazon Web Services advertises IP addresses.</p>
     */
    inline const Aws::String& GetNetworkBorderGroup() const { return m_networkBorderGroup; }
    template<typename NetworkBorderGroupT = Aws::String>
    void SetNetworkBorderGroup(NetworkBorderGroupT&& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = std::forward<NetworkBorderGroupT>(value); }
    template<typename NetworkBorderGroupT = Aws::String>
    AllocateAddressResponse& WithNetworkBorderGroup(NetworkBorderGroupT&& value) { SetNetworkBorderGroup(std::forward<NetworkBorderGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network (<code>vpc</code>).</p>
     */
    inline DomainType GetDomain() const { return m_domain; }
    inline void SetDomain(DomainType value) { m_domainHasBeenSet = true; m_domain = value; }
    inline AllocateAddressResponse& WithDomain(DomainType value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-owned IP address.</p>
     */
    inline const Aws::String& GetCustomerOwnedIp() const { return m_customerOwnedIp; }
    template<typename CustomerOwnedIpT = Aws::String>
    void SetCustomerOwnedIp(CustomerOwnedIpT&& value) { m_customerOwnedIpHasBeenSet = true; m_customerOwnedIp = std::forward<CustomerOwnedIpT>(value); }
    template<typename CustomerOwnedIpT = Aws::String>
    AllocateAddressResponse& WithCustomerOwnedIp(CustomerOwnedIpT&& value) { SetCustomerOwnedIp(std::forward<CustomerOwnedIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the customer-owned address pool.</p>
     */
    inline const Aws::String& GetCustomerOwnedIpv4Pool() const { return m_customerOwnedIpv4Pool; }
    template<typename CustomerOwnedIpv4PoolT = Aws::String>
    void SetCustomerOwnedIpv4Pool(CustomerOwnedIpv4PoolT&& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = std::forward<CustomerOwnedIpv4PoolT>(value); }
    template<typename CustomerOwnedIpv4PoolT = Aws::String>
    AllocateAddressResponse& WithCustomerOwnedIpv4Pool(CustomerOwnedIpv4PoolT&& value) { SetCustomerOwnedIpv4Pool(std::forward<CustomerOwnedIpv4PoolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The carrier IP address. This option is only available for network interfaces
     * that reside in a subnet in a Wavelength Zone.</p>
     */
    inline const Aws::String& GetCarrierIp() const { return m_carrierIp; }
    template<typename CarrierIpT = Aws::String>
    void SetCarrierIp(CarrierIpT&& value) { m_carrierIpHasBeenSet = true; m_carrierIp = std::forward<CarrierIpT>(value); }
    template<typename CarrierIpT = Aws::String>
    AllocateAddressResponse& WithCarrierIp(CarrierIpT&& value) { SetCarrierIp(std::forward<CarrierIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elastic IP address.</p>
     */
    inline const Aws::String& GetPublicIp() const { return m_publicIp; }
    template<typename PublicIpT = Aws::String>
    void SetPublicIp(PublicIpT&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::forward<PublicIpT>(value); }
    template<typename PublicIpT = Aws::String>
    AllocateAddressResponse& WithPublicIp(PublicIpT&& value) { SetPublicIp(std::forward<PublicIpT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AllocateAddressResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet = false;

    Aws::String m_publicIpv4Pool;
    bool m_publicIpv4PoolHasBeenSet = false;

    Aws::String m_networkBorderGroup;
    bool m_networkBorderGroupHasBeenSet = false;

    DomainType m_domain{DomainType::NOT_SET};
    bool m_domainHasBeenSet = false;

    Aws::String m_customerOwnedIp;
    bool m_customerOwnedIpHasBeenSet = false;

    Aws::String m_customerOwnedIpv4Pool;
    bool m_customerOwnedIpv4PoolHasBeenSet = false;

    Aws::String m_carrierIp;
    bool m_carrierIpHasBeenSet = false;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
