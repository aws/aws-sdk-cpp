/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

AccessKeyLastUsed::AccessKeyLastUsed() : 
    m_lastUsedDate(0.0)
{
}

AccessKeyLastUsed::AccessKeyLastUsed(const XmlNode& xmlNode) : 
    m_lastUsedDate(0.0)
{
  *this = xmlNode;
}

AccessKeyLastUsed& AccessKeyLastUsed::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode lastUsedDateNode = resultNode.FirstChild("LastUsedDate");
    m_lastUsedDate = StringUtils::ConvertToDouble(StringUtils::Trim(lastUsedDateNode.GetText().c_str()).c_str());
    XmlNode serviceNameNode = resultNode.FirstChild("ServiceName");
    m_serviceName = StringUtils::Trim(serviceNameNode.GetText().c_str());
    XmlNode regionNode = resultNode.FirstChild("Region");
    m_region = StringUtils::Trim(regionNode.GetText().c_str());
  }

  return *this;
}

void AccessKeyLastUsed::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".LastUsedDate=" << m_lastUsedDate << "&";
  oStream << location << index << locationValue << ".ServiceName=" << StringUtils::URLEncode(m_serviceName.c_str()) << "&";
  oStream << location << index << locationValue << ".Region=" << StringUtils::URLEncode(m_region.c_str()) << "&";
}

void AccessKeyLastUsed::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".LastUsedDate=" << m_lastUsedDate << "&";
  oStream << location << ".ServiceName=" << StringUtils::URLEncode(m_serviceName.c_str()) << "&";
  oStream << location << ".Region=" << StringUtils::URLEncode(m_region.c_str()) << "&";
}
