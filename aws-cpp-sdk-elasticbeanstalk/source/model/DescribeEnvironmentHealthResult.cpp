/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <utility>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

DescribeEnvironmentHealthResult::DescribeEnvironmentHealthResult() : 
    m_refreshedAt(0.0)
{
}

DescribeEnvironmentHealthResult::DescribeEnvironmentHealthResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_refreshedAt(0.0)
{
  *this = result;
}

DescribeEnvironmentHealthResult& DescribeEnvironmentHealthResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("DescribeEnvironmentHealthResult");

  if(!resultNode.IsNull())
  {
    XmlNode environmentNameNode = resultNode.FirstChild("EnvironmentName");
    m_environmentName = StringUtils::Trim(environmentNameNode.GetText().c_str());
    XmlNode healthStatusNode = resultNode.FirstChild("HealthStatus");
    m_healthStatus = StringUtils::Trim(healthStatusNode.GetText().c_str());
    XmlNode statusNode = resultNode.FirstChild("Status");
    m_status = EnvironmentHealthMapper::GetEnvironmentHealthForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
    XmlNode colorNode = resultNode.FirstChild("Color");
    m_color = StringUtils::Trim(colorNode.GetText().c_str());
    XmlNode causesNodeParent = resultNode.FirstChild("Causes");
    XmlNode causesNode = causesNodeParent.FirstChild("member");
    while(!causesNode.IsNull())
    {
      m_causes.push_back(StringUtils::Trim(causesNode.GetText().c_str()));
      causesNode = causesNode.NextNode("member");
    }

    XmlNode applicationMetricsNode = resultNode.FirstChild("ApplicationMetrics");
    m_applicationMetrics = applicationMetricsNode;
    XmlNode instancesHealthNode = resultNode.FirstChild("InstancesHealth");
    m_instancesHealth = instancesHealthNode;
    XmlNode refreshedAtNode = resultNode.FirstChild("RefreshedAt");
    m_refreshedAt = StringUtils::ConvertToDouble(StringUtils::Trim(refreshedAtNode.GetText().c_str()).c_str());
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
