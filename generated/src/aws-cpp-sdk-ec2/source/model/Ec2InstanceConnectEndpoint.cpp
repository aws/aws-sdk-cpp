/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Ec2InstanceConnectEndpoint.h>
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

Ec2InstanceConnectEndpoint::Ec2InstanceConnectEndpoint() : 
    m_ownerIdHasBeenSet(false),
    m_instanceConnectEndpointIdHasBeenSet(false),
    m_instanceConnectEndpointArnHasBeenSet(false),
    m_state(Ec2InstanceConnectEndpointState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateMessageHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_fipsDnsNameHasBeenSet(false),
    m_networkInterfaceIdsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_preserveClientIp(false),
    m_preserveClientIpHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Ec2InstanceConnectEndpoint::Ec2InstanceConnectEndpoint(const XmlNode& xmlNode) : 
    m_ownerIdHasBeenSet(false),
    m_instanceConnectEndpointIdHasBeenSet(false),
    m_instanceConnectEndpointArnHasBeenSet(false),
    m_state(Ec2InstanceConnectEndpointState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateMessageHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_fipsDnsNameHasBeenSet(false),
    m_networkInterfaceIdsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_preserveClientIp(false),
    m_preserveClientIpHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

Ec2InstanceConnectEndpoint& Ec2InstanceConnectEndpoint::operator =(const XmlNode& xmlNode)
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
    XmlNode instanceConnectEndpointIdNode = resultNode.FirstChild("instanceConnectEndpointId");
    if(!instanceConnectEndpointIdNode.IsNull())
    {
      m_instanceConnectEndpointId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceConnectEndpointIdNode.GetText());
      m_instanceConnectEndpointIdHasBeenSet = true;
    }
    XmlNode instanceConnectEndpointArnNode = resultNode.FirstChild("instanceConnectEndpointArn");
    if(!instanceConnectEndpointArnNode.IsNull())
    {
      m_instanceConnectEndpointArn = Aws::Utils::Xml::DecodeEscapedXmlText(instanceConnectEndpointArnNode.GetText());
      m_instanceConnectEndpointArnHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = Ec2InstanceConnectEndpointStateMapper::GetEc2InstanceConnectEndpointStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode stateMessageNode = resultNode.FirstChild("stateMessage");
    if(!stateMessageNode.IsNull())
    {
      m_stateMessage = Aws::Utils::Xml::DecodeEscapedXmlText(stateMessageNode.GetText());
      m_stateMessageHasBeenSet = true;
    }
    XmlNode dnsNameNode = resultNode.FirstChild("dnsName");
    if(!dnsNameNode.IsNull())
    {
      m_dnsName = Aws::Utils::Xml::DecodeEscapedXmlText(dnsNameNode.GetText());
      m_dnsNameHasBeenSet = true;
    }
    XmlNode fipsDnsNameNode = resultNode.FirstChild("fipsDnsName");
    if(!fipsDnsNameNode.IsNull())
    {
      m_fipsDnsName = Aws::Utils::Xml::DecodeEscapedXmlText(fipsDnsNameNode.GetText());
      m_fipsDnsNameHasBeenSet = true;
    }
    XmlNode networkInterfaceIdsNode = resultNode.FirstChild("networkInterfaceIdSet");
    if(!networkInterfaceIdsNode.IsNull())
    {
      XmlNode networkInterfaceIdsMember = networkInterfaceIdsNode.FirstChild("item");
      while(!networkInterfaceIdsMember.IsNull())
      {
        m_networkInterfaceIds.push_back(networkInterfaceIdsMember.GetText());
        networkInterfaceIdsMember = networkInterfaceIdsMember.NextNode("item");
      }

      m_networkInterfaceIdsHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode createdAtNode = resultNode.FirstChild("createdAt");
    if(!createdAtNode.IsNull())
    {
      m_createdAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdAtNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdAtHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode preserveClientIpNode = resultNode.FirstChild("preserveClientIp");
    if(!preserveClientIpNode.IsNull())
    {
      m_preserveClientIp = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(preserveClientIpNode.GetText()).c_str()).c_str());
      m_preserveClientIpHasBeenSet = true;
    }
    XmlNode securityGroupIdsNode = resultNode.FirstChild("securityGroupIdSet");
    if(!securityGroupIdsNode.IsNull())
    {
      XmlNode securityGroupIdsMember = securityGroupIdsNode.FirstChild("item");
      while(!securityGroupIdsMember.IsNull())
      {
        m_securityGroupIds.push_back(securityGroupIdsMember.GetText());
        securityGroupIdsMember = securityGroupIdsMember.NextNode("item");
      }

      m_securityGroupIdsHasBeenSet = true;
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

void Ec2InstanceConnectEndpoint::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_instanceConnectEndpointIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceConnectEndpointId=" << StringUtils::URLEncode(m_instanceConnectEndpointId.c_str()) << "&";
  }

  if(m_instanceConnectEndpointArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceConnectEndpointArn=" << StringUtils::URLEncode(m_instanceConnectEndpointArn.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << Ec2InstanceConnectEndpointStateMapper::GetNameForEc2InstanceConnectEndpointState(m_state) << "&";
  }

  if(m_stateMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateMessage=" << StringUtils::URLEncode(m_stateMessage.c_str()) << "&";
  }

  if(m_dnsNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DnsName=" << StringUtils::URLEncode(m_dnsName.c_str()) << "&";
  }

  if(m_fipsDnsNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".FipsDnsName=" << StringUtils::URLEncode(m_fipsDnsName.c_str()) << "&";
  }

  if(m_networkInterfaceIdsHasBeenSet)
  {
      unsigned networkInterfaceIdsIdx = 1;
      for(auto& item : m_networkInterfaceIds)
      {
        oStream << location << index << locationValue << ".NetworkInterfaceIdSet." << networkInterfaceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_createdAtHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedAt=" << StringUtils::URLEncode(m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_preserveClientIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreserveClientIp=" << std::boolalpha << m_preserveClientIp << "&";
  }

  if(m_securityGroupIdsHasBeenSet)
  {
      unsigned securityGroupIdsIdx = 1;
      for(auto& item : m_securityGroupIds)
      {
        oStream << location << index << locationValue << ".SecurityGroupIdSet." << securityGroupIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
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

void Ec2InstanceConnectEndpoint::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_instanceConnectEndpointIdHasBeenSet)
  {
      oStream << location << ".InstanceConnectEndpointId=" << StringUtils::URLEncode(m_instanceConnectEndpointId.c_str()) << "&";
  }
  if(m_instanceConnectEndpointArnHasBeenSet)
  {
      oStream << location << ".InstanceConnectEndpointArn=" << StringUtils::URLEncode(m_instanceConnectEndpointArn.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << Ec2InstanceConnectEndpointStateMapper::GetNameForEc2InstanceConnectEndpointState(m_state) << "&";
  }
  if(m_stateMessageHasBeenSet)
  {
      oStream << location << ".StateMessage=" << StringUtils::URLEncode(m_stateMessage.c_str()) << "&";
  }
  if(m_dnsNameHasBeenSet)
  {
      oStream << location << ".DnsName=" << StringUtils::URLEncode(m_dnsName.c_str()) << "&";
  }
  if(m_fipsDnsNameHasBeenSet)
  {
      oStream << location << ".FipsDnsName=" << StringUtils::URLEncode(m_fipsDnsName.c_str()) << "&";
  }
  if(m_networkInterfaceIdsHasBeenSet)
  {
      unsigned networkInterfaceIdsIdx = 1;
      for(auto& item : m_networkInterfaceIds)
      {
        oStream << location << ".NetworkInterfaceIdSet." << networkInterfaceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_createdAtHasBeenSet)
  {
      oStream << location << ".CreatedAt=" << StringUtils::URLEncode(m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_preserveClientIpHasBeenSet)
  {
      oStream << location << ".PreserveClientIp=" << std::boolalpha << m_preserveClientIp << "&";
  }
  if(m_securityGroupIdsHasBeenSet)
  {
      unsigned securityGroupIdsIdx = 1;
      for(auto& item : m_securityGroupIds)
      {
        oStream << location << ".SecurityGroupIdSet." << securityGroupIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
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
