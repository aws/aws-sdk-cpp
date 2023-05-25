/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
      m_instanceEventId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceEventIdNode.GetText());
      m_instanceEventIdHasBeenSet = true;
    }
    XmlNode codeNode = resultNode.FirstChild("code");
    if(!codeNode.IsNull())
    {
      m_code = EventCodeMapper::GetEventCodeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(codeNode.GetText()).c_str()).c_str());
      m_codeHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
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
    XmlNode notBeforeDeadlineNode = resultNode.FirstChild("notBeforeDeadline");
    if(!notBeforeDeadlineNode.IsNull())
    {
      m_notBeforeDeadline = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(notBeforeDeadlineNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
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
      oStream << location << index << locationValue << ".NotAfter=" << StringUtils::URLEncode(m_notAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_notBeforeHasBeenSet)
  {
      oStream << location << index << locationValue << ".NotBefore=" << StringUtils::URLEncode(m_notBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_notBeforeDeadlineHasBeenSet)
  {
      oStream << location << index << locationValue << ".NotBeforeDeadline=" << StringUtils::URLEncode(m_notBeforeDeadline.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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
      oStream << location << ".NotAfter=" << StringUtils::URLEncode(m_notAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_notBeforeHasBeenSet)
  {
      oStream << location << ".NotBefore=" << StringUtils::URLEncode(m_notBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_notBeforeDeadlineHasBeenSet)
  {
      oStream << location << ".NotBeforeDeadline=" << StringUtils::URLEncode(m_notBeforeDeadline.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
