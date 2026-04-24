/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ViewerMtlsConfig.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {

ViewerMtlsConfig::ViewerMtlsConfig(const XmlNode& xmlNode) { *this = xmlNode; }

ViewerMtlsConfig& ViewerMtlsConfig::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode modeNode = resultNode.FirstChild("Mode");
    if (!modeNode.IsNull()) {
      m_mode = ViewerMtlsModeMapper::GetViewerMtlsModeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(modeNode.GetText()).c_str()));
      m_modeHasBeenSet = true;
    }
    XmlNode trustStoreConfigNode = resultNode.FirstChild("TrustStoreConfig");
    if (!trustStoreConfigNode.IsNull()) {
      m_trustStoreConfig = trustStoreConfigNode;
      m_trustStoreConfigHasBeenSet = true;
    }
  }

  return *this;
}

void ViewerMtlsConfig::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_modeHasBeenSet) {
    XmlNode modeNode = parentNode.CreateChildElement("Mode");
    modeNode.SetText(ViewerMtlsModeMapper::GetNameForViewerMtlsMode(m_mode));
  }

  if (m_trustStoreConfigHasBeenSet) {
    XmlNode trustStoreConfigNode = parentNode.CreateChildElement("TrustStoreConfig");
    m_trustStoreConfig.AddToNode(trustStoreConfigNode);
  }
}

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
