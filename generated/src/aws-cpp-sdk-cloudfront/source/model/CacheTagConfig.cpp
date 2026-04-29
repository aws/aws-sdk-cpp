/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CacheTagConfig.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {

CacheTagConfig::CacheTagConfig(const XmlNode& xmlNode) { *this = xmlNode; }

CacheTagConfig& CacheTagConfig::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode headerNameNode = resultNode.FirstChild("HeaderName");
    if (!headerNameNode.IsNull()) {
      m_headerName = Aws::Utils::Xml::DecodeEscapedXmlText(headerNameNode.GetText());
      m_headerNameHasBeenSet = true;
    }
  }

  return *this;
}

void CacheTagConfig::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_headerNameHasBeenSet) {
    XmlNode headerNameNode = parentNode.CreateChildElement("HeaderName");
    headerNameNode.SetText(m_headerName);
  }
}

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
