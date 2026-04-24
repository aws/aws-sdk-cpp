/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ConnectionFunctionAssociation.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {

ConnectionFunctionAssociation::ConnectionFunctionAssociation(const XmlNode& xmlNode) { *this = xmlNode; }

ConnectionFunctionAssociation& ConnectionFunctionAssociation::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode idNode = resultNode.FirstChild("Id");
    if (!idNode.IsNull()) {
      m_id = Aws::Utils::Xml::DecodeEscapedXmlText(idNode.GetText());
      m_idHasBeenSet = true;
    }
  }

  return *this;
}

void ConnectionFunctionAssociation::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_idHasBeenSet) {
    XmlNode idNode = parentNode.CreateChildElement("Id");
    idNode.SetText(m_id);
  }
}

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
