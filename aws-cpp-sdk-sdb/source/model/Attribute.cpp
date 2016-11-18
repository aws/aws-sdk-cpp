﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/sdb/model/Attribute.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SimpleDB
{
namespace Model
{

Attribute::Attribute() : 
    m_nameHasBeenSet(false),
    m_alternateNameEncodingHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_alternateValueEncodingHasBeenSet(false)
{
}

Attribute::Attribute(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_alternateNameEncodingHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_alternateValueEncodingHasBeenSet(false)
{
  *this = xmlNode;
}

Attribute& Attribute::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = StringUtils::Trim(nameNode.GetText().c_str());
      m_nameHasBeenSet = true;
    }
    XmlNode alternateNameEncodingNode = resultNode.FirstChild("AlternateNameEncoding");
    if(!alternateNameEncodingNode.IsNull())
    {
      m_alternateNameEncoding = StringUtils::Trim(alternateNameEncodingNode.GetText().c_str());
      m_alternateNameEncodingHasBeenSet = true;
    }
    XmlNode valueNode = resultNode.FirstChild("Value");
    if(!valueNode.IsNull())
    {
      m_value = StringUtils::Trim(valueNode.GetText().c_str());
      m_valueHasBeenSet = true;
    }
    XmlNode alternateValueEncodingNode = resultNode.FirstChild("AlternateValueEncoding");
    if(!alternateValueEncodingNode.IsNull())
    {
      m_alternateValueEncoding = StringUtils::Trim(alternateValueEncodingNode.GetText().c_str());
      m_alternateValueEncodingHasBeenSet = true;
    }
  }

  return *this;
}

void Attribute::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_alternateNameEncodingHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlternateNameEncoding=" << StringUtils::URLEncode(m_alternateNameEncoding.c_str()) << "&";
  }

  if(m_valueHasBeenSet)
  {
      oStream << location << index << locationValue << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }

  if(m_alternateValueEncodingHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlternateValueEncoding=" << StringUtils::URLEncode(m_alternateValueEncoding.c_str()) << "&";
  }

}

void Attribute::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_alternateNameEncodingHasBeenSet)
  {
      oStream << location << ".AlternateNameEncoding=" << StringUtils::URLEncode(m_alternateNameEncoding.c_str()) << "&";
  }
  if(m_valueHasBeenSet)
  {
      oStream << location << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }
  if(m_alternateValueEncodingHasBeenSet)
  {
      oStream << location << ".AlternateValueEncoding=" << StringUtils::URLEncode(m_alternateValueEncoding.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
