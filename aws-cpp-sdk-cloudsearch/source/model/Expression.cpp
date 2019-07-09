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
      m_expressionName = expressionNameNode.GetText();
      m_expressionNameHasBeenSet = true;
    }
    XmlNode expressionValueNode = resultNode.FirstChild("ExpressionValue");
    if(!expressionValueNode.IsNull())
    {
      m_expressionValue = expressionValueNode.GetText();
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
