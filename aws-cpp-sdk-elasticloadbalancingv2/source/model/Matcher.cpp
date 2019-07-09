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

#include <aws/elasticloadbalancingv2/model/Matcher.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

Matcher::Matcher() : 
    m_httpCodeHasBeenSet(false)
{
}

Matcher::Matcher(const XmlNode& xmlNode) : 
    m_httpCodeHasBeenSet(false)
{
  *this = xmlNode;
}

Matcher& Matcher::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode httpCodeNode = resultNode.FirstChild("HttpCode");
    if(!httpCodeNode.IsNull())
    {
      m_httpCode = httpCodeNode.GetText();
      m_httpCodeHasBeenSet = true;
    }
  }

  return *this;
}

void Matcher::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_httpCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpCode=" << StringUtils::URLEncode(m_httpCode.c_str()) << "&";
  }

}

void Matcher::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_httpCodeHasBeenSet)
  {
      oStream << location << ".HttpCode=" << StringUtils::URLEncode(m_httpCode.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
