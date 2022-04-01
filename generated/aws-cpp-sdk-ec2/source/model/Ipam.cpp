/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Ipam.h>
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

Ipam::Ipam() : 
    m_ownerIdHasBeenSet(false),
    m_ipamIdHasBeenSet(false),
    m_ipamArnHasBeenSet(false),
    m_ipamRegionHasBeenSet(false),
    m_publicDefaultScopeIdHasBeenSet(false),
    m_privateDefaultScopeIdHasBeenSet(false),
    m_scopeCount(0),
    m_scopeCountHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_operatingRegionsHasBeenSet(false),
    m_state(IpamState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Ipam::Ipam(const XmlNode& xmlNode) : 
    m_ownerIdHasBeenSet(false),
    m_ipamIdHasBeenSet(false),
    m_ipamArnHasBeenSet(false),
    m_ipamRegionHasBeenSet(false),
    m_publicDefaultScopeIdHasBeenSet(false),
    m_privateDefaultScopeIdHasBeenSet(false),
    m_scopeCount(0),
    m_scopeCountHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_operatingRegionsHasBeenSet(false),
    m_state(IpamState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

Ipam& Ipam::operator =(const XmlNode& xmlNode)
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
    XmlNode ipamIdNode = resultNode.FirstChild("ipamId");
    if(!ipamIdNode.IsNull())
    {
      m_ipamId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamIdNode.GetText());
      m_ipamIdHasBeenSet = true;
    }
    XmlNode ipamArnNode = resultNode.FirstChild("ipamArn");
    if(!ipamArnNode.IsNull())
    {
      m_ipamArn = Aws::Utils::Xml::DecodeEscapedXmlText(ipamArnNode.GetText());
      m_ipamArnHasBeenSet = true;
    }
    XmlNode ipamRegionNode = resultNode.FirstChild("ipamRegion");
    if(!ipamRegionNode.IsNull())
    {
      m_ipamRegion = Aws::Utils::Xml::DecodeEscapedXmlText(ipamRegionNode.GetText());
      m_ipamRegionHasBeenSet = true;
    }
    XmlNode publicDefaultScopeIdNode = resultNode.FirstChild("publicDefaultScopeId");
    if(!publicDefaultScopeIdNode.IsNull())
    {
      m_publicDefaultScopeId = Aws::Utils::Xml::DecodeEscapedXmlText(publicDefaultScopeIdNode.GetText());
      m_publicDefaultScopeIdHasBeenSet = true;
    }
    XmlNode privateDefaultScopeIdNode = resultNode.FirstChild("privateDefaultScopeId");
    if(!privateDefaultScopeIdNode.IsNull())
    {
      m_privateDefaultScopeId = Aws::Utils::Xml::DecodeEscapedXmlText(privateDefaultScopeIdNode.GetText());
      m_privateDefaultScopeIdHasBeenSet = true;
    }
    XmlNode scopeCountNode = resultNode.FirstChild("scopeCount");
    if(!scopeCountNode.IsNull())
    {
      m_scopeCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(scopeCountNode.GetText()).c_str()).c_str());
      m_scopeCountHasBeenSet = true;
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
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = IpamStateMapper::GetIpamStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
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

void Ipam::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_ipamIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamId=" << StringUtils::URLEncode(m_ipamId.c_str()) << "&";
  }

  if(m_ipamArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamArn=" << StringUtils::URLEncode(m_ipamArn.c_str()) << "&";
  }

  if(m_ipamRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamRegion=" << StringUtils::URLEncode(m_ipamRegion.c_str()) << "&";
  }

  if(m_publicDefaultScopeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicDefaultScopeId=" << StringUtils::URLEncode(m_publicDefaultScopeId.c_str()) << "&";
  }

  if(m_privateDefaultScopeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateDefaultScopeId=" << StringUtils::URLEncode(m_privateDefaultScopeId.c_str()) << "&";
  }

  if(m_scopeCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".ScopeCount=" << m_scopeCount << "&";
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

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << IpamStateMapper::GetNameForIpamState(m_state) << "&";
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

void Ipam::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_ipamIdHasBeenSet)
  {
      oStream << location << ".IpamId=" << StringUtils::URLEncode(m_ipamId.c_str()) << "&";
  }
  if(m_ipamArnHasBeenSet)
  {
      oStream << location << ".IpamArn=" << StringUtils::URLEncode(m_ipamArn.c_str()) << "&";
  }
  if(m_ipamRegionHasBeenSet)
  {
      oStream << location << ".IpamRegion=" << StringUtils::URLEncode(m_ipamRegion.c_str()) << "&";
  }
  if(m_publicDefaultScopeIdHasBeenSet)
  {
      oStream << location << ".PublicDefaultScopeId=" << StringUtils::URLEncode(m_publicDefaultScopeId.c_str()) << "&";
  }
  if(m_privateDefaultScopeIdHasBeenSet)
  {
      oStream << location << ".PrivateDefaultScopeId=" << StringUtils::URLEncode(m_privateDefaultScopeId.c_str()) << "&";
  }
  if(m_scopeCountHasBeenSet)
  {
      oStream << location << ".ScopeCount=" << m_scopeCount << "&";
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
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << IpamStateMapper::GetNameForIpamState(m_state) << "&";
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
