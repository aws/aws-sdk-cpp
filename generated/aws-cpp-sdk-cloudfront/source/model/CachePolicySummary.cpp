/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CachePolicySummary.h>
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

CachePolicySummary::CachePolicySummary() : 
    m_type(CachePolicyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_cachePolicyHasBeenSet(false)
{
}

CachePolicySummary::CachePolicySummary(const XmlNode& xmlNode) : 
    m_type(CachePolicyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_cachePolicyHasBeenSet(false)
{
  *this = xmlNode;
}

CachePolicySummary& CachePolicySummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = CachePolicyTypeMapper::GetCachePolicyTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode cachePolicyNode = resultNode.FirstChild("CachePolicy");
    if(!cachePolicyNode.IsNull())
    {
      m_cachePolicy = cachePolicyNode;
      m_cachePolicyHasBeenSet = true;
    }
  }

  return *this;
}

void CachePolicySummary::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_typeHasBeenSet)
  {
   XmlNode typeNode = parentNode.CreateChildElement("Type");
   typeNode.SetText(CachePolicyTypeMapper::GetNameForCachePolicyType(m_type));
  }

  if(m_cachePolicyHasBeenSet)
  {
   XmlNode cachePolicyNode = parentNode.CreateChildElement("CachePolicy");
   m_cachePolicy.AddToNode(cachePolicyNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
