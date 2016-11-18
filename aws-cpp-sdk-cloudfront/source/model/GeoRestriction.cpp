﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/cloudfront/model/GeoRestriction.h>
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

GeoRestriction::GeoRestriction() : 
    m_restrictionType(GeoRestrictionType::NOT_SET),
    m_restrictionTypeHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

GeoRestriction::GeoRestriction(const XmlNode& xmlNode) : 
    m_restrictionType(GeoRestrictionType::NOT_SET),
    m_restrictionTypeHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
  *this = xmlNode;
}

GeoRestriction& GeoRestriction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode restrictionTypeNode = resultNode.FirstChild("RestrictionType");
    if(!restrictionTypeNode.IsNull())
    {
      m_restrictionType = GeoRestrictionTypeMapper::GetGeoRestrictionTypeForName(StringUtils::Trim(restrictionTypeNode.GetText().c_str()).c_str());
      m_restrictionTypeHasBeenSet = true;
    }
    XmlNode quantityNode = resultNode.FirstChild("Quantity");
    if(!quantityNode.IsNull())
    {
      m_quantity = StringUtils::ConvertToInt32(StringUtils::Trim(quantityNode.GetText().c_str()).c_str());
      m_quantityHasBeenSet = true;
    }
    XmlNode itemsNode = resultNode.FirstChild("Items");
    if(!itemsNode.IsNull())
    {
      XmlNode itemsMember = itemsNode.FirstChild("Location");
      while(!itemsMember.IsNull())
      {
        m_items.push_back(StringUtils::Trim(itemsMember.GetText().c_str()));
        itemsMember = itemsMember.NextNode("Location");
      }

      m_itemsHasBeenSet = true;
    }
  }

  return *this;
}

void GeoRestriction::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_restrictionTypeHasBeenSet)
  {
   XmlNode restrictionTypeNode = parentNode.CreateChildElement("RestrictionType");
   restrictionTypeNode.SetText(GeoRestrictionTypeMapper::GetNameForGeoRestrictionType(m_restrictionType));
  }

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
     XmlNode itemsNode = itemsParentNode.CreateChildElement("String");
     itemsNode.SetText(item);
   }
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
