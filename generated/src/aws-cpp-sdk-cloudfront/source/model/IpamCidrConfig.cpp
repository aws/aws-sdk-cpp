/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/IpamCidrConfig.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {

IpamCidrConfig::IpamCidrConfig(const XmlNode& xmlNode) { *this = xmlNode; }

IpamCidrConfig& IpamCidrConfig::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode cidrNode = resultNode.FirstChild("Cidr");
    if (!cidrNode.IsNull()) {
      m_cidr = Aws::Utils::Xml::DecodeEscapedXmlText(cidrNode.GetText());
      m_cidrHasBeenSet = true;
    }
    XmlNode ipamPoolArnNode = resultNode.FirstChild("IpamPoolArn");
    if (!ipamPoolArnNode.IsNull()) {
      m_ipamPoolArn = Aws::Utils::Xml::DecodeEscapedXmlText(ipamPoolArnNode.GetText());
      m_ipamPoolArnHasBeenSet = true;
    }
    XmlNode anycastIpNode = resultNode.FirstChild("AnycastIp");
    if (!anycastIpNode.IsNull()) {
      m_anycastIp = Aws::Utils::Xml::DecodeEscapedXmlText(anycastIpNode.GetText());
      m_anycastIpHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if (!statusNode.IsNull()) {
      m_status = IpamCidrStatusMapper::GetIpamCidrStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void IpamCidrConfig::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_cidrHasBeenSet) {
    XmlNode cidrNode = parentNode.CreateChildElement("Cidr");
    cidrNode.SetText(m_cidr);
  }

  if (m_ipamPoolArnHasBeenSet) {
    XmlNode ipamPoolArnNode = parentNode.CreateChildElement("IpamPoolArn");
    ipamPoolArnNode.SetText(m_ipamPoolArn);
  }

  if (m_anycastIpHasBeenSet) {
    XmlNode anycastIpNode = parentNode.CreateChildElement("AnycastIp");
    anycastIpNode.SetText(m_anycastIp);
  }

  if (m_statusHasBeenSet) {
    XmlNode statusNode = parentNode.CreateChildElement("Status");
    statusNode.SetText(IpamCidrStatusMapper::GetNameForIpamCidrStatus(m_status));
  }
}

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
