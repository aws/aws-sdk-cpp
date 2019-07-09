/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
      m_environmentName = environmentNameNode.GetText();
    }
    XmlNode healthStatusNode = resultNode.FirstChild("HealthStatus");
    if(!healthStatusNode.IsNull())
    {
      m_healthStatus = healthStatusNode.GetText();
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = EnvironmentHealthMapper::GetEnvironmentHealthForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
    }
    XmlNode colorNode = resultNode.FirstChild("Color");
    if(!colorNode.IsNull())
    {
      m_color = colorNode.GetText();
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
      m_refreshedAt = DateTime(StringUtils::Trim(refreshedAtNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticBeanstalk::Model::DescribeEnvironmentHealthResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
