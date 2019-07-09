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

#include <aws/elasticloadbalancingv2/model/FixedResponseActionConfig.h>
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

FixedResponseActionConfig::FixedResponseActionConfig() : 
    m_messageBodyHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
}

FixedResponseActionConfig::FixedResponseActionConfig(const XmlNode& xmlNode) : 
    m_messageBodyHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
  *this = xmlNode;
}

FixedResponseActionConfig& FixedResponseActionConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode messageBodyNode = resultNode.FirstChild("MessageBody");
    if(!messageBodyNode.IsNull())
    {
      m_messageBody = messageBodyNode.GetText();
      m_messageBodyHasBeenSet = true;
    }
    XmlNode statusCodeNode = resultNode.FirstChild("StatusCode");
    if(!statusCodeNode.IsNull())
    {
      m_statusCode = statusCodeNode.GetText();
      m_statusCodeHasBeenSet = true;
    }
    XmlNode contentTypeNode = resultNode.FirstChild("ContentType");
    if(!contentTypeNode.IsNull())
    {
      m_contentType = contentTypeNode.GetText();
      m_contentTypeHasBeenSet = true;
    }
  }

  return *this;
}

void FixedResponseActionConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_messageBodyHasBeenSet)
  {
      oStream << location << index << locationValue << ".MessageBody=" << StringUtils::URLEncode(m_messageBody.c_str()) << "&";
  }

  if(m_statusCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusCode=" << StringUtils::URLEncode(m_statusCode.c_str()) << "&";
  }

  if(m_contentTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ContentType=" << StringUtils::URLEncode(m_contentType.c_str()) << "&";
  }

}

void FixedResponseActionConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_messageBodyHasBeenSet)
  {
      oStream << location << ".MessageBody=" << StringUtils::URLEncode(m_messageBody.c_str()) << "&";
  }
  if(m_statusCodeHasBeenSet)
  {
      oStream << location << ".StatusCode=" << StringUtils::URLEncode(m_statusCode.c_str()) << "&";
  }
  if(m_contentTypeHasBeenSet)
  {
      oStream << location << ".ContentType=" << StringUtils::URLEncode(m_contentType.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
