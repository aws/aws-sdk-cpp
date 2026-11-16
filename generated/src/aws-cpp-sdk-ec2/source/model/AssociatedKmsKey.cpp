/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/AssociatedKmsKey.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

AssociatedKmsKey::AssociatedKmsKey(const XmlNode& xmlNode) { *this = xmlNode; }

AssociatedKmsKey& AssociatedKmsKey::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode kmsKeyIdNode = resultNode.FirstChild("kmsKeyId");
    if (!kmsKeyIdNode.IsNull()) {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
      m_kmsKeyIdHasBeenSet = true;
    }
  }

  return *this;
}

void AssociatedKmsKey::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_kmsKeyIdHasBeenSet) {
    oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
}

void AssociatedKmsKey::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_kmsKeyIdHasBeenSet) {
    oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
