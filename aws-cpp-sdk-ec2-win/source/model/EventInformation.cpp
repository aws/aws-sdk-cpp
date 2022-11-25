/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EventInformation.h>
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

EventInformation::EventInformation() : 
    m_eventDescriptionHasBeenSet(false),
    m_eventSubTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

EventInformation::EventInformation(const XmlNode& xmlNode) : 
    m_eventDescriptionHasBeenSet(false),
    m_eventSubTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
  *this = xmlNode;
}

EventInformation& EventInformation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode eventDescriptionNode = resultNode.FirstChild("eventDescription");
    if(!eventDescriptionNode.IsNull())
    {
      m_eventDescription = Aws::Utils::Xml::DecodeEscapedXmlText(eventDescriptionNode.GetText());
      m_eventDescriptionHasBeenSet = true;
    }
    XmlNode eventSubTypeNode = resultNode.FirstChild("eventSubType");
    if(!eventSubTypeNode.IsNull())
    {
      m_eventSubType = Aws::Utils::Xml::DecodeEscapedXmlText(eventSubTypeNode.GetText());
      m_eventSubTypeHasBeenSet = true;
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

void EventInformation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_eventDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EventDescription=" << StringUtils::URLEncode(m_eventDescription.c_str()) << "&";
  }

  if(m_eventSubTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EventSubType=" << StringUtils::URLEncode(m_eventSubType.c_str()) << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

}

void EventInformation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_eventDescriptionHasBeenSet)
  {
      oStream << location << ".EventDescription=" << StringUtils::URLEncode(m_eventDescription.c_str()) << "&";
  }
  if(m_eventSubTypeHasBeenSet)
  {
      oStream << location << ".EventSubType=" << StringUtils::URLEncode(m_eventSubType.c_str()) << "&";
  }
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
