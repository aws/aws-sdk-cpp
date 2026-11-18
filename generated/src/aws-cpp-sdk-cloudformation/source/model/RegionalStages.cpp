/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/RegionalStages.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {

RegionalStages::RegionalStages(const XmlNode& xmlNode) { *this = xmlNode; }

RegionalStages& RegionalStages::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode regionalStackInstancesDeploymentNode = resultNode.FirstChild("RegionalStackInstancesDeployment");
    if (!regionalStackInstancesDeploymentNode.IsNull()) {
      m_regionalStackInstancesDeployment = regionalStackInstancesDeploymentNode;
      m_regionalStackInstancesDeploymentHasBeenSet = true;
    }
  }

  return *this;
}

void RegionalStages::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_regionalStackInstancesDeploymentHasBeenSet) {
    Aws::StringStream regionalStackInstancesDeploymentLocationAndMemberSs;
    regionalStackInstancesDeploymentLocationAndMemberSs << location << index << locationValue << ".RegionalStackInstancesDeployment";
    m_regionalStackInstancesDeployment.OutputToStream(oStream, regionalStackInstancesDeploymentLocationAndMemberSs.str().c_str());
  }
}

void RegionalStages::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_regionalStackInstancesDeploymentHasBeenSet) {
    Aws::String regionalStackInstancesDeploymentLocationAndMember(location);
    regionalStackInstancesDeploymentLocationAndMember += ".RegionalStackInstancesDeployment";
    m_regionalStackInstancesDeployment.OutputToStream(oStream, regionalStackInstancesDeploymentLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
