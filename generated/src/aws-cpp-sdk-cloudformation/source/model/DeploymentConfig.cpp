/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DeploymentConfig.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {

DeploymentConfig::DeploymentConfig(const XmlNode& xmlNode) { *this = xmlNode; }

DeploymentConfig& DeploymentConfig::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode modeNode = resultNode.FirstChild("Mode");
    if (!modeNode.IsNull()) {
      m_mode = DeploymentConfigModeMapper::GetDeploymentConfigModeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(modeNode.GetText()).c_str()));
      m_modeHasBeenSet = true;
    }
    XmlNode disableRollbackNode = resultNode.FirstChild("DisableRollback");
    if (!disableRollbackNode.IsNull()) {
      m_disableRollback = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(disableRollbackNode.GetText()).c_str()).c_str());
      m_disableRollbackHasBeenSet = true;
    }
  }

  return *this;
}

void DeploymentConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_modeHasBeenSet) {
    oStream << location << index << locationValue
            << ".Mode=" << StringUtils::URLEncode(DeploymentConfigModeMapper::GetNameForDeploymentConfigMode(m_mode)) << "&";
  }

  if (m_disableRollbackHasBeenSet) {
    oStream << location << index << locationValue << ".DisableRollback=" << std::boolalpha << m_disableRollback << "&";
  }
}

void DeploymentConfig::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_modeHasBeenSet) {
    oStream << location << ".Mode=" << StringUtils::URLEncode(DeploymentConfigModeMapper::GetNameForDeploymentConfigMode(m_mode)) << "&";
  }
  if (m_disableRollbackHasBeenSet) {
    oStream << location << ".DisableRollback=" << std::boolalpha << m_disableRollback << "&";
  }
}

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
