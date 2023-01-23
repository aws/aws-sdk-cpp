/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamScope.h>
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

IpamScope::IpamScope() : 
    m_ownerIdHasBeenSet(false),
    m_ipamScopeIdHasBeenSet(false),
    m_ipamScopeArnHasBeenSet(false),
    m_ipamArnHasBeenSet(false),
    m_ipamRegionHasBeenSet(false),
    m_ipamScopeType(IpamScopeType::NOT_SET),
    m_ipamScopeTypeHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_poolCount(0),
    m_poolCountHasBeenSet(false),
    m_state(IpamScopeState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

IpamScope::IpamScope(const XmlNode& xmlNode) : 
    m_ownerIdHasBeenSet(false),
    m_ipamScopeIdHasBeenSet(false),
    m_ipamScopeArnHasBeenSet(false),
    m_ipamArnHasBeenSet(false),
    m_ipamRegionHasBeenSet(false),
    m_ipamScopeType(IpamScopeType::NOT_SET),
    m_ipamScopeTypeHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_poolCount(0),
    m_poolCountHasBeenSet(false),
    m_state(IpamScopeState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

IpamScope& IpamScope::operator =(const XmlNode& xmlNode)
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
    XmlNode ipamScopeIdNode = resultNode.FirstChild("ipamScopeId");
    if(!ipamScopeIdNode.IsNull())
    {
      m_ipamScopeId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamScopeIdNode.GetText());
      m_ipamScopeIdHasBeenSet = true;
    }
    XmlNode ipamScopeArnNode = resultNode.FirstChild("ipamScopeArn");
    if(!ipamScopeArnNode.IsNull())
    {
      m_ipamScopeArn = Aws::Utils::Xml::DecodeEscapedXmlText(ipamScopeArnNode.GetText());
      m_ipamScopeArnHasBeenSet = true;
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
    XmlNode ipamScopeTypeNode = resultNode.FirstChild("ipamScopeType");
    if(!ipamScopeTypeNode.IsNull())
    {
      m_ipamScopeType = IpamScopeTypeMapper::GetIpamScopeTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipamScopeTypeNode.GetText()).c_str()).c_str());
      m_ipamScopeTypeHasBeenSet = true;
    }
    XmlNode isDefaultNode = resultNode.FirstChild("isDefault");
    if(!isDefaultNode.IsNull())
    {
      m_isDefault = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isDefaultNode.GetText()).c_str()).c_str());
      m_isDefaultHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode poolCountNode = resultNode.FirstChild("poolCount");
    if(!poolCountNode.IsNull())
    {
      m_poolCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(poolCountNode.GetText()).c_str()).c_str());
      m_poolCountHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = IpamScopeStateMapper::GetIpamScopeStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
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

void IpamScope::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_ipamScopeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamScopeId=" << StringUtils::URLEncode(m_ipamScopeId.c_str()) << "&";
  }

  if(m_ipamScopeArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamScopeArn=" << StringUtils::URLEncode(m_ipamScopeArn.c_str()) << "&";
  }

  if(m_ipamArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamArn=" << StringUtils::URLEncode(m_ipamArn.c_str()) << "&";
  }

  if(m_ipamRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamRegion=" << StringUtils::URLEncode(m_ipamRegion.c_str()) << "&";
  }

  if(m_ipamScopeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamScopeType=" << IpamScopeTypeMapper::GetNameForIpamScopeType(m_ipamScopeType) << "&";
  }

  if(m_isDefaultHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_poolCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".PoolCount=" << m_poolCount << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << IpamScopeStateMapper::GetNameForIpamScopeState(m_state) << "&";
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

void IpamScope::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_ipamScopeIdHasBeenSet)
  {
      oStream << location << ".IpamScopeId=" << StringUtils::URLEncode(m_ipamScopeId.c_str()) << "&";
  }
  if(m_ipamScopeArnHasBeenSet)
  {
      oStream << location << ".IpamScopeArn=" << StringUtils::URLEncode(m_ipamScopeArn.c_str()) << "&";
  }
  if(m_ipamArnHasBeenSet)
  {
      oStream << location << ".IpamArn=" << StringUtils::URLEncode(m_ipamArn.c_str()) << "&";
  }
  if(m_ipamRegionHasBeenSet)
  {
      oStream << location << ".IpamRegion=" << StringUtils::URLEncode(m_ipamRegion.c_str()) << "&";
  }
  if(m_ipamScopeTypeHasBeenSet)
  {
      oStream << location << ".IpamScopeType=" << IpamScopeTypeMapper::GetNameForIpamScopeType(m_ipamScopeType) << "&";
  }
  if(m_isDefaultHasBeenSet)
  {
      oStream << location << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_poolCountHasBeenSet)
  {
      oStream << location << ".PoolCount=" << m_poolCount << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << IpamScopeStateMapper::GetNameForIpamScopeState(m_state) << "&";
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
