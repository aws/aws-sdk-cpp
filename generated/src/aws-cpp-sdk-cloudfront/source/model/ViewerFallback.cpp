/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ViewerFallback.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {

ViewerFallback::ViewerFallback(const XmlNode& xmlNode) { *this = xmlNode; }

ViewerFallback& ViewerFallback::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode distributionIdNode = resultNode.FirstChild("DistributionId");
    if (!distributionIdNode.IsNull()) {
      m_distributionId = Aws::Utils::Xml::DecodeEscapedXmlText(distributionIdNode.GetText());
      m_distributionIdHasBeenSet = true;
    }
  }

  return *this;
}

void ViewerFallback::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_distributionIdHasBeenSet) {
    XmlNode distributionIdNode = parentNode.CreateChildElement("DistributionId");
    distributionIdNode.SetText(m_distributionId);
  }
}

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
