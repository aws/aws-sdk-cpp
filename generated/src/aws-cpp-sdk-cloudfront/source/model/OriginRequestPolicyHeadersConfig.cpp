/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginRequestPolicyHeadersConfig.h>
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

OriginRequestPolicyHeadersConfig::OriginRequestPolicyHeadersConfig() : 
    m_headerBehavior(OriginRequestPolicyHeaderBehavior::NOT_SET),
    m_headerBehaviorHasBeenSet(false),
    m_headersHasBeenSet(false)
{
}

OriginRequestPolicyHeadersConfig::OriginRequestPolicyHeadersConfig(const XmlNode& xmlNode) : 
    m_headerBehavior(OriginRequestPolicyHeaderBehavior::NOT_SET),
    m_headerBehaviorHasBeenSet(false),
    m_headersHasBeenSet(false)
{
  *this = xmlNode;
}

OriginRequestPolicyHeadersConfig& OriginRequestPolicyHeadersConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode headerBehaviorNode = resultNode.FirstChild("HeaderBehavior");
    if(!headerBehaviorNode.IsNull())
    {
      m_headerBehavior = OriginRequestPolicyHeaderBehaviorMapper::GetOriginRequestPolicyHeaderBehaviorForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(headerBehaviorNode.GetText()).c_str()).c_str());
      m_headerBehaviorHasBeenSet = true;
    }
    XmlNode headersNode = resultNode.FirstChild("Headers");
    if(!headersNode.IsNull())
    {
      m_headers = headersNode;
      m_headersHasBeenSet = true;
    }
  }

  return *this;
}

void OriginRequestPolicyHeadersConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_headerBehaviorHasBeenSet)
  {
   XmlNode headerBehaviorNode = parentNode.CreateChildElement("HeaderBehavior");
   headerBehaviorNode.SetText(OriginRequestPolicyHeaderBehaviorMapper::GetNameForOriginRequestPolicyHeaderBehavior(m_headerBehavior));
  }

  if(m_headersHasBeenSet)
  {
   XmlNode headersNode = parentNode.CreateChildElement("Headers");
   m_headers.AddToNode(headersNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
