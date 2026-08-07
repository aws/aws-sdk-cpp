/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/IpamDiscoveredRoute.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

IpamDiscoveredRoute::IpamDiscoveredRoute(const XmlNode& xmlNode) { *this = xmlNode; }

IpamDiscoveredRoute& IpamDiscoveredRoute::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode ipamResourceDiscoveryIdNode = resultNode.FirstChild("ipamResourceDiscoveryId");
    if (!ipamResourceDiscoveryIdNode.IsNull()) {
      m_ipamResourceDiscoveryId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamResourceDiscoveryIdNode.GetText());
      m_ipamResourceDiscoveryIdHasBeenSet = true;
    }
    XmlNode resourceRegionNode = resultNode.FirstChild("resourceRegion");
    if (!resourceRegionNode.IsNull()) {
      m_resourceRegion = Aws::Utils::Xml::DecodeEscapedXmlText(resourceRegionNode.GetText());
      m_resourceRegionHasBeenSet = true;
    }
    XmlNode resourceOwnerIdNode = resultNode.FirstChild("resourceOwnerId");
    if (!resourceOwnerIdNode.IsNull()) {
      m_resourceOwnerId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceOwnerIdNode.GetText());
      m_resourceOwnerIdHasBeenSet = true;
    }
    XmlNode cidrNode = resultNode.FirstChild("cidr");
    if (!cidrNode.IsNull()) {
      m_cidr = Aws::Utils::Xml::DecodeEscapedXmlText(cidrNode.GetText());
      m_cidrHasBeenSet = true;
    }
    XmlNode asnNode = resultNode.FirstChild("asn");
    if (!asnNode.IsNull()) {
      m_asn = Aws::Utils::Xml::DecodeEscapedXmlText(asnNode.GetText());
      m_asnHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if (!stateNode.IsNull()) {
      m_state = IpamByoipCidrStateMapper::GetIpamByoipCidrStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode advertisementTypeNode = resultNode.FirstChild("advertisementType");
    if (!advertisementTypeNode.IsNull()) {
      m_advertisementType = IpamByoipAdvertisementTypeMapper::GetIpamByoipAdvertisementTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(advertisementTypeNode.GetText()).c_str()));
      m_advertisementTypeHasBeenSet = true;
    }
    XmlNode networkBorderGroupNode = resultNode.FirstChild("networkBorderGroup");
    if (!networkBorderGroupNode.IsNull()) {
      m_networkBorderGroup = Aws::Utils::Xml::DecodeEscapedXmlText(networkBorderGroupNode.GetText());
      m_networkBorderGroupHasBeenSet = true;
    }
    XmlNode poolIdNode = resultNode.FirstChild("poolId");
    if (!poolIdNode.IsNull()) {
      m_poolId = Aws::Utils::Xml::DecodeEscapedXmlText(poolIdNode.GetText());
      m_poolIdHasBeenSet = true;
    }
    XmlNode ipamPoolIdNode = resultNode.FirstChild("ipamPoolId");
    if (!ipamPoolIdNode.IsNull()) {
      m_ipamPoolId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamPoolIdNode.GetText());
      m_ipamPoolIdHasBeenSet = true;
    }
    XmlNode sampleTimeNode = resultNode.FirstChild("sampleTime");
    if (!sampleTimeNode.IsNull()) {
      m_sampleTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sampleTimeNode.GetText()).c_str()).c_str(),
                              Aws::Utils::DateFormat::ISO_8601);
      m_sampleTimeHasBeenSet = true;
    }
  }

  return *this;
}

void IpamDiscoveredRoute::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_ipamResourceDiscoveryIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".IpamResourceDiscoveryId=" << StringUtils::URLEncode(m_ipamResourceDiscoveryId.c_str()) << "&";
  }

  if (m_resourceRegionHasBeenSet) {
    oStream << location << index << locationValue << ".ResourceRegion=" << StringUtils::URLEncode(m_resourceRegion.c_str()) << "&";
  }

  if (m_resourceOwnerIdHasBeenSet) {
    oStream << location << index << locationValue << ".ResourceOwnerId=" << StringUtils::URLEncode(m_resourceOwnerId.c_str()) << "&";
  }

  if (m_cidrHasBeenSet) {
    oStream << location << index << locationValue << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  if (m_asnHasBeenSet) {
    oStream << location << index << locationValue << ".Asn=" << StringUtils::URLEncode(m_asn.c_str()) << "&";
  }

  if (m_stateHasBeenSet) {
    oStream << location << index << locationValue
            << ".State=" << StringUtils::URLEncode(IpamByoipCidrStateMapper::GetNameForIpamByoipCidrState(m_state)) << "&";
  }

  if (m_advertisementTypeHasBeenSet) {
    oStream << location << index << locationValue << ".AdvertisementType="
            << StringUtils::URLEncode(IpamByoipAdvertisementTypeMapper::GetNameForIpamByoipAdvertisementType(m_advertisementType)) << "&";
  }

  if (m_networkBorderGroupHasBeenSet) {
    oStream << location << index << locationValue << ".NetworkBorderGroup=" << StringUtils::URLEncode(m_networkBorderGroup.c_str()) << "&";
  }

  if (m_poolIdHasBeenSet) {
    oStream << location << index << locationValue << ".PoolId=" << StringUtils::URLEncode(m_poolId.c_str()) << "&";
  }

  if (m_ipamPoolIdHasBeenSet) {
    oStream << location << index << locationValue << ".IpamPoolId=" << StringUtils::URLEncode(m_ipamPoolId.c_str()) << "&";
  }

  if (m_sampleTimeHasBeenSet) {
    oStream << location << index << locationValue
            << ".SampleTime=" << StringUtils::URLEncode(m_sampleTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

void IpamDiscoveredRoute::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_ipamResourceDiscoveryIdHasBeenSet) {
    oStream << location << ".IpamResourceDiscoveryId=" << StringUtils::URLEncode(m_ipamResourceDiscoveryId.c_str()) << "&";
  }
  if (m_resourceRegionHasBeenSet) {
    oStream << location << ".ResourceRegion=" << StringUtils::URLEncode(m_resourceRegion.c_str()) << "&";
  }
  if (m_resourceOwnerIdHasBeenSet) {
    oStream << location << ".ResourceOwnerId=" << StringUtils::URLEncode(m_resourceOwnerId.c_str()) << "&";
  }
  if (m_cidrHasBeenSet) {
    oStream << location << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }
  if (m_asnHasBeenSet) {
    oStream << location << ".Asn=" << StringUtils::URLEncode(m_asn.c_str()) << "&";
  }
  if (m_stateHasBeenSet) {
    oStream << location << ".State=" << StringUtils::URLEncode(IpamByoipCidrStateMapper::GetNameForIpamByoipCidrState(m_state)) << "&";
  }
  if (m_advertisementTypeHasBeenSet) {
    oStream << location << ".AdvertisementType="
            << StringUtils::URLEncode(IpamByoipAdvertisementTypeMapper::GetNameForIpamByoipAdvertisementType(m_advertisementType)) << "&";
  }
  if (m_networkBorderGroupHasBeenSet) {
    oStream << location << ".NetworkBorderGroup=" << StringUtils::URLEncode(m_networkBorderGroup.c_str()) << "&";
  }
  if (m_poolIdHasBeenSet) {
    oStream << location << ".PoolId=" << StringUtils::URLEncode(m_poolId.c_str()) << "&";
  }
  if (m_ipamPoolIdHasBeenSet) {
    oStream << location << ".IpamPoolId=" << StringUtils::URLEncode(m_ipamPoolId.c_str()) << "&";
  }
  if (m_sampleTimeHasBeenSet) {
    oStream << location << ".SampleTime=" << StringUtils::URLEncode(m_sampleTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
