﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-protocol/model/FlattenedXmlMapWithXmlNamespaceResult.h>
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

FlattenedXmlMapWithXmlNamespaceResult::FlattenedXmlMapWithXmlNamespaceResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

FlattenedXmlMapWithXmlNamespaceResult& FlattenedXmlMapWithXmlNamespaceResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "FlattenedXmlMapWithXmlNamespaceResult"))
  {
    resultNode = rootNode.FirstChild("FlattenedXmlMapWithXmlNamespaceResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode myMapNode = resultNode.FirstChild("KVP");
    if(!myMapNode.IsNull())
    {
      XmlNode kVPEntry = myMapNode;
      m_myMapHasBeenSet = !kVPEntry.IsNull();
      while(!kVPEntry.IsNull())
      {
        XmlNode keyNode = kVPEntry.FirstChild("K");
        XmlNode valueNode = kVPEntry.FirstChild("V");
        m_myMap[keyNode.GetText()] =
            valueNode.GetText();
        kVPEntry = kVPEntry.NextNode("KVP");
      }

      m_myMapHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::QueryProtocol::Model::FlattenedXmlMapWithXmlNamespaceResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
