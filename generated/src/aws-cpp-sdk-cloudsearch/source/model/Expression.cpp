/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/Expression.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

Expression::Expression() : 
    m_expressionNameHasBeenSet(false),
    m_expressionValueHasBeenSet(false)
{
}

Expression::Expression(const XmlNode& xmlNode) : 
    m_expressionNameHasBeenSet(false),
    m_expressionValueHasBeenSet(false)
{
  *this = xmlNode;
}

Expression& Expression::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode expressionNameNode = resultNode.FirstChild("ExpressionName");
    if(!expressionNameNode.IsNull())
    {
      m_expressionName = Aws::Utils::Xml::DecodeEscapedXmlText(expressionNameNode.GetText());
      m_expressionNameHasBeenSet = true;
    }
    XmlNode expressionValueNode = resultNode.FirstChild("ExpressionValue");
    if(!expressionValueNode.IsNull())
    {
      m_expressionValue = Aws::Utils::Xml::DecodeEscapedXmlText(expressionValueNode.GetText());
      m_expressionValueHasBeenSet = true;
    }
  }

  return *this;
}

void Expression::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_expressionNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExpressionName=" << StringUtils::URLEncode(m_expressionName.c_str()) << "&";
  }

  if(m_expressionValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExpressionValue=" << StringUtils::URLEncode(m_expressionValue.c_str()) << "&";
  }

}

void Expression::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_expressionNameHasBeenSet)
  {
      oStream << location << ".ExpressionName=" << StringUtils::URLEncode(m_expressionName.c_str()) << "&";
  }
  if(m_expressionValueHasBeenSet)
  {
      oStream << location << ".ExpressionValue=" << StringUtils::URLEncode(m_expressionValue.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
