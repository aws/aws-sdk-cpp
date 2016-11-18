﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

DescribeMetricCollectionTypesResult::DescribeMetricCollectionTypesResult(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeMetricCollectionTypesResult& DescribeMetricCollectionTypesResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (rootNode.GetName() != "DescribeMetricCollectionTypesResult")
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

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;
  AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::DescribeMetricCollectionTypesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );

  return *this;
}
