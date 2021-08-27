/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DoubleRange.h>
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

DoubleRange::DoubleRange() : 
    m_from(0.0),
    m_fromHasBeenSet(false),
    m_to(0.0),
    m_toHasBeenSet(false)
{
}

DoubleRange::DoubleRange(const XmlNode& xmlNode) : 
    m_from(0.0),
    m_fromHasBeenSet(false),
    m_to(0.0),
    m_toHasBeenSet(false)
{
  *this = xmlNode;
}

DoubleRange& DoubleRange::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode fromNode = resultNode.FirstChild("From");
    if(!fromNode.IsNull())
    {
      m_from = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fromNode.GetText()).c_str()).c_str());
      m_fromHasBeenSet = true;
    }
    XmlNode toNode = resultNode.FirstChild("To");
    if(!toNode.IsNull())
    {
      m_to = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(toNode.GetText()).c_str()).c_str());
      m_toHasBeenSet = true;
    }
  }

  return *this;
}

void DoubleRange::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_fromHasBeenSet)
  {
        oStream << location << index << locationValue << ".From=" << StringUtils::URLEncode(m_from) << "&";
  }

  if(m_toHasBeenSet)
  {
        oStream << location << index << locationValue << ".To=" << StringUtils::URLEncode(m_to) << "&";
  }

}

void DoubleRange::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_fromHasBeenSet)
  {
        oStream << location << ".From=" << StringUtils::URLEncode(m_from) << "&";
  }
  if(m_toHasBeenSet)
  {
        oStream << location << ".To=" << StringUtils::URLEncode(m_to) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
