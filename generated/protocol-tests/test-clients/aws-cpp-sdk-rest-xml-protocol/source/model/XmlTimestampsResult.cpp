/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/XmlTimestampsResult.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

XmlTimestampsResult::XmlTimestampsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

XmlTimestampsResult& XmlTimestampsResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if (!resultNode.IsNull()) {
    XmlNode normalNode = resultNode.FirstChild("normal");
    if (!normalNode.IsNull()) {
      m_normal = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(normalNode.GetText()).c_str()).c_str(),
                          Aws::Utils::DateFormat::ISO_8601);
      m_normalHasBeenSet = true;
    }
    XmlNode dateTimeNode = resultNode.FirstChild("dateTime");
    if (!dateTimeNode.IsNull()) {
      m_dateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dateTimeNode.GetText()).c_str()).c_str(),
                            Aws::Utils::DateFormat::ISO_8601);
      m_dateTimeHasBeenSet = true;
    }
    XmlNode dateTimeOnTargetNode = resultNode.FirstChild("dateTimeOnTarget");
    if (!dateTimeOnTargetNode.IsNull()) {
      m_dateTimeOnTarget =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dateTimeOnTargetNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_dateTimeOnTargetHasBeenSet = true;
    }
    XmlNode epochSecondsNode = resultNode.FirstChild("epochSeconds");
    if (!epochSecondsNode.IsNull()) {
      m_epochSeconds = DateTime(StringUtils::ConvertToDouble(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(epochSecondsNode.GetText()).c_str()).c_str()));
      m_epochSecondsHasBeenSet = true;
    }
    XmlNode epochSecondsOnTargetNode = resultNode.FirstChild("epochSecondsOnTarget");
    if (!epochSecondsOnTargetNode.IsNull()) {
      m_epochSecondsOnTarget = DateTime(StringUtils::ConvertToDouble(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(epochSecondsOnTargetNode.GetText()).c_str()).c_str()));
      m_epochSecondsOnTargetHasBeenSet = true;
    }
    XmlNode httpDateNode = resultNode.FirstChild("httpDate");
    if (!httpDateNode.IsNull()) {
      m_httpDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpDateNode.GetText()).c_str()).c_str(),
                            Aws::Utils::DateFormat::RFC822);
      m_httpDateHasBeenSet = true;
    }
    XmlNode httpDateOnTargetNode = resultNode.FirstChild("httpDateOnTarget");
    if (!httpDateOnTargetNode.IsNull()) {
      m_httpDateOnTarget =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpDateOnTargetNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::RFC822);
      m_httpDateOnTargetHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
