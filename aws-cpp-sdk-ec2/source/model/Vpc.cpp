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

#include <aws/ec2/model/Vpc.h>
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

Vpc::Vpc() : 
    m_cidrBlockHasBeenSet(false),
    m_dhcpOptionsIdHasBeenSet(false),
    m_state(VpcState::NOT_SET),
    m_stateHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_instanceTenancy(Tenancy::NOT_SET),
    m_instanceTenancyHasBeenSet(false),
    m_ipv6CidrBlockAssociationSetHasBeenSet(false),
    m_cidrBlockAssociationSetHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Vpc::Vpc(const XmlNode& xmlNode) : 
    m_cidrBlockHasBeenSet(false),
    m_dhcpOptionsIdHasBeenSet(false),
    m_state(VpcState::NOT_SET),
    m_stateHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_instanceTenancy(Tenancy::NOT_SET),
    m_instanceTenancyHasBeenSet(false),
    m_ipv6CidrBlockAssociationSetHasBeenSet(false),
    m_cidrBlockAssociationSetHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

Vpc& Vpc::operator =(const XmlNode& xmlNode)
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
    XmlNode dhcpOptionsIdNode = resultNode.FirstChild("dhcpOptionsId");
    if(!dhcpOptionsIdNode.IsNull())
    {
      m_dhcpOptionsId = dhcpOptionsIdNode.GetText();
      m_dhcpOptionsIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = VpcStateMapper::GetVpcStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = vpcIdNode.GetText();
      m_vpcIdHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = ownerIdNode.GetText();
      m_ownerIdHasBeenSet = true;
    }
    XmlNode instanceTenancyNode = resultNode.FirstChild("instanceTenancy");
    if(!instanceTenancyNode.IsNull())
    {
      m_instanceTenancy = TenancyMapper::GetTenancyForName(StringUtils::Trim(instanceTenancyNode.GetText().c_str()).c_str());
      m_instanceTenancyHasBeenSet = true;
    }
    XmlNode ipv6CidrBlockAssociationSetNode = resultNode.FirstChild("ipv6CidrBlockAssociationSet");
    if(!ipv6CidrBlockAssociationSetNode.IsNull())
    {
      XmlNode ipv6CidrBlockAssociationSetMember = ipv6CidrBlockAssociationSetNode.FirstChild("item");
      while(!ipv6CidrBlockAssociationSetMember.IsNull())
      {
        m_ipv6CidrBlockAssociationSet.push_back(ipv6CidrBlockAssociationSetMember);
        ipv6CidrBlockAssociationSetMember = ipv6CidrBlockAssociationSetMember.NextNode("item");
      }

      m_ipv6CidrBlockAssociationSetHasBeenSet = true;
    }
    XmlNode cidrBlockAssociationSetNode = resultNode.FirstChild("cidrBlockAssociationSet");
    if(!cidrBlockAssociationSetNode.IsNull())
    {
      XmlNode cidrBlockAssociationSetMember = cidrBlockAssociationSetNode.FirstChild("item");
      while(!cidrBlockAssociationSetMember.IsNull())
      {
        m_cidrBlockAssociationSet.push_back(cidrBlockAssociationSetMember);
        cidrBlockAssociationSetMember = cidrBlockAssociationSetMember.NextNode("item");
      }

      m_cidrBlockAssociationSetHasBeenSet = true;
    }
    XmlNode isDefaultNode = resultNode.FirstChild("isDefault");
    if(!isDefaultNode.IsNull())
    {
      m_isDefault = StringUtils::ConvertToBool(StringUtils::Trim(isDefaultNode.GetText().c_str()).c_str());
      m_isDefaultHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void Vpc::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }

  if(m_dhcpOptionsIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DhcpOptionsId=" << StringUtils::URLEncode(m_dhcpOptionsId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << VpcStateMapper::GetNameForVpcState(m_state) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_instanceTenancyHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceTenancy=" << TenancyMapper::GetNameForTenancy(m_instanceTenancy) << "&";
  }

  if(m_ipv6CidrBlockAssociationSetHasBeenSet)
  {
      unsigned ipv6CidrBlockAssociationSetIdx = 1;
      for(auto& item : m_ipv6CidrBlockAssociationSet)
      {
        Aws::StringStream ipv6CidrBlockAssociationSetSs;
        ipv6CidrBlockAssociationSetSs << location << index << locationValue << ".Ipv6CidrBlockAssociationSet." << ipv6CidrBlockAssociationSetIdx++;
        item.OutputToStream(oStream, ipv6CidrBlockAssociationSetSs.str().c_str());
      }
  }

  if(m_cidrBlockAssociationSetHasBeenSet)
  {
      unsigned cidrBlockAssociationSetIdx = 1;
      for(auto& item : m_cidrBlockAssociationSet)
      {
        Aws::StringStream cidrBlockAssociationSetSs;
        cidrBlockAssociationSetSs << location << index << locationValue << ".CidrBlockAssociationSet." << cidrBlockAssociationSetIdx++;
        item.OutputToStream(oStream, cidrBlockAssociationSetSs.str().c_str());
      }
  }

  if(m_isDefaultHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void Vpc::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cidrBlockHasBeenSet)
  {
      oStream << location << ".CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }
  if(m_dhcpOptionsIdHasBeenSet)
  {
      oStream << location << ".DhcpOptionsId=" << StringUtils::URLEncode(m_dhcpOptionsId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << VpcStateMapper::GetNameForVpcState(m_state) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_instanceTenancyHasBeenSet)
  {
      oStream << location << ".InstanceTenancy=" << TenancyMapper::GetNameForTenancy(m_instanceTenancy) << "&";
  }
  if(m_ipv6CidrBlockAssociationSetHasBeenSet)
  {
      unsigned ipv6CidrBlockAssociationSetIdx = 1;
      for(auto& item : m_ipv6CidrBlockAssociationSet)
      {
        Aws::StringStream ipv6CidrBlockAssociationSetSs;
        ipv6CidrBlockAssociationSetSs << location <<  ".Ipv6CidrBlockAssociationSet." << ipv6CidrBlockAssociationSetIdx++;
        item.OutputToStream(oStream, ipv6CidrBlockAssociationSetSs.str().c_str());
      }
  }
  if(m_cidrBlockAssociationSetHasBeenSet)
  {
      unsigned cidrBlockAssociationSetIdx = 1;
      for(auto& item : m_cidrBlockAssociationSet)
      {
        Aws::StringStream cidrBlockAssociationSetSs;
        cidrBlockAssociationSetSs << location <<  ".CidrBlockAssociationSet." << cidrBlockAssociationSetIdx++;
        item.OutputToStream(oStream, cidrBlockAssociationSetSs.str().c_str());
      }
  }
  if(m_isDefaultHasBeenSet)
  {
      oStream << location << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
