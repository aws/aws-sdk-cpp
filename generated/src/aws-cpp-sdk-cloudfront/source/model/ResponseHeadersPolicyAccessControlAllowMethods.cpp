﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ResponseHeadersPolicyAccessControlAllowMethods.h>
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

ResponseHeadersPolicyAccessControlAllowMethods::ResponseHeadersPolicyAccessControlAllowMethods(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ResponseHeadersPolicyAccessControlAllowMethods& ResponseHeadersPolicyAccessControlAllowMethods::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode quantityNode = resultNode.FirstChild("Quantity");
    if(!quantityNode.IsNull())
    {
      m_quantity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(quantityNode.GetText()).c_str()).c_str());
      m_quantityHasBeenSet = true;
    }
    XmlNode itemsNode = resultNode.FirstChild("Items");
    if(!itemsNode.IsNull())
    {
      XmlNode itemsMember = itemsNode.FirstChild("Method");
      m_itemsHasBeenSet = !itemsMember.IsNull();
      while(!itemsMember.IsNull())
      {
        m_items.push_back(ResponseHeadersPolicyAccessControlAllowMethodsValuesMapper::GetResponseHeadersPolicyAccessControlAllowMethodsValuesForName(StringUtils::Trim(itemsMember.GetText().c_str())));
        itemsMember = itemsMember.NextNode("Method");
      }

      m_itemsHasBeenSet = true;
    }
  }

  return *this;
}

void ResponseHeadersPolicyAccessControlAllowMethods::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_quantityHasBeenSet)
  {
   XmlNode quantityNode = parentNode.CreateChildElement("Quantity");
   ss << m_quantity;
   quantityNode.SetText(ss.str());
   ss.str("");
  }

  if(m_itemsHasBeenSet)
  {
   XmlNode itemsParentNode = parentNode.CreateChildElement("Items");
   for(const auto& item : m_items)
   {
     XmlNode itemsNode = itemsParentNode.CreateChildElement("Method");
     itemsNode.SetText(ResponseHeadersPolicyAccessControlAllowMethodsValuesMapper::GetNameForResponseHeadersPolicyAccessControlAllowMethodsValues(item));
   }
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
