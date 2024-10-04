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
    AWS_EC2_API AllocateAddressResponse();
    AWS_EC2_API AllocateAddressResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AllocateAddressResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID that represents the allocation of the Elastic IP address.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }
    inline void SetAllocationId(const Aws::String& value) { m_allocationId = value; }
    inline void SetAllocationId(Aws::String&& value) { m_allocationId = std::move(value); }
    inline void SetAllocationId(const char* value) { m_allocationId.assign(value); }
    inline AllocateAddressResponse& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}
    inline AllocateAddressResponse& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}
    inline AllocateAddressResponse& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an address pool.</p>
     */
    inline const Aws::String& GetPublicIpv4Pool() const{ return m_publicIpv4Pool; }
    inline void SetPublicIpv4Pool(const Aws::String& value) { m_publicIpv4Pool = value; }
    inline void SetPublicIpv4Pool(Aws::String&& value) { m_publicIpv4Pool = std::move(value); }
    inline void SetPublicIpv4Pool(const char* value) { m_publicIpv4Pool.assign(value); }
    inline AllocateAddressResponse& WithPublicIpv4Pool(const Aws::String& value) { SetPublicIpv4Pool(value); return *this;}
    inline AllocateAddressResponse& WithPublicIpv4Pool(Aws::String&& value) { SetPublicIpv4Pool(std::move(value)); return *this;}
    inline AllocateAddressResponse& WithPublicIpv4Pool(const char* value) { SetPublicIpv4Pool(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of Availability Zones, Local Zones, or Wavelength Zones from which
     * Amazon Web Services advertises IP addresses.</p>
     */
    inline const Aws::String& GetNetworkBorderGroup() const{ return m_networkBorderGroup; }
    inline void SetNetworkBorderGroup(const Aws::String& value) { m_networkBorderGroup = value; }
    inline void SetNetworkBorderGroup(Aws::String&& value) { m_networkBorderGroup = std::move(value); }
    inline void SetNetworkBorderGroup(const char* value) { m_networkBorderGroup.assign(value); }
    inline AllocateAddressResponse& WithNetworkBorderGroup(const Aws::String& value) { SetNetworkBorderGroup(value); return *this;}
    inline AllocateAddressResponse& WithNetworkBorderGroup(Aws::String&& value) { SetNetworkBorderGroup(std::move(value)); return *this;}
    inline AllocateAddressResponse& WithNetworkBorderGroup(const char* value) { SetNetworkBorderGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network (<code>vpc</code>).</p>
     */
    inline const DomainType& GetDomain() const{ return m_domain; }
    inline void SetDomain(const DomainType& value) { m_domain = value; }
    inline void SetDomain(DomainType&& value) { m_domain = std::move(value); }
    inline AllocateAddressResponse& WithDomain(const DomainType& value) { SetDomain(value); return *this;}
    inline AllocateAddressResponse& WithDomain(DomainType&& value) { SetDomain(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-owned IP address.</p>
     */
    inline const Aws::String& GetCustomerOwnedIp() const{ return m_customerOwnedIp; }
    inline void SetCustomerOwnedIp(const Aws::String& value) { m_customerOwnedIp = value; }
    inline void SetCustomerOwnedIp(Aws::String&& value) { m_customerOwnedIp = std::move(value); }
    inline void SetCustomerOwnedIp(const char* value) { m_customerOwnedIp.assign(value); }
    inline AllocateAddressResponse& WithCustomerOwnedIp(const Aws::String& value) { SetCustomerOwnedIp(value); return *this;}
    inline AllocateAddressResponse& WithCustomerOwnedIp(Aws::String&& value) { SetCustomerOwnedIp(std::move(value)); return *this;}
    inline AllocateAddressResponse& WithCustomerOwnedIp(const char* value) { SetCustomerOwnedIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the customer-owned address pool.</p>
     */
    inline const Aws::String& GetCustomerOwnedIpv4Pool() const{ return m_customerOwnedIpv4Pool; }
    inline void SetCustomerOwnedIpv4Pool(const Aws::String& value) { m_customerOwnedIpv4Pool = value; }
    inline void SetCustomerOwnedIpv4Pool(Aws::String&& value) { m_customerOwnedIpv4Pool = std::move(value); }
    inline void SetCustomerOwnedIpv4Pool(const char* value) { m_customerOwnedIpv4Pool.assign(value); }
    inline AllocateAddressResponse& WithCustomerOwnedIpv4Pool(const Aws::String& value) { SetCustomerOwnedIpv4Pool(value); return *this;}
    inline AllocateAddressResponse& WithCustomerOwnedIpv4Pool(Aws::String&& value) { SetCustomerOwnedIpv4Pool(std::move(value)); return *this;}
    inline AllocateAddressResponse& WithCustomerOwnedIpv4Pool(const char* value) { SetCustomerOwnedIpv4Pool(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The carrier IP address. This option is only available for network interfaces
     * that reside in a subnet in a Wavelength Zone.</p>
     */
    inline const Aws::String& GetCarrierIp() const{ return m_carrierIp; }
    inline void SetCarrierIp(const Aws::String& value) { m_carrierIp = value; }
    inline void SetCarrierIp(Aws::String&& value) { m_carrierIp = std::move(value); }
    inline void SetCarrierIp(const char* value) { m_carrierIp.assign(value); }
    inline AllocateAddressResponse& WithCarrierIp(const Aws::String& value) { SetCarrierIp(value); return *this;}
    inline AllocateAddressResponse& WithCarrierIp(Aws::String&& value) { SetCarrierIp(std::move(value)); return *this;}
    inline AllocateAddressResponse& WithCarrierIp(const char* value) { SetCarrierIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elastic IP address.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }
    inline void SetPublicIp(const Aws::String& value) { m_publicIp = value; }
    inline void SetPublicIp(Aws::String&& value) { m_publicIp = std::move(value); }
    inline void SetPublicIp(const char* value) { m_publicIp.assign(value); }
    inline AllocateAddressResponse& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}
    inline AllocateAddressResponse& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}
    inline AllocateAddressResponse& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline AllocateAddressResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline AllocateAddressResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_allocationId;

    Aws::String m_publicIpv4Pool;

    Aws::String m_networkBorderGroup;

    DomainType m_domain;

    Aws::String m_customerOwnedIp;

    Aws::String m_customerOwnedIpv4Pool;

    Aws::String m_carrierIp;

    Aws::String m_publicIp;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
