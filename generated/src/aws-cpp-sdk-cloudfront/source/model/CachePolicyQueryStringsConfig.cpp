/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CachePolicyQueryStringsConfig.h>
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

CachePolicyQueryStringsConfig::CachePolicyQueryStringsConfig() : 
    m_queryStringBehavior(CachePolicyQueryStringBehavior::NOT_SET),
    m_queryStringBehaviorHasBeenSet(false),
    m_queryStringsHasBeenSet(false)
{
}

CachePolicyQueryStringsConfig::CachePolicyQueryStringsConfig(const XmlNode& xmlNode) : 
    m_queryStringBehavior(CachePolicyQueryStringBehavior::NOT_SET),
    m_queryStringBehaviorHasBeenSet(false),
    m_queryStringsHasBeenSet(false)
{
  *this = xmlNode;
}

CachePolicyQueryStringsConfig& CachePolicyQueryStringsConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode queryStringBehaviorNode = resultNode.FirstChild("QueryStringBehavior");
    if(!queryStringBehaviorNode.IsNull())
    {
      m_queryStringBehavior = CachePolicyQueryStringBehaviorMapper::GetCachePolicyQueryStringBehaviorForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(queryStringBehaviorNode.GetText()).c_str()).c_str());
      m_queryStringBehaviorHasBeenSet = true;
    }
    XmlNode queryStringsNode = resultNode.FirstChild("QueryStrings");
    if(!queryStringsNode.IsNull())
    {
      m_queryStrings = queryStringsNode;
      m_queryStringsHasBeenSet = true;
    }
  }

  return *this;
}

void CachePolicyQueryStringsConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_queryStringBehaviorHasBeenSet)
  {
   XmlNode queryStringBehaviorNode = parentNode.CreateChildElement("QueryStringBehavior");
   queryStringBehaviorNode.SetText(CachePolicyQueryStringBehaviorMapper::GetNameForCachePolicyQueryStringBehavior(m_queryStringBehavior));
  }

  if(m_queryStringsHasBeenSet)
  {
   XmlNode queryStringsNode = parentNode.CreateChildElement("QueryStrings");
   m_queryStrings.AddToNode(queryStringsNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
