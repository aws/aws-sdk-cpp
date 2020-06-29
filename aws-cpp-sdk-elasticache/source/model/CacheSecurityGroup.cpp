/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CacheSecurityGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

CacheSecurityGroup::CacheSecurityGroup() : 
    m_ownerIdHasBeenSet(false),
    m_cacheSecurityGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eC2SecurityGroupsHasBeenSet(false),
    m_aRNHasBeenSet(false)
{
}

CacheSecurityGroup::CacheSecurityGroup(const XmlNode& xmlNode) : 
    m_ownerIdHasBeenSet(false),
    m_cacheSecurityGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eC2SecurityGroupsHasBeenSet(false),
    m_aRNHasBeenSet(false)
{
  *this = xmlNode;
}

CacheSecurityGroup& CacheSecurityGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ownerIdNode = resultNode.FirstChild("OwnerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode cacheSecurityGroupNameNode = resultNode.FirstChild("CacheSecurityGroupName");
    if(!cacheSecurityGroupNameNode.IsNull())
    {
      m_cacheSecurityGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(cacheSecurityGroupNameNode.GetText());
      m_cacheSecurityGroupNameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
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
    XmlNode aRNNode = resultNode.FirstChild("ARN");
    if(!aRNNode.IsNull())
    {
      m_aRN = Aws::Utils::Xml::DecodeEscapedXmlText(aRNNode.GetText());
      m_aRNHasBeenSet = true;
    }
  }

  return *this;
}

void CacheSecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_cacheSecurityGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheSecurityGroupName=" << StringUtils::URLEncode(m_cacheSecurityGroupName.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
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

  if(m_aRNHasBeenSet)
  {
      oStream << location << index << locationValue << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }

}

void CacheSecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_cacheSecurityGroupNameHasBeenSet)
  {
      oStream << location << ".CacheSecurityGroupName=" << StringUtils::URLEncode(m_cacheSecurityGroupName.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
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
  if(m_aRNHasBeenSet)
  {
      oStream << location << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
