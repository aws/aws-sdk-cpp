/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeCustomAvailabilityZonesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeCustomAvailabilityZonesResult::DescribeCustomAvailabilityZonesResult()
{
}

DescribeCustomAvailabilityZonesResult::DescribeCustomAvailabilityZonesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeCustomAvailabilityZonesResult& DescribeCustomAvailabilityZonesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeCustomAvailabilityZonesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeCustomAvailabilityZonesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode customAvailabilityZonesNode = resultNode.FirstChild("CustomAvailabilityZones");
    if(!customAvailabilityZonesNode.IsNull())
    {
      XmlNode customAvailabilityZonesMember = customAvailabilityZonesNode.FirstChild("CustomAvailabilityZone");
      while(!customAvailabilityZonesMember.IsNull())
      {
        m_customAvailabilityZones.push_back(customAvailabilityZonesMember);
        customAvailabilityZonesMember = customAvailabilityZonesMember.NextNode("CustomAvailabilityZone");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeCustomAvailabilityZonesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
