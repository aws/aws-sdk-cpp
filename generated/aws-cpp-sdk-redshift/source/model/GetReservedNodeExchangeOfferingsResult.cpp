/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/GetReservedNodeExchangeOfferingsResult.h>
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

GetReservedNodeExchangeOfferingsResult::GetReservedNodeExchangeOfferingsResult()
{
}

GetReservedNodeExchangeOfferingsResult::GetReservedNodeExchangeOfferingsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetReservedNodeExchangeOfferingsResult& GetReservedNodeExchangeOfferingsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetReservedNodeExchangeOfferingsResult"))
  {
    resultNode = rootNode.FirstChild("GetReservedNodeExchangeOfferingsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode reservedNodeOfferingsNode = resultNode.FirstChild("ReservedNodeOfferings");
    if(!reservedNodeOfferingsNode.IsNull())
    {
      XmlNode reservedNodeOfferingsMember = reservedNodeOfferingsNode.FirstChild("ReservedNodeOffering");
      while(!reservedNodeOfferingsMember.IsNull())
      {
        m_reservedNodeOfferings.push_back(reservedNodeOfferingsMember);
        reservedNodeOfferingsMember = reservedNodeOfferingsMember.NextNode("ReservedNodeOffering");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::GetReservedNodeExchangeOfferingsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
