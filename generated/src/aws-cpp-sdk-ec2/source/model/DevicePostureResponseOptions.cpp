/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/DevicePostureResponseOptions.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

DevicePostureResponseOptions::DevicePostureResponseOptions(const XmlNode& xmlNode) { *this = xmlNode; }

DevicePostureResponseOptions& DevicePostureResponseOptions::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode trustProvidersNode = resultNode.FirstChild("trustProviderSet");
    if (!trustProvidersNode.IsNull()) {
      XmlNode trustProvidersMember = trustProvidersNode.FirstChild("item");
      m_trustProvidersHasBeenSet = !trustProvidersMember.IsNull();
      while (!trustProvidersMember.IsNull()) {
        m_trustProviders.push_back(trustProvidersMember);
        trustProvidersMember = trustProvidersMember.NextNode("item");
      }

      m_trustProvidersHasBeenSet = true;
    }
  }

  return *this;
}

void DevicePostureResponseOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                  const char* locationValue) const {
  if (m_trustProvidersHasBeenSet) {
    unsigned trustProvidersIdx = 1;
    for (auto& item : m_trustProviders) {
      Aws::StringStream trustProvidersSs;
      trustProvidersSs << location << index << locationValue << ".TrustProviderSet." << trustProvidersIdx++;
      item.OutputToStream(oStream, trustProvidersSs.str().c_str());
    }
  }
}

void DevicePostureResponseOptions::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_trustProvidersHasBeenSet) {
    unsigned trustProvidersIdx = 1;
    for (auto& item : m_trustProviders) {
      Aws::StringStream trustProvidersSs;
      trustProvidersSs << location << ".TrustProviderSet." << trustProvidersIdx++;
      item.OutputToStream(oStream, trustProvidersSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
