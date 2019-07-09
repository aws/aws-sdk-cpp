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

#include <aws/neptune/model/DBInstanceStatusInfo.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Neptune
{
namespace Model
{

DBInstanceStatusInfo::DBInstanceStatusInfo() : 
    m_statusTypeHasBeenSet(false),
    m_normal(false),
    m_normalHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

DBInstanceStatusInfo::DBInstanceStatusInfo(const XmlNode& xmlNode) : 
    m_statusTypeHasBeenSet(false),
    m_normal(false),
    m_normalHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = xmlNode;
}

DBInstanceStatusInfo& DBInstanceStatusInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode statusTypeNode = resultNode.FirstChild("StatusType");
    if(!statusTypeNode.IsNull())
    {
      m_statusType = statusTypeNode.GetText();
      m_statusTypeHasBeenSet = true;
    }
    XmlNode normalNode = resultNode.FirstChild("Normal");
    if(!normalNode.IsNull())
    {
      m_normal = StringUtils::ConvertToBool(StringUtils::Trim(normalNode.GetText().c_str()).c_str());
      m_normalHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
      m_statusHasBeenSet = true;
    }
    XmlNode messageNode = resultNode.FirstChild("Message");
    if(!messageNode.IsNull())
    {
      m_message = messageNode.GetText();
      m_messageHasBeenSet = true;
    }
  }

  return *this;
}

void DBInstanceStatusInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_statusTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusType=" << StringUtils::URLEncode(m_statusType.c_str()) << "&";
  }

  if(m_normalHasBeenSet)
  {
      oStream << location << index << locationValue << ".Normal=" << std::boolalpha << m_normal << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_messageHasBeenSet)
  {
      oStream << location << index << locationValue << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }

}

void DBInstanceStatusInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_statusTypeHasBeenSet)
  {
      oStream << location << ".StatusType=" << StringUtils::URLEncode(m_statusType.c_str()) << "&";
  }
  if(m_normalHasBeenSet)
  {
      oStream << location << ".Normal=" << std::boolalpha << m_normal << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_messageHasBeenSet)
  {
      oStream << location << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Neptune
} // namespace Aws
