/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/RegionalStatusDetail.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {

RegionalStatusDetail::RegionalStatusDetail(const XmlNode& xmlNode) { *this = xmlNode; }

RegionalStatusDetail& RegionalStatusDetail::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode stagesNode = resultNode.FirstChild("Stages");
    if (!stagesNode.IsNull()) {
      m_stages = stagesNode;
      m_stagesHasBeenSet = true;
    }
  }

  return *this;
}

void RegionalStatusDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_stagesHasBeenSet) {
    Aws::StringStream stagesLocationAndMemberSs;
    stagesLocationAndMemberSs << location << index << locationValue << ".Stages";
    m_stages.OutputToStream(oStream, stagesLocationAndMemberSs.str().c_str());
  }
}

void RegionalStatusDetail::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_stagesHasBeenSet) {
    Aws::String stagesLocationAndMember(location);
    stagesLocationAndMember += ".Stages";
    m_stages.OutputToStream(oStream, stagesLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
