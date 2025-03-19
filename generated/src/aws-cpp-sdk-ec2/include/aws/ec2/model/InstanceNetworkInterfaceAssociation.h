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
    AWS_EC2_API InstanceNetworkInterfaceAssociation() = default;
    AWS_EC2_API InstanceNetworkInterfaceAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceNetworkInterfaceAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The carrier IP address associated with the network interface.</p>
     */
    inline const Aws::String& GetCarrierIp() const { return m_carrierIp; }
    inline bool CarrierIpHasBeenSet() const { return m_carrierIpHasBeenSet; }
    template<typename CarrierIpT = Aws::String>
    void SetCarrierIp(CarrierIpT&& value) { m_carrierIpHasBeenSet = true; m_carrierIp = std::forward<CarrierIpT>(value); }
    template<typename CarrierIpT = Aws::String>
    InstanceNetworkInterfaceAssociation& WithCarrierIp(CarrierIpT&& value) { SetCarrierIp(std::forward<CarrierIpT>(value)); return *this;}
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
    InstanceNetworkInterfaceAssociation& WithCustomerOwnedIp(CustomerOwnedIpT&& value) { SetCustomerOwnedIp(std::forward<CustomerOwnedIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the owner of the Elastic IP address.</p>
     */
    inline const Aws::String& GetIpOwnerId() const { return m_ipOwnerId; }
    inline bool IpOwnerIdHasBeenSet() const { return m_ipOwnerIdHasBeenSet; }
    template<typename IpOwnerIdT = Aws::String>
    void SetIpOwnerId(IpOwnerIdT&& value) { m_ipOwnerIdHasBeenSet = true; m_ipOwnerId = std::forward<IpOwnerIdT>(value); }
    template<typename IpOwnerIdT = Aws::String>
    InstanceNetworkInterfaceAssociation& WithIpOwnerId(IpOwnerIdT&& value) { SetIpOwnerId(std::forward<IpOwnerIdT>(value)); return *this;}
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
    InstanceNetworkInterfaceAssociation& WithPublicDnsName(PublicDnsNameT&& value) { SetPublicDnsName(std::forward<PublicDnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public IP address or Elastic IP address bound to the network
     * interface.</p>
     */
    inline const Aws::String& GetPublicIp() const { return m_publicIp; }
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }
    template<typename PublicIpT = Aws::String>
    void SetPublicIp(PublicIpT&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::forward<PublicIpT>(value); }
    template<typename PublicIpT = Aws::String>
    InstanceNetworkInterfaceAssociation& WithPublicIp(PublicIpT&& value) { SetPublicIp(std::forward<PublicIpT>(value)); return *this;}
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
