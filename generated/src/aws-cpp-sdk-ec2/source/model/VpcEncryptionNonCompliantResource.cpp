/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/VpcEncryptionNonCompliantResource.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

VpcEncryptionNonCompliantResource::VpcEncryptionNonCompliantResource(const XmlNode& xmlNode) { *this = xmlNode; }

VpcEncryptionNonCompliantResource& VpcEncryptionNonCompliantResource::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode idNode = resultNode.FirstChild("id");
    if (!idNode.IsNull()) {
      m_id = Aws::Utils::Xml::DecodeEscapedXmlText(idNode.GetText());
      m_idHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("type");
    if (!typeNode.IsNull()) {
      m_type = Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText());
      m_typeHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if (!descriptionNode.IsNull()) {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode isExcludableNode = resultNode.FirstChild("isExcludable");
    if (!isExcludableNode.IsNull()) {
      m_isExcludable =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isExcludableNode.GetText()).c_str()).c_str());
      m_isExcludableHasBeenSet = true;
    }
  }

  return *this;
}

void VpcEncryptionNonCompliantResource::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                       const char* locationValue) const {
  if (m_idHasBeenSet) {
    oStream << location << index << locationValue << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }

  if (m_typeHasBeenSet) {
    oStream << location << index << locationValue << ".Type=" << StringUtils::URLEncode(m_type.c_str()) << "&";
  }

  if (m_descriptionHasBeenSet) {
    oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if (m_isExcludableHasBeenSet) {
    oStream << location << index << locationValue << ".IsExcludable=" << std::boolalpha << m_isExcludable << "&";
  }
}

void VpcEncryptionNonCompliantResource::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_idHasBeenSet) {
    oStream << location << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }
  if (m_typeHasBeenSet) {
    oStream << location << ".Type=" << StringUtils::URLEncode(m_type.c_str()) << "&";
  }
  if (m_descriptionHasBeenSet) {
    oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if (m_isExcludableHasBeenSet) {
    oStream << location << ".IsExcludable=" << std::boolalpha << m_isExcludable << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
