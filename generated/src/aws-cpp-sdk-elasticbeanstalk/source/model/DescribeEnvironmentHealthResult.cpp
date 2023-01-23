/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/DescribeEnvironmentHealthResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeEnvironmentHealthResult::DescribeEnvironmentHealthResult() : 
    m_status(EnvironmentHealth::NOT_SET)
{
}

DescribeEnvironmentHealthResult::DescribeEnvironmentHealthResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_status(EnvironmentHealth::NOT_SET)
{
  *this = result;
}

DescribeEnvironmentHealthResult& DescribeEnvironmentHealthResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeEnvironmentHealthResult"))
  {
    resultNode = rootNode.FirstChild("DescribeEnvironmentHealthResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode environmentNameNode = resultNode.FirstChild("EnvironmentName");
    if(!environmentNameNode.IsNull())
    {
      m_environmentName = Aws::Utils::Xml::DecodeEscapedXmlText(environmentNameNode.GetText());
    }
    XmlNode healthStatusNode = resultNode.FirstChild("HealthStatus");
    if(!healthStatusNode.IsNull())
    {
      m_healthStatus = Aws::Utils::Xml::DecodeEscapedXmlText(healthStatusNode.GetText());
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = EnvironmentHealthMapper::GetEnvironmentHealthForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
    }
    XmlNode colorNode = resultNode.FirstChild("Color");
    if(!colorNode.IsNull())
    {
      m_color = Aws::Utils::Xml::DecodeEscapedXmlText(colorNode.GetText());
    }
    XmlNode causesNode = resultNode.FirstChild("Causes");
    if(!causesNode.IsNull())
    {
      XmlNode causesMember = causesNode.FirstChild("member");
      while(!causesMember.IsNull())
      {
        m_causes.push_back(causesMember.GetText());
        causesMember = causesMember.NextNode("member");
      }

    }
    XmlNode applicationMetricsNode = resultNode.FirstChild("ApplicationMetrics");
    if(!applicationMetricsNode.IsNull())
    {
      m_applicationMetrics = applicationMetricsNode;
    }
    XmlNode instancesHealthNode = resultNode.FirstChild("InstancesHealth");
    if(!instancesHealthNode.IsNull())
    {
      m_instancesHealth = instancesHealthNode;
    }
    XmlNode refreshedAtNode = resultNode.FirstChild("RefreshedAt");
    if(!refreshedAtNode.IsNull())
    {
      m_refreshedAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(refreshedAtNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticBeanstalk::Model::DescribeEnvironmentHealthResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
