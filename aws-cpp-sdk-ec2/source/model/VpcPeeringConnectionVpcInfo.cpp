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

#include <aws/ec2/model/VpcPeeringConnectionVpcInfo.h>
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

VpcPeeringConnectionVpcInfo::VpcPeeringConnectionVpcInfo() : 
    m_cidrBlockHasBeenSet(false),
    m_ipv6CidrBlockSetHasBeenSet(false),
    m_cidrBlockSetHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_peeringOptionsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

VpcPeeringConnectionVpcInfo::VpcPeeringConnectionVpcInfo(const XmlNode& xmlNode) : 
    m_cidrBlockHasBeenSet(false),
    m_ipv6CidrBlockSetHasBeenSet(false),
    m_cidrBlockSetHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_peeringOptionsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_regionHasBeenSet(false)
{
  *this = xmlNode;
}

VpcPeeringConnectionVpcInfo& VpcPeeringConnectionVpcInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cidrBlockNode = resultNode.FirstChild("cidrBlock");
    if(!cidrBlockNode.IsNull())
    {
      m_cidrBlock = cidrBlockNode.GetText();
      m_cidrBlockHasBeenSet = true;
    }
    XmlNode ipv6CidrBlockSetNode = resultNode.FirstChild("ipv6CidrBlockSet");
    if(!ipv6CidrBlockSetNode.IsNull())
    {
      XmlNode ipv6CidrBlockSetMember = ipv6CidrBlockSetNode.FirstChild("item");
      while(!ipv6CidrBlockSetMember.IsNull())
      {
        m_ipv6CidrBlockSet.push_back(ipv6CidrBlockSetMember);
        ipv6CidrBlockSetMember = ipv6CidrBlockSetMember.NextNode("item");
      }

      m_ipv6CidrBlockSetHasBeenSet = true;
    }
    XmlNode cidrBlockSetNode = resultNode.FirstChild("cidrBlockSet");
    if(!cidrBlockSetNode.IsNull())
    {
      XmlNode cidrBlockSetMember = cidrBlockSetNode.FirstChild("item");
      while(!cidrBlockSetMember.IsNull())
      {
        m_cidrBlockSet.push_back(cidrBlockSetMember);
        cidrBlockSetMember = cidrBlockSetMember.NextNode("item");
      }

      m_cidrBlockSetHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = ownerIdNode.GetText();
      m_ownerIdHasBeenSet = true;
    }
    XmlNode peeringOptionsNode = resultNode.FirstChild("peeringOptions");
    if(!peeringOptionsNode.IsNull())
    {
      m_peeringOptions = peeringOptionsNode;
      m_peeringOptionsHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = vpcIdNode.GetText();
      m_vpcIdHasBeenSet = true;
    }
    XmlNode regionNode = resultNode.FirstChild("region");
    if(!regionNode.IsNull())
    {
      m_region = regionNode.GetText();
      m_regionHasBeenSet = true;
    }
  }

  return *this;
}

void VpcPeeringConnectionVpcInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }

  if(m_ipv6CidrBlockSetHasBeenSet)
  {
      unsigned ipv6CidrBlockSetIdx = 1;
      for(auto& item : m_ipv6CidrBlockSet)
      {
        Aws::StringStream ipv6CidrBlockSetSs;
        ipv6CidrBlockSetSs << location << index << locationValue << ".Ipv6CidrBlockSet." << ipv6CidrBlockSetIdx++;
        item.OutputToStream(oStream, ipv6CidrBlockSetSs.str().c_str());
      }
  }

  if(m_cidrBlockSetHasBeenSet)
  {
      unsigned cidrBlockSetIdx = 1;
      for(auto& item : m_cidrBlockSet)
      {
        Aws::StringStream cidrBlockSetSs;
        cidrBlockSetSs << location << index << locationValue << ".CidrBlockSet." << cidrBlockSetIdx++;
        item.OutputToStream(oStream, cidrBlockSetSs.str().c_str());
      }
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_peeringOptionsHasBeenSet)
  {
      Aws::StringStream peeringOptionsLocationAndMemberSs;
      peeringOptionsLocationAndMemberSs << location << index << locationValue << ".PeeringOptions";
      m_peeringOptions.OutputToStream(oStream, peeringOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_regionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Region=" << StringUtils::URLEncode(m_region.c_str()) << "&";
  }

}

void VpcPeeringConnectionVpcInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cidrBlockHasBeenSet)
  {
      oStream << location << ".CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }
  if(m_ipv6CidrBlockSetHasBeenSet)
  {
      unsigned ipv6CidrBlockSetIdx = 1;
      for(auto& item : m_ipv6CidrBlockSet)
      {
        Aws::StringStream ipv6CidrBlockSetSs;
        ipv6CidrBlockSetSs << location <<  ".Ipv6CidrBlockSet." << ipv6CidrBlockSetIdx++;
        item.OutputToStream(oStream, ipv6CidrBlockSetSs.str().c_str());
      }
  }
  if(m_cidrBlockSetHasBeenSet)
  {
      unsigned cidrBlockSetIdx = 1;
      for(auto& item : m_cidrBlockSet)
      {
        Aws::StringStream cidrBlockSetSs;
        cidrBlockSetSs << location <<  ".CidrBlockSet." << cidrBlockSetIdx++;
        item.OutputToStream(oStream, cidrBlockSetSs.str().c_str());
      }
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_peeringOptionsHasBeenSet)
  {
      Aws::String peeringOptionsLocationAndMember(location);
      peeringOptionsLocationAndMember += ".PeeringOptions";
      m_peeringOptions.OutputToStream(oStream, peeringOptionsLocationAndMember.c_str());
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_regionHasBeenSet)
  {
      oStream << location << ".Region=" << StringUtils::URLEncode(m_region.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
