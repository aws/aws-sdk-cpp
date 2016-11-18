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
#include <aws/sdb/model/UpdateCondition.h>
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

UpdateCondition::UpdateCondition() : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_exists(false),
    m_existsHasBeenSet(false)
{
}

UpdateCondition::UpdateCondition(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_exists(false),
    m_existsHasBeenSet(false)
{
  *this = xmlNode;
}

UpdateCondition& UpdateCondition::operator =(const XmlNode& xmlNode)
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
    XmlNode valueNode = resultNode.FirstChild("Value");
    if(!valueNode.IsNull())
    {
      m_value = StringUtils::Trim(valueNode.GetText().c_str());
      m_valueHasBeenSet = true;
    }
    XmlNode existsNode = resultNode.FirstChild("Exists");
    if(!existsNode.IsNull())
    {
      m_exists = StringUtils::ConvertToBool(StringUtils::Trim(existsNode.GetText().c_str()).c_str());
      m_existsHasBeenSet = true;
    }
  }

  return *this;
}

void UpdateCondition::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_valueHasBeenSet)
  {
      oStream << location << index << locationValue << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }

  if(m_existsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Exists=" << m_exists << "&";
  }

}

void UpdateCondition::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_valueHasBeenSet)
  {
      oStream << location << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }
  if(m_existsHasBeenSet)
  {
      oStream << location << ".Exists=" << m_exists << "&";
  }
}

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
