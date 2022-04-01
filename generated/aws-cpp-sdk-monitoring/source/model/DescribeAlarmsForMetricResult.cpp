/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/DescribeAlarmsForMetricResult.h>
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

DescribeAlarmsForMetricResult::DescribeAlarmsForMetricResult()
{
}

DescribeAlarmsForMetricResult::DescribeAlarmsForMetricResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeAlarmsForMetricResult& DescribeAlarmsForMetricResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeAlarmsForMetricResult"))
  {
    resultNode = rootNode.FirstChild("DescribeAlarmsForMetricResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode metricAlarmsNode = resultNode.FirstChild("MetricAlarms");
    if(!metricAlarmsNode.IsNull())
    {
      XmlNode metricAlarmsMember = metricAlarmsNode.FirstChild("member");
      while(!metricAlarmsMember.IsNull())
      {
        m_metricAlarms.push_back(metricAlarmsMember);
        metricAlarmsMember = metricAlarmsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudWatch::Model::DescribeAlarmsForMetricResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
