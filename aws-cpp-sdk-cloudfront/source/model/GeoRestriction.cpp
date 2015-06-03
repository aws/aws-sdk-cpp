/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

GeoRestriction::GeoRestriction() : 
    m_quantity(0),
    m_itemsHasBeenSet(false)
{
}

GeoRestriction::GeoRestriction(const XmlNode& xmlNode) : 
    m_quantity(0),
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
    m_restrictionType = GeoRestrictionTypeMapper::GetGeoRestrictionTypeForName(StringUtils::Trim(restrictionTypeNode.GetText().c_str()).c_str());
    XmlNode quantityNode = resultNode.FirstChild("Quantity");
    m_quantity = StringUtils::ConvertToInt32(StringUtils::Trim(quantityNode.GetText().c_str()).c_str());
    XmlNode locationNode = resultNode.FirstChild("Location");
    if(!locationNode.IsNull())
    {
      while(!locationNode.IsNull())
      {
        m_items.push_back(StringUtils::Trim(locationNode.GetText().c_str()));
        locationNode = locationNode.NextNode("Location");
      }

      m_itemsHasBeenSet = true;
    }
  }

  return *this;
}

void GeoRestriction::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  XmlNode restrictionTypeNode = parentNode.CreateChildElement("RestrictionType");
  restrictionTypeNode.SetText(GeoRestrictionTypeMapper::GetNameForGeoRestrictionType(m_restrictionType));
  XmlNode quantityNode = parentNode.CreateChildElement("Quantity");
  ss << m_quantity;
  quantityNode.SetText(ss.str());
  ss.str("");
  if(m_itemsHasBeenSet)
  {
   for(const auto& item : m_items)
   {
     XmlNode itemsNode = parentNode.CreateChildElement("string");
     itemsNode.SetText(item);
   }
  }

}
