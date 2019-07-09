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

#include <aws/iam/model/AccessKeyLastUsed.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace IAM
{
namespace Model
{

AccessKeyLastUsed::AccessKeyLastUsed() : 
    m_lastUsedDateHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

AccessKeyLastUsed::AccessKeyLastUsed(const XmlNode& xmlNode) : 
    m_lastUsedDateHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_regionHasBeenSet(false)
{
  *this = xmlNode;
}

AccessKeyLastUsed& AccessKeyLastUsed::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode lastUsedDateNode = resultNode.FirstChild("LastUsedDate");
    if(!lastUsedDateNode.IsNull())
    {
      m_lastUsedDate = DateTime(StringUtils::Trim(lastUsedDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_lastUsedDateHasBeenSet = true;
    }
    XmlNode serviceNameNode = resultNode.FirstChild("ServiceName");
    if(!serviceNameNode.IsNull())
    {
      m_serviceName = serviceNameNode.GetText();
      m_serviceNameHasBeenSet = true;
    }
    XmlNode regionNode = resultNode.FirstChild("Region");
    if(!regionNode.IsNull())
    {
      m_region = regionNode.GetText();
      m_regionHasBeenSet = true;
    }
  }

  return *this;
}

void AccessKeyLastUsed::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_lastUsedDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastUsedDate=" << StringUtils::URLEncode(m_lastUsedDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_serviceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceName=" << StringUtils::URLEncode(m_serviceName.c_str()) << "&";
  }

  if(m_regionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Region=" << StringUtils::URLEncode(m_region.c_str()) << "&";
  }

}

void AccessKeyLastUsed::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_lastUsedDateHasBeenSet)
  {
      oStream << location << ".LastUsedDate=" << StringUtils::URLEncode(m_lastUsedDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_serviceNameHasBeenSet)
  {
      oStream << location << ".ServiceName=" << StringUtils::URLEncode(m_serviceName.c_str()) << "&";
  }
  if(m_regionHasBeenSet)
  {
      oStream << location << ".Region=" << StringUtils::URLEncode(m_region.c_str()) << "&";
  }
}

} // namespace Model
} // namespace IAM
} // namespace Aws
