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

#include <aws/neptune/model/Timezone.h>
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

Timezone::Timezone() : 
    m_timezoneNameHasBeenSet(false)
{
}

Timezone::Timezone(const XmlNode& xmlNode) : 
    m_timezoneNameHasBeenSet(false)
{
  *this = xmlNode;
}

Timezone& Timezone::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode timezoneNameNode = resultNode.FirstChild("TimezoneName");
    if(!timezoneNameNode.IsNull())
    {
      m_timezoneName = timezoneNameNode.GetText();
      m_timezoneNameHasBeenSet = true;
    }
  }

  return *this;
}

void Timezone::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_timezoneNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TimezoneName=" << StringUtils::URLEncode(m_timezoneName.c_str()) << "&";
  }

}

void Timezone::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_timezoneNameHasBeenSet)
  {
      oStream << location << ".TimezoneName=" << StringUtils::URLEncode(m_timezoneName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Neptune
} // namespace Aws
