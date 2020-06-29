/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NetworkInterface.h>
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

NetworkInterface::NetworkInterface() : 
    m_associationHasBeenSet(false),
    m_attachmentHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_interfaceType(NetworkInterfaceType::NOT_SET),
    m_interfaceTypeHasBeenSet(false),
    m_ipv6AddressesHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_outpostArnHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_privateDnsNameHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_requesterIdHasBeenSet(false),
    m_requesterManaged(false),
    m_requesterManagedHasBeenSet(false),
    m_sourceDestCheck(false),
    m_sourceDestCheckHasBeenSet(false),
    m_status(NetworkInterfaceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

NetworkInterface::NetworkInterface(const XmlNode& xmlNode) : 
    m_associationHasBeenSet(false),
    m_attachmentHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_interfaceType(NetworkInterfaceType::NOT_SET),
    m_interfaceTypeHasBeenSet(false),
    m_ipv6AddressesHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_outpostArnHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_privateDnsNameHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_requesterIdHasBeenSet(false),
    m_requesterManaged(false),
    m_requesterManagedHasBeenSet(false),
    m_sourceDestCheck(false),
    m_sourceDestCheckHasBeenSet(false),
    m_status(NetworkInterfaceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkInterface& NetworkInterface::operator =(const XmlNode& xmlNode)
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
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
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
    XmlNode interfaceTypeNode = resultNode.FirstChild("interfaceType");
    if(!interfaceTypeNode.IsNull())
    {
      m_interfaceType = NetworkInterfaceTypeMapper::GetNetworkInterfaceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(interfaceTypeNode.GetText()).c_str()).c_str());
      m_interfaceTypeHasBeenSet = true;
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
    XmlNode outpostArnNode = resultNode.FirstChild("outpostArn");
    if(!outpostArnNode.IsNull())
    {
      m_outpostArn = Aws::Utils::Xml::DecodeEscapedXmlText(outpostArnNode.GetText());
      m_outpostArnHasBeenSet = true;
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
    XmlNode requesterIdNode = resultNode.FirstChild("requesterId");
    if(!requesterIdNode.IsNull())
    {
      m_requesterId = Aws::Utils::Xml::DecodeEscapedXmlText(requesterIdNode.GetText());
      m_requesterIdHasBeenSet = true;
    }
    XmlNode requesterManagedNode = resultNode.FirstChild("requesterManaged");
    if(!requesterManagedNode.IsNull())
    {
      m_requesterManaged = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(requesterManagedNode.GetText()).c_str()).c_str());
      m_requesterManagedHasBeenSet = true;
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
    XmlNode tagSetNode = resultNode.FirstChild("tagSet");
    if(!tagSetNode.IsNull())
    {
      XmlNode tagSetMember = tagSetNode.FirstChild("item");
      while(!tagSetMember.IsNull())
      {
        m_tagSet.push_back(tagSetMember);
        tagSetMember = tagSetMember.NextNode("item");
      }

      m_tagSetHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkInterface::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
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

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
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

  if(m_interfaceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InterfaceType=" << NetworkInterfaceTypeMapper::GetNameForNetworkInterfaceType(m_interfaceType) << "&";
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

  if(m_outpostArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
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

  if(m_requesterIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequesterId=" << StringUtils::URLEncode(m_requesterId.c_str()) << "&";
  }

  if(m_requesterManagedHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequesterManaged=" << std::boolalpha << m_requesterManaged << "&";
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

  if(m_tagSetHasBeenSet)
  {
      unsigned tagSetIdx = 1;
      for(auto& item : m_tagSet)
      {
        Aws::StringStream tagSetSs;
        tagSetSs << location << index << locationValue << ".TagSet." << tagSetIdx++;
        item.OutputToStream(oStream, tagSetSs.str().c_str());
      }
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

}

void NetworkInterface::OutputToStream(Aws::OStream& oStream, const char* location) const
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
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
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
  if(m_interfaceTypeHasBeenSet)
  {
      oStream << location << ".InterfaceType=" << NetworkInterfaceTypeMapper::GetNameForNetworkInterfaceType(m_interfaceType) << "&";
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
  if(m_outpostArnHasBeenSet)
  {
      oStream << location << ".OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
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
  if(m_requesterIdHasBeenSet)
  {
      oStream << location << ".RequesterId=" << StringUtils::URLEncode(m_requesterId.c_str()) << "&";
  }
  if(m_requesterManagedHasBeenSet)
  {
      oStream << location << ".RequesterManaged=" << std::boolalpha << m_requesterManaged << "&";
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
  if(m_tagSetHasBeenSet)
  {
      unsigned tagSetIdx = 1;
      for(auto& item : m_tagSet)
      {
        Aws::StringStream tagSetSs;
        tagSetSs << location <<  ".TagSet." << tagSetIdx++;
        item.OutputToStream(oStream, tagSetSs.str().c_str());
      }
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
