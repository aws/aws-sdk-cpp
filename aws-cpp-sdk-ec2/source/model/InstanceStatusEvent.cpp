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

#include <aws/ec2/model/InstanceStatusEvent.h>
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

InstanceStatusEvent::InstanceStatusEvent() : 
    m_instanceEventIdHasBeenSet(false),
    m_code(EventCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_notBeforeDeadlineHasBeenSet(false)
{
}

InstanceStatusEvent::InstanceStatusEvent(const XmlNode& xmlNode) : 
    m_instanceEventIdHasBeenSet(false),
    m_code(EventCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_notBeforeDeadlineHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceStatusEvent& InstanceStatusEvent::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceEventIdNode = resultNode.FirstChild("instanceEventId");
    if(!instanceEventIdNode.IsNull())
    {
      m_instanceEventId = instanceEventIdNode.GetText();
      m_instanceEventIdHasBeenSet = true;
    }
    XmlNode codeNode = resultNode.FirstChild("code");
    if(!codeNode.IsNull())
    {
      m_code = EventCodeMapper::GetEventCodeForName(StringUtils::Trim(codeNode.GetText().c_str()).c_str());
      m_codeHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
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
    XmlNode notBeforeDeadlineNode = resultNode.FirstChild("notBeforeDeadline");
    if(!notBeforeDeadlineNode.IsNull())
    {
      m_notBeforeDeadline = DateTime(StringUtils::Trim(notBeforeDeadlineNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_notBeforeDeadlineHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceStatusEvent::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceEventIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceEventId=" << StringUtils::URLEncode(m_instanceEventId.c_str()) << "&";
  }

  if(m_codeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Code=" << EventCodeMapper::GetNameForEventCode(m_code) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_notAfterHasBeenSet)
  {
      oStream << location << index << locationValue << ".NotAfter=" << StringUtils::URLEncode(m_notAfter.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_notBeforeHasBeenSet)
  {
      oStream << location << index << locationValue << ".NotBefore=" << StringUtils::URLEncode(m_notBefore.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_notBeforeDeadlineHasBeenSet)
  {
      oStream << location << index << locationValue << ".NotBeforeDeadline=" << StringUtils::URLEncode(m_notBeforeDeadline.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void InstanceStatusEvent::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceEventIdHasBeenSet)
  {
      oStream << location << ".InstanceEventId=" << StringUtils::URLEncode(m_instanceEventId.c_str()) << "&";
  }
  if(m_codeHasBeenSet)
  {
      oStream << location << ".Code=" << EventCodeMapper::GetNameForEventCode(m_code) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_notAfterHasBeenSet)
  {
      oStream << location << ".NotAfter=" << StringUtils::URLEncode(m_notAfter.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_notBeforeHasBeenSet)
  {
      oStream << location << ".NotBefore=" << StringUtils::URLEncode(m_notBefore.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_notBeforeDeadlineHasBeenSet)
  {
      oStream << location << ".NotBeforeDeadline=" << StringUtils::URLEncode(m_notBeforeDeadline.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
