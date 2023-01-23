﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/Limit.h>
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

Limit::Limit() : 
    m_nameHasBeenSet(false),
    m_maxHasBeenSet(false)
{
}

Limit::Limit(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_maxHasBeenSet(false)
{
  *this = xmlNode;
}

Limit& Limit::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode maxNode = resultNode.FirstChild("Max");
    if(!maxNode.IsNull())
    {
      m_max = Aws::Utils::Xml::DecodeEscapedXmlText(maxNode.GetText());
      m_maxHasBeenSet = true;
    }
  }

  return *this;
}

void Limit::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_maxHasBeenSet)
  {
      oStream << location << index << locationValue << ".Max=" << StringUtils::URLEncode(m_max.c_str()) << "&";
  }

}

void Limit::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_maxHasBeenSet)
  {
      oStream << location << ".Max=" << StringUtils::URLEncode(m_max.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
