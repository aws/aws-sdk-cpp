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

#include <aws/ec2/model/VolumeStatusEvent.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

VolumeStatusEvent::VolumeStatusEvent() : 
    m_descriptionHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_notBeforeHasBeenSet(false)
{
}

VolumeStatusEvent::VolumeStatusEvent(const XmlNode& xmlNode) : 
    m_descriptionHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_notBeforeHasBeenSet(false)
{
  *this = xmlNode;
}

VolumeStatusEvent& VolumeStatusEvent::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode eventIdNode = resultNode.FirstChild("eventId");
    if(!eventIdNode.IsNull())
    {
      m_eventId = eventIdNode.GetText();
      m_eventIdHasBeenSet = true;
    }
    XmlNode eventTypeNode = resultNode.FirstChild("eventType");
    if(!eventTypeNode.IsNull())
    {
      m_eventType = eventTypeNode.GetText();
      m_eventTypeHasBeenSet = true;
    }
    XmlNode notAfterNode = resultNode.FirstChild("notAfter");
    if(!notAfterNode.IsNull())
    {
      m_notAfter = DateTime(StringUtils::Trim(notAfterNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_notAfterHasBeenSet = true;
    }
    XmlNode notBeforeNode = resultNode.FirstChild("notBefore");
    if(!notBeforeNode.IsNull())
    {
      m_notBefore = DateTime(StringUtils::Trim(notBeforeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_notBeforeHasBeenSet = true;
    }
  }

  return *this;
}

void VolumeStatusEvent::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_eventIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".EventId=" << StringUtils::URLEncode(m_eventId.c_str()) << "&";
  }

  if(m_eventTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EventType=" << StringUtils::URLEncode(m_eventType.c_str()) << "&";
  }

  if(m_notAfterHasBeenSet)
  {
      oStream << location << index << locationValue << ".NotAfter=" << StringUtils::URLEncode(m_notAfter.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_notBeforeHasBeenSet)
  {
      oStream << location << index << locationValue << ".NotBefore=" << StringUtils::URLEncode(m_notBefore.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void VolumeStatusEvent::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_eventIdHasBeenSet)
  {
      oStream << location << ".EventId=" << StringUtils::URLEncode(m_eventId.c_str()) << "&";
  }
  if(m_eventTypeHasBeenSet)
  {
      oStream << location << ".EventType=" << StringUtils::URLEncode(m_eventType.c_str()) << "&";
  }
  if(m_notAfterHasBeenSet)
  {
      oStream << location << ".NotAfter=" << StringUtils::URLEncode(m_notAfter.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_notBeforeHasBeenSet)
  {
      oStream << location << ".NotBefore=" << StringUtils::URLEncode(m_notBefore.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
