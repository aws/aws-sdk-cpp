/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest::LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest(
    const XmlNode& xmlNode) {
  *this = xmlNode;
}

LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest& LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest::operator=(
    const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode deleteOnTerminationNode = resultNode.FirstChild("DeleteOnTermination");
    if (!deleteOnTerminationNode.IsNull()) {
      m_deleteOnTermination = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deleteOnTerminationNode.GetText()).c_str()).c_str());
      m_deleteOnTerminationHasBeenSet = true;
    }
    XmlNode deviceIndexNode = resultNode.FirstChild("DeviceIndex");
    if (!deviceIndexNode.IsNull()) {
      m_deviceIndex =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deviceIndexNode.GetText()).c_str()).c_str());
      m_deviceIndexHasBeenSet = true;
    }
    XmlNode privateIpAddressesNode = resultNode.FirstChild("PrivateIpAddress");
    if (!privateIpAddressesNode.IsNull()) {
      XmlNode privateIpAddressesMember = privateIpAddressesNode.FirstChild("SecondaryInterfacePrivateIpAddressSpecification");
      m_privateIpAddressesHasBeenSet = !privateIpAddressesMember.IsNull();
      while (!privateIpAddressesMember.IsNull()) {
        m_privateIpAddresses.push_back(privateIpAddressesMember);
        privateIpAddressesMember = privateIpAddressesMember.NextNode("SecondaryInterfacePrivateIpAddressSpecification");
      }

      m_privateIpAddressesHasBeenSet = true;
    }
    XmlNode privateIpAddressCountNode = resultNode.FirstChild("PrivateIpAddressCount");
    if (!privateIpAddressCountNode.IsNull()) {
      m_privateIpAddressCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(privateIpAddressCountNode.GetText()).c_str()).c_str());
      m_privateIpAddressCountHasBeenSet = true;
    }
    XmlNode secondarySubnetIdNode = resultNode.FirstChild("SecondarySubnetId");
    if (!secondarySubnetIdNode.IsNull()) {
      m_secondarySubnetId = Aws::Utils::Xml::DecodeEscapedXmlText(secondarySubnetIdNode.GetText());
      m_secondarySubnetIdHasBeenSet = true;
    }
    XmlNode interfaceTypeNode = resultNode.FirstChild("InterfaceType");
    if (!interfaceTypeNode.IsNull()) {
      m_interfaceType = SecondaryInterfaceTypeMapper::GetSecondaryInterfaceTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(interfaceTypeNode.GetText()).c_str()));
      m_interfaceTypeHasBeenSet = true;
    }
    XmlNode networkCardIndexNode = resultNode.FirstChild("NetworkCardIndex");
    if (!networkCardIndexNode.IsNull()) {
      m_networkCardIndex = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(networkCardIndexNode.GetText()).c_str()).c_str());
      m_networkCardIndexHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location,
                                                                                  unsigned index, const char* locationValue) const {
  if (m_deleteOnTerminationHasBeenSet) {
    oStream << location << index << locationValue << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }

  if (m_deviceIndexHasBeenSet) {
    oStream << location << index << locationValue << ".DeviceIndex=" << m_deviceIndex << "&";
  }

  if (m_privateIpAddressesHasBeenSet) {
    unsigned privateIpAddressesIdx = 1;
    for (auto& item : m_privateIpAddresses) {
      Aws::StringStream privateIpAddressesSs;
      privateIpAddressesSs << location << index << locationValue << ".PrivateIpAddress." << privateIpAddressesIdx++;
      item.OutputToStream(oStream, privateIpAddressesSs.str().c_str());
    }
  }

  if (m_privateIpAddressCountHasBeenSet) {
    oStream << location << index << locationValue << ".PrivateIpAddressCount=" << m_privateIpAddressCount << "&";
  }

  if (m_secondarySubnetIdHasBeenSet) {
    oStream << location << index << locationValue << ".SecondarySubnetId=" << StringUtils::URLEncode(m_secondarySubnetId.c_str()) << "&";
  }

  if (m_interfaceTypeHasBeenSet) {
    oStream << location << index << locationValue
            << ".InterfaceType=" << StringUtils::URLEncode(SecondaryInterfaceTypeMapper::GetNameForSecondaryInterfaceType(m_interfaceType))
            << "&";
  }

  if (m_networkCardIndexHasBeenSet) {
    oStream << location << index << locationValue << ".NetworkCardIndex=" << m_networkCardIndex << "&";
  }
}

void LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_deleteOnTerminationHasBeenSet) {
    oStream << location << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }
  if (m_deviceIndexHasBeenSet) {
    oStream << location << ".DeviceIndex=" << m_deviceIndex << "&";
  }
  if (m_privateIpAddressesHasBeenSet) {
    unsigned privateIpAddressesIdx = 1;
    for (auto& item : m_privateIpAddresses) {
      Aws::StringStream privateIpAddressesSs;
      privateIpAddressesSs << location << ".PrivateIpAddress." << privateIpAddressesIdx++;
      item.OutputToStream(oStream, privateIpAddressesSs.str().c_str());
    }
  }
  if (m_privateIpAddressCountHasBeenSet) {
    oStream << location << ".PrivateIpAddressCount=" << m_privateIpAddressCount << "&";
  }
  if (m_secondarySubnetIdHasBeenSet) {
    oStream << location << ".SecondarySubnetId=" << StringUtils::URLEncode(m_secondarySubnetId.c_str()) << "&";
  }
  if (m_interfaceTypeHasBeenSet) {
    oStream << location
            << ".InterfaceType=" << StringUtils::URLEncode(SecondaryInterfaceTypeMapper::GetNameForSecondaryInterfaceType(m_interfaceType))
            << "&";
  }
  if (m_networkCardIndexHasBeenSet) {
    oStream << location << ".NetworkCardIndex=" << m_networkCardIndex << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
