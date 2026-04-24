/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/DisableFastSnapshotRestoreStateErrorItem.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

DisableFastSnapshotRestoreStateErrorItem::DisableFastSnapshotRestoreStateErrorItem(const XmlNode& xmlNode) { *this = xmlNode; }

DisableFastSnapshotRestoreStateErrorItem& DisableFastSnapshotRestoreStateErrorItem::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if (!availabilityZoneNode.IsNull()) {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode availabilityZoneIdNode = resultNode.FirstChild("availabilityZoneId");
    if (!availabilityZoneIdNode.IsNull()) {
      m_availabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneIdNode.GetText());
      m_availabilityZoneIdHasBeenSet = true;
    }
    XmlNode errorNode = resultNode.FirstChild("error");
    if (!errorNode.IsNull()) {
      m_error = errorNode;
      m_errorHasBeenSet = true;
    }
  }

  return *this;
}

void DisableFastSnapshotRestoreStateErrorItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                              const char* locationValue) const {
  if (m_availabilityZoneHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if (m_errorHasBeenSet) {
    Aws::StringStream errorLocationAndMemberSs;
    errorLocationAndMemberSs << location << index << locationValue << ".Error";
    m_error.OutputToStream(oStream, errorLocationAndMemberSs.str().c_str());
  }
}

void DisableFastSnapshotRestoreStateErrorItem::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_availabilityZoneHasBeenSet) {
    oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }
  if (m_errorHasBeenSet) {
    Aws::String errorLocationAndMember(location);
    errorLocationAndMember += ".Error";
    m_error.OutputToStream(oStream, errorLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
