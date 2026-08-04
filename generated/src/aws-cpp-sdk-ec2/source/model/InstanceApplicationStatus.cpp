/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/InstanceApplicationStatus.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

InstanceApplicationStatus::InstanceApplicationStatus(const XmlNode& xmlNode) { *this = xmlNode; }

InstanceApplicationStatus& InstanceApplicationStatus::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if (!instanceIdNode.IsNull()) {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
    }
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
    XmlNode applicationStatusNode = resultNode.FirstChild("applicationStatus");
    if (!applicationStatusNode.IsNull()) {
      m_applicationStatus = applicationStatusNode;
      m_applicationStatusHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if (!tagsNode.IsNull()) {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while (!tagsMember.IsNull()) {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceApplicationStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                               const char* locationValue) const {
  if (m_instanceIdHasBeenSet) {
    oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if (m_availabilityZoneHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if (m_applicationStatusHasBeenSet) {
    Aws::StringStream applicationStatusLocationAndMemberSs;
    applicationStatusLocationAndMemberSs << location << index << locationValue << ".ApplicationStatus";
    m_applicationStatus.OutputToStream(oStream, applicationStatusLocationAndMemberSs.str().c_str());
  }

  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }
}

void InstanceApplicationStatus::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_instanceIdHasBeenSet) {
    oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if (m_availabilityZoneHasBeenSet) {
    oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }
  if (m_applicationStatusHasBeenSet) {
    Aws::String applicationStatusLocationAndMember(location);
    applicationStatusLocationAndMember += ".ApplicationStatus";
    m_applicationStatus.OutputToStream(oStream, applicationStatusLocationAndMember.c_str());
  }
  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << ".TagSet." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
