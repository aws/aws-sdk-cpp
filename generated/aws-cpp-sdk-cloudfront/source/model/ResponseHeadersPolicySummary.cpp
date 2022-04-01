/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ResponseHeadersPolicySummary.h>
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

ResponseHeadersPolicySummary::ResponseHeadersPolicySummary() : 
    m_type(ResponseHeadersPolicyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_responseHeadersPolicyHasBeenSet(false)
{
}

ResponseHeadersPolicySummary::ResponseHeadersPolicySummary(const XmlNode& xmlNode) : 
    m_type(ResponseHeadersPolicyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_responseHeadersPolicyHasBeenSet(false)
{
  *this = xmlNode;
}

ResponseHeadersPolicySummary& ResponseHeadersPolicySummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = ResponseHeadersPolicyTypeMapper::GetResponseHeadersPolicyTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode responseHeadersPolicyNode = resultNode.FirstChild("ResponseHeadersPolicy");
    if(!responseHeadersPolicyNode.IsNull())
    {
      m_responseHeadersPolicy = responseHeadersPolicyNode;
      m_responseHeadersPolicyHasBeenSet = true;
    }
  }

  return *this;
}

void ResponseHeadersPolicySummary::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_typeHasBeenSet)
  {
   XmlNode typeNode = parentNode.CreateChildElement("Type");
   typeNode.SetText(ResponseHeadersPolicyTypeMapper::GetNameForResponseHeadersPolicyType(m_type));
  }

  if(m_responseHeadersPolicyHasBeenSet)
  {
   XmlNode responseHeadersPolicyNode = parentNode.CreateChildElement("ResponseHeadersPolicy");
   m_responseHeadersPolicy.AddToNode(responseHeadersPolicyNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
