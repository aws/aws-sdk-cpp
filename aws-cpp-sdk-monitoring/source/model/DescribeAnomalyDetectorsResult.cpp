﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/DescribeAnomalyDetectorsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeAnomalyDetectorsResult::DescribeAnomalyDetectorsResult()
{
}

DescribeAnomalyDetectorsResult::DescribeAnomalyDetectorsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeAnomalyDetectorsResult& DescribeAnomalyDetectorsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeAnomalyDetectorsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeAnomalyDetectorsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode anomalyDetectorsNode = resultNode.FirstChild("AnomalyDetectors");
    if(!anomalyDetectorsNode.IsNull())
    {
      XmlNode anomalyDetectorsMember = anomalyDetectorsNode.FirstChild("member");
      while(!anomalyDetectorsMember.IsNull())
      {
        m_anomalyDetectors.push_back(anomalyDetectorsMember);
        anomalyDetectorsMember = anomalyDetectorsMember.NextNode("member");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudWatch::Model::DescribeAnomalyDetectorsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
