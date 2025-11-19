/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/IpamPolicyAllocationRuleRequest.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

IpamPolicyAllocationRuleRequest::IpamPolicyAllocationRuleRequest(const XmlNode& xmlNode) { *this = xmlNode; }

IpamPolicyAllocationRuleRequest& IpamPolicyAllocationRuleRequest::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode sourceIpamPoolIdNode = resultNode.FirstChild("SourceIpamPoolId");
    if (!sourceIpamPoolIdNode.IsNull()) {
      m_sourceIpamPoolId = Aws::Utils::Xml::DecodeEscapedXmlText(sourceIpamPoolIdNode.GetText());
      m_sourceIpamPoolIdHasBeenSet = true;
    }
  }

  return *this;
}

void IpamPolicyAllocationRuleRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                     const char* locationValue) const {
  if (m_sourceIpamPoolIdHasBeenSet) {
    oStream << location << index << locationValue << ".SourceIpamPoolId=" << StringUtils::URLEncode(m_sourceIpamPoolId.c_str()) << "&";
  }
}

void IpamPolicyAllocationRuleRequest::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_sourceIpamPoolIdHasBeenSet) {
    oStream << location << ".SourceIpamPoolId=" << StringUtils::URLEncode(m_sourceIpamPoolId.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
