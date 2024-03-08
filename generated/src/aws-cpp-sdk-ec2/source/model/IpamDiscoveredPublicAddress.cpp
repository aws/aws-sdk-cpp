/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamDiscoveredPublicAddress.h>
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

IpamDiscoveredPublicAddress::IpamDiscoveredPublicAddress() : 
    m_ipamResourceDiscoveryIdHasBeenSet(false),
    m_addressRegionHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_addressOwnerIdHasBeenSet(false),
    m_addressAllocationIdHasBeenSet(false),
    m_associationStatus(IpamPublicAddressAssociationStatus::NOT_SET),
    m_associationStatusHasBeenSet(false),
    m_addressType(IpamPublicAddressType::NOT_SET),
    m_addressTypeHasBeenSet(false),
    m_service(IpamPublicAddressAwsService::NOT_SET),
    m_serviceHasBeenSet(false),
    m_serviceResourceHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_publicIpv4PoolIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_networkInterfaceDescriptionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_networkBorderGroupHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_sampleTimeHasBeenSet(false)
{
}

IpamDiscoveredPublicAddress::IpamDiscoveredPublicAddress(const XmlNode& xmlNode) : 
    m_ipamResourceDiscoveryIdHasBeenSet(false),
    m_addressRegionHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_addressOwnerIdHasBeenSet(false),
    m_addressAllocationIdHasBeenSet(false),
    m_associationStatus(IpamPublicAddressAssociationStatus::NOT_SET),
    m_associationStatusHasBeenSet(false),
    m_addressType(IpamPublicAddressType::NOT_SET),
    m_addressTypeHasBeenSet(false),
    m_service(IpamPublicAddressAwsService::NOT_SET),
    m_serviceHasBeenSet(false),
    m_serviceResourceHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_publicIpv4PoolIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_networkInterfaceDescriptionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_networkBorderGroupHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_sampleTimeHasBeenSet(false)
{
  *this = xmlNode;
}

IpamDiscoveredPublicAddress& IpamDiscoveredPublicAddress::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ipamResourceDiscoveryIdNode = resultNode.FirstChild("ipamResourceDiscoveryId");
    if(!ipamResourceDiscoveryIdNode.IsNull())
    {
      m_ipamResourceDiscoveryId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamResourceDiscoveryIdNode.GetText());
      m_ipamResourceDiscoveryIdHasBeenSet = true;
    }
    XmlNode addressRegionNode = resultNode.FirstChild("addressRegion");
    if(!addressRegionNode.IsNull())
    {
      m_addressRegion = Aws::Utils::Xml::DecodeEscapedXmlText(addressRegionNode.GetText());
      m_addressRegionHasBeenSet = true;
    }
    XmlNode addressNode = resultNode.FirstChild("address");
    if(!addressNode.IsNull())
    {
      m_address = Aws::Utils::Xml::DecodeEscapedXmlText(addressNode.GetText());
      m_addressHasBeenSet = true;
    }
    XmlNode addressOwnerIdNode = resultNode.FirstChild("addressOwnerId");
    if(!addressOwnerIdNode.IsNull())
    {
      m_addressOwnerId = Aws::Utils::Xml::DecodeEscapedXmlText(addressOwnerIdNode.GetText());
      m_addressOwnerIdHasBeenSet = true;
    }
    XmlNode addressAllocationIdNode = resultNode.FirstChild("addressAllocationId");
    if(!addressAllocationIdNode.IsNull())
    {
      m_addressAllocationId = Aws::Utils::Xml::DecodeEscapedXmlText(addressAllocationIdNode.GetText());
      m_addressAllocationIdHasBeenSet = true;
    }
    XmlNode associationStatusNode = resultNode.FirstChild("associationStatus");
    if(!associationStatusNode.IsNull())
    {
      m_associationStatus = IpamPublicAddressAssociationStatusMapper::GetIpamPublicAddressAssociationStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(associationStatusNode.GetText()).c_str()).c_str());
      m_associationStatusHasBeenSet = true;
    }
    XmlNode addressTypeNode = resultNode.FirstChild("addressType");
    if(!addressTypeNode.IsNull())
    {
      m_addressType = IpamPublicAddressTypeMapper::GetIpamPublicAddressTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(addressTypeNode.GetText()).c_str()).c_str());
      m_addressTypeHasBeenSet = true;
    }
    XmlNode serviceNode = resultNode.FirstChild("service");
    if(!serviceNode.IsNull())
    {
      m_service = IpamPublicAddressAwsServiceMapper::GetIpamPublicAddressAwsServiceForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(serviceNode.GetText()).c_str()).c_str());
      m_serviceHasBeenSet = true;
    }
    XmlNode serviceResourceNode = resultNode.FirstChild("serviceResource");
    if(!serviceResourceNode.IsNull())
    {
      m_serviceResource = Aws::Utils::Xml::DecodeEscapedXmlText(serviceResourceNode.GetText());
      m_serviceResourceHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode publicIpv4PoolIdNode = resultNode.FirstChild("publicIpv4PoolId");
    if(!publicIpv4PoolIdNode.IsNull())
    {
      m_publicIpv4PoolId = Aws::Utils::Xml::DecodeEscapedXmlText(publicIpv4PoolIdNode.GetText());
      m_publicIpv4PoolIdHasBeenSet = true;
    }
    XmlNode networkInterfaceIdNode = resultNode.FirstChild("networkInterfaceId");
    if(!networkInterfaceIdNode.IsNull())
    {
      m_networkInterfaceId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInterfaceIdNode.GetText());
      m_networkInterfaceIdHasBeenSet = true;
    }
    XmlNode networkInterfaceDescriptionNode = resultNode.FirstChild("networkInterfaceDescription");
    if(!networkInterfaceDescriptionNode.IsNull())
    {
      m_networkInterfaceDescription = Aws::Utils::Xml::DecodeEscapedXmlText(networkInterfaceDescriptionNode.GetText());
      m_networkInterfaceDescriptionHasBeenSet = true;
    }
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tags");
    if(!tagsNode.IsNull())
    {
      m_tags = tagsNode;
      m_tagsHasBeenSet = true;
    }
    XmlNode networkBorderGroupNode = resultNode.FirstChild("networkBorderGroup");
    if(!networkBorderGroupNode.IsNull())
    {
      m_networkBorderGroup = Aws::Utils::Xml::DecodeEscapedXmlText(networkBorderGroupNode.GetText());
      m_networkBorderGroupHasBeenSet = true;
    }
    XmlNode securityGroupsNode = resultNode.FirstChild("securityGroupSet");
    if(!securityGroupsNode.IsNull())
    {
      XmlNode securityGroupsMember = securityGroupsNode.FirstChild("item");
      while(!securityGroupsMember.IsNull())
      {
        m_securityGroups.push_back(securityGroupsMember);
        securityGroupsMember = securityGroupsMember.NextNode("item");
      }

      m_securityGroupsHasBeenSet = true;
    }
    XmlNode sampleTimeNode = resultNode.FirstChild("sampleTime");
    if(!sampleTimeNode.IsNull())
    {
      m_sampleTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sampleTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_sampleTimeHasBeenSet = true;
    }
  }

  return *this;
}

void IpamDiscoveredPublicAddress::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ipamResourceDiscoveryIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamResourceDiscoveryId=" << StringUtils::URLEncode(m_ipamResourceDiscoveryId.c_str()) << "&";
  }

  if(m_addressRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".AddressRegion=" << StringUtils::URLEncode(m_addressRegion.c_str()) << "&";
  }

  if(m_addressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Address=" << StringUtils::URLEncode(m_address.c_str()) << "&";
  }

  if(m_addressOwnerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AddressOwnerId=" << StringUtils::URLEncode(m_addressOwnerId.c_str()) << "&";
  }

  if(m_addressAllocationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AddressAllocationId=" << StringUtils::URLEncode(m_addressAllocationId.c_str()) << "&";
  }

  if(m_associationStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociationStatus=" << IpamPublicAddressAssociationStatusMapper::GetNameForIpamPublicAddressAssociationStatus(m_associationStatus) << "&";
  }

  if(m_addressTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AddressType=" << IpamPublicAddressTypeMapper::GetNameForIpamPublicAddressType(m_addressType) << "&";
  }

  if(m_serviceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Service=" << IpamPublicAddressAwsServiceMapper::GetNameForIpamPublicAddressAwsService(m_service) << "&";
  }

  if(m_serviceResourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceResource=" << StringUtils::URLEncode(m_serviceResource.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_publicIpv4PoolIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicIpv4PoolId=" << StringUtils::URLEncode(m_publicIpv4PoolId.c_str()) << "&";
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_networkInterfaceDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfaceDescription=" << StringUtils::URLEncode(m_networkInterfaceDescription.c_str()) << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      Aws::StringStream tagsLocationAndMemberSs;
      tagsLocationAndMemberSs << location << index << locationValue << ".Tags";
      m_tags.OutputToStream(oStream, tagsLocationAndMemberSs.str().c_str());
  }

  if(m_networkBorderGroupHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkBorderGroup=" << StringUtils::URLEncode(m_networkBorderGroup.c_str()) << "&";
  }

  if(m_securityGroupsHasBeenSet)
  {
      unsigned securityGroupsIdx = 1;
      for(auto& item : m_securityGroups)
      {
        Aws::StringStream securityGroupsSs;
        securityGroupsSs << location << index << locationValue << ".SecurityGroupSet." << securityGroupsIdx++;
        item.OutputToStream(oStream, securityGroupsSs.str().c_str());
      }
  }

  if(m_sampleTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SampleTime=" << StringUtils::URLEncode(m_sampleTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void IpamDiscoveredPublicAddress::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ipamResourceDiscoveryIdHasBeenSet)
  {
      oStream << location << ".IpamResourceDiscoveryId=" << StringUtils::URLEncode(m_ipamResourceDiscoveryId.c_str()) << "&";
  }
  if(m_addressRegionHasBeenSet)
  {
      oStream << location << ".AddressRegion=" << StringUtils::URLEncode(m_addressRegion.c_str()) << "&";
  }
  if(m_addressHasBeenSet)
  {
      oStream << location << ".Address=" << StringUtils::URLEncode(m_address.c_str()) << "&";
  }
  if(m_addressOwnerIdHasBeenSet)
  {
      oStream << location << ".AddressOwnerId=" << StringUtils::URLEncode(m_addressOwnerId.c_str()) << "&";
  }
  if(m_addressAllocationIdHasBeenSet)
  {
      oStream << location << ".AddressAllocationId=" << StringUtils::URLEncode(m_addressAllocationId.c_str()) << "&";
  }
  if(m_associationStatusHasBeenSet)
  {
      oStream << location << ".AssociationStatus=" << IpamPublicAddressAssociationStatusMapper::GetNameForIpamPublicAddressAssociationStatus(m_associationStatus) << "&";
  }
  if(m_addressTypeHasBeenSet)
  {
      oStream << location << ".AddressType=" << IpamPublicAddressTypeMapper::GetNameForIpamPublicAddressType(m_addressType) << "&";
  }
  if(m_serviceHasBeenSet)
  {
      oStream << location << ".Service=" << IpamPublicAddressAwsServiceMapper::GetNameForIpamPublicAddressAwsService(m_service) << "&";
  }
  if(m_serviceResourceHasBeenSet)
  {
      oStream << location << ".ServiceResource=" << StringUtils::URLEncode(m_serviceResource.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_publicIpv4PoolIdHasBeenSet)
  {
      oStream << location << ".PublicIpv4PoolId=" << StringUtils::URLEncode(m_publicIpv4PoolId.c_str()) << "&";
  }
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }
  if(m_networkInterfaceDescriptionHasBeenSet)
  {
      oStream << location << ".NetworkInterfaceDescription=" << StringUtils::URLEncode(m_networkInterfaceDescription.c_str()) << "&";
  }
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      Aws::String tagsLocationAndMember(location);
      tagsLocationAndMember += ".Tags";
      m_tags.OutputToStream(oStream, tagsLocationAndMember.c_str());
  }
  if(m_networkBorderGroupHasBeenSet)
  {
      oStream << location << ".NetworkBorderGroup=" << StringUtils::URLEncode(m_networkBorderGroup.c_str()) << "&";
  }
  if(m_securityGroupsHasBeenSet)
  {
      unsigned securityGroupsIdx = 1;
      for(auto& item : m_securityGroups)
      {
        Aws::StringStream securityGroupsSs;
        securityGroupsSs << location <<  ".SecurityGroupSet." << securityGroupsIdx++;
        item.OutputToStream(oStream, securityGroupsSs.str().c_str());
      }
  }
  if(m_sampleTimeHasBeenSet)
  {
      oStream << location << ".SampleTime=" << StringUtils::URLEncode(m_sampleTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
