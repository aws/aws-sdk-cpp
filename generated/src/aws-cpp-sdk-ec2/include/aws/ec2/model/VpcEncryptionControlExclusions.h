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
    AWS_EC2_API VpcEncryptionControlExclusions();
    AWS_EC2_API VpcEncryptionControlExclusions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcEncryptionControlExclusions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    
    inline const VpcEncryptionControlExclusion& GetInternetGateway() const{ return m_internetGateway; }
    inline bool InternetGatewayHasBeenSet() const { return m_internetGatewayHasBeenSet; }
    inline void SetInternetGateway(const VpcEncryptionControlExclusion& value) { m_internetGatewayHasBeenSet = true; m_internetGateway = value; }
    inline void SetInternetGateway(VpcEncryptionControlExclusion&& value) { m_internetGatewayHasBeenSet = true; m_internetGateway = std::move(value); }
    inline VpcEncryptionControlExclusions& WithInternetGateway(const VpcEncryptionControlExclusion& value) { SetInternetGateway(value); return *this;}
    inline VpcEncryptionControlExclusions& WithInternetGateway(VpcEncryptionControlExclusion&& value) { SetInternetGateway(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcEncryptionControlExclusion& GetEgressOnlyInternetGateway() const{ return m_egressOnlyInternetGateway; }
    inline bool EgressOnlyInternetGatewayHasBeenSet() const { return m_egressOnlyInternetGatewayHasBeenSet; }
    inline void SetEgressOnlyInternetGateway(const VpcEncryptionControlExclusion& value) { m_egressOnlyInternetGatewayHasBeenSet = true; m_egressOnlyInternetGateway = value; }
    inline void SetEgressOnlyInternetGateway(VpcEncryptionControlExclusion&& value) { m_egressOnlyInternetGatewayHasBeenSet = true; m_egressOnlyInternetGateway = std::move(value); }
    inline VpcEncryptionControlExclusions& WithEgressOnlyInternetGateway(const VpcEncryptionControlExclusion& value) { SetEgressOnlyInternetGateway(value); return *this;}
    inline VpcEncryptionControlExclusions& WithEgressOnlyInternetGateway(VpcEncryptionControlExclusion&& value) { SetEgressOnlyInternetGateway(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcEncryptionControlExclusion& GetNatGateway() const{ return m_natGateway; }
    inline bool NatGatewayHasBeenSet() const { return m_natGatewayHasBeenSet; }
    inline void SetNatGateway(const VpcEncryptionControlExclusion& value) { m_natGatewayHasBeenSet = true; m_natGateway = value; }
    inline void SetNatGateway(VpcEncryptionControlExclusion&& value) { m_natGatewayHasBeenSet = true; m_natGateway = std::move(value); }
    inline VpcEncryptionControlExclusions& WithNatGateway(const VpcEncryptionControlExclusion& value) { SetNatGateway(value); return *this;}
    inline VpcEncryptionControlExclusions& WithNatGateway(VpcEncryptionControlExclusion&& value) { SetNatGateway(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcEncryptionControlExclusion& GetVirtualPrivateGateway() const{ return m_virtualPrivateGateway; }
    inline bool VirtualPrivateGatewayHasBeenSet() const { return m_virtualPrivateGatewayHasBeenSet; }
    inline void SetVirtualPrivateGateway(const VpcEncryptionControlExclusion& value) { m_virtualPrivateGatewayHasBeenSet = true; m_virtualPrivateGateway = value; }
    inline void SetVirtualPrivateGateway(VpcEncryptionControlExclusion&& value) { m_virtualPrivateGatewayHasBeenSet = true; m_virtualPrivateGateway = std::move(value); }
    inline VpcEncryptionControlExclusions& WithVirtualPrivateGateway(const VpcEncryptionControlExclusion& value) { SetVirtualPrivateGateway(value); return *this;}
    inline VpcEncryptionControlExclusions& WithVirtualPrivateGateway(VpcEncryptionControlExclusion&& value) { SetVirtualPrivateGateway(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcEncryptionControlExclusion& GetVpcPeering() const{ return m_vpcPeering; }
    inline bool VpcPeeringHasBeenSet() const { return m_vpcPeeringHasBeenSet; }
    inline void SetVpcPeering(const VpcEncryptionControlExclusion& value) { m_vpcPeeringHasBeenSet = true; m_vpcPeering = value; }
    inline void SetVpcPeering(VpcEncryptionControlExclusion&& value) { m_vpcPeeringHasBeenSet = true; m_vpcPeering = std::move(value); }
    inline VpcEncryptionControlExclusions& WithVpcPeering(const VpcEncryptionControlExclusion& value) { SetVpcPeering(value); return *this;}
    inline VpcEncryptionControlExclusions& WithVpcPeering(VpcEncryptionControlExclusion&& value) { SetVpcPeering(std::move(value)); return *this;}
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
