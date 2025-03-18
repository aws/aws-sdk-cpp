﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-protocol/model/GreetingWithErrorsResult.h>
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

GreetingWithErrorsResult::GreetingWithErrorsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GreetingWithErrorsResult& GreetingWithErrorsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GreetingWithErrorsResult"))
  {
    resultNode = rootNode.FirstChild("GreetingWithErrorsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode greetingNode = resultNode.FirstChild("greeting");
    if(!greetingNode.IsNull())
    {
      m_greeting = Aws::Utils::Xml::DecodeEscapedXmlText(greetingNode.GetText());
      m_greetingHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::QueryProtocol::Model::GreetingWithErrorsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
