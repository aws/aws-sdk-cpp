/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpcEndpoint.h>
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

VpcEndpoint::VpcEndpoint() : 
    m_vpcEndpointIdHasBeenSet(false),
    m_vpcEndpointType(VpcEndpointType::NOT_SET),
    m_vpcEndpointTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_routeTableIdsHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_dnsOptionsHasBeenSet(false),
    m_privateDnsEnabled(false),
    m_privateDnsEnabledHasBeenSet(false),
    m_requesterManaged(false),
    m_requesterManagedHasBeenSet(false),
    m_networkInterfaceIdsHasBeenSet(false),
    m_dnsEntriesHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_lastErrorHasBeenSet(false)
{
}

VpcEndpoint::VpcEndpoint(const XmlNode& xmlNode) : 
    m_vpcEndpointIdHasBeenSet(false),
    m_vpcEndpointType(VpcEndpointType::NOT_SET),
    m_vpcEndpointTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_routeTableIdsHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_dnsOptionsHasBeenSet(false),
    m_privateDnsEnabled(false),
    m_privateDnsEnabledHasBeenSet(false),
    m_requesterManaged(false),
    m_requesterManagedHasBeenSet(false),
    m_networkInterfaceIdsHasBeenSet(false),
    m_dnsEntriesHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_lastErrorHasBeenSet(false)
{
  *this = xmlNode;
}

VpcEndpoint& VpcEndpoint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode vpcEndpointIdNode = resultNode.FirstChild("vpcEndpointId");
    if(!vpcEndpointIdNode.IsNull())
    {
      m_vpcEndpointId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcEndpointIdNode.GetText());
      m_vpcEndpointIdHasBeenSet = true;
    }
    XmlNode vpcEndpointTypeNode = resultNode.FirstChild("vpcEndpointType");
    if(!vpcEndpointTypeNode.IsNull())
    {
      m_vpcEndpointType = VpcEndpointTypeMapper::GetVpcEndpointTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(vpcEndpointTypeNode.GetText()).c_str()).c_str());
      m_vpcEndpointTypeHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode serviceNameNode = resultNode.FirstChild("serviceName");
    if(!serviceNameNode.IsNull())
    {
      m_serviceName = Aws::Utils::Xml::DecodeEscapedXmlText(serviceNameNode.GetText());
      m_serviceNameHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = StateMapper::GetStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode policyDocumentNode = resultNode.FirstChild("policyDocument");
    if(!policyDocumentNode.IsNull())
    {
      m_policyDocument = Aws::Utils::Xml::DecodeEscapedXmlText(policyDocumentNode.GetText());
      m_policyDocumentHasBeenSet = true;
    }
    XmlNode routeTableIdsNode = resultNode.FirstChild("routeTableIdSet");
    if(!routeTableIdsNode.IsNull())
    {
      XmlNode routeTableIdsMember = routeTableIdsNode.FirstChild("item");
      while(!routeTableIdsMember.IsNull())
      {
        m_routeTableIds.push_back(routeTableIdsMember.GetText());
        routeTableIdsMember = routeTableIdsMember.NextNode("item");
      }

      m_routeTableIdsHasBeenSet = true;
    }
    XmlNode subnetIdsNode = resultNode.FirstChild("subnetIdSet");
    if(!subnetIdsNode.IsNull())
    {
      XmlNode subnetIdsMember = subnetIdsNode.FirstChild("item");
      while(!subnetIdsMember.IsNull())
      {
        m_subnetIds.push_back(subnetIdsMember.GetText());
        subnetIdsMember = subnetIdsMember.NextNode("item");
      }

      m_subnetIdsHasBeenSet = true;
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
    XmlNode ipAddressTypeNode = resultNode.FirstChild("ipAddressType");
    if(!ipAddressTypeNode.IsNull())
    {
      m_ipAddressType = IpAddressTypeMapper::GetIpAddressTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipAddressTypeNode.GetText()).c_str()).c_str());
      m_ipAddressTypeHasBeenSet = true;
    }
    XmlNode dnsOptionsNode = resultNode.FirstChild("dnsOptions");
    if(!dnsOptionsNode.IsNull())
    {
      m_dnsOptions = dnsOptionsNode;
      m_dnsOptionsHasBeenSet = true;
    }
    XmlNode privateDnsEnabledNode = resultNode.FirstChild("privateDnsEnabled");
    if(!privateDnsEnabledNode.IsNull())
    {
      m_privateDnsEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(privateDnsEnabledNode.GetText()).c_str()).c_str());
      m_privateDnsEnabledHasBeenSet = true;
    }
    XmlNode requesterManagedNode = resultNode.FirstChild("requesterManaged");
    if(!requesterManagedNode.IsNull())
    {
      m_requesterManaged = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(requesterManagedNode.GetText()).c_str()).c_str());
      m_requesterManagedHasBeenSet = true;
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
    XmlNode dnsEntriesNode = resultNode.FirstChild("dnsEntrySet");
    if(!dnsEntriesNode.IsNull())
    {
      XmlNode dnsEntriesMember = dnsEntriesNode.FirstChild("item");
      while(!dnsEntriesMember.IsNull())
      {
        m_dnsEntries.push_back(dnsEntriesMember);
        dnsEntriesMember = dnsEntriesMember.NextNode("item");
      }

      m_dnsEntriesHasBeenSet = true;
    }
    XmlNode creationTimestampNode = resultNode.FirstChild("creationTimestamp");
    if(!creationTimestampNode.IsNull())
    {
      m_creationTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_creationTimestampHasBeenSet = true;
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
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode lastErrorNode = resultNode.FirstChild("lastError");
    if(!lastErrorNode.IsNull())
    {
      m_lastError = lastErrorNode;
      m_lastErrorHasBeenSet = true;
    }
  }

  return *this;
}

void VpcEndpoint::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_vpcEndpointIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcEndpointId=" << StringUtils::URLEncode(m_vpcEndpointId.c_str()) << "&";
  }

  if(m_vpcEndpointTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcEndpointType=" << VpcEndpointTypeMapper::GetNameForVpcEndpointType(m_vpcEndpointType) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_serviceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceName=" << StringUtils::URLEncode(m_serviceName.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StateMapper::GetNameForState(m_state) << "&";
  }

  if(m_policyDocumentHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyDocument=" << StringUtils::URLEncode(m_policyDocument.c_str()) << "&";
  }

  if(m_routeTableIdsHasBeenSet)
  {
      unsigned routeTableIdsIdx = 1;
      for(auto& item : m_routeTableIds)
      {
        oStream << location << index << locationValue << ".RouteTableIdSet." << routeTableIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_subnetIdsHasBeenSet)
  {
      unsigned subnetIdsIdx = 1;
      for(auto& item : m_subnetIds)
      {
        oStream << location << index << locationValue << ".SubnetIdSet." << subnetIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
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

  if(m_ipAddressTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpAddressType=" << IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType) << "&";
  }

  if(m_dnsOptionsHasBeenSet)
  {
      Aws::StringStream dnsOptionsLocationAndMemberSs;
      dnsOptionsLocationAndMemberSs << location << index << locationValue << ".DnsOptions";
      m_dnsOptions.OutputToStream(oStream, dnsOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_privateDnsEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateDnsEnabled=" << std::boolalpha << m_privateDnsEnabled << "&";
  }

  if(m_requesterManagedHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequesterManaged=" << std::boolalpha << m_requesterManaged << "&";
  }

  if(m_networkInterfaceIdsHasBeenSet)
  {
      unsigned networkInterfaceIdsIdx = 1;
      for(auto& item : m_networkInterfaceIds)
      {
        oStream << location << index << locationValue << ".NetworkInterfaceIdSet." << networkInterfaceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_dnsEntriesHasBeenSet)
  {
      unsigned dnsEntriesIdx = 1;
      for(auto& item : m_dnsEntries)
      {
        Aws::StringStream dnsEntriesSs;
        dnsEntriesSs << location << index << locationValue << ".DnsEntrySet." << dnsEntriesIdx++;
        item.OutputToStream(oStream, dnsEntriesSs.str().c_str());
      }
  }

  if(m_creationTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTimestamp=" << StringUtils::URLEncode(m_creationTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_lastErrorHasBeenSet)
  {
      Aws::StringStream lastErrorLocationAndMemberSs;
      lastErrorLocationAndMemberSs << location << index << locationValue << ".LastError";
      m_lastError.OutputToStream(oStream, lastErrorLocationAndMemberSs.str().c_str());
  }

}

void VpcEndpoint::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_vpcEndpointIdHasBeenSet)
  {
      oStream << location << ".VpcEndpointId=" << StringUtils::URLEncode(m_vpcEndpointId.c_str()) << "&";
  }
  if(m_vpcEndpointTypeHasBeenSet)
  {
      oStream << location << ".VpcEndpointType=" << VpcEndpointTypeMapper::GetNameForVpcEndpointType(m_vpcEndpointType) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_serviceNameHasBeenSet)
  {
      oStream << location << ".ServiceName=" << StringUtils::URLEncode(m_serviceName.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StateMapper::GetNameForState(m_state) << "&";
  }
  if(m_policyDocumentHasBeenSet)
  {
      oStream << location << ".PolicyDocument=" << StringUtils::URLEncode(m_policyDocument.c_str()) << "&";
  }
  if(m_routeTableIdsHasBeenSet)
  {
      unsigned routeTableIdsIdx = 1;
      for(auto& item : m_routeTableIds)
      {
        oStream << location << ".RouteTableIdSet." << routeTableIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_subnetIdsHasBeenSet)
  {
      unsigned subnetIdsIdx = 1;
      for(auto& item : m_subnetIds)
      {
        oStream << location << ".SubnetIdSet." << subnetIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
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
  if(m_ipAddressTypeHasBeenSet)
  {
      oStream << location << ".IpAddressType=" << IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType) << "&";
  }
  if(m_dnsOptionsHasBeenSet)
  {
      Aws::String dnsOptionsLocationAndMember(location);
      dnsOptionsLocationAndMember += ".DnsOptions";
      m_dnsOptions.OutputToStream(oStream, dnsOptionsLocationAndMember.c_str());
  }
  if(m_privateDnsEnabledHasBeenSet)
  {
      oStream << location << ".PrivateDnsEnabled=" << std::boolalpha << m_privateDnsEnabled << "&";
  }
  if(m_requesterManagedHasBeenSet)
  {
      oStream << location << ".RequesterManaged=" << std::boolalpha << m_requesterManaged << "&";
  }
  if(m_networkInterfaceIdsHasBeenSet)
  {
      unsigned networkInterfaceIdsIdx = 1;
      for(auto& item : m_networkInterfaceIds)
      {
        oStream << location << ".NetworkInterfaceIdSet." << networkInterfaceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_dnsEntriesHasBeenSet)
  {
      unsigned dnsEntriesIdx = 1;
      for(auto& item : m_dnsEntries)
      {
        Aws::StringStream dnsEntriesSs;
        dnsEntriesSs << location <<  ".DnsEntrySet." << dnsEntriesIdx++;
        item.OutputToStream(oStream, dnsEntriesSs.str().c_str());
      }
  }
  if(m_creationTimestampHasBeenSet)
  {
      oStream << location << ".CreationTimestamp=" << StringUtils::URLEncode(m_creationTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_lastErrorHasBeenSet)
  {
      Aws::String lastErrorLocationAndMember(location);
      lastErrorLocationAndMember += ".LastError";
      m_lastError.OutputToStream(oStream, lastErrorLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
