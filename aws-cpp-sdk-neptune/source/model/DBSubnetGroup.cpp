/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/DBSubnetGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Neptune
{
namespace Model
{

DBSubnetGroup::DBSubnetGroup() : 
    m_dBSubnetGroupNameHasBeenSet(false),
    m_dBSubnetGroupDescriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetGroupStatusHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_dBSubnetGroupArnHasBeenSet(false)
{
}

DBSubnetGroup::DBSubnetGroup(const XmlNode& xmlNode) : 
    m_dBSubnetGroupNameHasBeenSet(false),
    m_dBSubnetGroupDescriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetGroupStatusHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_dBSubnetGroupArnHasBeenSet(false)
{
  *this = xmlNode;
}

DBSubnetGroup& DBSubnetGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBSubnetGroupNameNode = resultNode.FirstChild("DBSubnetGroupName");
    if(!dBSubnetGroupNameNode.IsNull())
    {
      m_dBSubnetGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(dBSubnetGroupNameNode.GetText());
      m_dBSubnetGroupNameHasBeenSet = true;
    }
    XmlNode dBSubnetGroupDescriptionNode = resultNode.FirstChild("DBSubnetGroupDescription");
    if(!dBSubnetGroupDescriptionNode.IsNull())
    {
      m_dBSubnetGroupDescription = Aws::Utils::Xml::DecodeEscapedXmlText(dBSubnetGroupDescriptionNode.GetText());
      m_dBSubnetGroupDescriptionHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode subnetGroupStatusNode = resultNode.FirstChild("SubnetGroupStatus");
    if(!subnetGroupStatusNode.IsNull())
    {
      m_subnetGroupStatus = Aws::Utils::Xml::DecodeEscapedXmlText(subnetGroupStatusNode.GetText());
      m_subnetGroupStatusHasBeenSet = true;
    }
    XmlNode subnetsNode = resultNode.FirstChild("Subnets");
    if(!subnetsNode.IsNull())
    {
      XmlNode subnetsMember = subnetsNode.FirstChild("Subnet");
      while(!subnetsMember.IsNull())
      {
        m_subnets.push_back(subnetsMember);
        subnetsMember = subnetsMember.NextNode("Subnet");
      }

      m_subnetsHasBeenSet = true;
    }
    XmlNode dBSubnetGroupArnNode = resultNode.FirstChild("DBSubnetGroupArn");
    if(!dBSubnetGroupArnNode.IsNull())
    {
      m_dBSubnetGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBSubnetGroupArnNode.GetText());
      m_dBSubnetGroupArnHasBeenSet = true;
    }
  }

  return *this;
}

void DBSubnetGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBSubnetGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSubnetGroupName=" << StringUtils::URLEncode(m_dBSubnetGroupName.c_str()) << "&";
  }

  if(m_dBSubnetGroupDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSubnetGroupDescription=" << StringUtils::URLEncode(m_dBSubnetGroupDescription.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_subnetGroupStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetGroupStatus=" << StringUtils::URLEncode(m_subnetGroupStatus.c_str()) << "&";
  }

  if(m_subnetsHasBeenSet)
  {
      unsigned subnetsIdx = 1;
      for(auto& item : m_subnets)
      {
        Aws::StringStream subnetsSs;
        subnetsSs << location << index << locationValue << ".Subnet." << subnetsIdx++;
        item.OutputToStream(oStream, subnetsSs.str().c_str());
      }
  }

  if(m_dBSubnetGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSubnetGroupArn=" << StringUtils::URLEncode(m_dBSubnetGroupArn.c_str()) << "&";
  }

}

void DBSubnetGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBSubnetGroupNameHasBeenSet)
  {
      oStream << location << ".DBSubnetGroupName=" << StringUtils::URLEncode(m_dBSubnetGroupName.c_str()) << "&";
  }
  if(m_dBSubnetGroupDescriptionHasBeenSet)
  {
      oStream << location << ".DBSubnetGroupDescription=" << StringUtils::URLEncode(m_dBSubnetGroupDescription.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_subnetGroupStatusHasBeenSet)
  {
      oStream << location << ".SubnetGroupStatus=" << StringUtils::URLEncode(m_subnetGroupStatus.c_str()) << "&";
  }
  if(m_subnetsHasBeenSet)
  {
      unsigned subnetsIdx = 1;
      for(auto& item : m_subnets)
      {
        Aws::StringStream subnetsSs;
        subnetsSs << location <<  ".Subnet." << subnetsIdx++;
        item.OutputToStream(oStream, subnetsSs.str().c_str());
      }
  }
  if(m_dBSubnetGroupArnHasBeenSet)
  {
      oStream << location << ".DBSubnetGroupArn=" << StringUtils::URLEncode(m_dBSubnetGroupArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Neptune
} // namespace Aws
