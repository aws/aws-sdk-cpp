﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LaunchTemplateInstanceNetworkInterfaceSpecificationRequest.h>
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

LaunchTemplateInstanceNetworkInterfaceSpecificationRequest::LaunchTemplateInstanceNetworkInterfaceSpecificationRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

LaunchTemplateInstanceNetworkInterfaceSpecificationRequest& LaunchTemplateInstanceNetworkInterfaceSpecificationRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode associateCarrierIpAddressNode = resultNode.FirstChild("AssociateCarrierIpAddress");
    if(!associateCarrierIpAddressNode.IsNull())
    {
      m_associateCarrierIpAddress = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(associateCarrierIpAddressNode.GetText()).c_str()).c_str());
      m_associateCarrierIpAddressHasBeenSet = true;
    }
    XmlNode associatePublicIpAddressNode = resultNode.FirstChild("AssociatePublicIpAddress");
    if(!associatePublicIpAddressNode.IsNull())
    {
      m_associatePublicIpAddress = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(associatePublicIpAddressNode.GetText()).c_str()).c_str());
      m_associatePublicIpAddressHasBeenSet = true;
    }
    XmlNode deleteOnTerminationNode = resultNode.FirstChild("DeleteOnTermination");
    if(!deleteOnTerminationNode.IsNull())
    {
      m_deleteOnTermination = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deleteOnTerminationNode.GetText()).c_str()).c_str());
      m_deleteOnTerminationHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode deviceIndexNode = resultNode.FirstChild("DeviceIndex");
    if(!deviceIndexNode.IsNull())
    {
      m_deviceIndex = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deviceIndexNode.GetText()).c_str()).c_str());
      m_deviceIndexHasBeenSet = true;
    }
    XmlNode groupsNode = resultNode.FirstChild("SecurityGroupId");
    if(!groupsNode.IsNull())
    {
      XmlNode groupsMember = groupsNode.FirstChild("SecurityGroupId");
      m_groupsHasBeenSet = !groupsMember.IsNull();
      while(!groupsMember.IsNull())
      {
        m_groups.push_back(groupsMember.GetText());
        groupsMember = groupsMember.NextNode("SecurityGroupId");
      }

      m_groupsHasBeenSet = true;
    }
    XmlNode interfaceTypeNode = resultNode.FirstChild("InterfaceType");
    if(!interfaceTypeNode.IsNull())
    {
      m_interfaceType = Aws::Utils::Xml::DecodeEscapedXmlText(interfaceTypeNode.GetText());
      m_interfaceTypeHasBeenSet = true;
    }
    XmlNode ipv6AddressCountNode = resultNode.FirstChild("Ipv6AddressCount");
    if(!ipv6AddressCountNode.IsNull())
    {
      m_ipv6AddressCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipv6AddressCountNode.GetText()).c_str()).c_str());
      m_ipv6AddressCountHasBeenSet = true;
    }
    XmlNode ipv6AddressesNode = resultNode.FirstChild("Ipv6Addresses");
    if(!ipv6AddressesNode.IsNull())
    {
      XmlNode ipv6AddressesMember = ipv6AddressesNode.FirstChild("InstanceIpv6Address");
      m_ipv6AddressesHasBeenSet = !ipv6AddressesMember.IsNull();
      while(!ipv6AddressesMember.IsNull())
      {
        m_ipv6Addresses.push_back(ipv6AddressesMember);
        ipv6AddressesMember = ipv6AddressesMember.NextNode("InstanceIpv6Address");
      }

      m_ipv6AddressesHasBeenSet = true;
    }
    XmlNode networkInterfaceIdNode = resultNode.FirstChild("NetworkInterfaceId");
    if(!networkInterfaceIdNode.IsNull())
    {
      m_networkInterfaceId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInterfaceIdNode.GetText());
      m_networkInterfaceIdHasBeenSet = true;
    }
    XmlNode privateIpAddressNode = resultNode.FirstChild("PrivateIpAddress");
    if(!privateIpAddressNode.IsNull())
    {
      m_privateIpAddress = Aws::Utils::Xml::DecodeEscapedXmlText(privateIpAddressNode.GetText());
      m_privateIpAddressHasBeenSet = true;
    }
    XmlNode privateIpAddressesNode = resultNode.FirstChild("PrivateIpAddresses");
    if(!privateIpAddressesNode.IsNull())
    {
      XmlNode privateIpAddressesMember = privateIpAddressesNode.FirstChild("item");
      m_privateIpAddressesHasBeenSet = !privateIpAddressesMember.IsNull();
      while(!privateIpAddressesMember.IsNull())
      {
        m_privateIpAddresses.push_back(privateIpAddressesMember);
        privateIpAddressesMember = privateIpAddressesMember.NextNode("item");
      }

      m_privateIpAddressesHasBeenSet = true;
    }
    XmlNode secondaryPrivateIpAddressCountNode = resultNode.FirstChild("SecondaryPrivateIpAddressCount");
    if(!secondaryPrivateIpAddressCountNode.IsNull())
    {
      m_secondaryPrivateIpAddressCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(secondaryPrivateIpAddressCountNode.GetText()).c_str()).c_str());
      m_secondaryPrivateIpAddressCountHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("SubnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode networkCardIndexNode = resultNode.FirstChild("NetworkCardIndex");
    if(!networkCardIndexNode.IsNull())
    {
      m_networkCardIndex = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(networkCardIndexNode.GetText()).c_str()).c_str());
      m_networkCardIndexHasBeenSet = true;
    }
    XmlNode ipv4PrefixesNode = resultNode.FirstChild("Ipv4Prefix");
    if(!ipv4PrefixesNode.IsNull())
    {
      XmlNode ipv4PrefixesMember = ipv4PrefixesNode.FirstChild("item");
      m_ipv4PrefixesHasBeenSet = !ipv4PrefixesMember.IsNull();
      while(!ipv4PrefixesMember.IsNull())
      {
        m_ipv4Prefixes.push_back(ipv4PrefixesMember);
        ipv4PrefixesMember = ipv4PrefixesMember.NextNode("item");
      }

      m_ipv4PrefixesHasBeenSet = true;
    }
    XmlNode ipv4PrefixCountNode = resultNode.FirstChild("Ipv4PrefixCount");
    if(!ipv4PrefixCountNode.IsNull())
    {
      m_ipv4PrefixCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipv4PrefixCountNode.GetText()).c_str()).c_str());
      m_ipv4PrefixCountHasBeenSet = true;
    }
    XmlNode ipv6PrefixesNode = resultNode.FirstChild("Ipv6Prefix");
    if(!ipv6PrefixesNode.IsNull())
    {
      XmlNode ipv6PrefixesMember = ipv6PrefixesNode.FirstChild("item");
      m_ipv6PrefixesHasBeenSet = !ipv6PrefixesMember.IsNull();
      while(!ipv6PrefixesMember.IsNull())
      {
        m_ipv6Prefixes.push_back(ipv6PrefixesMember);
        ipv6PrefixesMember = ipv6PrefixesMember.NextNode("item");
      }

      m_ipv6PrefixesHasBeenSet = true;
    }
    XmlNode ipv6PrefixCountNode = resultNode.FirstChild("Ipv6PrefixCount");
    if(!ipv6PrefixCountNode.IsNull())
    {
      m_ipv6PrefixCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipv6PrefixCountNode.GetText()).c_str()).c_str());
      m_ipv6PrefixCountHasBeenSet = true;
    }
    XmlNode primaryIpv6Node = resultNode.FirstChild("PrimaryIpv6");
    if(!primaryIpv6Node.IsNull())
    {
      m_primaryIpv6 = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(primaryIpv6Node.GetText()).c_str()).c_str());
      m_primaryIpv6HasBeenSet = true;
    }
    XmlNode enaSrdSpecificationNode = resultNode.FirstChild("EnaSrdSpecification");
    if(!enaSrdSpecificationNode.IsNull())
    {
      m_enaSrdSpecification = enaSrdSpecificationNode;
      m_enaSrdSpecificationHasBeenSet = true;
    }
    XmlNode connectionTrackingSpecificationNode = resultNode.FirstChild("ConnectionTrackingSpecification");
    if(!connectionTrackingSpecificationNode.IsNull())
    {
      m_connectionTrackingSpecification = connectionTrackingSpecificationNode;
      m_connectionTrackingSpecificationHasBeenSet = true;
    }
    XmlNode enaQueueCountNode = resultNode.FirstChild("EnaQueueCount");
    if(!enaQueueCountNode.IsNull())
    {
      m_enaQueueCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enaQueueCountNode.GetText()).c_str()).c_str());
      m_enaQueueCountHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplateInstanceNetworkInterfaceSpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_associateCarrierIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociateCarrierIpAddress=" << std::boolalpha << m_associateCarrierIpAddress << "&";
  }

  if(m_associatePublicIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociatePublicIpAddress=" << std::boolalpha << m_associatePublicIpAddress << "&";
  }

  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_deviceIndexHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeviceIndex=" << m_deviceIndex << "&";
  }

  if(m_groupsHasBeenSet)
  {
      unsigned groupsIdx = 1;
      for(auto& item : m_groups)
      {
        oStream << location << index << locationValue << ".SecurityGroupId." << groupsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_interfaceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InterfaceType=" << StringUtils::URLEncode(m_interfaceType.c_str()) << "&";
  }

  if(m_ipv6AddressCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6AddressCount=" << m_ipv6AddressCount << "&";
  }

  if(m_ipv6AddressesHasBeenSet)
  {
      unsigned ipv6AddressesIdx = 1;
      for(auto& item : m_ipv6Addresses)
      {
        Aws::StringStream ipv6AddressesSs;
        ipv6AddressesSs << location << index << locationValue << ".Ipv6Addresses." << ipv6AddressesIdx++;
        item.OutputToStream(oStream, ipv6AddressesSs.str().c_str());
      }
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
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
        privateIpAddressesSs << location << index << locationValue << ".PrivateIpAddresses." << privateIpAddressesIdx++;
        item.OutputToStream(oStream, privateIpAddressesSs.str().c_str());
      }
  }

  if(m_secondaryPrivateIpAddressCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".SecondaryPrivateIpAddressCount=" << m_secondaryPrivateIpAddressCount << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_networkCardIndexHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkCardIndex=" << m_networkCardIndex << "&";
  }

  if(m_ipv4PrefixesHasBeenSet)
  {
      unsigned ipv4PrefixesIdx = 1;
      for(auto& item : m_ipv4Prefixes)
      {
        Aws::StringStream ipv4PrefixesSs;
        ipv4PrefixesSs << location << index << locationValue << ".Ipv4Prefix." << ipv4PrefixesIdx++;
        item.OutputToStream(oStream, ipv4PrefixesSs.str().c_str());
      }
  }

  if(m_ipv4PrefixCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv4PrefixCount=" << m_ipv4PrefixCount << "&";
  }

  if(m_ipv6PrefixesHasBeenSet)
  {
      unsigned ipv6PrefixesIdx = 1;
      for(auto& item : m_ipv6Prefixes)
      {
        Aws::StringStream ipv6PrefixesSs;
        ipv6PrefixesSs << location << index << locationValue << ".Ipv6Prefix." << ipv6PrefixesIdx++;
        item.OutputToStream(oStream, ipv6PrefixesSs.str().c_str());
      }
  }

  if(m_ipv6PrefixCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6PrefixCount=" << m_ipv6PrefixCount << "&";
  }

  if(m_primaryIpv6HasBeenSet)
  {
      oStream << location << index << locationValue << ".PrimaryIpv6=" << std::boolalpha << m_primaryIpv6 << "&";
  }

  if(m_enaSrdSpecificationHasBeenSet)
  {
      Aws::StringStream enaSrdSpecificationLocationAndMemberSs;
      enaSrdSpecificationLocationAndMemberSs << location << index << locationValue << ".EnaSrdSpecification";
      m_enaSrdSpecification.OutputToStream(oStream, enaSrdSpecificationLocationAndMemberSs.str().c_str());
  }

  if(m_connectionTrackingSpecificationHasBeenSet)
  {
      Aws::StringStream connectionTrackingSpecificationLocationAndMemberSs;
      connectionTrackingSpecificationLocationAndMemberSs << location << index << locationValue << ".ConnectionTrackingSpecification";
      m_connectionTrackingSpecification.OutputToStream(oStream, connectionTrackingSpecificationLocationAndMemberSs.str().c_str());
  }

  if(m_enaQueueCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnaQueueCount=" << m_enaQueueCount << "&";
  }

}

void LaunchTemplateInstanceNetworkInterfaceSpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_associateCarrierIpAddressHasBeenSet)
  {
      oStream << location << ".AssociateCarrierIpAddress=" << std::boolalpha << m_associateCarrierIpAddress << "&";
  }
  if(m_associatePublicIpAddressHasBeenSet)
  {
      oStream << location << ".AssociatePublicIpAddress=" << std::boolalpha << m_associatePublicIpAddress << "&";
  }
  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_deviceIndexHasBeenSet)
  {
      oStream << location << ".DeviceIndex=" << m_deviceIndex << "&";
  }
  if(m_groupsHasBeenSet)
  {
      unsigned groupsIdx = 1;
      for(auto& item : m_groups)
      {
        oStream << location << ".SecurityGroupId." << groupsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_interfaceTypeHasBeenSet)
  {
      oStream << location << ".InterfaceType=" << StringUtils::URLEncode(m_interfaceType.c_str()) << "&";
  }
  if(m_ipv6AddressCountHasBeenSet)
  {
      oStream << location << ".Ipv6AddressCount=" << m_ipv6AddressCount << "&";
  }
  if(m_ipv6AddressesHasBeenSet)
  {
      unsigned ipv6AddressesIdx = 1;
      for(auto& item : m_ipv6Addresses)
      {
        Aws::StringStream ipv6AddressesSs;
        ipv6AddressesSs << location << ".Ipv6Addresses." << ipv6AddressesIdx++;
        item.OutputToStream(oStream, ipv6AddressesSs.str().c_str());
      }
  }
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
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
        privateIpAddressesSs << location << ".PrivateIpAddresses." << privateIpAddressesIdx++;
        item.OutputToStream(oStream, privateIpAddressesSs.str().c_str());
      }
  }
  if(m_secondaryPrivateIpAddressCountHasBeenSet)
  {
      oStream << location << ".SecondaryPrivateIpAddressCount=" << m_secondaryPrivateIpAddressCount << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_networkCardIndexHasBeenSet)
  {
      oStream << location << ".NetworkCardIndex=" << m_networkCardIndex << "&";
  }
  if(m_ipv4PrefixesHasBeenSet)
  {
      unsigned ipv4PrefixesIdx = 1;
      for(auto& item : m_ipv4Prefixes)
      {
        Aws::StringStream ipv4PrefixesSs;
        ipv4PrefixesSs << location << ".Ipv4Prefix." << ipv4PrefixesIdx++;
        item.OutputToStream(oStream, ipv4PrefixesSs.str().c_str());
      }
  }
  if(m_ipv4PrefixCountHasBeenSet)
  {
      oStream << location << ".Ipv4PrefixCount=" << m_ipv4PrefixCount << "&";
  }
  if(m_ipv6PrefixesHasBeenSet)
  {
      unsigned ipv6PrefixesIdx = 1;
      for(auto& item : m_ipv6Prefixes)
      {
        Aws::StringStream ipv6PrefixesSs;
        ipv6PrefixesSs << location << ".Ipv6Prefix." << ipv6PrefixesIdx++;
        item.OutputToStream(oStream, ipv6PrefixesSs.str().c_str());
      }
  }
  if(m_ipv6PrefixCountHasBeenSet)
  {
      oStream << location << ".Ipv6PrefixCount=" << m_ipv6PrefixCount << "&";
  }
  if(m_primaryIpv6HasBeenSet)
  {
      oStream << location << ".PrimaryIpv6=" << std::boolalpha << m_primaryIpv6 << "&";
  }
  if(m_enaSrdSpecificationHasBeenSet)
  {
      Aws::String enaSrdSpecificationLocationAndMember(location);
      enaSrdSpecificationLocationAndMember += ".EnaSrdSpecification";
      m_enaSrdSpecification.OutputToStream(oStream, enaSrdSpecificationLocationAndMember.c_str());
  }
  if(m_connectionTrackingSpecificationHasBeenSet)
  {
      Aws::String connectionTrackingSpecificationLocationAndMember(location);
      connectionTrackingSpecificationLocationAndMember += ".ConnectionTrackingSpecification";
      m_connectionTrackingSpecification.OutputToStream(oStream, connectionTrackingSpecificationLocationAndMember.c_str());
  }
  if(m_enaQueueCountHasBeenSet)
  {
      oStream << location << ".EnaQueueCount=" << m_enaQueueCount << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
