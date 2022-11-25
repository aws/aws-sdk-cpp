/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Phase1DHGroupNumbersRequestListValue.h>
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

Phase1DHGroupNumbersRequestListValue::Phase1DHGroupNumbersRequestListValue() : 
    m_value(0),
    m_valueHasBeenSet(false)
{
}

Phase1DHGroupNumbersRequestListValue::Phase1DHGroupNumbersRequestListValue(const XmlNode& xmlNode) : 
    m_value(0),
    m_valueHasBeenSet(false)
{
  *this = xmlNode;
}

Phase1DHGroupNumbersRequestListValue& Phase1DHGroupNumbersRequestListValue::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode valueNode = resultNode.FirstChild("Value");
    if(!valueNode.IsNull())
    {
      m_value = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(valueNode.GetText()).c_str()).c_str());
      m_valueHasBeenSet = true;
    }
  }

  return *this;
}

void Phase1DHGroupNumbersRequestListValue::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_valueHasBeenSet)
  {
      oStream << location << index << locationValue << ".Value=" << m_value << "&";
  }

}

void Phase1DHGroupNumbersRequestListValue::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_valueHasBeenSet)
  {
      oStream << location << ".Value=" << m_value << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
