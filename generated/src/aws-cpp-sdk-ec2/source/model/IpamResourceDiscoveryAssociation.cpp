/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamResourceDiscoveryAssociation.h>
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

IpamResourceDiscoveryAssociation::IpamResourceDiscoveryAssociation() : 
    m_ownerIdHasBeenSet(false),
    m_ipamResourceDiscoveryAssociationIdHasBeenSet(false),
    m_ipamResourceDiscoveryAssociationArnHasBeenSet(false),
    m_ipamResourceDiscoveryIdHasBeenSet(false),
    m_ipamIdHasBeenSet(false),
    m_ipamArnHasBeenSet(false),
    m_ipamRegionHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_resourceDiscoveryStatus(IpamAssociatedResourceDiscoveryStatus::NOT_SET),
    m_resourceDiscoveryStatusHasBeenSet(false),
    m_state(IpamResourceDiscoveryAssociationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

IpamResourceDiscoveryAssociation::IpamResourceDiscoveryAssociation(const XmlNode& xmlNode) : 
    m_ownerIdHasBeenSet(false),
    m_ipamResourceDiscoveryAssociationIdHasBeenSet(false),
    m_ipamResourceDiscoveryAssociationArnHasBeenSet(false),
    m_ipamResourceDiscoveryIdHasBeenSet(false),
    m_ipamIdHasBeenSet(false),
    m_ipamArnHasBeenSet(false),
    m_ipamRegionHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_resourceDiscoveryStatus(IpamAssociatedResourceDiscoveryStatus::NOT_SET),
    m_resourceDiscoveryStatusHasBeenSet(false),
    m_state(IpamResourceDiscoveryAssociationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

IpamResourceDiscoveryAssociation& IpamResourceDiscoveryAssociation::operator =(const XmlNode& xmlNode)
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
    XmlNode ipamResourceDiscoveryAssociationIdNode = resultNode.FirstChild("ipamResourceDiscoveryAssociationId");
    if(!ipamResourceDiscoveryAssociationIdNode.IsNull())
    {
      m_ipamResourceDiscoveryAssociationId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamResourceDiscoveryAssociationIdNode.GetText());
      m_ipamResourceDiscoveryAssociationIdHasBeenSet = true;
    }
    XmlNode ipamResourceDiscoveryAssociationArnNode = resultNode.FirstChild("ipamResourceDiscoveryAssociationArn");
    if(!ipamResourceDiscoveryAssociationArnNode.IsNull())
    {
      m_ipamResourceDiscoveryAssociationArn = Aws::Utils::Xml::DecodeEscapedXmlText(ipamResourceDiscoveryAssociationArnNode.GetText());
      m_ipamResourceDiscoveryAssociationArnHasBeenSet = true;
    }
    XmlNode ipamResourceDiscoveryIdNode = resultNode.FirstChild("ipamResourceDiscoveryId");
    if(!ipamResourceDiscoveryIdNode.IsNull())
    {
      m_ipamResourceDiscoveryId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamResourceDiscoveryIdNode.GetText());
      m_ipamResourceDiscoveryIdHasBeenSet = true;
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
    XmlNode isDefaultNode = resultNode.FirstChild("isDefault");
    if(!isDefaultNode.IsNull())
    {
      m_isDefault = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isDefaultNode.GetText()).c_str()).c_str());
      m_isDefaultHasBeenSet = true;
    }
    XmlNode resourceDiscoveryStatusNode = resultNode.FirstChild("resourceDiscoveryStatus");
    if(!resourceDiscoveryStatusNode.IsNull())
    {
      m_resourceDiscoveryStatus = IpamAssociatedResourceDiscoveryStatusMapper::GetIpamAssociatedResourceDiscoveryStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceDiscoveryStatusNode.GetText()).c_str()).c_str());
      m_resourceDiscoveryStatusHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = IpamResourceDiscoveryAssociationStateMapper::GetIpamResourceDiscoveryAssociationStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
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

void IpamResourceDiscoveryAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_ipamResourceDiscoveryAssociationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamResourceDiscoveryAssociationId=" << StringUtils::URLEncode(m_ipamResourceDiscoveryAssociationId.c_str()) << "&";
  }

  if(m_ipamResourceDiscoveryAssociationArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamResourceDiscoveryAssociationArn=" << StringUtils::URLEncode(m_ipamResourceDiscoveryAssociationArn.c_str()) << "&";
  }

  if(m_ipamResourceDiscoveryIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamResourceDiscoveryId=" << StringUtils::URLEncode(m_ipamResourceDiscoveryId.c_str()) << "&";
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

  if(m_isDefaultHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }

  if(m_resourceDiscoveryStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceDiscoveryStatus=" << IpamAssociatedResourceDiscoveryStatusMapper::GetNameForIpamAssociatedResourceDiscoveryStatus(m_resourceDiscoveryStatus) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << IpamResourceDiscoveryAssociationStateMapper::GetNameForIpamResourceDiscoveryAssociationState(m_state) << "&";
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

void IpamResourceDiscoveryAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_ipamResourceDiscoveryAssociationIdHasBeenSet)
  {
      oStream << location << ".IpamResourceDiscoveryAssociationId=" << StringUtils::URLEncode(m_ipamResourceDiscoveryAssociationId.c_str()) << "&";
  }
  if(m_ipamResourceDiscoveryAssociationArnHasBeenSet)
  {
      oStream << location << ".IpamResourceDiscoveryAssociationArn=" << StringUtils::URLEncode(m_ipamResourceDiscoveryAssociationArn.c_str()) << "&";
  }
  if(m_ipamResourceDiscoveryIdHasBeenSet)
  {
      oStream << location << ".IpamResourceDiscoveryId=" << StringUtils::URLEncode(m_ipamResourceDiscoveryId.c_str()) << "&";
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
  if(m_isDefaultHasBeenSet)
  {
      oStream << location << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }
  if(m_resourceDiscoveryStatusHasBeenSet)
  {
      oStream << location << ".ResourceDiscoveryStatus=" << IpamAssociatedResourceDiscoveryStatusMapper::GetNameForIpamAssociatedResourceDiscoveryStatus(m_resourceDiscoveryStatus) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << IpamResourceDiscoveryAssociationStateMapper::GetNameForIpamResourceDiscoveryAssociationState(m_state) << "&";
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
