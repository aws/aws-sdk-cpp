﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2-protocol/model/FractionalSecondsResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2Protocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

FractionalSecondsResponse::FractionalSecondsResponse()
{
}

FractionalSecondsResponse::FractionalSecondsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

FractionalSecondsResponse& FractionalSecondsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "FractionalSecondsResponse"))
  {
    resultNode = rootNode.FirstChild("FractionalSecondsResponse");
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
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2Protocol::Model::FractionalSecondsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
