/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/Timezone.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
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
      m_timezoneName = Aws::Utils::Xml::DecodeEscapedXmlText(timezoneNameNode.GetText());
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
} // namespace RDS
} // namespace Aws
