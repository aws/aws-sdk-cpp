/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/DistributionIdOwner.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {

DistributionIdOwner::DistributionIdOwner(const XmlNode& xmlNode) { *this = xmlNode; }

DistributionIdOwner& DistributionIdOwner::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode distributionIdNode = resultNode.FirstChild("DistributionId");
    if (!distributionIdNode.IsNull()) {
      m_distributionId = Aws::Utils::Xml::DecodeEscapedXmlText(distributionIdNode.GetText());
      m_distributionIdHasBeenSet = true;
    }
    XmlNode ownerAccountIdNode = resultNode.FirstChild("OwnerAccountId");
    if (!ownerAccountIdNode.IsNull()) {
      m_ownerAccountId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerAccountIdNode.GetText());
      m_ownerAccountIdHasBeenSet = true;
    }
  }

  return *this;
}

void DistributionIdOwner::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_distributionIdHasBeenSet) {
    XmlNode distributionIdNode = parentNode.CreateChildElement("DistributionId");
    distributionIdNode.SetText(m_distributionId);
  }

  if (m_ownerAccountIdHasBeenSet) {
    XmlNode ownerAccountIdNode = parentNode.CreateChildElement("OwnerAccountId");
    ownerAccountIdNode.SetText(m_ownerAccountId);
  }
}

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
