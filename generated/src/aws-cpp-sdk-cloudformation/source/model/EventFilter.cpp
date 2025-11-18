/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/EventFilter.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {

EventFilter::EventFilter(const XmlNode& xmlNode) { *this = xmlNode; }

EventFilter& EventFilter::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode failedEventsNode = resultNode.FirstChild("FailedEvents");
    if (!failedEventsNode.IsNull()) {
      m_failedEvents =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(failedEventsNode.GetText()).c_str()).c_str());
      m_failedEventsHasBeenSet = true;
    }
  }

  return *this;
}

void EventFilter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_failedEventsHasBeenSet) {
    oStream << location << index << locationValue << ".FailedEvents=" << std::boolalpha << m_failedEvents << "&";
  }
}

void EventFilter::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_failedEventsHasBeenSet) {
    oStream << location << ".FailedEvents=" << std::boolalpha << m_failedEvents << "&";
  }
}

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
