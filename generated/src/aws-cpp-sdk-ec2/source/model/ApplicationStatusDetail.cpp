/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ApplicationStatusDetail.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ApplicationStatusDetail::ApplicationStatusDetail(const XmlNode& xmlNode) { *this = xmlNode; }

ApplicationStatusDetail& ApplicationStatusDetail::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode applicationStatusCheckIdNode = resultNode.FirstChild("applicationStatusCheckId");
    if (!applicationStatusCheckIdNode.IsNull()) {
      m_applicationStatusCheckId = Aws::Utils::Xml::DecodeEscapedXmlText(applicationStatusCheckIdNode.GetText());
      m_applicationStatusCheckIdHasBeenSet = true;
    }
    XmlNode checkUpdateTimeNode = resultNode.FirstChild("checkUpdateTime");
    if (!checkUpdateTimeNode.IsNull()) {
      m_checkUpdateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(checkUpdateTimeNode.GetText()).c_str()).c_str(),
                                   Aws::Utils::DateFormat::ISO_8601);
      m_checkUpdateTimeHasBeenSet = true;
    }
    XmlNode aggregationNode = resultNode.FirstChild("aggregation");
    if (!aggregationNode.IsNull()) {
      m_aggregation = AggregationStatusEnumMapper::GetAggregationStatusEnumForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(aggregationNode.GetText()).c_str()));
      m_aggregationHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if (!statusNode.IsNull()) {
      m_status = ApplicationStatusCheckEnumMapper::GetApplicationStatusCheckEnumForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode statusTimeStampNode = resultNode.FirstChild("statusTimeStamp");
    if (!statusTimeStampNode.IsNull()) {
      m_statusTimeStamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusTimeStampNode.GetText()).c_str()).c_str(),
                                   Aws::Utils::DateFormat::ISO_8601);
      m_statusTimeStampHasBeenSet = true;
    }
    XmlNode statusSinceNode = resultNode.FirstChild("statusSince");
    if (!statusSinceNode.IsNull()) {
      m_statusSince = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusSinceNode.GetText()).c_str()).c_str(),
                               Aws::Utils::DateFormat::ISO_8601);
      m_statusSinceHasBeenSet = true;
    }
    XmlNode reasonNode = resultNode.FirstChild("reason");
    if (!reasonNode.IsNull()) {
      m_reason = reasonNode;
      m_reasonHasBeenSet = true;
    }
  }

  return *this;
}

void ApplicationStatusDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_applicationStatusCheckIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".ApplicationStatusCheckId=" << StringUtils::URLEncode(m_applicationStatusCheckId.c_str()) << "&";
  }

  if (m_checkUpdateTimeHasBeenSet) {
    oStream << location << index << locationValue
            << ".CheckUpdateTime=" << StringUtils::URLEncode(m_checkUpdateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }

  if (m_aggregationHasBeenSet) {
    oStream << location << index << locationValue
            << ".Aggregation=" << StringUtils::URLEncode(AggregationStatusEnumMapper::GetNameForAggregationStatusEnum(m_aggregation))
            << "&";
  }

  if (m_statusHasBeenSet) {
    oStream << location << index << locationValue
            << ".Status=" << StringUtils::URLEncode(ApplicationStatusCheckEnumMapper::GetNameForApplicationStatusCheckEnum(m_status))
            << "&";
  }

  if (m_statusTimeStampHasBeenSet) {
    oStream << location << index << locationValue
            << ".StatusTimeStamp=" << StringUtils::URLEncode(m_statusTimeStamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }

  if (m_statusSinceHasBeenSet) {
    oStream << location << index << locationValue
            << ".StatusSince=" << StringUtils::URLEncode(m_statusSince.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_reasonHasBeenSet) {
    Aws::StringStream reasonLocationAndMemberSs;
    reasonLocationAndMemberSs << location << index << locationValue << ".Reason";
    m_reason.OutputToStream(oStream, reasonLocationAndMemberSs.str().c_str());
  }
}

void ApplicationStatusDetail::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_applicationStatusCheckIdHasBeenSet) {
    oStream << location << ".ApplicationStatusCheckId=" << StringUtils::URLEncode(m_applicationStatusCheckId.c_str()) << "&";
  }
  if (m_checkUpdateTimeHasBeenSet) {
    oStream << location
            << ".CheckUpdateTime=" << StringUtils::URLEncode(m_checkUpdateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_aggregationHasBeenSet) {
    oStream << location
            << ".Aggregation=" << StringUtils::URLEncode(AggregationStatusEnumMapper::GetNameForAggregationStatusEnum(m_aggregation))
            << "&";
  }
  if (m_statusHasBeenSet) {
    oStream << location
            << ".Status=" << StringUtils::URLEncode(ApplicationStatusCheckEnumMapper::GetNameForApplicationStatusCheckEnum(m_status))
            << "&";
  }
  if (m_statusTimeStampHasBeenSet) {
    oStream << location
            << ".StatusTimeStamp=" << StringUtils::URLEncode(m_statusTimeStamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_statusSinceHasBeenSet) {
    oStream << location << ".StatusSince=" << StringUtils::URLEncode(m_statusSince.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_reasonHasBeenSet) {
    Aws::String reasonLocationAndMember(location);
    reasonLocationAndMember += ".Reason";
    m_reason.OutputToStream(oStream, reasonLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
