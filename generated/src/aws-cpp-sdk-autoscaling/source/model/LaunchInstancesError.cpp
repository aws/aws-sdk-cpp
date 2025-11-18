/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/LaunchInstancesError.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace AutoScaling {
namespace Model {

LaunchInstancesError::LaunchInstancesError(const XmlNode& xmlNode) { *this = xmlNode; }

LaunchInstancesError& LaunchInstancesError::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode instanceTypeNode = resultNode.FirstChild("InstanceType");
    if (!instanceTypeNode.IsNull()) {
      m_instanceType = Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode marketTypeNode = resultNode.FirstChild("MarketType");
    if (!marketTypeNode.IsNull()) {
      m_marketType = Aws::Utils::Xml::DecodeEscapedXmlText(marketTypeNode.GetText());
      m_marketTypeHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("SubnetId");
    if (!subnetIdNode.IsNull()) {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("AvailabilityZone");
    if (!availabilityZoneNode.IsNull()) {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode availabilityZoneIdNode = resultNode.FirstChild("AvailabilityZoneId");
    if (!availabilityZoneIdNode.IsNull()) {
      m_availabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneIdNode.GetText());
      m_availabilityZoneIdHasBeenSet = true;
    }
    XmlNode errorCodeNode = resultNode.FirstChild("ErrorCode");
    if (!errorCodeNode.IsNull()) {
      m_errorCode = Aws::Utils::Xml::DecodeEscapedXmlText(errorCodeNode.GetText());
      m_errorCodeHasBeenSet = true;
    }
    XmlNode errorMessageNode = resultNode.FirstChild("ErrorMessage");
    if (!errorMessageNode.IsNull()) {
      m_errorMessage = Aws::Utils::Xml::DecodeEscapedXmlText(errorMessageNode.GetText());
      m_errorMessageHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchInstancesError::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_instanceTypeHasBeenSet) {
    oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if (m_marketTypeHasBeenSet) {
    oStream << location << index << locationValue << ".MarketType=" << StringUtils::URLEncode(m_marketType.c_str()) << "&";
  }

  if (m_subnetIdHasBeenSet) {
    oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if (m_availabilityZoneHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if (m_errorCodeHasBeenSet) {
    oStream << location << index << locationValue << ".ErrorCode=" << StringUtils::URLEncode(m_errorCode.c_str()) << "&";
  }

  if (m_errorMessageHasBeenSet) {
    oStream << location << index << locationValue << ".ErrorMessage=" << StringUtils::URLEncode(m_errorMessage.c_str()) << "&";
  }
}

void LaunchInstancesError::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_instanceTypeHasBeenSet) {
    oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
  if (m_marketTypeHasBeenSet) {
    oStream << location << ".MarketType=" << StringUtils::URLEncode(m_marketType.c_str()) << "&";
  }
  if (m_subnetIdHasBeenSet) {
    oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if (m_availabilityZoneHasBeenSet) {
    oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }
  if (m_errorCodeHasBeenSet) {
    oStream << location << ".ErrorCode=" << StringUtils::URLEncode(m_errorCode.c_str()) << "&";
  }
  if (m_errorMessageHasBeenSet) {
    oStream << location << ".ErrorMessage=" << StringUtils::URLEncode(m_errorMessage.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
