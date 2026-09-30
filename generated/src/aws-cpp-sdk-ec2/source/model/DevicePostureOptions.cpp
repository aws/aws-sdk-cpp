/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/DevicePostureOptions.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

DevicePostureOptions::DevicePostureOptions(const XmlNode& xmlNode) { *this = xmlNode; }

DevicePostureOptions& DevicePostureOptions::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode trustProvidersNode = resultNode.FirstChild("TrustProvider");
    if (!trustProvidersNode.IsNull()) {
      XmlNode trustProvidersMember = trustProvidersNode.FirstChild("item");
      m_trustProvidersHasBeenSet = !trustProvidersMember.IsNull();
      while (!trustProvidersMember.IsNull()) {
        m_trustProviders.push_back(trustProvidersMember);
        trustProvidersMember = trustProvidersMember.NextNode("item");
      }

      m_trustProvidersHasBeenSet = true;
    }
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if (!enabledNode.IsNull()) {
      m_enabled =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
  }

  return *this;
}

void DevicePostureOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_trustProvidersHasBeenSet) {
    unsigned trustProvidersIdx = 1;
    for (auto& item : m_trustProviders) {
      Aws::StringStream trustProvidersSs;
      trustProvidersSs << location << index << locationValue << ".TrustProvider." << trustProvidersIdx++;
      item.OutputToStream(oStream, trustProvidersSs.str().c_str());
    }
  }

  if (m_enabledHasBeenSet) {
    oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
}

void DevicePostureOptions::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_trustProvidersHasBeenSet) {
    unsigned trustProvidersIdx = 1;
    for (auto& item : m_trustProviders) {
      Aws::StringStream trustProvidersSs;
      trustProvidersSs << location << ".TrustProvider." << trustProvidersIdx++;
      item.OutputToStream(oStream, trustProvidersSs.str().c_str());
    }
  }
  if (m_enabledHasBeenSet) {
    oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
