/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
      m_restrictionType = GeoRestrictionTypeMapper::GetGeoRestrictionTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(restrictionTypeNode.GetText()).c_str()).c_str());
      m_restrictionTypeHasBeenSet = true;
    }
    XmlNode quantityNode = resultNode.FirstChild("Quantity");
    if(!quantityNode.IsNull())
    {
      m_quantity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(quantityNode.GetText()).c_str()).c_str());
      m_quantityHasBeenSet = true;
    }
    XmlNode itemsNode = resultNode.FirstChild("Items");
    if(!itemsNode.IsNull())
    {
      XmlNode itemsMember = itemsNode.FirstChild("Location");
      while(!itemsMember.IsNull())
      {
        m_items.push_back(itemsMember.GetText());
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
     XmlNode itemsNode = itemsParentNode.CreateChildElement("Location");
     itemsNode.SetText(item);
   }
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
