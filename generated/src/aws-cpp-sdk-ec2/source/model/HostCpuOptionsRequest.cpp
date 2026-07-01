/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/HostCpuOptionsRequest.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

HostCpuOptionsRequest::HostCpuOptionsRequest(const XmlNode& xmlNode) { *this = xmlNode; }

HostCpuOptionsRequest& HostCpuOptionsRequest::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode amdSevSnpNode = resultNode.FirstChild("AmdSevSnp");
    if (!amdSevSnpNode.IsNull()) {
      m_amdSevSnp =
          AmdSevSnpMapper::GetAmdSevSnpForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(amdSevSnpNode.GetText()).c_str()));
      m_amdSevSnpHasBeenSet = true;
    }
  }

  return *this;
}

void HostCpuOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_amdSevSnpHasBeenSet) {
    oStream << location << index << locationValue
            << ".AmdSevSnp=" << StringUtils::URLEncode(AmdSevSnpMapper::GetNameForAmdSevSnp(m_amdSevSnp)) << "&";
  }
}

void HostCpuOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_amdSevSnpHasBeenSet) {
    oStream << location << ".AmdSevSnp=" << StringUtils::URLEncode(AmdSevSnpMapper::GetNameForAmdSevSnp(m_amdSevSnp)) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
