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

#include <aws/ec2/model/StaleSecurityGroup.h>
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

StaleSecurityGroup::StaleSecurityGroup() : 
    m_descriptionHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_staleIpPermissionsHasBeenSet(false),
    m_staleIpPermissionsEgressHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

StaleSecurityGroup::StaleSecurityGroup(const XmlNode& xmlNode) : 
    m_descriptionHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_staleIpPermissionsHasBeenSet(false),
    m_staleIpPermissionsEgressHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = xmlNode;
}

StaleSecurityGroup& StaleSecurityGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode groupIdNode = resultNode.FirstChild("groupId");
    if(!groupIdNode.IsNull())
    {
      m_groupId = groupIdNode.GetText();
      m_groupIdHasBeenSet = true;
    }
    XmlNode groupNameNode = resultNode.FirstChild("groupName");
    if(!groupNameNode.IsNull())
    {
      m_groupName = groupNameNode.GetText();
      m_groupNameHasBeenSet = true;
    }
    XmlNode staleIpPermissionsNode = resultNode.FirstChild("staleIpPermissions");
    if(!staleIpPermissionsNode.IsNull())
    {
      XmlNode staleIpPermissionsMember = staleIpPermissionsNode.FirstChild("item");
      while(!staleIpPermissionsMember.IsNull())
      {
        m_staleIpPermissions.push_back(staleIpPermissionsMember);
        staleIpPermissionsMember = staleIpPermissionsMember.NextNode("item");
      }

      m_staleIpPermissionsHasBeenSet = true;
    }
    XmlNode staleIpPermissionsEgressNode = resultNode.FirstChild("staleIpPermissionsEgress");
    if(!staleIpPermissionsEgressNode.IsNull())
    {
      XmlNode staleIpPermissionsEgressMember = staleIpPermissionsEgressNode.FirstChild("item");
      while(!staleIpPermissionsEgressMember.IsNull())
      {
        m_staleIpPermissionsEgress.push_back(staleIpPermissionsEgressMember);
        staleIpPermissionsEgressMember = staleIpPermissionsEgressMember.NextNode("item");
      }

      m_staleIpPermissionsEgressHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = vpcIdNode.GetText();
      m_vpcIdHasBeenSet = true;
    }
  }

  return *this;
}

void StaleSecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_groupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }

  if(m_groupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  if(m_staleIpPermissionsHasBeenSet)
  {
      unsigned staleIpPermissionsIdx = 1;
      for(auto& item : m_staleIpPermissions)
      {
        Aws::StringStream staleIpPermissionsSs;
        staleIpPermissionsSs << location << index << locationValue << ".StaleIpPermissions." << staleIpPermissionsIdx++;
        item.OutputToStream(oStream, staleIpPermissionsSs.str().c_str());
      }
  }

  if(m_staleIpPermissionsEgressHasBeenSet)
  {
      unsigned staleIpPermissionsEgressIdx = 1;
      for(auto& item : m_staleIpPermissionsEgress)
      {
        Aws::StringStream staleIpPermissionsEgressSs;
        staleIpPermissionsEgressSs << location << index << locationValue << ".StaleIpPermissionsEgress." << staleIpPermissionsEgressIdx++;
        item.OutputToStream(oStream, staleIpPermissionsEgressSs.str().c_str());
      }
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

}

void StaleSecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_groupIdHasBeenSet)
  {
      oStream << location << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }
  if(m_groupNameHasBeenSet)
  {
      oStream << location << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }
  if(m_staleIpPermissionsHasBeenSet)
  {
      unsigned staleIpPermissionsIdx = 1;
      for(auto& item : m_staleIpPermissions)
      {
        Aws::StringStream staleIpPermissionsSs;
        staleIpPermissionsSs << location <<  ".StaleIpPermissions." << staleIpPermissionsIdx++;
        item.OutputToStream(oStream, staleIpPermissionsSs.str().c_str());
      }
  }
  if(m_staleIpPermissionsEgressHasBeenSet)
  {
      unsigned staleIpPermissionsEgressIdx = 1;
      for(auto& item : m_staleIpPermissionsEgress)
      {
        Aws::StringStream staleIpPermissionsEgressSs;
        staleIpPermissionsEgressSs << location <<  ".StaleIpPermissionsEgress." << staleIpPermissionsEgressIdx++;
        item.OutputToStream(oStream, staleIpPermissionsEgressSs.str().c_str());
      }
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
