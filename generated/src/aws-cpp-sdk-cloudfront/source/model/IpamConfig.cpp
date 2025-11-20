/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/IpamConfig.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {

IpamConfig::IpamConfig(const XmlNode& xmlNode) { *this = xmlNode; }

IpamConfig& IpamConfig::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode quantityNode = resultNode.FirstChild("Quantity");
    if (!quantityNode.IsNull()) {
      m_quantity =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(quantityNode.GetText()).c_str()).c_str());
      m_quantityHasBeenSet = true;
    }
    XmlNode ipamCidrConfigsNode = resultNode.FirstChild("IpamCidrConfigs");
    if (!ipamCidrConfigsNode.IsNull()) {
      XmlNode ipamCidrConfigsMember = ipamCidrConfigsNode.FirstChild("IpamCidrConfig");
      m_ipamCidrConfigsHasBeenSet = !ipamCidrConfigsMember.IsNull();
      while (!ipamCidrConfigsMember.IsNull()) {
        m_ipamCidrConfigs.push_back(ipamCidrConfigsMember);
        ipamCidrConfigsMember = ipamCidrConfigsMember.NextNode("IpamCidrConfig");
      }

      m_ipamCidrConfigsHasBeenSet = true;
    }
  }

  return *this;
}

void IpamConfig::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_quantityHasBeenSet) {
    XmlNode quantityNode = parentNode.CreateChildElement("Quantity");
    ss << m_quantity;
    quantityNode.SetText(ss.str());
    ss.str("");
  }

  if (m_ipamCidrConfigsHasBeenSet) {
    XmlNode ipamCidrConfigsParentNode = parentNode.CreateChildElement("IpamCidrConfigs");
    for (const auto& item : m_ipamCidrConfigs) {
      XmlNode ipamCidrConfigsNode = ipamCidrConfigsParentNode.CreateChildElement("IpamCidrConfig");
      item.AddToNode(ipamCidrConfigsNode);
    }
  }
}

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
