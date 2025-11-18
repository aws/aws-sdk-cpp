/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/model/GetHumanReadableSummaryResult.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetHumanReadableSummaryResult::GetHumanReadableSummaryResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

GetHumanReadableSummaryResult& GetHumanReadableSummaryResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetHumanReadableSummaryResult")) {
    resultNode = rootNode.FirstChild("GetHumanReadableSummaryResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode summaryContentNode = resultNode.FirstChild("SummaryContent");
    if (!summaryContentNode.IsNull()) {
      m_summaryContent = Aws::Utils::Xml::DecodeEscapedXmlText(summaryContentNode.GetText());
      m_summaryContentHasBeenSet = true;
    }
    XmlNode localeNode = resultNode.FirstChild("Locale");
    if (!localeNode.IsNull()) {
      m_locale = Aws::Utils::Xml::DecodeEscapedXmlText(localeNode.GetText());
      m_localeHasBeenSet = true;
    }
    XmlNode summaryStateNode = resultNode.FirstChild("SummaryState");
    if (!summaryStateNode.IsNull()) {
      m_summaryState = SummaryStateTypeMapper::GetSummaryStateTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(summaryStateNode.GetText()).c_str()));
      m_summaryStateHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::GetHumanReadableSummaryResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
