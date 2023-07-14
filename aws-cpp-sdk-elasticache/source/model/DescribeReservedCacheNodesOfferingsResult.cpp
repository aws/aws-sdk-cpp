/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DescribeReservedCacheNodesOfferingsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeReservedCacheNodesOfferingsResult::DescribeReservedCacheNodesOfferingsResult()
{
}

DescribeReservedCacheNodesOfferingsResult::DescribeReservedCacheNodesOfferingsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeReservedCacheNodesOfferingsResult& DescribeReservedCacheNodesOfferingsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeReservedCacheNodesOfferingsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeReservedCacheNodesOfferingsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode reservedCacheNodesOfferingsNode = resultNode.FirstChild("ReservedCacheNodesOfferings");
    if(!reservedCacheNodesOfferingsNode.IsNull())
    {
      XmlNode reservedCacheNodesOfferingsMember = reservedCacheNodesOfferingsNode.FirstChild("ReservedCacheNodesOffering");
      while(!reservedCacheNodesOfferingsMember.IsNull())
      {
        m_reservedCacheNodesOfferings.push_back(reservedCacheNodesOfferingsMember);
        reservedCacheNodesOfferingsMember = reservedCacheNodesOfferingsMember.NextNode("ReservedCacheNodesOffering");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElastiCache::Model::DescribeReservedCacheNodesOfferingsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
