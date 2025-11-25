/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CaCertificatesBundleSource.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {

CaCertificatesBundleSource::CaCertificatesBundleSource(const XmlNode& xmlNode) { *this = xmlNode; }

CaCertificatesBundleSource& CaCertificatesBundleSource::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode caCertificatesBundleS3LocationNode = resultNode.FirstChild("CaCertificatesBundleS3Location");
    if (!caCertificatesBundleS3LocationNode.IsNull()) {
      m_caCertificatesBundleS3Location = caCertificatesBundleS3LocationNode;
      m_caCertificatesBundleS3LocationHasBeenSet = true;
    }
  }

  return *this;
}

void CaCertificatesBundleSource::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_caCertificatesBundleS3LocationHasBeenSet) {
    XmlNode caCertificatesBundleS3LocationNode = parentNode.CreateChildElement("CaCertificatesBundleS3Location");
    m_caCertificatesBundleS3Location.AddToNode(caCertificatesBundleS3LocationNode);
  }
}

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
