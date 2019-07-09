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

#include <aws/elasticache/model/CacheSubnetGroup.h>
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

CacheSubnetGroup::CacheSubnetGroup() : 
    m_cacheSubnetGroupNameHasBeenSet(false),
    m_cacheSubnetGroupDescriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetsHasBeenSet(false)
{
}

CacheSubnetGroup::CacheSubnetGroup(const XmlNode& xmlNode) : 
    m_cacheSubnetGroupNameHasBeenSet(false),
    m_cacheSubnetGroupDescriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetsHasBeenSet(false)
{
  *this = xmlNode;
}

CacheSubnetGroup& CacheSubnetGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cacheSubnetGroupNameNode = resultNode.FirstChild("CacheSubnetGroupName");
    if(!cacheSubnetGroupNameNode.IsNull())
    {
      m_cacheSubnetGroupName = cacheSubnetGroupNameNode.GetText();
      m_cacheSubnetGroupNameHasBeenSet = true;
    }
    XmlNode cacheSubnetGroupDescriptionNode = resultNode.FirstChild("CacheSubnetGroupDescription");
    if(!cacheSubnetGroupDescriptionNode.IsNull())
    {
      m_cacheSubnetGroupDescription = cacheSubnetGroupDescriptionNode.GetText();
      m_cacheSubnetGroupDescriptionHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = vpcIdNode.GetText();
      m_vpcIdHasBeenSet = true;
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
  }

  return *this;
}

void CacheSubnetGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cacheSubnetGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheSubnetGroupName=" << StringUtils::URLEncode(m_cacheSubnetGroupName.c_str()) << "&";
  }

  if(m_cacheSubnetGroupDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheSubnetGroupDescription=" << StringUtils::URLEncode(m_cacheSubnetGroupDescription.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
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

}

void CacheSubnetGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cacheSubnetGroupNameHasBeenSet)
  {
      oStream << location << ".CacheSubnetGroupName=" << StringUtils::URLEncode(m_cacheSubnetGroupName.c_str()) << "&";
  }
  if(m_cacheSubnetGroupDescriptionHasBeenSet)
  {
      oStream << location << ".CacheSubnetGroupDescription=" << StringUtils::URLEncode(m_cacheSubnetGroupDescription.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
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
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
