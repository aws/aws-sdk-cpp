/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpcEncryptionControlExclusions.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

VpcEncryptionControlExclusions::VpcEncryptionControlExclusions(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

VpcEncryptionControlExclusions& VpcEncryptionControlExclusions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode internetGatewayNode = resultNode.FirstChild("internetGateway");
    if(!internetGatewayNode.IsNull())
    {
      m_internetGateway = internetGatewayNode;
      m_internetGatewayHasBeenSet = true;
    }
    XmlNode egressOnlyInternetGatewayNode = resultNode.FirstChild("egressOnlyInternetGateway");
    if(!egressOnlyInternetGatewayNode.IsNull())
    {
      m_egressOnlyInternetGateway = egressOnlyInternetGatewayNode;
      m_egressOnlyInternetGatewayHasBeenSet = true;
    }
    XmlNode natGatewayNode = resultNode.FirstChild("natGateway");
    if(!natGatewayNode.IsNull())
    {
      m_natGateway = natGatewayNode;
      m_natGatewayHasBeenSet = true;
    }
    XmlNode virtualPrivateGatewayNode = resultNode.FirstChild("virtualPrivateGateway");
    if(!virtualPrivateGatewayNode.IsNull())
    {
      m_virtualPrivateGateway = virtualPrivateGatewayNode;
      m_virtualPrivateGatewayHasBeenSet = true;
    }
    XmlNode vpcPeeringNode = resultNode.FirstChild("vpcPeering");
    if(!vpcPeeringNode.IsNull())
    {
      m_vpcPeering = vpcPeeringNode;
      m_vpcPeeringHasBeenSet = true;
    }
  }

  return *this;
}

void VpcEncryptionControlExclusions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_internetGatewayHasBeenSet)
  {
      Aws::StringStream internetGatewayLocationAndMemberSs;
      internetGatewayLocationAndMemberSs << location << index << locationValue << ".InternetGateway";
      m_internetGateway.OutputToStream(oStream, internetGatewayLocationAndMemberSs.str().c_str());
  }

  if(m_egressOnlyInternetGatewayHasBeenSet)
  {
      Aws::StringStream egressOnlyInternetGatewayLocationAndMemberSs;
      egressOnlyInternetGatewayLocationAndMemberSs << location << index << locationValue << ".EgressOnlyInternetGateway";
      m_egressOnlyInternetGateway.OutputToStream(oStream, egressOnlyInternetGatewayLocationAndMemberSs.str().c_str());
  }

  if(m_natGatewayHasBeenSet)
  {
      Aws::StringStream natGatewayLocationAndMemberSs;
      natGatewayLocationAndMemberSs << location << index << locationValue << ".NatGateway";
      m_natGateway.OutputToStream(oStream, natGatewayLocationAndMemberSs.str().c_str());
  }

  if(m_virtualPrivateGatewayHasBeenSet)
  {
      Aws::StringStream virtualPrivateGatewayLocationAndMemberSs;
      virtualPrivateGatewayLocationAndMemberSs << location << index << locationValue << ".VirtualPrivateGateway";
      m_virtualPrivateGateway.OutputToStream(oStream, virtualPrivateGatewayLocationAndMemberSs.str().c_str());
  }

  if(m_vpcPeeringHasBeenSet)
  {
      Aws::StringStream vpcPeeringLocationAndMemberSs;
      vpcPeeringLocationAndMemberSs << location << index << locationValue << ".VpcPeering";
      m_vpcPeering.OutputToStream(oStream, vpcPeeringLocationAndMemberSs.str().c_str());
  }

}

void VpcEncryptionControlExclusions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_internetGatewayHasBeenSet)
  {
      Aws::String internetGatewayLocationAndMember(location);
      internetGatewayLocationAndMember += ".InternetGateway";
      m_internetGateway.OutputToStream(oStream, internetGatewayLocationAndMember.c_str());
  }
  if(m_egressOnlyInternetGatewayHasBeenSet)
  {
      Aws::String egressOnlyInternetGatewayLocationAndMember(location);
      egressOnlyInternetGatewayLocationAndMember += ".EgressOnlyInternetGateway";
      m_egressOnlyInternetGateway.OutputToStream(oStream, egressOnlyInternetGatewayLocationAndMember.c_str());
  }
  if(m_natGatewayHasBeenSet)
  {
      Aws::String natGatewayLocationAndMember(location);
      natGatewayLocationAndMember += ".NatGateway";
      m_natGateway.OutputToStream(oStream, natGatewayLocationAndMember.c_str());
  }
  if(m_virtualPrivateGatewayHasBeenSet)
  {
      Aws::String virtualPrivateGatewayLocationAndMember(location);
      virtualPrivateGatewayLocationAndMember += ".VirtualPrivateGateway";
      m_virtualPrivateGateway.OutputToStream(oStream, virtualPrivateGatewayLocationAndMember.c_str());
  }
  if(m_vpcPeeringHasBeenSet)
  {
      Aws::String vpcPeeringLocationAndMember(location);
      vpcPeeringLocationAndMember += ".VpcPeering";
      m_vpcPeering.OutputToStream(oStream, vpcPeeringLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
