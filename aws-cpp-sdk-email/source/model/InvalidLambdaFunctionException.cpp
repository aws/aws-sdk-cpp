/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/InvalidLambdaFunctionException.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

InvalidLambdaFunctionException::InvalidLambdaFunctionException() : 
    m_functionArnHasBeenSet(false)
{
}

InvalidLambdaFunctionException::InvalidLambdaFunctionException(const XmlNode& xmlNode) : 
    m_functionArnHasBeenSet(false)
{
  *this = xmlNode;
}

InvalidLambdaFunctionException& InvalidLambdaFunctionException::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode functionArnNode = resultNode.FirstChild("FunctionArn");
    if(!functionArnNode.IsNull())
    {
      m_functionArn = Aws::Utils::Xml::DecodeEscapedXmlText(functionArnNode.GetText());
      m_functionArnHasBeenSet = true;
    }
  }

  return *this;
}

void InvalidLambdaFunctionException::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_functionArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".FunctionArn=" << StringUtils::URLEncode(m_functionArn.c_str()) << "&";
  }

}

void InvalidLambdaFunctionException::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_functionArnHasBeenSet)
  {
      oStream << location << ".FunctionArn=" << StringUtils::URLEncode(m_functionArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
