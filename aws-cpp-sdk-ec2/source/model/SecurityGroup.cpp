/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/SecurityGroup.h>
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

SecurityGroup::SecurityGroup() : 
    m_ownerIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ipPermissionsHasBeenSet(false),
    m_ipPermissionsEgressHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

SecurityGroup::SecurityGroup(const XmlNode& xmlNode) : 
    m_ownerIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ipPermissionsHasBeenSet(false),
    m_ipPermissionsEgressHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

SecurityGroup& SecurityGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = StringUtils::Trim(ownerIdNode.GetText().c_str());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode groupNameNode = resultNode.FirstChild("groupName");
    if(!groupNameNode.IsNull())
    {
      m_groupName = StringUtils::Trim(groupNameNode.GetText().c_str());
      m_groupNameHasBeenSet = true;
    }
    XmlNode groupIdNode = resultNode.FirstChild("groupId");
    if(!groupIdNode.IsNull())
    {
      m_groupId = StringUtils::Trim(groupIdNode.GetText().c_str());
      m_groupIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("groupDescription");
    if(!descriptionNode.IsNull())
    {
      m_description = StringUtils::Trim(descriptionNode.GetText().c_str());
      m_descriptionHasBeenSet = true;
    }
    XmlNode ipPermissionsNode = resultNode.FirstChild("ipPermissions");
    if(!ipPermissionsNode.IsNull())
    {
      XmlNode ipPermissionsMember = ipPermissionsNode.FirstChild("item");
      while(!ipPermissionsMember.IsNull())
      {
        m_ipPermissions.push_back(ipPermissionsMember);
        ipPermissionsMember = ipPermissionsMember.NextNode("item");
      }

      m_ipPermissionsHasBeenSet = true;
    }
    XmlNode ipPermissionsEgressNode = resultNode.FirstChild("ipPermissionsEgress");
    if(!ipPermissionsEgressNode.IsNull())
    {
      XmlNode ipPermissionsEgressMember = ipPermissionsEgressNode.FirstChild("item");
      while(!ipPermissionsEgressMember.IsNull())
      {
        m_ipPermissionsEgress.push_back(ipPermissionsEgressMember);
        ipPermissionsEgressMember = ipPermissionsEgressMember.NextNode("item");
      }

      m_ipPermissionsEgressHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = StringUtils::Trim(vpcIdNode.GetText().c_str());
      m_vpcIdHasBeenSet = true;
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

void SecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_groupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  if(m_groupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_ipPermissionsHasBeenSet)
  {
      unsigned ipPermissionsIdx = 1;
      for(auto& item : m_ipPermissions)
      {
        Aws::StringStream ipPermissionsSs;
        ipPermissionsSs << location << index << locationValue << ".IpPermissions." << ipPermissionsIdx++;
        item.OutputToStream(oStream, ipPermissionsSs.str().c_str());
      }
  }

  if(m_ipPermissionsEgressHasBeenSet)
  {
      unsigned ipPermissionsEgressIdx = 1;
      for(auto& item : m_ipPermissionsEgress)
      {
        Aws::StringStream ipPermissionsEgressSs;
        ipPermissionsEgressSs << location << index << locationValue << ".IpPermissionsEgress." << ipPermissionsEgressIdx++;
        item.OutputToStream(oStream, ipPermissionsEgressSs.str().c_str());
      }
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
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

void SecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_groupNameHasBeenSet)
  {
      oStream << location << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }
  if(m_groupIdHasBeenSet)
  {
      oStream << location << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_ipPermissionsHasBeenSet)
  {
      unsigned ipPermissionsIdx = 1;
      for(auto& item : m_ipPermissions)
      {
        Aws::StringStream ipPermissionsSs;
        ipPermissionsSs << location <<  ".item." << ipPermissionsIdx++;
        item.OutputToStream(oStream, ipPermissionsSs.str().c_str());
      }
  }
  if(m_ipPermissionsEgressHasBeenSet)
  {
      unsigned ipPermissionsEgressIdx = 1;
      for(auto& item : m_ipPermissionsEgress)
      {
        Aws::StringStream ipPermissionsEgressSs;
        ipPermissionsEgressSs << location <<  ".item." << ipPermissionsEgressIdx++;
        item.OutputToStream(oStream, ipPermissionsEgressSs.str().c_str());
      }
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".item." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
