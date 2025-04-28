/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/GeoRestrictionCustomization.h>
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

GeoRestrictionCustomization::GeoRestrictionCustomization(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

GeoRestrictionCustomization& GeoRestrictionCustomization::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode restrictionTypeNode = resultNode.FirstChild("RestrictionType");
    if(!restrictionTypeNode.IsNull())
    {
      m_restrictionType = GeoRestrictionTypeMapper::GetGeoRestrictionTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(restrictionTypeNode.GetText()).c_str()));
      m_restrictionTypeHasBeenSet = true;
    }
    XmlNode locationsNode = resultNode.FirstChild("Locations");
    if(!locationsNode.IsNull())
    {
      XmlNode locationsMember = locationsNode.FirstChild("Location");
      m_locationsHasBeenSet = !locationsMember.IsNull();
      while(!locationsMember.IsNull())
      {
        m_locations.push_back(locationsMember.GetText());
        locationsMember = locationsMember.NextNode("Location");
      }

      m_locationsHasBeenSet = true;
    }
  }

  return *this;
}

void GeoRestrictionCustomization::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_restrictionTypeHasBeenSet)
  {
   XmlNode restrictionTypeNode = parentNode.CreateChildElement("RestrictionType");
   restrictionTypeNode.SetText(GeoRestrictionTypeMapper::GetNameForGeoRestrictionType(m_restrictionType));
  }

  if(m_locationsHasBeenSet)
  {
   XmlNode locationsParentNode = parentNode.CreateChildElement("Locations");
   for(const auto& item : m_locations)
   {
     XmlNode locationsNode = locationsParentNode.CreateChildElement("Location");
     locationsNode.SetText(item);
   }
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
