/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_subnetsHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_supportedNetworkTypesHasBeenSet(false)
{
}

CacheSubnetGroup::CacheSubnetGroup(const XmlNode& xmlNode) : 
    m_cacheSubnetGroupNameHasBeenSet(false),
    m_cacheSubnetGroupDescriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_supportedNetworkTypesHasBeenSet(false)
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
      m_cacheSubnetGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(cacheSubnetGroupNameNode.GetText());
      m_cacheSubnetGroupNameHasBeenSet = true;
    }
    XmlNode cacheSubnetGroupDescriptionNode = resultNode.FirstChild("CacheSubnetGroupDescription");
    if(!cacheSubnetGroupDescriptionNode.IsNull())
    {
      m_cacheSubnetGroupDescription = Aws::Utils::Xml::DecodeEscapedXmlText(cacheSubnetGroupDescriptionNode.GetText());
      m_cacheSubnetGroupDescriptionHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
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
    XmlNode aRNNode = resultNode.FirstChild("ARN");
    if(!aRNNode.IsNull())
    {
      m_aRN = Aws::Utils::Xml::DecodeEscapedXmlText(aRNNode.GetText());
      m_aRNHasBeenSet = true;
    }
    XmlNode supportedNetworkTypesNode = resultNode.FirstChild("SupportedNetworkTypes");
    if(!supportedNetworkTypesNode.IsNull())
    {
      XmlNode supportedNetworkTypesMember = supportedNetworkTypesNode.FirstChild("member");
      while(!supportedNetworkTypesMember.IsNull())
      {
        m_supportedNetworkTypes.push_back(NetworkTypeMapper::GetNetworkTypeForName(StringUtils::Trim(supportedNetworkTypesMember.GetText().c_str())));
        supportedNetworkTypesMember = supportedNetworkTypesMember.NextNode("member");
      }

      m_supportedNetworkTypesHasBeenSet = true;
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

  if(m_aRNHasBeenSet)
  {
      oStream << location << index << locationValue << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }

  if(m_supportedNetworkTypesHasBeenSet)
  {
      unsigned supportedNetworkTypesIdx = 1;
      for(auto& item : m_supportedNetworkTypes)
      {
        oStream << location << index << locationValue << ".SupportedNetworkTypes.member." << supportedNetworkTypesIdx++ << "=" << NetworkTypeMapper::GetNameForNetworkType(item) << "&";
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
  if(m_aRNHasBeenSet)
  {
      oStream << location << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }
  if(m_supportedNetworkTypesHasBeenSet)
  {
      unsigned supportedNetworkTypesIdx = 1;
      for(auto& item : m_supportedNetworkTypes)
      {
        oStream << location << ".SupportedNetworkTypes.member." << supportedNetworkTypesIdx++ << "=" << NetworkTypeMapper::GetNameForNetworkType(item) << "&";
      }
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
