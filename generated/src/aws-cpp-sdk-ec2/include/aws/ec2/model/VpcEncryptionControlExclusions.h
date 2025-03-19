/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/VpcEncryptionControlExclusion.h>
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

  class VpcEncryptionControlExclusions
  {
  public:
    AWS_EC2_API VpcEncryptionControlExclusions() = default;
    AWS_EC2_API VpcEncryptionControlExclusions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcEncryptionControlExclusions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    
    inline const VpcEncryptionControlExclusion& GetInternetGateway() const { return m_internetGateway; }
    inline bool InternetGatewayHasBeenSet() const { return m_internetGatewayHasBeenSet; }
    template<typename InternetGatewayT = VpcEncryptionControlExclusion>
    void SetInternetGateway(InternetGatewayT&& value) { m_internetGatewayHasBeenSet = true; m_internetGateway = std::forward<InternetGatewayT>(value); }
    template<typename InternetGatewayT = VpcEncryptionControlExclusion>
    VpcEncryptionControlExclusions& WithInternetGateway(InternetGatewayT&& value) { SetInternetGateway(std::forward<InternetGatewayT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcEncryptionControlExclusion& GetEgressOnlyInternetGateway() const { return m_egressOnlyInternetGateway; }
    inline bool EgressOnlyInternetGatewayHasBeenSet() const { return m_egressOnlyInternetGatewayHasBeenSet; }
    template<typename EgressOnlyInternetGatewayT = VpcEncryptionControlExclusion>
    void SetEgressOnlyInternetGateway(EgressOnlyInternetGatewayT&& value) { m_egressOnlyInternetGatewayHasBeenSet = true; m_egressOnlyInternetGateway = std::forward<EgressOnlyInternetGatewayT>(value); }
    template<typename EgressOnlyInternetGatewayT = VpcEncryptionControlExclusion>
    VpcEncryptionControlExclusions& WithEgressOnlyInternetGateway(EgressOnlyInternetGatewayT&& value) { SetEgressOnlyInternetGateway(std::forward<EgressOnlyInternetGatewayT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcEncryptionControlExclusion& GetNatGateway() const { return m_natGateway; }
    inline bool NatGatewayHasBeenSet() const { return m_natGatewayHasBeenSet; }
    template<typename NatGatewayT = VpcEncryptionControlExclusion>
    void SetNatGateway(NatGatewayT&& value) { m_natGatewayHasBeenSet = true; m_natGateway = std::forward<NatGatewayT>(value); }
    template<typename NatGatewayT = VpcEncryptionControlExclusion>
    VpcEncryptionControlExclusions& WithNatGateway(NatGatewayT&& value) { SetNatGateway(std::forward<NatGatewayT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcEncryptionControlExclusion& GetVirtualPrivateGateway() const { return m_virtualPrivateGateway; }
    inline bool VirtualPrivateGatewayHasBeenSet() const { return m_virtualPrivateGatewayHasBeenSet; }
    template<typename VirtualPrivateGatewayT = VpcEncryptionControlExclusion>
    void SetVirtualPrivateGateway(VirtualPrivateGatewayT&& value) { m_virtualPrivateGatewayHasBeenSet = true; m_virtualPrivateGateway = std::forward<VirtualPrivateGatewayT>(value); }
    template<typename VirtualPrivateGatewayT = VpcEncryptionControlExclusion>
    VpcEncryptionControlExclusions& WithVirtualPrivateGateway(VirtualPrivateGatewayT&& value) { SetVirtualPrivateGateway(std::forward<VirtualPrivateGatewayT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcEncryptionControlExclusion& GetVpcPeering() const { return m_vpcPeering; }
    inline bool VpcPeeringHasBeenSet() const { return m_vpcPeeringHasBeenSet; }
    template<typename VpcPeeringT = VpcEncryptionControlExclusion>
    void SetVpcPeering(VpcPeeringT&& value) { m_vpcPeeringHasBeenSet = true; m_vpcPeering = std::forward<VpcPeeringT>(value); }
    template<typename VpcPeeringT = VpcEncryptionControlExclusion>
    VpcEncryptionControlExclusions& WithVpcPeering(VpcPeeringT&& value) { SetVpcPeering(std::forward<VpcPeeringT>(value)); return *this;}
    ///@}
  private:

    VpcEncryptionControlExclusion m_internetGateway;
    bool m_internetGatewayHasBeenSet = false;

    VpcEncryptionControlExclusion m_egressOnlyInternetGateway;
    bool m_egressOnlyInternetGatewayHasBeenSet = false;

    VpcEncryptionControlExclusion m_natGateway;
    bool m_natGatewayHasBeenSet = false;

    VpcEncryptionControlExclusion m_virtualPrivateGateway;
    bool m_virtualPrivateGatewayHasBeenSet = false;

    VpcEncryptionControlExclusion m_vpcPeering;
    bool m_vpcPeeringHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
