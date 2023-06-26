/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamResourceDiscovery.h>
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

IpamResourceDiscovery::IpamResourceDiscovery() : 
    m_ownerIdHasBeenSet(false),
    m_ipamResourceDiscoveryIdHasBeenSet(false),
    m_ipamResourceDiscoveryArnHasBeenSet(false),
    m_ipamResourceDiscoveryRegionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_operatingRegionsHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_state(IpamResourceDiscoveryState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

IpamResourceDiscovery::IpamResourceDiscovery(const XmlNode& xmlNode) : 
    m_ownerIdHasBeenSet(false),
    m_ipamResourceDiscoveryIdHasBeenSet(false),
    m_ipamResourceDiscoveryArnHasBeenSet(false),
    m_ipamResourceDiscoveryRegionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_operatingRegionsHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_state(IpamResourceDiscoveryState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

IpamResourceDiscovery& IpamResourceDiscovery::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode ipamResourceDiscoveryIdNode = resultNode.FirstChild("ipamResourceDiscoveryId");
    if(!ipamResourceDiscoveryIdNode.IsNull())
    {
      m_ipamResourceDiscoveryId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamResourceDiscoveryIdNode.GetText());
      m_ipamResourceDiscoveryIdHasBeenSet = true;
    }
    XmlNode ipamResourceDiscoveryArnNode = resultNode.FirstChild("ipamResourceDiscoveryArn");
    if(!ipamResourceDiscoveryArnNode.IsNull())
    {
      m_ipamResourceDiscoveryArn = Aws::Utils::Xml::DecodeEscapedXmlText(ipamResourceDiscoveryArnNode.GetText());
      m_ipamResourceDiscoveryArnHasBeenSet = true;
    }
    XmlNode ipamResourceDiscoveryRegionNode = resultNode.FirstChild("ipamResourceDiscoveryRegion");
    if(!ipamResourceDiscoveryRegionNode.IsNull())
    {
      m_ipamResourceDiscoveryRegion = Aws::Utils::Xml::DecodeEscapedXmlText(ipamResourceDiscoveryRegionNode.GetText());
      m_ipamResourceDiscoveryRegionHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode operatingRegionsNode = resultNode.FirstChild("operatingRegionSet");
    if(!operatingRegionsNode.IsNull())
    {
      XmlNode operatingRegionsMember = operatingRegionsNode.FirstChild("item");
      while(!operatingRegionsMember.IsNull())
      {
        m_operatingRegions.push_back(operatingRegionsMember);
        operatingRegionsMember = operatingRegionsMember.NextNode("item");
      }

      m_operatingRegionsHasBeenSet = true;
    }
    XmlNode isDefaultNode = resultNode.FirstChild("isDefault");
    if(!isDefaultNode.IsNull())
    {
      m_isDefault = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isDefaultNode.GetText()).c_str()).c_str());
      m_isDefaultHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = IpamResourceDiscoveryStateMapper::GetIpamResourceDiscoveryStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
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

void IpamResourceDiscovery::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_ipamResourceDiscoveryIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamResourceDiscoveryId=" << StringUtils::URLEncode(m_ipamResourceDiscoveryId.c_str()) << "&";
  }

  if(m_ipamResourceDiscoveryArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamResourceDiscoveryArn=" << StringUtils::URLEncode(m_ipamResourceDiscoveryArn.c_str()) << "&";
  }

  if(m_ipamResourceDiscoveryRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamResourceDiscoveryRegion=" << StringUtils::URLEncode(m_ipamResourceDiscoveryRegion.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_operatingRegionsHasBeenSet)
  {
      unsigned operatingRegionsIdx = 1;
      for(auto& item : m_operatingRegions)
      {
        Aws::StringStream operatingRegionsSs;
        operatingRegionsSs << location << index << locationValue << ".OperatingRegionSet." << operatingRegionsIdx++;
        item.OutputToStream(oStream, operatingRegionsSs.str().c_str());
      }
  }

  if(m_isDefaultHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << IpamResourceDiscoveryStateMapper::GetNameForIpamResourceDiscoveryState(m_state) << "&";
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

void IpamResourceDiscovery::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_ipamResourceDiscoveryIdHasBeenSet)
  {
      oStream << location << ".IpamResourceDiscoveryId=" << StringUtils::URLEncode(m_ipamResourceDiscoveryId.c_str()) << "&";
  }
  if(m_ipamResourceDiscoveryArnHasBeenSet)
  {
      oStream << location << ".IpamResourceDiscoveryArn=" << StringUtils::URLEncode(m_ipamResourceDiscoveryArn.c_str()) << "&";
  }
  if(m_ipamResourceDiscoveryRegionHasBeenSet)
  {
      oStream << location << ".IpamResourceDiscoveryRegion=" << StringUtils::URLEncode(m_ipamResourceDiscoveryRegion.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_operatingRegionsHasBeenSet)
  {
      unsigned operatingRegionsIdx = 1;
      for(auto& item : m_operatingRegions)
      {
        Aws::StringStream operatingRegionsSs;
        operatingRegionsSs << location <<  ".OperatingRegionSet." << operatingRegionsIdx++;
        item.OutputToStream(oStream, operatingRegionsSs.str().c_str());
      }
  }
  if(m_isDefaultHasBeenSet)
  {
      oStream << location << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << IpamResourceDiscoveryStateMapper::GetNameForIpamResourceDiscoveryState(m_state) << "&";
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
