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

#include <aws/cloudformation/model/RollbackConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

RollbackConfiguration::RollbackConfiguration() : 
    m_rollbackTriggersHasBeenSet(false),
    m_monitoringTimeInMinutes(0),
    m_monitoringTimeInMinutesHasBeenSet(false)
{
}

RollbackConfiguration::RollbackConfiguration(const XmlNode& xmlNode) : 
    m_rollbackTriggersHasBeenSet(false),
    m_monitoringTimeInMinutes(0),
    m_monitoringTimeInMinutesHasBeenSet(false)
{
  *this = xmlNode;
}

RollbackConfiguration& RollbackConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode rollbackTriggersNode = resultNode.FirstChild("RollbackTriggers");
    if(!rollbackTriggersNode.IsNull())
    {
      XmlNode rollbackTriggersMember = rollbackTriggersNode.FirstChild("member");
      while(!rollbackTriggersMember.IsNull())
      {
        m_rollbackTriggers.push_back(rollbackTriggersMember);
        rollbackTriggersMember = rollbackTriggersMember.NextNode("member");
      }

      m_rollbackTriggersHasBeenSet = true;
    }
    XmlNode monitoringTimeInMinutesNode = resultNode.FirstChild("MonitoringTimeInMinutes");
    if(!monitoringTimeInMinutesNode.IsNull())
    {
      m_monitoringTimeInMinutes = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(monitoringTimeInMinutesNode.GetText()).c_str()).c_str());
      m_monitoringTimeInMinutesHasBeenSet = true;
    }
  }

  return *this;
}

void RollbackConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_rollbackTriggersHasBeenSet)
  {
      unsigned rollbackTriggersIdx = 1;
      for(auto& item : m_rollbackTriggers)
      {
        Aws::StringStream rollbackTriggersSs;
        rollbackTriggersSs << location << index << locationValue << ".RollbackTriggers.member." << rollbackTriggersIdx++;
        item.OutputToStream(oStream, rollbackTriggersSs.str().c_str());
      }
  }

  if(m_monitoringTimeInMinutesHasBeenSet)
  {
      oStream << location << index << locationValue << ".MonitoringTimeInMinutes=" << m_monitoringTimeInMinutes << "&";
  }

}

void RollbackConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_rollbackTriggersHasBeenSet)
  {
      unsigned rollbackTriggersIdx = 1;
      for(auto& item : m_rollbackTriggers)
      {
        Aws::StringStream rollbackTriggersSs;
        rollbackTriggersSs << location <<  ".RollbackTriggers.member." << rollbackTriggersIdx++;
        item.OutputToStream(oStream, rollbackTriggersSs.str().c_str());
      }
  }
  if(m_monitoringTimeInMinutesHasBeenSet)
  {
      oStream << location << ".MonitoringTimeInMinutes=" << m_monitoringTimeInMinutes << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
