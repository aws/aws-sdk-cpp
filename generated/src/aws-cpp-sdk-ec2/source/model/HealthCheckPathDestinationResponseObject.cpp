/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/HealthCheckPathDestinationResponseObject.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

HealthCheckPathDestinationResponseObject::HealthCheckPathDestinationResponseObject(const XmlNode& xmlNode) { *this = xmlNode; }

HealthCheckPathDestinationResponseObject& HealthCheckPathDestinationResponseObject::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if (!subnetIdNode.IsNull()) {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode securityGroupIdNode = resultNode.FirstChild("securityGroupId");
    if (!securityGroupIdNode.IsNull()) {
      m_securityGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(securityGroupIdNode.GetText());
      m_securityGroupIdHasBeenSet = true;
    }
  }

  return *this;
}

void HealthCheckPathDestinationResponseObject::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                              const char* locationValue) const {
  if (m_subnetIdHasBeenSet) {
    oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if (m_securityGroupIdHasBeenSet) {
    oStream << location << index << locationValue << ".SecurityGroupId=" << StringUtils::URLEncode(m_securityGroupId.c_str()) << "&";
  }
}

void HealthCheckPathDestinationResponseObject::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_subnetIdHasBeenSet) {
    oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if (m_securityGroupIdHasBeenSet) {
    oStream << location << ".SecurityGroupId=" << StringUtils::URLEncode(m_securityGroupId.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
