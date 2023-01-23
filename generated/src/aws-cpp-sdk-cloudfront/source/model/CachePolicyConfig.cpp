/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CachePolicyConfig.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

CachePolicyConfig::CachePolicyConfig() : 
    m_commentHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_defaultTTL(0),
    m_defaultTTLHasBeenSet(false),
    m_maxTTL(0),
    m_maxTTLHasBeenSet(false),
    m_minTTL(0),
    m_minTTLHasBeenSet(false),
    m_parametersInCacheKeyAndForwardedToOriginHasBeenSet(false)
{
}

CachePolicyConfig::CachePolicyConfig(const XmlNode& xmlNode) : 
    m_commentHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_defaultTTL(0),
    m_defaultTTLHasBeenSet(false),
    m_maxTTL(0),
    m_maxTTLHasBeenSet(false),
    m_minTTL(0),
    m_minTTLHasBeenSet(false),
    m_parametersInCacheKeyAndForwardedToOriginHasBeenSet(false)
{
  *this = xmlNode;
}

CachePolicyConfig& CachePolicyConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = Aws::Utils::Xml::DecodeEscapedXmlText(commentNode.GetText());
      m_commentHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode defaultTTLNode = resultNode.FirstChild("DefaultTTL");
    if(!defaultTTLNode.IsNull())
    {
      m_defaultTTL = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultTTLNode.GetText()).c_str()).c_str());
      m_defaultTTLHasBeenSet = true;
    }
    XmlNode maxTTLNode = resultNode.FirstChild("MaxTTL");
    if(!maxTTLNode.IsNull())
    {
      m_maxTTL = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxTTLNode.GetText()).c_str()).c_str());
      m_maxTTLHasBeenSet = true;
    }
    XmlNode minTTLNode = resultNode.FirstChild("MinTTL");
    if(!minTTLNode.IsNull())
    {
      m_minTTL = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minTTLNode.GetText()).c_str()).c_str());
      m_minTTLHasBeenSet = true;
    }
    XmlNode parametersInCacheKeyAndForwardedToOriginNode = resultNode.FirstChild("ParametersInCacheKeyAndForwardedToOrigin");
    if(!parametersInCacheKeyAndForwardedToOriginNode.IsNull())
    {
      m_parametersInCacheKeyAndForwardedToOrigin = parametersInCacheKeyAndForwardedToOriginNode;
      m_parametersInCacheKeyAndForwardedToOriginHasBeenSet = true;
    }
  }

  return *this;
}

void CachePolicyConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_defaultTTLHasBeenSet)
  {
   XmlNode defaultTTLNode = parentNode.CreateChildElement("DefaultTTL");
   ss << m_defaultTTL;
   defaultTTLNode.SetText(ss.str());
   ss.str("");
  }

  if(m_maxTTLHasBeenSet)
  {
   XmlNode maxTTLNode = parentNode.CreateChildElement("MaxTTL");
   ss << m_maxTTL;
   maxTTLNode.SetText(ss.str());
   ss.str("");
  }

  if(m_minTTLHasBeenSet)
  {
   XmlNode minTTLNode = parentNode.CreateChildElement("MinTTL");
   ss << m_minTTL;
   minTTLNode.SetText(ss.str());
   ss.str("");
  }

  if(m_parametersInCacheKeyAndForwardedToOriginHasBeenSet)
  {
   XmlNode parametersInCacheKeyAndForwardedToOriginNode = parentNode.CreateChildElement("ParametersInCacheKeyAndForwardedToOrigin");
   m_parametersInCacheKeyAndForwardedToOrigin.AddToNode(parametersInCacheKeyAndForwardedToOriginNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
