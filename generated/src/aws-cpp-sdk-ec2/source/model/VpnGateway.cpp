/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpnGateway.h>
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

VpnGateway::VpnGateway(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

VpnGateway& VpnGateway::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode amazonSideAsnNode = resultNode.FirstChild("amazonSideAsn");
    if(!amazonSideAsnNode.IsNull())
    {
      m_amazonSideAsn = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(amazonSideAsnNode.GetText()).c_str()).c_str());
      m_amazonSideAsnHasBeenSet = true;
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
    XmlNode vpnGatewayIdNode = resultNode.FirstChild("vpnGatewayId");
    if(!vpnGatewayIdNode.IsNull())
    {
      m_vpnGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(vpnGatewayIdNode.GetText());
      m_vpnGatewayIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = VpnStateMapper::GetVpnStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("type");
    if(!typeNode.IsNull())
    {
      m_type = GatewayTypeMapper::GetGatewayTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()));
      m_typeHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode vpcAttachmentsNode = resultNode.FirstChild("attachments");
    if(!vpcAttachmentsNode.IsNull())
    {
      XmlNode vpcAttachmentsMember = vpcAttachmentsNode.FirstChild("item");
      m_vpcAttachmentsHasBeenSet = !vpcAttachmentsMember.IsNull();
      while(!vpcAttachmentsMember.IsNull())
      {
        m_vpcAttachments.push_back(vpcAttachmentsMember);
        vpcAttachmentsMember = vpcAttachmentsMember.NextNode("item");
      }

      m_vpcAttachmentsHasBeenSet = true;
    }
  }

  return *this;
}

void VpnGateway::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_amazonSideAsnHasBeenSet)
  {
      oStream << location << index << locationValue << ".AmazonSideAsn=" << m_amazonSideAsn << "&";
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

  if(m_vpnGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpnGatewayId=" << StringUtils::URLEncode(m_vpnGatewayId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(VpnStateMapper::GetNameForVpnState(m_state)) << "&";
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << StringUtils::URLEncode(GatewayTypeMapper::GetNameForGatewayType(m_type)) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_vpcAttachmentsHasBeenSet)
  {
      unsigned vpcAttachmentsIdx = 1;
      for(auto& item : m_vpcAttachments)
      {
        Aws::StringStream vpcAttachmentsSs;
        vpcAttachmentsSs << location << index << locationValue << ".Attachments." << vpcAttachmentsIdx++;
        item.OutputToStream(oStream, vpcAttachmentsSs.str().c_str());
      }
  }

}

void VpnGateway::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_amazonSideAsnHasBeenSet)
  {
      oStream << location << ".AmazonSideAsn=" << m_amazonSideAsn << "&";
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
  if(m_vpnGatewayIdHasBeenSet)
  {
      oStream << location << ".VpnGatewayId=" << StringUtils::URLEncode(m_vpnGatewayId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(VpnStateMapper::GetNameForVpnState(m_state)) << "&";
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << StringUtils::URLEncode(GatewayTypeMapper::GetNameForGatewayType(m_type)) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_vpcAttachmentsHasBeenSet)
  {
      unsigned vpcAttachmentsIdx = 1;
      for(auto& item : m_vpcAttachments)
      {
        Aws::StringStream vpcAttachmentsSs;
        vpcAttachmentsSs << location << ".Attachments." << vpcAttachmentsIdx++;
        item.OutputToStream(oStream, vpcAttachmentsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
