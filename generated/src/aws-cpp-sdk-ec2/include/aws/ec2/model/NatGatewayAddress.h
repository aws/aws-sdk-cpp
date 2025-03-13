/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/NatGatewayAddressStatus.h>
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
    AWS_EC2_API NatGatewayAddress() = default;
    AWS_EC2_API NatGatewayAddress(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NatGatewayAddress& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>[Public NAT gateway only] The allocation ID of the Elastic IP address that's
     * associated with the NAT gateway.</p>
     */
    inline const Aws::String& GetAllocationId() const { return m_allocationId; }
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }
    template<typename AllocationIdT = Aws::String>
    void SetAllocationId(AllocationIdT&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::forward<AllocationIdT>(value); }
    template<typename AllocationIdT = Aws::String>
    NatGatewayAddress& WithAllocationId(AllocationIdT&& value) { SetAllocationId(std::forward<AllocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface associated with the NAT gateway.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    NatGatewayAddress& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IP address associated with the NAT gateway.</p>
     */
    inline const Aws::String& GetPrivateIp() const { return m_privateIp; }
    inline bool PrivateIpHasBeenSet() const { return m_privateIpHasBeenSet; }
    template<typename PrivateIpT = Aws::String>
    void SetPrivateIp(PrivateIpT&& value) { m_privateIpHasBeenSet = true; m_privateIp = std::forward<PrivateIpT>(value); }
    template<typename PrivateIpT = Aws::String>
    NatGatewayAddress& WithPrivateIp(PrivateIpT&& value) { SetPrivateIp(std::forward<PrivateIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Public NAT gateway only] The Elastic IP address associated with the NAT
     * gateway.</p>
     */
    inline const Aws::String& GetPublicIp() const { return m_publicIp; }
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }
    template<typename PublicIpT = Aws::String>
    void SetPublicIp(PublicIpT&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::forward<PublicIpT>(value); }
    template<typename PublicIpT = Aws::String>
    NatGatewayAddress& WithPublicIp(PublicIpT&& value) { SetPublicIp(std::forward<PublicIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Public NAT gateway only] The association ID of the Elastic IP address that's
     * associated with the NAT gateway.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    NatGatewayAddress& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines if the IP address is the primary address.</p>
     */
    inline bool GetIsPrimary() const { return m_isPrimary; }
    inline bool IsPrimaryHasBeenSet() const { return m_isPrimaryHasBeenSet; }
    inline void SetIsPrimary(bool value) { m_isPrimaryHasBeenSet = true; m_isPrimary = value; }
    inline NatGatewayAddress& WithIsPrimary(bool value) { SetIsPrimary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address failure message.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    NatGatewayAddress& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address status.</p>
     */
    inline NatGatewayAddressStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(NatGatewayAddressStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline NatGatewayAddress& WithStatus(NatGatewayAddressStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_privateIp;
    bool m_privateIpHasBeenSet = false;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    bool m_isPrimary{false};
    bool m_isPrimaryHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    NatGatewayAddressStatus m_status{NatGatewayAddressStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
