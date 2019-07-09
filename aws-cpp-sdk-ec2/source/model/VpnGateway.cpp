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

VpnGateway::VpnGateway() : 
    m_availabilityZoneHasBeenSet(false),
    m_state(VpnState::NOT_SET),
    m_stateHasBeenSet(false),
    m_type(GatewayType::NOT_SET),
    m_typeHasBeenSet(false),
    m_vpcAttachmentsHasBeenSet(false),
    m_vpnGatewayIdHasBeenSet(false),
    m_amazonSideAsn(0),
    m_amazonSideAsnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

VpnGateway::VpnGateway(const XmlNode& xmlNode) : 
    m_availabilityZoneHasBeenSet(false),
    m_state(VpnState::NOT_SET),
    m_stateHasBeenSet(false),
    m_type(GatewayType::NOT_SET),
    m_typeHasBeenSet(false),
    m_vpcAttachmentsHasBeenSet(false),
    m_vpnGatewayIdHasBeenSet(false),
    m_amazonSideAsn(0),
    m_amazonSideAsnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

VpnGateway& VpnGateway::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = availabilityZoneNode.GetText();
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = VpnStateMapper::GetVpnStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("type");
    if(!typeNode.IsNull())
    {
      m_type = GatewayTypeMapper::GetGatewayTypeForName(StringUtils::Trim(typeNode.GetText().c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode vpcAttachmentsNode = resultNode.FirstChild("attachments");
    if(!vpcAttachmentsNode.IsNull())
    {
      XmlNode vpcAttachmentsMember = vpcAttachmentsNode.FirstChild("item");
      while(!vpcAttachmentsMember.IsNull())
      {
        m_vpcAttachments.push_back(vpcAttachmentsMember);
        vpcAttachmentsMember = vpcAttachmentsMember.NextNode("item");
      }

      m_vpcAttachmentsHasBeenSet = true;
    }
    XmlNode vpnGatewayIdNode = resultNode.FirstChild("vpnGatewayId");
    if(!vpnGatewayIdNode.IsNull())
    {
      m_vpnGatewayId = vpnGatewayIdNode.GetText();
      m_vpnGatewayIdHasBeenSet = true;
    }
    XmlNode amazonSideAsnNode = resultNode.FirstChild("amazonSideAsn");
    if(!amazonSideAsnNode.IsNull())
    {
      m_amazonSideAsn = StringUtils::ConvertToInt64(StringUtils::Trim(amazonSideAsnNode.GetText().c_str()).c_str());
      m_amazonSideAsnHasBeenSet = true;
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

void VpnGateway::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << VpnStateMapper::GetNameForVpnState(m_state) << "&";
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << GatewayTypeMapper::GetNameForGatewayType(m_type) << "&";
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

  if(m_vpnGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpnGatewayId=" << StringUtils::URLEncode(m_vpnGatewayId.c_str()) << "&";
  }

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

}

void VpnGateway::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << VpnStateMapper::GetNameForVpnState(m_state) << "&";
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << GatewayTypeMapper::GetNameForGatewayType(m_type) << "&";
  }
  if(m_vpcAttachmentsHasBeenSet)
  {
      unsigned vpcAttachmentsIdx = 1;
      for(auto& item : m_vpcAttachments)
      {
        Aws::StringStream vpcAttachmentsSs;
        vpcAttachmentsSs << location <<  ".Attachments." << vpcAttachmentsIdx++;
        item.OutputToStream(oStream, vpcAttachmentsSs.str().c_str());
      }
  }
  if(m_vpnGatewayIdHasBeenSet)
  {
      oStream << location << ".VpnGatewayId=" << StringUtils::URLEncode(m_vpnGatewayId.c_str()) << "&";
  }
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
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
