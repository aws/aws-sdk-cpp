/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/IpamPrefixListResolverRuleConditionRequest.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

IpamPrefixListResolverRuleConditionRequest::IpamPrefixListResolverRuleConditionRequest(const XmlNode& xmlNode) { *this = xmlNode; }

IpamPrefixListResolverRuleConditionRequest& IpamPrefixListResolverRuleConditionRequest::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode operationNode = resultNode.FirstChild("Operation");
    if (!operationNode.IsNull()) {
      m_operation = IpamPrefixListResolverRuleConditionOperationMapper::GetIpamPrefixListResolverRuleConditionOperationForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(operationNode.GetText()).c_str()));
      m_operationHasBeenSet = true;
    }
    XmlNode ipamPoolIdNode = resultNode.FirstChild("IpamPoolId");
    if (!ipamPoolIdNode.IsNull()) {
      m_ipamPoolId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamPoolIdNode.GetText());
      m_ipamPoolIdHasBeenSet = true;
    }
    XmlNode resourceIdNode = resultNode.FirstChild("ResourceId");
    if (!resourceIdNode.IsNull()) {
      m_resourceId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceIdNode.GetText());
      m_resourceIdHasBeenSet = true;
    }
    XmlNode resourceOwnerNode = resultNode.FirstChild("ResourceOwner");
    if (!resourceOwnerNode.IsNull()) {
      m_resourceOwner = Aws::Utils::Xml::DecodeEscapedXmlText(resourceOwnerNode.GetText());
      m_resourceOwnerHasBeenSet = true;
    }
    XmlNode resourceRegionNode = resultNode.FirstChild("ResourceRegion");
    if (!resourceRegionNode.IsNull()) {
      m_resourceRegion = Aws::Utils::Xml::DecodeEscapedXmlText(resourceRegionNode.GetText());
      m_resourceRegionHasBeenSet = true;
    }
    XmlNode resourceTagNode = resultNode.FirstChild("ResourceTag");
    if (!resourceTagNode.IsNull()) {
      m_resourceTag = resourceTagNode;
      m_resourceTagHasBeenSet = true;
    }
    XmlNode cidrNode = resultNode.FirstChild("Cidr");
    if (!cidrNode.IsNull()) {
      m_cidr = Aws::Utils::Xml::DecodeEscapedXmlText(cidrNode.GetText());
      m_cidrHasBeenSet = true;
    }
  }

  return *this;
}

void IpamPrefixListResolverRuleConditionRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                                const char* locationValue) const {
  if (m_operationHasBeenSet) {
    oStream << location << index << locationValue << ".Operation="
            << StringUtils::URLEncode(
                   IpamPrefixListResolverRuleConditionOperationMapper::GetNameForIpamPrefixListResolverRuleConditionOperation(m_operation))
            << "&";
  }

  if (m_ipamPoolIdHasBeenSet) {
    oStream << location << index << locationValue << ".IpamPoolId=" << StringUtils::URLEncode(m_ipamPoolId.c_str()) << "&";
  }

  if (m_resourceIdHasBeenSet) {
    oStream << location << index << locationValue << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }

  if (m_resourceOwnerHasBeenSet) {
    oStream << location << index << locationValue << ".ResourceOwner=" << StringUtils::URLEncode(m_resourceOwner.c_str()) << "&";
  }

  if (m_resourceRegionHasBeenSet) {
    oStream << location << index << locationValue << ".ResourceRegion=" << StringUtils::URLEncode(m_resourceRegion.c_str()) << "&";
  }

  if (m_resourceTagHasBeenSet) {
    Aws::StringStream resourceTagLocationAndMemberSs;
    resourceTagLocationAndMemberSs << location << index << locationValue << ".ResourceTag";
    m_resourceTag.OutputToStream(oStream, resourceTagLocationAndMemberSs.str().c_str());
  }

  if (m_cidrHasBeenSet) {
    oStream << location << index << locationValue << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }
}

void IpamPrefixListResolverRuleConditionRequest::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_operationHasBeenSet) {
    oStream << location << ".Operation="
            << StringUtils::URLEncode(
                   IpamPrefixListResolverRuleConditionOperationMapper::GetNameForIpamPrefixListResolverRuleConditionOperation(m_operation))
            << "&";
  }
  if (m_ipamPoolIdHasBeenSet) {
    oStream << location << ".IpamPoolId=" << StringUtils::URLEncode(m_ipamPoolId.c_str()) << "&";
  }
  if (m_resourceIdHasBeenSet) {
    oStream << location << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }
  if (m_resourceOwnerHasBeenSet) {
    oStream << location << ".ResourceOwner=" << StringUtils::URLEncode(m_resourceOwner.c_str()) << "&";
  }
  if (m_resourceRegionHasBeenSet) {
    oStream << location << ".ResourceRegion=" << StringUtils::URLEncode(m_resourceRegion.c_str()) << "&";
  }
  if (m_resourceTagHasBeenSet) {
    Aws::String resourceTagLocationAndMember(location);
    resourceTagLocationAndMember += ".ResourceTag";
    m_resourceTag.OutputToStream(oStream, resourceTagLocationAndMember.c_str());
  }
  if (m_cidrHasBeenSet) {
    oStream << location << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
