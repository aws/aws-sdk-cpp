/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/Stages.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {

Stages::Stages(const XmlNode& xmlNode) { *this = xmlNode; }

Stages& Stages::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode roleProvisioningNode = resultNode.FirstChild("RoleProvisioning");
    if (!roleProvisioningNode.IsNull()) {
      m_roleProvisioning = roleProvisioningNode;
      m_roleProvisioningHasBeenSet = true;
    }
    XmlNode stackInstancesDeploymentNode = resultNode.FirstChild("StackInstancesDeployment");
    if (!stackInstancesDeploymentNode.IsNull()) {
      m_stackInstancesDeployment = stackInstancesDeploymentNode;
      m_stackInstancesDeploymentHasBeenSet = true;
    }
  }

  return *this;
}

void Stages::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_roleProvisioningHasBeenSet) {
    Aws::StringStream roleProvisioningLocationAndMemberSs;
    roleProvisioningLocationAndMemberSs << location << index << locationValue << ".RoleProvisioning";
    m_roleProvisioning.OutputToStream(oStream, roleProvisioningLocationAndMemberSs.str().c_str());
  }

  if (m_stackInstancesDeploymentHasBeenSet) {
    Aws::StringStream stackInstancesDeploymentLocationAndMemberSs;
    stackInstancesDeploymentLocationAndMemberSs << location << index << locationValue << ".StackInstancesDeployment";
    m_stackInstancesDeployment.OutputToStream(oStream, stackInstancesDeploymentLocationAndMemberSs.str().c_str());
  }
}

void Stages::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_roleProvisioningHasBeenSet) {
    Aws::String roleProvisioningLocationAndMember(location);
    roleProvisioningLocationAndMember += ".RoleProvisioning";
    m_roleProvisioning.OutputToStream(oStream, roleProvisioningLocationAndMember.c_str());
  }
  if (m_stackInstancesDeploymentHasBeenSet) {
    Aws::String stackInstancesDeploymentLocationAndMember(location);
    stackInstancesDeploymentLocationAndMember += ".StackInstancesDeployment";
    m_stackInstancesDeployment.OutputToStream(oStream, stackInstancesDeploymentLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
