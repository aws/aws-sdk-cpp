/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ManagedResourceVisibilitySettings.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ManagedResourceVisibilitySettings::ManagedResourceVisibilitySettings(const XmlNode& xmlNode) { *this = xmlNode; }

ManagedResourceVisibilitySettings& ManagedResourceVisibilitySettings::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode defaultVisibilityNode = resultNode.FirstChild("defaultVisibility");
    if (!defaultVisibilityNode.IsNull()) {
      m_defaultVisibility = ManagedResourceDefaultVisibilityMapper::GetManagedResourceDefaultVisibilityForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultVisibilityNode.GetText()).c_str()));
      m_defaultVisibilityHasBeenSet = true;
    }
  }

  return *this;
}

void ManagedResourceVisibilitySettings::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                       const char* locationValue) const {
  if (m_defaultVisibilityHasBeenSet) {
    oStream << location << index << locationValue << ".DefaultVisibility="
            << StringUtils::URLEncode(
                   ManagedResourceDefaultVisibilityMapper::GetNameForManagedResourceDefaultVisibility(m_defaultVisibility))
            << "&";
  }
}

void ManagedResourceVisibilitySettings::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_defaultVisibilityHasBeenSet) {
    oStream << location << ".DefaultVisibility="
            << StringUtils::URLEncode(
                   ManagedResourceDefaultVisibilityMapper::GetNameForManagedResourceDefaultVisibility(m_defaultVisibility))
            << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
