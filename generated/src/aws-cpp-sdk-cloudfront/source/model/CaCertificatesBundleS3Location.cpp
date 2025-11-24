/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CaCertificatesBundleS3Location.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {

CaCertificatesBundleS3Location::CaCertificatesBundleS3Location(const XmlNode& xmlNode) { *this = xmlNode; }

CaCertificatesBundleS3Location& CaCertificatesBundleS3Location::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode bucketNode = resultNode.FirstChild("Bucket");
    if (!bucketNode.IsNull()) {
      m_bucket = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNode.GetText());
      m_bucketHasBeenSet = true;
    }
    XmlNode keyNode = resultNode.FirstChild("Key");
    if (!keyNode.IsNull()) {
      m_key = Aws::Utils::Xml::DecodeEscapedXmlText(keyNode.GetText());
      m_keyHasBeenSet = true;
    }
    XmlNode regionNode = resultNode.FirstChild("Region");
    if (!regionNode.IsNull()) {
      m_region = Aws::Utils::Xml::DecodeEscapedXmlText(regionNode.GetText());
      m_regionHasBeenSet = true;
    }
    XmlNode versionNode = resultNode.FirstChild("Version");
    if (!versionNode.IsNull()) {
      m_version = Aws::Utils::Xml::DecodeEscapedXmlText(versionNode.GetText());
      m_versionHasBeenSet = true;
    }
  }

  return *this;
}

void CaCertificatesBundleS3Location::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_bucketHasBeenSet) {
    XmlNode bucketNode = parentNode.CreateChildElement("Bucket");
    bucketNode.SetText(m_bucket);
  }

  if (m_keyHasBeenSet) {
    XmlNode keyNode = parentNode.CreateChildElement("Key");
    keyNode.SetText(m_key);
  }

  if (m_regionHasBeenSet) {
    XmlNode regionNode = parentNode.CreateChildElement("Region");
    regionNode.SetText(m_region);
  }

  if (m_versionHasBeenSet) {
    XmlNode versionNode = parentNode.CreateChildElement("Version");
    versionNode.SetText(m_version);
  }
}

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
