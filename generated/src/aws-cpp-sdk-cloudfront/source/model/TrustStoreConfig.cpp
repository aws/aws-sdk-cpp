/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/TrustStoreConfig.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {

TrustStoreConfig::TrustStoreConfig(const XmlNode& xmlNode) { *this = xmlNode; }

TrustStoreConfig& TrustStoreConfig::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode trustStoreIdNode = resultNode.FirstChild("TrustStoreId");
    if (!trustStoreIdNode.IsNull()) {
      m_trustStoreId = Aws::Utils::Xml::DecodeEscapedXmlText(trustStoreIdNode.GetText());
      m_trustStoreIdHasBeenSet = true;
    }
    XmlNode advertiseTrustStoreCaNamesNode = resultNode.FirstChild("AdvertiseTrustStoreCaNames");
    if (!advertiseTrustStoreCaNamesNode.IsNull()) {
      m_advertiseTrustStoreCaNames = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(advertiseTrustStoreCaNamesNode.GetText()).c_str()).c_str());
      m_advertiseTrustStoreCaNamesHasBeenSet = true;
    }
    XmlNode ignoreCertificateExpiryNode = resultNode.FirstChild("IgnoreCertificateExpiry");
    if (!ignoreCertificateExpiryNode.IsNull()) {
      m_ignoreCertificateExpiry = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ignoreCertificateExpiryNode.GetText()).c_str()).c_str());
      m_ignoreCertificateExpiryHasBeenSet = true;
    }
  }

  return *this;
}

void TrustStoreConfig::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_trustStoreIdHasBeenSet) {
    XmlNode trustStoreIdNode = parentNode.CreateChildElement("TrustStoreId");
    trustStoreIdNode.SetText(m_trustStoreId);
  }

  if (m_advertiseTrustStoreCaNamesHasBeenSet) {
    XmlNode advertiseTrustStoreCaNamesNode = parentNode.CreateChildElement("AdvertiseTrustStoreCaNames");
    ss << std::boolalpha << m_advertiseTrustStoreCaNames;
    advertiseTrustStoreCaNamesNode.SetText(ss.str());
    ss.str("");
  }

  if (m_ignoreCertificateExpiryHasBeenSet) {
    XmlNode ignoreCertificateExpiryNode = parentNode.CreateChildElement("IgnoreCertificateExpiry");
    ss << std::boolalpha << m_ignoreCertificateExpiry;
    ignoreCertificateExpiryNode.SetText(ss.str());
    ss.str("");
  }
}

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
