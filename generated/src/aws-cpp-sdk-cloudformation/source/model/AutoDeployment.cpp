/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/AutoDeployment.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {

AutoDeployment::AutoDeployment(const XmlNode& xmlNode) { *this = xmlNode; }

AutoDeployment& AutoDeployment::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if (!enabledNode.IsNull()) {
      m_enabled =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode retainStacksOnAccountRemovalNode = resultNode.FirstChild("RetainStacksOnAccountRemoval");
    if (!retainStacksOnAccountRemovalNode.IsNull()) {
      m_retainStacksOnAccountRemoval = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(retainStacksOnAccountRemovalNode.GetText()).c_str()).c_str());
      m_retainStacksOnAccountRemovalHasBeenSet = true;
    }
    XmlNode dependsOnNode = resultNode.FirstChild("DependsOn");
    if (!dependsOnNode.IsNull()) {
      XmlNode dependsOnMember = dependsOnNode.FirstChild("member");
      m_dependsOnHasBeenSet = !dependsOnMember.IsNull();
      while (!dependsOnMember.IsNull()) {
        m_dependsOn.push_back(dependsOnMember.GetText());
        dependsOnMember = dependsOnMember.NextNode("member");
      }

      m_dependsOnHasBeenSet = true;
    }
  }

  return *this;
}

void AutoDeployment::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_enabledHasBeenSet) {
    oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if (m_retainStacksOnAccountRemovalHasBeenSet) {
    oStream << location << index << locationValue << ".RetainStacksOnAccountRemoval=" << std::boolalpha << m_retainStacksOnAccountRemoval
            << "&";
  }

  if (m_dependsOnHasBeenSet) {
    unsigned dependsOnIdx = 1;
    for (auto& item : m_dependsOn) {
      oStream << location << index << locationValue << ".DependsOn.member." << dependsOnIdx++ << "=" << StringUtils::URLEncode(item.c_str())
              << "&";
    }
  }
}

void AutoDeployment::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_enabledHasBeenSet) {
    oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if (m_retainStacksOnAccountRemovalHasBeenSet) {
    oStream << location << ".RetainStacksOnAccountRemoval=" << std::boolalpha << m_retainStacksOnAccountRemoval << "&";
  }
  if (m_dependsOnHasBeenSet) {
    unsigned dependsOnIdx = 1;
    for (auto& item : m_dependsOn) {
      oStream << location << ".DependsOn.member." << dependsOnIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
