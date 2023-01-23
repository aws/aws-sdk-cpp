/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_httpCodeHasBeenSet(false),
    m_grpcCodeHasBeenSet(false)
{
}

Matcher::Matcher(const XmlNode& xmlNode) : 
    m_httpCodeHasBeenSet(false),
    m_grpcCodeHasBeenSet(false)
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
      m_httpCode = Aws::Utils::Xml::DecodeEscapedXmlText(httpCodeNode.GetText());
      m_httpCodeHasBeenSet = true;
    }
    XmlNode grpcCodeNode = resultNode.FirstChild("GrpcCode");
    if(!grpcCodeNode.IsNull())
    {
      m_grpcCode = Aws::Utils::Xml::DecodeEscapedXmlText(grpcCodeNode.GetText());
      m_grpcCodeHasBeenSet = true;
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

  if(m_grpcCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".GrpcCode=" << StringUtils::URLEncode(m_grpcCode.c_str()) << "&";
  }

}

void Matcher::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_httpCodeHasBeenSet)
  {
      oStream << location << ".HttpCode=" << StringUtils::URLEncode(m_httpCode.c_str()) << "&";
  }
  if(m_grpcCodeHasBeenSet)
  {
      oStream << location << ".GrpcCode=" << StringUtils::URLEncode(m_grpcCode.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
