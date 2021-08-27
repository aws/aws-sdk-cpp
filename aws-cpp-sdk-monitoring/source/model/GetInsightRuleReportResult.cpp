/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/GetInsightRuleReportResult.h>
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

GetInsightRuleReportResult::GetInsightRuleReportResult() : 
    m_aggregateValue(0.0),
    m_approximateUniqueCount(0)
{
}

GetInsightRuleReportResult::GetInsightRuleReportResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_aggregateValue(0.0),
    m_approximateUniqueCount(0)
{
  *this = result;
}

GetInsightRuleReportResult& GetInsightRuleReportResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetInsightRuleReportResult"))
  {
    resultNode = rootNode.FirstChild("GetInsightRuleReportResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode keyLabelsNode = resultNode.FirstChild("KeyLabels");
    if(!keyLabelsNode.IsNull())
    {
      XmlNode keyLabelsMember = keyLabelsNode.FirstChild("member");
      while(!keyLabelsMember.IsNull())
      {
        m_keyLabels.push_back(keyLabelsMember.GetText());
        keyLabelsMember = keyLabelsMember.NextNode("member");
      }

    }
    XmlNode aggregationStatisticNode = resultNode.FirstChild("AggregationStatistic");
    if(!aggregationStatisticNode.IsNull())
    {
      m_aggregationStatistic = Aws::Utils::Xml::DecodeEscapedXmlText(aggregationStatisticNode.GetText());
    }
    XmlNode aggregateValueNode = resultNode.FirstChild("AggregateValue");
    if(!aggregateValueNode.IsNull())
    {
      m_aggregateValue = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(aggregateValueNode.GetText()).c_str()).c_str());
    }
    XmlNode approximateUniqueCountNode = resultNode.FirstChild("ApproximateUniqueCount");
    if(!approximateUniqueCountNode.IsNull())
    {
      m_approximateUniqueCount = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(approximateUniqueCountNode.GetText()).c_str()).c_str());
    }
    XmlNode contributorsNode = resultNode.FirstChild("Contributors");
    if(!contributorsNode.IsNull())
    {
      XmlNode contributorsMember = contributorsNode.FirstChild("member");
      while(!contributorsMember.IsNull())
      {
        m_contributors.push_back(contributorsMember);
        contributorsMember = contributorsMember.NextNode("member");
      }

    }
    XmlNode metricDatapointsNode = resultNode.FirstChild("MetricDatapoints");
    if(!metricDatapointsNode.IsNull())
    {
      XmlNode metricDatapointsMember = metricDatapointsNode.FirstChild("member");
      while(!metricDatapointsMember.IsNull())
      {
        m_metricDatapoints.push_back(metricDatapointsMember);
        metricDatapointsMember = metricDatapointsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudWatch::Model::GetInsightRuleReportResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
