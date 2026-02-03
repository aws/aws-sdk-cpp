/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginMtlsConfig.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {

OriginMtlsConfig::OriginMtlsConfig(const XmlNode& xmlNode) { *this = xmlNode; }

OriginMtlsConfig& OriginMtlsConfig::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode clientCertificateArnNode = resultNode.FirstChild("ClientCertificateArn");
    if (!clientCertificateArnNode.IsNull()) {
      m_clientCertificateArn = Aws::Utils::Xml::DecodeEscapedXmlText(clientCertificateArnNode.GetText());
      m_clientCertificateArnHasBeenSet = true;
    }
  }

  return *this;
}

void OriginMtlsConfig::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_clientCertificateArnHasBeenSet) {
    XmlNode clientCertificateArnNode = parentNode.CreateChildElement("ClientCertificateArn");
    clientCertificateArnNode.SetText(m_clientCertificateArn);
  }
}

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
