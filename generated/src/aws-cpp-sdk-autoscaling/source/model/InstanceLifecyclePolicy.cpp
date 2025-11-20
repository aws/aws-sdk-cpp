/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/InstanceLifecyclePolicy.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace AutoScaling {
namespace Model {

InstanceLifecyclePolicy::InstanceLifecyclePolicy(const XmlNode& xmlNode) { *this = xmlNode; }

InstanceLifecyclePolicy& InstanceLifecyclePolicy::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode retentionTriggersNode = resultNode.FirstChild("RetentionTriggers");
    if (!retentionTriggersNode.IsNull()) {
      m_retentionTriggers = retentionTriggersNode;
      m_retentionTriggersHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceLifecyclePolicy::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_retentionTriggersHasBeenSet) {
    Aws::StringStream retentionTriggersLocationAndMemberSs;
    retentionTriggersLocationAndMemberSs << location << index << locationValue << ".RetentionTriggers";
    m_retentionTriggers.OutputToStream(oStream, retentionTriggersLocationAndMemberSs.str().c_str());
  }
}

void InstanceLifecyclePolicy::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_retentionTriggersHasBeenSet) {
    Aws::String retentionTriggersLocationAndMember(location);
    retentionTriggersLocationAndMember += ".RetentionTriggers";
    m_retentionTriggers.OutputToStream(oStream, retentionTriggersLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
