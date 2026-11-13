/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/FlexCostAllocationOperationFailure.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

FlexCostAllocationOperationFailure::FlexCostAllocationOperationFailure(const XmlNode& xmlNode) { *this = xmlNode; }

FlexCostAllocationOperationFailure& FlexCostAllocationOperationFailure::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode resourceIdNode = resultNode.FirstChild("resourceId");
    if (!resourceIdNode.IsNull()) {
      m_resourceId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceIdNode.GetText());
      m_resourceIdHasBeenSet = true;
    }
    XmlNode failureCodeNode = resultNode.FirstChild("failureCode");
    if (!failureCodeNode.IsNull()) {
      m_failureCode = Aws::Utils::Xml::DecodeEscapedXmlText(failureCodeNode.GetText());
      m_failureCodeHasBeenSet = true;
    }
    XmlNode failureReasonNode = resultNode.FirstChild("failureReason");
    if (!failureReasonNode.IsNull()) {
      m_failureReason = Aws::Utils::Xml::DecodeEscapedXmlText(failureReasonNode.GetText());
      m_failureReasonHasBeenSet = true;
    }
  }

  return *this;
}

void FlexCostAllocationOperationFailure::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                        const char* locationValue) const {
  if (m_resourceIdHasBeenSet) {
    oStream << location << index << locationValue << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }

  if (m_failureCodeHasBeenSet) {
    oStream << location << index << locationValue << ".FailureCode=" << StringUtils::URLEncode(m_failureCode.c_str()) << "&";
  }

  if (m_failureReasonHasBeenSet) {
    oStream << location << index << locationValue << ".FailureReason=" << StringUtils::URLEncode(m_failureReason.c_str()) << "&";
  }
}

void FlexCostAllocationOperationFailure::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_resourceIdHasBeenSet) {
    oStream << location << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }
  if (m_failureCodeHasBeenSet) {
    oStream << location << ".FailureCode=" << StringUtils::URLEncode(m_failureCode.c_str()) << "&";
  }
  if (m_failureReasonHasBeenSet) {
    oStream << location << ".FailureReason=" << StringUtils::URLEncode(m_failureReason.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
