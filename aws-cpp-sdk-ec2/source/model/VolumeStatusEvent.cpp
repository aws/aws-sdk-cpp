/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_notBeforeHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

VolumeStatusEvent::VolumeStatusEvent(const XmlNode& xmlNode) : 
    m_descriptionHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
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
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode eventIdNode = resultNode.FirstChild("eventId");
    if(!eventIdNode.IsNull())
    {
      m_eventId = Aws::Utils::Xml::DecodeEscapedXmlText(eventIdNode.GetText());
      m_eventIdHasBeenSet = true;
    }
    XmlNode eventTypeNode = resultNode.FirstChild("eventType");
    if(!eventTypeNode.IsNull())
    {
      m_eventType = Aws::Utils::Xml::DecodeEscapedXmlText(eventTypeNode.GetText());
      m_eventTypeHasBeenSet = true;
    }
    XmlNode notAfterNode = resultNode.FirstChild("notAfter");
    if(!notAfterNode.IsNull())
    {
      m_notAfter = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(notAfterNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_notAfterHasBeenSet = true;
    }
    XmlNode notBeforeNode = resultNode.FirstChild("notBefore");
    if(!notBeforeNode.IsNull())
    {
      m_notBefore = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(notBeforeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_notBeforeHasBeenSet = true;
    }
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
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
      oStream << location << index << locationValue << ".NotAfter=" << StringUtils::URLEncode(m_notAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_notBeforeHasBeenSet)
  {
      oStream << location << index << locationValue << ".NotBefore=" << StringUtils::URLEncode(m_notBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
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
      oStream << location << ".NotAfter=" << StringUtils::URLEncode(m_notAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_notBeforeHasBeenSet)
  {
      oStream << location << ".NotBefore=" << StringUtils::URLEncode(m_notBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
