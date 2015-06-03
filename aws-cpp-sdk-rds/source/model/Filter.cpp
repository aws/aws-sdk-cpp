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
#include <aws/rds/model/Filter.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Filter::Filter()
{
}

Filter::Filter(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

Filter& Filter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    m_name = StringUtils::Trim(nameNode.GetText().c_str());
    XmlNode valueNode = resultNode.FirstChild("Value");
    while(!valueNode.IsNull())
    {
      m_values.push_back(StringUtils::Trim(valueNode.GetText().c_str()));
      valueNode = valueNode.NextNode("Value");
    }

  }

  return *this;
}

void Filter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  for(auto& item : m_values)
  {
    oStream << location << index << locationValue << ".Value=" << StringUtils::URLEncode(item.c_str()) << "&";
  }
}

void Filter::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  for(auto& item : m_values)
  {
    oStream << location << ".Value=" << StringUtils::URLEncode(item.c_str()) << "&";
  }
}
