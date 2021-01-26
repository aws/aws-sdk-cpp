/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/HttpHeaderConditionConfig.h>
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

HttpHeaderConditionConfig::HttpHeaderConditionConfig() : 
    m_httpHeaderNameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

HttpHeaderConditionConfig::HttpHeaderConditionConfig(const XmlNode& xmlNode) : 
    m_httpHeaderNameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = xmlNode;
}

HttpHeaderConditionConfig& HttpHeaderConditionConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode httpHeaderNameNode = resultNode.FirstChild("HttpHeaderName");
    if(!httpHeaderNameNode.IsNull())
    {
      m_httpHeaderName = Aws::Utils::Xml::DecodeEscapedXmlText(httpHeaderNameNode.GetText());
      m_httpHeaderNameHasBeenSet = true;
    }
    XmlNode valuesNode = resultNode.FirstChild("Values");
    if(!valuesNode.IsNull())
    {
      XmlNode valuesMember = valuesNode.FirstChild("member");
      while(!valuesMember.IsNull())
      {
        m_values.push_back(valuesMember.GetText());
        valuesMember = valuesMember.NextNode("member");
      }

      m_valuesHasBeenSet = true;
    }
  }

  return *this;
}

void HttpHeaderConditionConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_httpHeaderNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpHeaderName=" << StringUtils::URLEncode(m_httpHeaderName.c_str()) << "&";
  }

  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        oStream << location << index << locationValue << ".Values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void HttpHeaderConditionConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_httpHeaderNameHasBeenSet)
  {
      oStream << location << ".HttpHeaderName=" << StringUtils::URLEncode(m_httpHeaderName.c_str()) << "&";
  }
  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        oStream << location << ".Values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
