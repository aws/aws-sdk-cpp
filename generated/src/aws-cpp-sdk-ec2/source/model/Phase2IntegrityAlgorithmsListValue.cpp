/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Phase2IntegrityAlgorithmsListValue.h>
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

Phase2IntegrityAlgorithmsListValue::Phase2IntegrityAlgorithmsListValue() : 
    m_valueHasBeenSet(false)
{
}

Phase2IntegrityAlgorithmsListValue::Phase2IntegrityAlgorithmsListValue(const XmlNode& xmlNode) : 
    m_valueHasBeenSet(false)
{
  *this = xmlNode;
}

Phase2IntegrityAlgorithmsListValue& Phase2IntegrityAlgorithmsListValue::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode valueNode = resultNode.FirstChild("value");
    if(!valueNode.IsNull())
    {
      m_value = Aws::Utils::Xml::DecodeEscapedXmlText(valueNode.GetText());
      m_valueHasBeenSet = true;
    }
  }

  return *this;
}

void Phase2IntegrityAlgorithmsListValue::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_valueHasBeenSet)
  {
      oStream << location << index << locationValue << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }

}

void Phase2IntegrityAlgorithmsListValue::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_valueHasBeenSet)
  {
      oStream << location << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
