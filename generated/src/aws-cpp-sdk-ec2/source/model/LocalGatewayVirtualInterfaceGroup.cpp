/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LocalGatewayVirtualInterfaceGroup.h>
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

LocalGatewayVirtualInterfaceGroup::LocalGatewayVirtualInterfaceGroup(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

LocalGatewayVirtualInterfaceGroup& LocalGatewayVirtualInterfaceGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode localGatewayVirtualInterfaceGroupIdNode = resultNode.FirstChild("localGatewayVirtualInterfaceGroupId");
    if(!localGatewayVirtualInterfaceGroupIdNode.IsNull())
    {
      m_localGatewayVirtualInterfaceGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayVirtualInterfaceGroupIdNode.GetText());
      m_localGatewayVirtualInterfaceGroupIdHasBeenSet = true;
    }
    XmlNode localGatewayVirtualInterfaceIdsNode = resultNode.FirstChild("localGatewayVirtualInterfaceIdSet");
    if(!localGatewayVirtualInterfaceIdsNode.IsNull())
    {
      XmlNode localGatewayVirtualInterfaceIdsMember = localGatewayVirtualInterfaceIdsNode.FirstChild("item");
      m_localGatewayVirtualInterfaceIdsHasBeenSet = !localGatewayVirtualInterfaceIdsMember.IsNull();
      while(!localGatewayVirtualInterfaceIdsMember.IsNull())
      {
        m_localGatewayVirtualInterfaceIds.push_back(localGatewayVirtualInterfaceIdsMember.GetText());
        localGatewayVirtualInterfaceIdsMember = localGatewayVirtualInterfaceIdsMember.NextNode("item");
      }

      m_localGatewayVirtualInterfaceIdsHasBeenSet = true;
    }
    XmlNode localGatewayIdNode = resultNode.FirstChild("localGatewayId");
    if(!localGatewayIdNode.IsNull())
    {
      m_localGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayIdNode.GetText());
      m_localGatewayIdHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode localBgpAsnNode = resultNode.FirstChild("localBgpAsn");
    if(!localBgpAsnNode.IsNull())
    {
      m_localBgpAsn = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(localBgpAsnNode.GetText()).c_str()).c_str());
      m_localBgpAsnHasBeenSet = true;
    }
    XmlNode localBgpAsnExtendedNode = resultNode.FirstChild("localBgpAsnExtended");
    if(!localBgpAsnExtendedNode.IsNull())
    {
      m_localBgpAsnExtended = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(localBgpAsnExtendedNode.GetText()).c_str()).c_str());
      m_localBgpAsnExtendedHasBeenSet = true;
    }
    XmlNode localGatewayVirtualInterfaceGroupArnNode = resultNode.FirstChild("localGatewayVirtualInterfaceGroupArn");
    if(!localGatewayVirtualInterfaceGroupArnNode.IsNull())
    {
      m_localGatewayVirtualInterfaceGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayVirtualInterfaceGroupArnNode.GetText());
      m_localGatewayVirtualInterfaceGroupArnHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode configurationStateNode = resultNode.FirstChild("configurationState");
    if(!configurationStateNode.IsNull())
    {
      m_configurationState = LocalGatewayVirtualInterfaceGroupConfigurationStateMapper::GetLocalGatewayVirtualInterfaceGroupConfigurationStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(configurationStateNode.GetText()).c_str()));
      m_configurationStateHasBeenSet = true;
    }
  }

  return *this;
}

void LocalGatewayVirtualInterfaceGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_localGatewayVirtualInterfaceGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayVirtualInterfaceGroupId=" << StringUtils::URLEncode(m_localGatewayVirtualInterfaceGroupId.c_str()) << "&";
  }

  if(m_localGatewayVirtualInterfaceIdsHasBeenSet)
  {
      unsigned localGatewayVirtualInterfaceIdsIdx = 1;
      for(auto& item : m_localGatewayVirtualInterfaceIds)
      {
        oStream << location << index << locationValue << ".LocalGatewayVirtualInterfaceIdSet." << localGatewayVirtualInterfaceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_localGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayId=" << StringUtils::URLEncode(m_localGatewayId.c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_localBgpAsnHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalBgpAsn=" << m_localBgpAsn << "&";
  }

  if(m_localBgpAsnExtendedHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalBgpAsnExtended=" << m_localBgpAsnExtended << "&";
  }

  if(m_localGatewayVirtualInterfaceGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayVirtualInterfaceGroupArn=" << StringUtils::URLEncode(m_localGatewayVirtualInterfaceGroupArn.c_str()) << "&";
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

  if(m_configurationStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConfigurationState=" << StringUtils::URLEncode(LocalGatewayVirtualInterfaceGroupConfigurationStateMapper::GetNameForLocalGatewayVirtualInterfaceGroupConfigurationState(m_configurationState)) << "&";
  }

}

void LocalGatewayVirtualInterfaceGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_localGatewayVirtualInterfaceGroupIdHasBeenSet)
  {
      oStream << location << ".LocalGatewayVirtualInterfaceGroupId=" << StringUtils::URLEncode(m_localGatewayVirtualInterfaceGroupId.c_str()) << "&";
  }
  if(m_localGatewayVirtualInterfaceIdsHasBeenSet)
  {
      unsigned localGatewayVirtualInterfaceIdsIdx = 1;
      for(auto& item : m_localGatewayVirtualInterfaceIds)
      {
        oStream << location << ".LocalGatewayVirtualInterfaceIdSet." << localGatewayVirtualInterfaceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_localGatewayIdHasBeenSet)
  {
      oStream << location << ".LocalGatewayId=" << StringUtils::URLEncode(m_localGatewayId.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_localBgpAsnHasBeenSet)
  {
      oStream << location << ".LocalBgpAsn=" << m_localBgpAsn << "&";
  }
  if(m_localBgpAsnExtendedHasBeenSet)
  {
      oStream << location << ".LocalBgpAsnExtended=" << m_localBgpAsnExtended << "&";
  }
  if(m_localGatewayVirtualInterfaceGroupArnHasBeenSet)
  {
      oStream << location << ".LocalGatewayVirtualInterfaceGroupArn=" << StringUtils::URLEncode(m_localGatewayVirtualInterfaceGroupArn.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_configurationStateHasBeenSet)
  {
      oStream << location << ".ConfigurationState=" << StringUtils::URLEncode(LocalGatewayVirtualInterfaceGroupConfigurationStateMapper::GetNameForLocalGatewayVirtualInterfaceGroupConfigurationState(m_configurationState)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
