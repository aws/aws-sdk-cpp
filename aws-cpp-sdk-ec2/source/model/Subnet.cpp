/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Subnet.h>
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

Subnet::Subnet() : 
    m_availabilityZoneHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_availableIpAddressCount(0),
    m_availableIpAddressCountHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_defaultForAz(false),
    m_defaultForAzHasBeenSet(false),
    m_mapPublicIpOnLaunch(false),
    m_mapPublicIpOnLaunchHasBeenSet(false),
    m_mapCustomerOwnedIpOnLaunch(false),
    m_mapCustomerOwnedIpOnLaunchHasBeenSet(false),
    m_customerOwnedIpv4PoolHasBeenSet(false),
    m_state(SubnetState::NOT_SET),
    m_stateHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_assignIpv6AddressOnCreation(false),
    m_assignIpv6AddressOnCreationHasBeenSet(false),
    m_ipv6CidrBlockAssociationSetHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_subnetArnHasBeenSet(false),
    m_outpostArnHasBeenSet(false)
{
}

Subnet::Subnet(const XmlNode& xmlNode) : 
    m_availabilityZoneHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_availableIpAddressCount(0),
    m_availableIpAddressCountHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_defaultForAz(false),
    m_defaultForAzHasBeenSet(false),
    m_mapPublicIpOnLaunch(false),
    m_mapPublicIpOnLaunchHasBeenSet(false),
    m_mapCustomerOwnedIpOnLaunch(false),
    m_mapCustomerOwnedIpOnLaunchHasBeenSet(false),
    m_customerOwnedIpv4PoolHasBeenSet(false),
    m_state(SubnetState::NOT_SET),
    m_stateHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_assignIpv6AddressOnCreation(false),
    m_assignIpv6AddressOnCreationHasBeenSet(false),
    m_ipv6CidrBlockAssociationSetHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_subnetArnHasBeenSet(false),
    m_outpostArnHasBeenSet(false)
{
  *this = xmlNode;
}

Subnet& Subnet::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode availabilityZoneIdNode = resultNode.FirstChild("availabilityZoneId");
    if(!availabilityZoneIdNode.IsNull())
    {
      m_availabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneIdNode.GetText());
      m_availabilityZoneIdHasBeenSet = true;
    }
    XmlNode availableIpAddressCountNode = resultNode.FirstChild("availableIpAddressCount");
    if(!availableIpAddressCountNode.IsNull())
    {
      m_availableIpAddressCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(availableIpAddressCountNode.GetText()).c_str()).c_str());
      m_availableIpAddressCountHasBeenSet = true;
    }
    XmlNode cidrBlockNode = resultNode.FirstChild("cidrBlock");
    if(!cidrBlockNode.IsNull())
    {
      m_cidrBlock = Aws::Utils::Xml::DecodeEscapedXmlText(cidrBlockNode.GetText());
      m_cidrBlockHasBeenSet = true;
    }
    XmlNode defaultForAzNode = resultNode.FirstChild("defaultForAz");
    if(!defaultForAzNode.IsNull())
    {
      m_defaultForAz = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultForAzNode.GetText()).c_str()).c_str());
      m_defaultForAzHasBeenSet = true;
    }
    XmlNode mapPublicIpOnLaunchNode = resultNode.FirstChild("mapPublicIpOnLaunch");
    if(!mapPublicIpOnLaunchNode.IsNull())
    {
      m_mapPublicIpOnLaunch = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(mapPublicIpOnLaunchNode.GetText()).c_str()).c_str());
      m_mapPublicIpOnLaunchHasBeenSet = true;
    }
    XmlNode mapCustomerOwnedIpOnLaunchNode = resultNode.FirstChild("mapCustomerOwnedIpOnLaunch");
    if(!mapCustomerOwnedIpOnLaunchNode.IsNull())
    {
      m_mapCustomerOwnedIpOnLaunch = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(mapCustomerOwnedIpOnLaunchNode.GetText()).c_str()).c_str());
      m_mapCustomerOwnedIpOnLaunchHasBeenSet = true;
    }
    XmlNode customerOwnedIpv4PoolNode = resultNode.FirstChild("customerOwnedIpv4Pool");
    if(!customerOwnedIpv4PoolNode.IsNull())
    {
      m_customerOwnedIpv4Pool = Aws::Utils::Xml::DecodeEscapedXmlText(customerOwnedIpv4PoolNode.GetText());
      m_customerOwnedIpv4PoolHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = SubnetStateMapper::GetSubnetStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
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
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode assignIpv6AddressOnCreationNode = resultNode.FirstChild("assignIpv6AddressOnCreation");
    if(!assignIpv6AddressOnCreationNode.IsNull())
    {
      m_assignIpv6AddressOnCreation = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(assignIpv6AddressOnCreationNode.GetText()).c_str()).c_str());
      m_assignIpv6AddressOnCreationHasBeenSet = true;
    }
    XmlNode ipv6CidrBlockAssociationSetNode = resultNode.FirstChild("ipv6CidrBlockAssociationSet");
    if(!ipv6CidrBlockAssociationSetNode.IsNull())
    {
      XmlNode ipv6CidrBlockAssociationSetMember = ipv6CidrBlockAssociationSetNode.FirstChild("item");
      while(!ipv6CidrBlockAssociationSetMember.IsNull())
      {
        m_ipv6CidrBlockAssociationSet.push_back(ipv6CidrBlockAssociationSetMember);
        ipv6CidrBlockAssociationSetMember = ipv6CidrBlockAssociationSetMember.NextNode("item");
      }

      m_ipv6CidrBlockAssociationSetHasBeenSet = true;
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
    XmlNode subnetArnNode = resultNode.FirstChild("subnetArn");
    if(!subnetArnNode.IsNull())
    {
      m_subnetArn = Aws::Utils::Xml::DecodeEscapedXmlText(subnetArnNode.GetText());
      m_subnetArnHasBeenSet = true;
    }
    XmlNode outpostArnNode = resultNode.FirstChild("outpostArn");
    if(!outpostArnNode.IsNull())
    {
      m_outpostArn = Aws::Utils::Xml::DecodeEscapedXmlText(outpostArnNode.GetText());
      m_outpostArnHasBeenSet = true;
    }
  }

  return *this;
}

void Subnet::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_availabilityZoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if(m_availableIpAddressCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailableIpAddressCount=" << m_availableIpAddressCount << "&";
  }

  if(m_cidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }

  if(m_defaultForAzHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultForAz=" << std::boolalpha << m_defaultForAz << "&";
  }

  if(m_mapPublicIpOnLaunchHasBeenSet)
  {
      oStream << location << index << locationValue << ".MapPublicIpOnLaunch=" << std::boolalpha << m_mapPublicIpOnLaunch << "&";
  }

  if(m_mapCustomerOwnedIpOnLaunchHasBeenSet)
  {
      oStream << location << index << locationValue << ".MapCustomerOwnedIpOnLaunch=" << std::boolalpha << m_mapCustomerOwnedIpOnLaunch << "&";
  }

  if(m_customerOwnedIpv4PoolHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomerOwnedIpv4Pool=" << StringUtils::URLEncode(m_customerOwnedIpv4Pool.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << SubnetStateMapper::GetNameForSubnetState(m_state) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_assignIpv6AddressOnCreationHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssignIpv6AddressOnCreation=" << std::boolalpha << m_assignIpv6AddressOnCreation << "&";
  }

  if(m_ipv6CidrBlockAssociationSetHasBeenSet)
  {
      unsigned ipv6CidrBlockAssociationSetIdx = 1;
      for(auto& item : m_ipv6CidrBlockAssociationSet)
      {
        Aws::StringStream ipv6CidrBlockAssociationSetSs;
        ipv6CidrBlockAssociationSetSs << location << index << locationValue << ".Ipv6CidrBlockAssociationSet." << ipv6CidrBlockAssociationSetIdx++;
        item.OutputToStream(oStream, ipv6CidrBlockAssociationSetSs.str().c_str());
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

  if(m_subnetArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetArn=" << StringUtils::URLEncode(m_subnetArn.c_str()) << "&";
  }

  if(m_outpostArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }

}

void Subnet::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_availabilityZoneIdHasBeenSet)
  {
      oStream << location << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }
  if(m_availableIpAddressCountHasBeenSet)
  {
      oStream << location << ".AvailableIpAddressCount=" << m_availableIpAddressCount << "&";
  }
  if(m_cidrBlockHasBeenSet)
  {
      oStream << location << ".CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }
  if(m_defaultForAzHasBeenSet)
  {
      oStream << location << ".DefaultForAz=" << std::boolalpha << m_defaultForAz << "&";
  }
  if(m_mapPublicIpOnLaunchHasBeenSet)
  {
      oStream << location << ".MapPublicIpOnLaunch=" << std::boolalpha << m_mapPublicIpOnLaunch << "&";
  }
  if(m_mapCustomerOwnedIpOnLaunchHasBeenSet)
  {
      oStream << location << ".MapCustomerOwnedIpOnLaunch=" << std::boolalpha << m_mapCustomerOwnedIpOnLaunch << "&";
  }
  if(m_customerOwnedIpv4PoolHasBeenSet)
  {
      oStream << location << ".CustomerOwnedIpv4Pool=" << StringUtils::URLEncode(m_customerOwnedIpv4Pool.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << SubnetStateMapper::GetNameForSubnetState(m_state) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_assignIpv6AddressOnCreationHasBeenSet)
  {
      oStream << location << ".AssignIpv6AddressOnCreation=" << std::boolalpha << m_assignIpv6AddressOnCreation << "&";
  }
  if(m_ipv6CidrBlockAssociationSetHasBeenSet)
  {
      unsigned ipv6CidrBlockAssociationSetIdx = 1;
      for(auto& item : m_ipv6CidrBlockAssociationSet)
      {
        Aws::StringStream ipv6CidrBlockAssociationSetSs;
        ipv6CidrBlockAssociationSetSs << location <<  ".Ipv6CidrBlockAssociationSet." << ipv6CidrBlockAssociationSetIdx++;
        item.OutputToStream(oStream, ipv6CidrBlockAssociationSetSs.str().c_str());
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
  if(m_subnetArnHasBeenSet)
  {
      oStream << location << ".SubnetArn=" << StringUtils::URLEncode(m_subnetArn.c_str()) << "&";
  }
  if(m_outpostArnHasBeenSet)
  {
      oStream << location << ".OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
