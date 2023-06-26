/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeMetricCollectionTypesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeMetricCollectionTypesResult::DescribeMetricCollectionTypesResult()
{
}

DescribeMetricCollectionTypesResult::DescribeMetricCollectionTypesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeMetricCollectionTypesResult& DescribeMetricCollectionTypesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeMetricCollectionTypesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeMetricCollectionTypesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode metricsNode = resultNode.FirstChild("Metrics");
    if(!metricsNode.IsNull())
    {
      XmlNode metricsMember = metricsNode.FirstChild("member");
      while(!metricsMember.IsNull())
      {
        m_metrics.push_back(metricsMember);
        metricsMember = metricsMember.NextNode("member");
      }

    }
    XmlNode granularitiesNode = resultNode.FirstChild("Granularities");
    if(!granularitiesNode.IsNull())
    {
      XmlNode granularitiesMember = granularitiesNode.FirstChild("member");
      while(!granularitiesMember.IsNull())
      {
        m_granularities.push_back(granularitiesMember);
        granularitiesMember = granularitiesMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::DescribeMetricCollectionTypesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
