/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SpotInstanceStatus.h>
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

SpotInstanceStatus::SpotInstanceStatus() : 
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

SpotInstanceStatus::SpotInstanceStatus(const XmlNode& xmlNode) : 
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = xmlNode;
}

SpotInstanceStatus& SpotInstanceStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode codeNode = resultNode.FirstChild("code");
    if(!codeNode.IsNull())
    {
      m_code = Aws::Utils::Xml::DecodeEscapedXmlText(codeNode.GetText());
      m_codeHasBeenSet = true;
    }
    XmlNode messageNode = resultNode.FirstChild("message");
    if(!messageNode.IsNull())
    {
      m_message = Aws::Utils::Xml::DecodeEscapedXmlText(messageNode.GetText());
      m_messageHasBeenSet = true;
    }
    XmlNode updateTimeNode = resultNode.FirstChild("updateTime");
    if(!updateTimeNode.IsNull())
    {
      m_updateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_updateTimeHasBeenSet = true;
    }
  }

  return *this;
}

void SpotInstanceStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_codeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Code=" << StringUtils::URLEncode(m_code.c_str()) << "&";
  }

  if(m_messageHasBeenSet)
  {
      oStream << location << index << locationValue << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }

  if(m_updateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdateTime=" << StringUtils::URLEncode(m_updateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void SpotInstanceStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_codeHasBeenSet)
  {
      oStream << location << ".Code=" << StringUtils::URLEncode(m_code.c_str()) << "&";
  }
  if(m_messageHasBeenSet)
  {
      oStream << location << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
  if(m_updateTimeHasBeenSet)
  {
      oStream << location << ".UpdateTime=" << StringUtils::URLEncode(m_updateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
