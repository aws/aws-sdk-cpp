/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/model/SourceRoleTemplate.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {

SourceRoleTemplate::SourceRoleTemplate(const XmlNode& xmlNode) { *this = xmlNode; }

SourceRoleTemplate& SourceRoleTemplate::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode templateArnNode = resultNode.FirstChild("TemplateArn");
    if (!templateArnNode.IsNull()) {
      m_templateArn = Aws::Utils::Xml::DecodeEscapedXmlText(templateArnNode.GetText());
      m_templateArnHasBeenSet = true;
    }
    XmlNode templateMinorVersionNode = resultNode.FirstChild("TemplateMinorVersion");
    if (!templateMinorVersionNode.IsNull()) {
      m_templateMinorVersion = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(templateMinorVersionNode.GetText()).c_str()).c_str());
      m_templateMinorVersionHasBeenSet = true;
    }
  }

  return *this;
}

void SourceRoleTemplate::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_templateArnHasBeenSet) {
    oStream << location << index << locationValue << ".TemplateArn=" << StringUtils::URLEncode(m_templateArn.c_str()) << "&";
  }

  if (m_templateMinorVersionHasBeenSet) {
    oStream << location << index << locationValue << ".TemplateMinorVersion=" << m_templateMinorVersion << "&";
  }
}

void SourceRoleTemplate::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_templateArnHasBeenSet) {
    oStream << location << ".TemplateArn=" << StringUtils::URLEncode(m_templateArn.c_str()) << "&";
  }
  if (m_templateMinorVersionHasBeenSet) {
    oStream << location << ".TemplateMinorVersion=" << m_templateMinorVersion << "&";
  }
}

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
