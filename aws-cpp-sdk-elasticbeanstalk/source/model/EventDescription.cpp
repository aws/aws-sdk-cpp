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

#include <aws/elasticbeanstalk/model/EventDescription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

EventDescription::EventDescription() : 
    m_eventDateHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_versionLabelHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_platformArnHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_severity(EventSeverity::NOT_SET),
    m_severityHasBeenSet(false)
{
}

EventDescription::EventDescription(const XmlNode& xmlNode) : 
    m_eventDateHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_versionLabelHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_platformArnHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_severity(EventSeverity::NOT_SET),
    m_severityHasBeenSet(false)
{
  *this = xmlNode;
}

EventDescription& EventDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode eventDateNode = resultNode.FirstChild("EventDate");
    if(!eventDateNode.IsNull())
    {
      m_eventDate = DateTime(StringUtils::Trim(eventDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_eventDateHasBeenSet = true;
    }
    XmlNode messageNode = resultNode.FirstChild("Message");
    if(!messageNode.IsNull())
    {
      m_message = messageNode.GetText();
      m_messageHasBeenSet = true;
    }
    XmlNode applicationNameNode = resultNode.FirstChild("ApplicationName");
    if(!applicationNameNode.IsNull())
    {
      m_applicationName = applicationNameNode.GetText();
      m_applicationNameHasBeenSet = true;
    }
    XmlNode versionLabelNode = resultNode.FirstChild("VersionLabel");
    if(!versionLabelNode.IsNull())
    {
      m_versionLabel = versionLabelNode.GetText();
      m_versionLabelHasBeenSet = true;
    }
    XmlNode templateNameNode = resultNode.FirstChild("TemplateName");
    if(!templateNameNode.IsNull())
    {
      m_templateName = templateNameNode.GetText();
      m_templateNameHasBeenSet = true;
    }
    XmlNode environmentNameNode = resultNode.FirstChild("EnvironmentName");
    if(!environmentNameNode.IsNull())
    {
      m_environmentName = environmentNameNode.GetText();
      m_environmentNameHasBeenSet = true;
    }
    XmlNode platformArnNode = resultNode.FirstChild("PlatformArn");
    if(!platformArnNode.IsNull())
    {
      m_platformArn = platformArnNode.GetText();
      m_platformArnHasBeenSet = true;
    }
    XmlNode requestIdNode = resultNode.FirstChild("RequestId");
    if(!requestIdNode.IsNull())
    {
      m_requestId = requestIdNode.GetText();
      m_requestIdHasBeenSet = true;
    }
    XmlNode severityNode = resultNode.FirstChild("Severity");
    if(!severityNode.IsNull())
    {
      m_severity = EventSeverityMapper::GetEventSeverityForName(StringUtils::Trim(severityNode.GetText().c_str()).c_str());
      m_severityHasBeenSet = true;
    }
  }

  return *this;
}

void EventDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_eventDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".EventDate=" << StringUtils::URLEncode(m_eventDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_messageHasBeenSet)
  {
      oStream << location << index << locationValue << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }

  if(m_applicationNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }

  if(m_versionLabelHasBeenSet)
  {
      oStream << location << index << locationValue << ".VersionLabel=" << StringUtils::URLEncode(m_versionLabel.c_str()) << "&";
  }

  if(m_templateNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }

  if(m_environmentNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }

  if(m_platformArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformArn=" << StringUtils::URLEncode(m_platformArn.c_str()) << "&";
  }

  if(m_requestIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequestId=" << StringUtils::URLEncode(m_requestId.c_str()) << "&";
  }

  if(m_severityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Severity=" << EventSeverityMapper::GetNameForEventSeverity(m_severity) << "&";
  }

}

void EventDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_eventDateHasBeenSet)
  {
      oStream << location << ".EventDate=" << StringUtils::URLEncode(m_eventDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_messageHasBeenSet)
  {
      oStream << location << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
  if(m_applicationNameHasBeenSet)
  {
      oStream << location << ".ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }
  if(m_versionLabelHasBeenSet)
  {
      oStream << location << ".VersionLabel=" << StringUtils::URLEncode(m_versionLabel.c_str()) << "&";
  }
  if(m_templateNameHasBeenSet)
  {
      oStream << location << ".TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }
  if(m_environmentNameHasBeenSet)
  {
      oStream << location << ".EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }
  if(m_platformArnHasBeenSet)
  {
      oStream << location << ".PlatformArn=" << StringUtils::URLEncode(m_platformArn.c_str()) << "&";
  }
  if(m_requestIdHasBeenSet)
  {
      oStream << location << ".RequestId=" << StringUtils::URLEncode(m_requestId.c_str()) << "&";
  }
  if(m_severityHasBeenSet)
  {
      oStream << location << ".Severity=" << EventSeverityMapper::GetNameForEventSeverity(m_severity) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
