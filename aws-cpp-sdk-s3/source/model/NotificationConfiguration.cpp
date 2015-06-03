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
#include <aws/s3/model/NotificationConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

NotificationConfiguration::NotificationConfiguration() : 
    m_topicConfigurationsHasBeenSet(false),
    m_queueConfigurationsHasBeenSet(false),
    m_lambdaFunctionConfigurationsHasBeenSet(false)
{
}

NotificationConfiguration::NotificationConfiguration(const XmlNode& xmlNode) : 
    m_topicConfigurationsHasBeenSet(false),
    m_queueConfigurationsHasBeenSet(false),
    m_lambdaFunctionConfigurationsHasBeenSet(false)
{
  *this = xmlNode;
}

NotificationConfiguration& NotificationConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode topicConfigurationsNode = resultNode.FirstChild("TopicConfigurations");
    if(!topicConfigurationsNode.IsNull())
    {
      while(!topicConfigurationsNode.IsNull())
      {
        m_topicConfigurations.push_back(topicConfigurationsNode);
        topicConfigurationsNode = topicConfigurationsNode.NextNode("TopicConfigurations");
      }

      m_topicConfigurationsHasBeenSet = true;
    }
    XmlNode queueConfigurationsNode = resultNode.FirstChild("QueueConfigurations");
    if(!queueConfigurationsNode.IsNull())
    {
      while(!queueConfigurationsNode.IsNull())
      {
        m_queueConfigurations.push_back(queueConfigurationsNode);
        queueConfigurationsNode = queueConfigurationsNode.NextNode("QueueConfigurations");
      }

      m_queueConfigurationsHasBeenSet = true;
    }
    XmlNode lambdaFunctionConfigurationsNode = resultNode.FirstChild("LambdaFunctionConfigurations");
    if(!lambdaFunctionConfigurationsNode.IsNull())
    {
      while(!lambdaFunctionConfigurationsNode.IsNull())
      {
        m_lambdaFunctionConfigurations.push_back(lambdaFunctionConfigurationsNode);
        lambdaFunctionConfigurationsNode = lambdaFunctionConfigurationsNode.NextNode("LambdaFunctionConfigurations");
      }

      m_lambdaFunctionConfigurationsHasBeenSet = true;
    }
  }

  return *this;
}

void NotificationConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_topicConfigurationsHasBeenSet)
  {
   for(const auto& item : m_topicConfigurations)
   {
     XmlNode topicConfigurationsNode = parentNode.CreateChildElement("TopicConfiguration");
     item.AddToNode(topicConfigurationsNode);
   }
  }

  if(m_queueConfigurationsHasBeenSet)
  {
   for(const auto& item : m_queueConfigurations)
   {
     XmlNode queueConfigurationsNode = parentNode.CreateChildElement("QueueConfiguration");
     item.AddToNode(queueConfigurationsNode);
   }
  }

  if(m_lambdaFunctionConfigurationsHasBeenSet)
  {
   for(const auto& item : m_lambdaFunctionConfigurations)
   {
     XmlNode lambdaFunctionConfigurationsNode = parentNode.CreateChildElement("CloudFunctionConfiguration");
     item.AddToNode(lambdaFunctionConfigurationsNode);
   }
  }

}
