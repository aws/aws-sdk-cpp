/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CacheNodeTypeSpecificValue.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

CacheNodeTypeSpecificValue::CacheNodeTypeSpecificValue() : 
    m_cacheNodeTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CacheNodeTypeSpecificValue::CacheNodeTypeSpecificValue(const XmlNode& xmlNode) : 
    m_cacheNodeTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = xmlNode;
}

CacheNodeTypeSpecificValue& CacheNodeTypeSpecificValue::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cacheNodeTypeNode = resultNode.FirstChild("CacheNodeType");
    if(!cacheNodeTypeNode.IsNull())
    {
      m_cacheNodeType = Aws::Utils::Xml::DecodeEscapedXmlText(cacheNodeTypeNode.GetText());
      m_cacheNodeTypeHasBeenSet = true;
    }
    XmlNode valueNode = resultNode.FirstChild("Value");
    if(!valueNode.IsNull())
    {
      m_value = Aws::Utils::Xml::DecodeEscapedXmlText(valueNode.GetText());
      m_valueHasBeenSet = true;
    }
  }

  return *this;
}

void CacheNodeTypeSpecificValue::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cacheNodeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheNodeType=" << StringUtils::URLEncode(m_cacheNodeType.c_str()) << "&";
  }

  if(m_valueHasBeenSet)
  {
      oStream << location << index << locationValue << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }

}

void CacheNodeTypeSpecificValue::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cacheNodeTypeHasBeenSet)
  {
      oStream << location << ".CacheNodeType=" << StringUtils::URLEncode(m_cacheNodeType.c_str()) << "&";
  }
  if(m_valueHasBeenSet)
  {
      oStream << location << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
