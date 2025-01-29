/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-protocol/model/XmlTimestampsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

XmlTimestampsResult::XmlTimestampsResult()
{
}

XmlTimestampsResult::XmlTimestampsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

XmlTimestampsResult& XmlTimestampsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "XmlTimestampsResult"))
  {
    resultNode = rootNode.FirstChild("XmlTimestampsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode normalNode = resultNode.FirstChild("normal");
    if(!normalNode.IsNull())
    {
      m_normal = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(normalNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode dateTimeNode = resultNode.FirstChild("dateTime");
    if(!dateTimeNode.IsNull())
    {
      m_dateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode dateTimeOnTargetNode = resultNode.FirstChild("dateTimeOnTarget");
    if(!dateTimeOnTargetNode.IsNull())
    {
      m_dateTimeOnTarget = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dateTimeOnTargetNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode epochSecondsNode = resultNode.FirstChild("epochSeconds");
    if(!epochSecondsNode.IsNull())
    {
      m_epochSeconds = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(epochSecondsNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::$CppViewHelper.computeTimestampFormatInXml($member.shape));
    }
    XmlNode epochSecondsOnTargetNode = resultNode.FirstChild("epochSecondsOnTarget");
    if(!epochSecondsOnTargetNode.IsNull())
    {
      m_epochSecondsOnTarget = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(epochSecondsOnTargetNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::$CppViewHelper.computeTimestampFormatInXml($member.shape));
    }
    XmlNode httpDateNode = resultNode.FirstChild("httpDate");
    if(!httpDateNode.IsNull())
    {
      m_httpDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::RFC822);
    }
    XmlNode httpDateOnTargetNode = resultNode.FirstChild("httpDateOnTarget");
    if(!httpDateOnTargetNode.IsNull())
    {
      m_httpDateOnTarget = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpDateOnTargetNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::RFC822);
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::QueryProtocol::Model::XmlTimestampsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
