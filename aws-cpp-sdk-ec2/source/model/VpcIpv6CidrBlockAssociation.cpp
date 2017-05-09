/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/VpcIpv6CidrBlockAssociation.h>
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

VpcIpv6CidrBlockAssociation::VpcIpv6CidrBlockAssociation() : 
    m_ipv6CidrBlockHasBeenSet(false),
    m_ipv6CidrBlockStateHasBeenSet(false),
    m_associationIdHasBeenSet(false)
{
}

VpcIpv6CidrBlockAssociation::VpcIpv6CidrBlockAssociation(const XmlNode& xmlNode) : 
    m_ipv6CidrBlockHasBeenSet(false),
    m_ipv6CidrBlockStateHasBeenSet(false),
    m_associationIdHasBeenSet(false)
{
  *this = xmlNode;
}

VpcIpv6CidrBlockAssociation& VpcIpv6CidrBlockAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ipv6CidrBlockNode = resultNode.FirstChild("ipv6CidrBlock");
    if(!ipv6CidrBlockNode.IsNull())
    {
      m_ipv6CidrBlock = StringUtils::Trim(ipv6CidrBlockNode.GetText().c_str());
      m_ipv6CidrBlockHasBeenSet = true;
    }
    XmlNode ipv6CidrBlockStateNode = resultNode.FirstChild("ipv6CidrBlockState");
    if(!ipv6CidrBlockStateNode.IsNull())
    {
      m_ipv6CidrBlockState = ipv6CidrBlockStateNode;
      m_ipv6CidrBlockStateHasBeenSet = true;
    }
    XmlNode associationIdNode = resultNode.FirstChild("associationId");
    if(!associationIdNode.IsNull())
    {
      m_associationId = StringUtils::Trim(associationIdNode.GetText().c_str());
      m_associationIdHasBeenSet = true;
    }
  }

  return *this;
}

void VpcIpv6CidrBlockAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ipv6CidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6CidrBlock=" << StringUtils::URLEncode(m_ipv6CidrBlock.c_str()) << "&";
  }

  if(m_ipv6CidrBlockStateHasBeenSet)
  {
      Aws::StringStream ipv6CidrBlockStateLocationAndMemberSs;
      ipv6CidrBlockStateLocationAndMemberSs << location << index << locationValue << ".Ipv6CidrBlockState";
      m_ipv6CidrBlockState.OutputToStream(oStream, ipv6CidrBlockStateLocationAndMemberSs.str().c_str());
  }

  if(m_associationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }

}

void VpcIpv6CidrBlockAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ipv6CidrBlockHasBeenSet)
  {
      oStream << location << ".Ipv6CidrBlock=" << StringUtils::URLEncode(m_ipv6CidrBlock.c_str()) << "&";
  }
  if(m_ipv6CidrBlockStateHasBeenSet)
  {
      Aws::String ipv6CidrBlockStateLocationAndMember(location);
      ipv6CidrBlockStateLocationAndMember += ".Ipv6CidrBlockState";
      m_ipv6CidrBlockState.OutputToStream(oStream, ipv6CidrBlockStateLocationAndMember.c_str());
  }
  if(m_associationIdHasBeenSet)
  {
      oStream << location << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
