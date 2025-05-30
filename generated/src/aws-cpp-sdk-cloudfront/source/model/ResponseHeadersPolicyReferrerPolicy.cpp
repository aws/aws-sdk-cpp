﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ResponseHeadersPolicyReferrerPolicy.h>
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

ResponseHeadersPolicyReferrerPolicy::ResponseHeadersPolicyReferrerPolicy(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ResponseHeadersPolicyReferrerPolicy& ResponseHeadersPolicyReferrerPolicy::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode overrideNode = resultNode.FirstChild("Override");
    if(!overrideNode.IsNull())
    {
      m_override = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(overrideNode.GetText()).c_str()).c_str());
      m_overrideHasBeenSet = true;
    }
    XmlNode referrerPolicyNode = resultNode.FirstChild("ReferrerPolicy");
    if(!referrerPolicyNode.IsNull())
    {
      m_referrerPolicy = ReferrerPolicyListMapper::GetReferrerPolicyListForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(referrerPolicyNode.GetText()).c_str()));
      m_referrerPolicyHasBeenSet = true;
    }
  }

  return *this;
}

void ResponseHeadersPolicyReferrerPolicy::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_overrideHasBeenSet)
  {
   XmlNode overrideNode = parentNode.CreateChildElement("Override");
   ss << std::boolalpha << m_override;
   overrideNode.SetText(ss.str());
   ss.str("");
  }

  if(m_referrerPolicyHasBeenSet)
  {
   XmlNode referrerPolicyNode = parentNode.CreateChildElement("ReferrerPolicy");
   referrerPolicyNode.SetText(ReferrerPolicyListMapper::GetNameForReferrerPolicyList(m_referrerPolicy));
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
