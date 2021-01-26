/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
      m_messageBody = Aws::Utils::Xml::DecodeEscapedXmlText(messageBodyNode.GetText());
      m_messageBodyHasBeenSet = true;
    }
    XmlNode statusCodeNode = resultNode.FirstChild("StatusCode");
    if(!statusCodeNode.IsNull())
    {
      m_statusCode = Aws::Utils::Xml::DecodeEscapedXmlText(statusCodeNode.GetText());
      m_statusCodeHasBeenSet = true;
    }
    XmlNode contentTypeNode = resultNode.FirstChild("ContentType");
    if(!contentTypeNode.IsNull())
    {
      m_contentType = Aws::Utils::Xml::DecodeEscapedXmlText(contentTypeNode.GetText());
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
