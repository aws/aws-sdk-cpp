/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/XmlTimestampsRequest.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String XmlTimestampsRequest::SerializePayload() const {
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("XmlTimestampsRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();

  Aws::StringStream ss;
  if (m_normalHasBeenSet) {
    XmlNode normalNode = parentNode.CreateChildElement("normal");
    normalNode.SetText(m_normal.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_dateTimeHasBeenSet) {
    XmlNode dateTimeNode = parentNode.CreateChildElement("dateTime");
    dateTimeNode.SetText(m_dateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_dateTimeOnTargetHasBeenSet) {
    XmlNode dateTimeOnTargetNode = parentNode.CreateChildElement("dateTimeOnTarget");
    dateTimeOnTargetNode.SetText(m_dateTimeOnTarget.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_epochSecondsHasBeenSet) {
    XmlNode epochSecondsNode = parentNode.CreateChildElement("epochSeconds");
    epochSecondsNode.SetText(StringUtils::to_string(m_epochSeconds.Seconds()));
  }

  if (m_epochSecondsOnTargetHasBeenSet) {
    XmlNode epochSecondsOnTargetNode = parentNode.CreateChildElement("epochSecondsOnTarget");
    epochSecondsOnTargetNode.SetText(StringUtils::to_string(m_epochSecondsOnTarget.Seconds()));
  }

  if (m_httpDateHasBeenSet) {
    XmlNode httpDateNode = parentNode.CreateChildElement("httpDate");
    httpDateNode.SetText(m_httpDate.ToGmtString(Aws::Utils::DateFormat::RFC822));
  }

  if (m_httpDateOnTargetHasBeenSet) {
    XmlNode httpDateOnTargetNode = parentNode.CreateChildElement("httpDateOnTarget");
    httpDateOnTargetNode.SetText(m_httpDateOnTarget.ToGmtString(Aws::Utils::DateFormat::RFC822));
  }

  return payloadDoc.ConvertToString();
}
