/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/GetReservedNodeExchangeConfigurationOptionsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetReservedNodeExchangeConfigurationOptionsResult::GetReservedNodeExchangeConfigurationOptionsResult()
{
}

GetReservedNodeExchangeConfigurationOptionsResult::GetReservedNodeExchangeConfigurationOptionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetReservedNodeExchangeConfigurationOptionsResult& GetReservedNodeExchangeConfigurationOptionsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetReservedNodeExchangeConfigurationOptionsResult"))
  {
    resultNode = rootNode.FirstChild("GetReservedNodeExchangeConfigurationOptionsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode reservedNodeConfigurationOptionListNode = resultNode.FirstChild("ReservedNodeConfigurationOptionList");
    if(!reservedNodeConfigurationOptionListNode.IsNull())
    {
      XmlNode reservedNodeConfigurationOptionListMember = reservedNodeConfigurationOptionListNode.FirstChild("ReservedNodeConfigurationOption");
      while(!reservedNodeConfigurationOptionListMember.IsNull())
      {
        m_reservedNodeConfigurationOptionList.push_back(reservedNodeConfigurationOptionListMember);
        reservedNodeConfigurationOptionListMember = reservedNodeConfigurationOptionListMember.NextNode("ReservedNodeConfigurationOption");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::GetReservedNodeExchangeConfigurationOptionsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
