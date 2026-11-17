/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/CreatePeeringConnectionOptionsRequest.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

CreatePeeringConnectionOptionsRequest::CreatePeeringConnectionOptionsRequest(const XmlNode& xmlNode) { *this = xmlNode; }

CreatePeeringConnectionOptionsRequest& CreatePeeringConnectionOptionsRequest::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode allowMultipathResilienceNode = resultNode.FirstChild("AllowMultipathResilience");
    if (!allowMultipathResilienceNode.IsNull()) {
      m_allowMultipathResilience = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allowMultipathResilienceNode.GetText()).c_str()).c_str());
      m_allowMultipathResilienceHasBeenSet = true;
    }
    XmlNode multipathResilienceModeNode = resultNode.FirstChild("MultipathResilienceMode");
    if (!multipathResilienceModeNode.IsNull()) {
      m_multipathResilienceMode = MultipathResilienceModeMapper::GetMultipathResilienceModeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(multipathResilienceModeNode.GetText()).c_str()));
      m_multipathResilienceModeHasBeenSet = true;
    }
  }

  return *this;
}

void CreatePeeringConnectionOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                           const char* locationValue) const {
  if (m_allowMultipathResilienceHasBeenSet) {
    oStream << location << index << locationValue << ".AllowMultipathResilience=" << std::boolalpha << m_allowMultipathResilience << "&";
  }

  if (m_multipathResilienceModeHasBeenSet) {
    oStream << location << index << locationValue << ".MultipathResilienceMode="
            << StringUtils::URLEncode(MultipathResilienceModeMapper::GetNameForMultipathResilienceMode(m_multipathResilienceMode)) << "&";
  }
}

void CreatePeeringConnectionOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_allowMultipathResilienceHasBeenSet) {
    oStream << location << ".AllowMultipathResilience=" << std::boolalpha << m_allowMultipathResilience << "&";
  }
  if (m_multipathResilienceModeHasBeenSet) {
    oStream << location << ".MultipathResilienceMode="
            << StringUtils::URLEncode(MultipathResilienceModeMapper::GetNameForMultipathResilienceMode(m_multipathResilienceMode)) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
