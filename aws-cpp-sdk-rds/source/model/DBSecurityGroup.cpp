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

#include <aws/rds/model/DBSecurityGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

DBSecurityGroup::DBSecurityGroup() : 
    m_ownerIdHasBeenSet(false),
    m_dBSecurityGroupNameHasBeenSet(false),
    m_dBSecurityGroupDescriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_eC2SecurityGroupsHasBeenSet(false),
    m_iPRangesHasBeenSet(false),
    m_dBSecurityGroupArnHasBeenSet(false)
{
}

DBSecurityGroup::DBSecurityGroup(const XmlNode& xmlNode) : 
    m_ownerIdHasBeenSet(false),
    m_dBSecurityGroupNameHasBeenSet(false),
    m_dBSecurityGroupDescriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_eC2SecurityGroupsHasBeenSet(false),
    m_iPRangesHasBeenSet(false),
    m_dBSecurityGroupArnHasBeenSet(false)
{
  *this = xmlNode;
}

DBSecurityGroup& DBSecurityGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ownerIdNode = resultNode.FirstChild("OwnerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = ownerIdNode.GetText();
      m_ownerIdHasBeenSet = true;
    }
    XmlNode dBSecurityGroupNameNode = resultNode.FirstChild("DBSecurityGroupName");
    if(!dBSecurityGroupNameNode.IsNull())
    {
      m_dBSecurityGroupName = dBSecurityGroupNameNode.GetText();
      m_dBSecurityGroupNameHasBeenSet = true;
    }
    XmlNode dBSecurityGroupDescriptionNode = resultNode.FirstChild("DBSecurityGroupDescription");
    if(!dBSecurityGroupDescriptionNode.IsNull())
    {
      m_dBSecurityGroupDescription = dBSecurityGroupDescriptionNode.GetText();
      m_dBSecurityGroupDescriptionHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = vpcIdNode.GetText();
      m_vpcIdHasBeenSet = true;
    }
    XmlNode eC2SecurityGroupsNode = resultNode.FirstChild("EC2SecurityGroups");
    if(!eC2SecurityGroupsNode.IsNull())
    {
      XmlNode eC2SecurityGroupsMember = eC2SecurityGroupsNode.FirstChild("EC2SecurityGroup");
      while(!eC2SecurityGroupsMember.IsNull())
      {
        m_eC2SecurityGroups.push_back(eC2SecurityGroupsMember);
        eC2SecurityGroupsMember = eC2SecurityGroupsMember.NextNode("EC2SecurityGroup");
      }

      m_eC2SecurityGroupsHasBeenSet = true;
    }
    XmlNode iPRangesNode = resultNode.FirstChild("IPRanges");
    if(!iPRangesNode.IsNull())
    {
      XmlNode iPRangesMember = iPRangesNode.FirstChild("IPRange");
      while(!iPRangesMember.IsNull())
      {
        m_iPRanges.push_back(iPRangesMember);
        iPRangesMember = iPRangesMember.NextNode("IPRange");
      }

      m_iPRangesHasBeenSet = true;
    }
    XmlNode dBSecurityGroupArnNode = resultNode.FirstChild("DBSecurityGroupArn");
    if(!dBSecurityGroupArnNode.IsNull())
    {
      m_dBSecurityGroupArn = dBSecurityGroupArnNode.GetText();
      m_dBSecurityGroupArnHasBeenSet = true;
    }
  }

  return *this;
}

void DBSecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_dBSecurityGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSecurityGroupName=" << StringUtils::URLEncode(m_dBSecurityGroupName.c_str()) << "&";
  }

  if(m_dBSecurityGroupDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSecurityGroupDescription=" << StringUtils::URLEncode(m_dBSecurityGroupDescription.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_eC2SecurityGroupsHasBeenSet)
  {
      unsigned eC2SecurityGroupsIdx = 1;
      for(auto& item : m_eC2SecurityGroups)
      {
        Aws::StringStream eC2SecurityGroupsSs;
        eC2SecurityGroupsSs << location << index << locationValue << ".EC2SecurityGroup." << eC2SecurityGroupsIdx++;
        item.OutputToStream(oStream, eC2SecurityGroupsSs.str().c_str());
      }
  }

  if(m_iPRangesHasBeenSet)
  {
      unsigned iPRangesIdx = 1;
      for(auto& item : m_iPRanges)
      {
        Aws::StringStream iPRangesSs;
        iPRangesSs << location << index << locationValue << ".IPRange." << iPRangesIdx++;
        item.OutputToStream(oStream, iPRangesSs.str().c_str());
      }
  }

  if(m_dBSecurityGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSecurityGroupArn=" << StringUtils::URLEncode(m_dBSecurityGroupArn.c_str()) << "&";
  }

}

void DBSecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_dBSecurityGroupNameHasBeenSet)
  {
      oStream << location << ".DBSecurityGroupName=" << StringUtils::URLEncode(m_dBSecurityGroupName.c_str()) << "&";
  }
  if(m_dBSecurityGroupDescriptionHasBeenSet)
  {
      oStream << location << ".DBSecurityGroupDescription=" << StringUtils::URLEncode(m_dBSecurityGroupDescription.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_eC2SecurityGroupsHasBeenSet)
  {
      unsigned eC2SecurityGroupsIdx = 1;
      for(auto& item : m_eC2SecurityGroups)
      {
        Aws::StringStream eC2SecurityGroupsSs;
        eC2SecurityGroupsSs << location <<  ".EC2SecurityGroup." << eC2SecurityGroupsIdx++;
        item.OutputToStream(oStream, eC2SecurityGroupsSs.str().c_str());
      }
  }
  if(m_iPRangesHasBeenSet)
  {
      unsigned iPRangesIdx = 1;
      for(auto& item : m_iPRanges)
      {
        Aws::StringStream iPRangesSs;
        iPRangesSs << location <<  ".IPRange." << iPRangesIdx++;
        item.OutputToStream(oStream, iPRangesSs.str().c_str());
      }
  }
  if(m_dBSecurityGroupArnHasBeenSet)
  {
      oStream << location << ".DBSecurityGroupArn=" << StringUtils::URLEncode(m_dBSecurityGroupArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
