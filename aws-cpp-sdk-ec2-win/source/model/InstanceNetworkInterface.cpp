﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceNetworkInterface.h>
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

InstanceNetworkInterface::InstanceNetworkInterface() : 
    m_associationHasBeenSet(false),
    m_attachmentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_ipv6AddressesHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_privateDnsNameHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_sourceDestCheck(false),
    m_sourceDestCheckHasBeenSet(false),
    m_status(NetworkInterfaceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_interfaceTypeHasBeenSet(false),
    m_ipv4PrefixesHasBeenSet(false),
    m_ipv6PrefixesHasBeenSet(false)
{
}

InstanceNetworkInterface::InstanceNetworkInterface(const XmlNode& xmlNode) : 
    m_associationHasBeenSet(false),
    m_attachmentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_ipv6AddressesHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_privateDnsNameHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_sourceDestCheck(false),
    m_sourceDestCheckHasBeenSet(false),
    m_status(NetworkInterfaceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_interfaceTypeHasBeenSet(false),
    m_ipv4PrefixesHasBeenSet(false),
    m_ipv6PrefixesHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceNetworkInterface& InstanceNetworkInterface::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode associationNode = resultNode.FirstChild("association");
    if(!associationNode.IsNull())
    {
      m_association = associationNode;
      m_associationHasBeenSet = true;
    }
    XmlNode attachmentNode = resultNode.FirstChild("attachment");
    if(!attachmentNode.IsNull())
    {
      m_attachment = attachmentNode;
      m_attachmentHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode groupsNode = resultNode.FirstChild("groupSet");
    if(!groupsNode.IsNull())
    {
      XmlNode groupsMember = groupsNode.FirstChild("item");
      while(!groupsMember.IsNull())
      {
        m_groups.push_back(groupsMember);
        groupsMember = groupsMember.NextNode("item");
      }

      m_groupsHasBeenSet = true;
    }
    XmlNode ipv6AddressesNode = resultNode.FirstChild("ipv6AddressesSet");
    if(!ipv6AddressesNode.IsNull())
    {
      XmlNode ipv6AddressesMember = ipv6AddressesNode.FirstChild("item");
      while(!ipv6AddressesMember.IsNull())
      {
        m_ipv6Addresses.push_back(ipv6AddressesMember);
        ipv6AddressesMember = ipv6AddressesMember.NextNode("item");
      }

      m_ipv6AddressesHasBeenSet = true;
    }
    XmlNode macAddressNode = resultNode.FirstChild("macAddress");
    if(!macAddressNode.IsNull())
    {
      m_macAddress = Aws::Utils::Xml::DecodeEscapedXmlText(macAddressNode.GetText());
      m_macAddressHasBeenSet = true;
    }
    XmlNode networkInterfaceIdNode = resultNode.FirstChild("networkInterfaceId");
    if(!networkInterfaceIdNode.IsNull())
    {
      m_networkInterfaceId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInterfaceIdNode.GetText());
      m_networkInterfaceIdHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode privateDnsNameNode = resultNode.FirstChild("privateDnsName");
    if(!privateDnsNameNode.IsNull())
    {
      m_privateDnsName = Aws::Utils::Xml::DecodeEscapedXmlText(privateDnsNameNode.GetText());
      m_privateDnsNameHasBeenSet = true;
    }
    XmlNode privateIpAddressNode = resultNode.FirstChild("privateIpAddress");
    if(!privateIpAddressNode.IsNull())
    {
      m_privateIpAddress = Aws::Utils::Xml::DecodeEscapedXmlText(privateIpAddressNode.GetText());
      m_privateIpAddressHasBeenSet = true;
    }
    XmlNode privateIpAddressesNode = resultNode.FirstChild("privateIpAddressesSet");
    if(!privateIpAddressesNode.IsNull())
    {
      XmlNode privateIpAddressesMember = privateIpAddressesNode.FirstChild("item");
      while(!privateIpAddressesMember.IsNull())
      {
        m_privateIpAddresses.push_back(privateIpAddressesMember);
        privateIpAddressesMember = privateIpAddressesMember.NextNode("item");
      }

      m_privateIpAddressesHasBeenSet = true;
    }
    XmlNode sourceDestCheckNode = resultNode.FirstChild("sourceDestCheck");
    if(!sourceDestCheckNode.IsNull())
    {
      m_sourceDestCheck = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sourceDestCheckNode.GetText()).c_str()).c_str());
      m_sourceDestCheckHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = NetworkInterfaceStatusMapper::GetNetworkInterfaceStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode interfaceTypeNode = resultNode.FirstChild("interfaceType");
    if(!interfaceTypeNode.IsNull())
    {
      m_interfaceType = Aws::Utils::Xml::DecodeEscapedXmlText(interfaceTypeNode.GetText());
      m_interfaceTypeHasBeenSet = true;
    }
    XmlNode ipv4PrefixesNode = resultNode.FirstChild("ipv4PrefixSet");
    if(!ipv4PrefixesNode.IsNull())
    {
      XmlNode ipv4PrefixesMember = ipv4PrefixesNode.FirstChild("item");
      while(!ipv4PrefixesMember.IsNull())
      {
        m_ipv4Prefixes.push_back(ipv4PrefixesMember);
        ipv4PrefixesMember = ipv4PrefixesMember.NextNode("item");
      }

      m_ipv4PrefixesHasBeenSet = true;
    }
    XmlNode ipv6PrefixesNode = resultNode.FirstChild("ipv6PrefixSet");
    if(!ipv6PrefixesNode.IsNull())
    {
      XmlNode ipv6PrefixesMember = ipv6PrefixesNode.FirstChild("item");
      while(!ipv6PrefixesMember.IsNull())
      {
        m_ipv6Prefixes.push_back(ipv6PrefixesMember);
        ipv6PrefixesMember = ipv6PrefixesMember.NextNode("item");
      }

      m_ipv6PrefixesHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceNetworkInterface::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_associationHasBeenSet)
  {
      Aws::StringStream associationLocationAndMemberSs;
      associationLocationAndMemberSs << location << index << locationValue << ".Association";
      m_association.OutputToStream(oStream, associationLocationAndMemberSs.str().c_str());
  }

  if(m_attachmentHasBeenSet)
  {
      Aws::StringStream attachmentLocationAndMemberSs;
      attachmentLocationAndMemberSs << location << index << locationValue << ".Attachment";
      m_attachment.OutputToStream(oStream, attachmentLocationAndMemberSs.str().c_str());
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_groupsHasBeenSet)
  {
      unsigned groupsIdx = 1;
      for(auto& item : m_groups)
      {
        Aws::StringStream groupsSs;
        groupsSs << location << index << locationValue << ".GroupSet." << groupsIdx++;
        item.OutputToStream(oStream, groupsSs.str().c_str());
      }
  }

  if(m_ipv6AddressesHasBeenSet)
  {
      unsigned ipv6AddressesIdx = 1;
      for(auto& item : m_ipv6Addresses)
      {
        Aws::StringStream ipv6AddressesSs;
        ipv6AddressesSs << location << index << locationValue << ".Ipv6AddressesSet." << ipv6AddressesIdx++;
        item.OutputToStream(oStream, ipv6AddressesSs.str().c_str());
      }
  }

  if(m_macAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".MacAddress=" << StringUtils::URLEncode(m_macAddress.c_str()) << "&";
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_privateDnsNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateDnsName=" << StringUtils::URLEncode(m_privateDnsName.c_str()) << "&";
  }

  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }

  if(m_privateIpAddressesHasBeenSet)
  {
      unsigned privateIpAddressesIdx = 1;
      for(auto& item : m_privateIpAddresses)
      {
        Aws::StringStream privateIpAddressesSs;
        privateIpAddressesSs << location << index << locationValue << ".PrivateIpAddressesSet." << privateIpAddressesIdx++;
        item.OutputToStream(oStream, privateIpAddressesSs.str().c_str());
      }
  }

  if(m_sourceDestCheckHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceDestCheck=" << std::boolalpha << m_sourceDestCheck << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << NetworkInterfaceStatusMapper::GetNameForNetworkInterfaceStatus(m_status) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_interfaceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InterfaceType=" << StringUtils::URLEncode(m_interfaceType.c_str()) << "&";
  }

  if(m_ipv4PrefixesHasBeenSet)
  {
      unsigned ipv4PrefixesIdx = 1;
      for(auto& item : m_ipv4Prefixes)
      {
        Aws::StringStream ipv4PrefixesSs;
        ipv4PrefixesSs << location << index << locationValue << ".Ipv4PrefixSet." << ipv4PrefixesIdx++;
        item.OutputToStream(oStream, ipv4PrefixesSs.str().c_str());
      }
  }

  if(m_ipv6PrefixesHasBeenSet)
  {
      unsigned ipv6PrefixesIdx = 1;
      for(auto& item : m_ipv6Prefixes)
      {
        Aws::StringStream ipv6PrefixesSs;
        ipv6PrefixesSs << location << index << locationValue << ".Ipv6PrefixSet." << ipv6PrefixesIdx++;
        item.OutputToStream(oStream, ipv6PrefixesSs.str().c_str());
      }
  }

}

void InstanceNetworkInterface::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_associationHasBeenSet)
  {
      Aws::String associationLocationAndMember(location);
      associationLocationAndMember += ".Association";
      m_association.OutputToStream(oStream, associationLocationAndMember.c_str());
  }
  if(m_attachmentHasBeenSet)
  {
      Aws::String attachmentLocationAndMember(location);
      attachmentLocationAndMember += ".Attachment";
      m_attachment.OutputToStream(oStream, attachmentLocationAndMember.c_str());
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_groupsHasBeenSet)
  {
      unsigned groupsIdx = 1;
      for(auto& item : m_groups)
      {
        Aws::StringStream groupsSs;
        groupsSs << location <<  ".GroupSet." << groupsIdx++;
        item.OutputToStream(oStream, groupsSs.str().c_str());
      }
  }
  if(m_ipv6AddressesHasBeenSet)
  {
      unsigned ipv6AddressesIdx = 1;
      for(auto& item : m_ipv6Addresses)
      {
        Aws::StringStream ipv6AddressesSs;
        ipv6AddressesSs << location <<  ".Ipv6AddressesSet." << ipv6AddressesIdx++;
        item.OutputToStream(oStream, ipv6AddressesSs.str().c_str());
      }
  }
  if(m_macAddressHasBeenSet)
  {
      oStream << location << ".MacAddress=" << StringUtils::URLEncode(m_macAddress.c_str()) << "&";
  }
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_privateDnsNameHasBeenSet)
  {
      oStream << location << ".PrivateDnsName=" << StringUtils::URLEncode(m_privateDnsName.c_str()) << "&";
  }
  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }
  if(m_privateIpAddressesHasBeenSet)
  {
      unsigned privateIpAddressesIdx = 1;
      for(auto& item : m_privateIpAddresses)
      {
        Aws::StringStream privateIpAddressesSs;
        privateIpAddressesSs << location <<  ".PrivateIpAddressesSet." << privateIpAddressesIdx++;
        item.OutputToStream(oStream, privateIpAddressesSs.str().c_str());
      }
  }
  if(m_sourceDestCheckHasBeenSet)
  {
      oStream << location << ".SourceDestCheck=" << std::boolalpha << m_sourceDestCheck << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << NetworkInterfaceStatusMapper::GetNameForNetworkInterfaceStatus(m_status) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_interfaceTypeHasBeenSet)
  {
      oStream << location << ".InterfaceType=" << StringUtils::URLEncode(m_interfaceType.c_str()) << "&";
  }
  if(m_ipv4PrefixesHasBeenSet)
  {
      unsigned ipv4PrefixesIdx = 1;
      for(auto& item : m_ipv4Prefixes)
      {
        Aws::StringStream ipv4PrefixesSs;
        ipv4PrefixesSs << location <<  ".Ipv4PrefixSet." << ipv4PrefixesIdx++;
        item.OutputToStream(oStream, ipv4PrefixesSs.str().c_str());
      }
  }
  if(m_ipv6PrefixesHasBeenSet)
  {
      unsigned ipv6PrefixesIdx = 1;
      for(auto& item : m_ipv6Prefixes)
      {
        Aws::StringStream ipv6PrefixesSs;
        ipv6PrefixesSs << location <<  ".Ipv6PrefixSet." << ipv6PrefixesIdx++;
        item.OutputToStream(oStream, ipv6PrefixesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
