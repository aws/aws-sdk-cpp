/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/GetMetricStreamResult.h>
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

GetMetricStreamResult::GetMetricStreamResult() : 
    m_outputFormat(MetricStreamOutputFormat::NOT_SET)
{
}

GetMetricStreamResult::GetMetricStreamResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_outputFormat(MetricStreamOutputFormat::NOT_SET)
{
  *this = result;
}

GetMetricStreamResult& GetMetricStreamResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetMetricStreamResult"))
  {
    resultNode = rootNode.FirstChild("GetMetricStreamResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if(!arnNode.IsNull())
    {
      m_arn = Aws::Utils::Xml::DecodeEscapedXmlText(arnNode.GetText());
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
    }
    XmlNode includeFiltersNode = resultNode.FirstChild("IncludeFilters");
    if(!includeFiltersNode.IsNull())
    {
      XmlNode includeFiltersMember = includeFiltersNode.FirstChild("member");
      while(!includeFiltersMember.IsNull())
      {
        m_includeFilters.push_back(includeFiltersMember);
        includeFiltersMember = includeFiltersMember.NextNode("member");
      }

    }
    XmlNode excludeFiltersNode = resultNode.FirstChild("ExcludeFilters");
    if(!excludeFiltersNode.IsNull())
    {
      XmlNode excludeFiltersMember = excludeFiltersNode.FirstChild("member");
      while(!excludeFiltersMember.IsNull())
      {
        m_excludeFilters.push_back(excludeFiltersMember);
        excludeFiltersMember = excludeFiltersMember.NextNode("member");
      }

    }
    XmlNode firehoseArnNode = resultNode.FirstChild("FirehoseArn");
    if(!firehoseArnNode.IsNull())
    {
      m_firehoseArn = Aws::Utils::Xml::DecodeEscapedXmlText(firehoseArnNode.GetText());
    }
    XmlNode roleArnNode = resultNode.FirstChild("RoleArn");
    if(!roleArnNode.IsNull())
    {
      m_roleArn = Aws::Utils::Xml::DecodeEscapedXmlText(roleArnNode.GetText());
    }
    XmlNode stateNode = resultNode.FirstChild("State");
    if(!stateNode.IsNull())
    {
      m_state = Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText());
    }
    XmlNode creationDateNode = resultNode.FirstChild("CreationDate");
    if(!creationDateNode.IsNull())
    {
      m_creationDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode lastUpdateDateNode = resultNode.FirstChild("LastUpdateDate");
    if(!lastUpdateDateNode.IsNull())
    {
      m_lastUpdateDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastUpdateDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode outputFormatNode = resultNode.FirstChild("OutputFormat");
    if(!outputFormatNode.IsNull())
    {
      m_outputFormat = MetricStreamOutputFormatMapper::GetMetricStreamOutputFormatForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(outputFormatNode.GetText()).c_str()).c_str());
    }
    XmlNode statisticsConfigurationsNode = resultNode.FirstChild("StatisticsConfigurations");
    if(!statisticsConfigurationsNode.IsNull())
    {
      XmlNode statisticsConfigurationsMember = statisticsConfigurationsNode.FirstChild("member");
      while(!statisticsConfigurationsMember.IsNull())
      {
        m_statisticsConfigurations.push_back(statisticsConfigurationsMember);
        statisticsConfigurationsMember = statisticsConfigurationsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudWatch::Model::GetMetricStreamResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
