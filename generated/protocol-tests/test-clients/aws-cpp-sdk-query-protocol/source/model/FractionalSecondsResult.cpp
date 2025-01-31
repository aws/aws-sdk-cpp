/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-protocol/model/FractionalSecondsResult.h>
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

FractionalSecondsResult::FractionalSecondsResult()
{
}

FractionalSecondsResult::FractionalSecondsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

FractionalSecondsResult& FractionalSecondsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "FractionalSecondsResult"))
  {
    resultNode = rootNode.FirstChild("FractionalSecondsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode datetimeNode = resultNode.FirstChild("datetime");
    if(!datetimeNode.IsNull())
    {
      m_datetime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(datetimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::QueryProtocol::Model::FractionalSecondsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
