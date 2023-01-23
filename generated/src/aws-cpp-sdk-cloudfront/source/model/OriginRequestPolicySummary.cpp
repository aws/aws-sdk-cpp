/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginRequestPolicySummary.h>
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

OriginRequestPolicySummary::OriginRequestPolicySummary() : 
    m_type(OriginRequestPolicyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_originRequestPolicyHasBeenSet(false)
{
}

OriginRequestPolicySummary::OriginRequestPolicySummary(const XmlNode& xmlNode) : 
    m_type(OriginRequestPolicyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_originRequestPolicyHasBeenSet(false)
{
  *this = xmlNode;
}

OriginRequestPolicySummary& OriginRequestPolicySummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = OriginRequestPolicyTypeMapper::GetOriginRequestPolicyTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode originRequestPolicyNode = resultNode.FirstChild("OriginRequestPolicy");
    if(!originRequestPolicyNode.IsNull())
    {
      m_originRequestPolicy = originRequestPolicyNode;
      m_originRequestPolicyHasBeenSet = true;
    }
  }

  return *this;
}

void OriginRequestPolicySummary::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_typeHasBeenSet)
  {
   XmlNode typeNode = parentNode.CreateChildElement("Type");
   typeNode.SetText(OriginRequestPolicyTypeMapper::GetNameForOriginRequestPolicyType(m_type));
  }

  if(m_originRequestPolicyHasBeenSet)
  {
   XmlNode originRequestPolicyNode = parentNode.CreateChildElement("OriginRequestPolicy");
   m_originRequestPolicy.AddToNode(originRequestPolicyNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
