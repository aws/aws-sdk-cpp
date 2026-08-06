/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/Operator.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace AutoScaling {
namespace Model {

Operator::Operator(const XmlNode& xmlNode) { *this = xmlNode; }

Operator& Operator::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode principalNode = resultNode.FirstChild("Principal");
    if (!principalNode.IsNull()) {
      m_principal = Aws::Utils::Xml::DecodeEscapedXmlText(principalNode.GetText());
      m_principalHasBeenSet = true;
    }
  }

  return *this;
}

void Operator::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_principalHasBeenSet) {
    oStream << location << index << locationValue << ".Principal=" << StringUtils::URLEncode(m_principal.c_str()) << "&";
  }
}

void Operator::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_principalHasBeenSet) {
    oStream << location << ".Principal=" << StringUtils::URLEncode(m_principal.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
