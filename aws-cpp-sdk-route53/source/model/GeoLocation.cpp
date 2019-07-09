/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/route53/model/GeoLocation.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53
{
namespace Model
{

GeoLocation::GeoLocation() : 
    m_continentCodeHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_subdivisionCodeHasBeenSet(false)
{
}

GeoLocation::GeoLocation(const XmlNode& xmlNode) : 
    m_continentCodeHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_subdivisionCodeHasBeenSet(false)
{
  *this = xmlNode;
}

GeoLocation& GeoLocation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode continentCodeNode = resultNode.FirstChild("ContinentCode");
    if(!continentCodeNode.IsNull())
    {
      m_continentCode = continentCodeNode.GetText();
      m_continentCodeHasBeenSet = true;
    }
    XmlNode countryCodeNode = resultNode.FirstChild("CountryCode");
    if(!countryCodeNode.IsNull())
    {
      m_countryCode = countryCodeNode.GetText();
      m_countryCodeHasBeenSet = true;
    }
    XmlNode subdivisionCodeNode = resultNode.FirstChild("SubdivisionCode");
    if(!subdivisionCodeNode.IsNull())
    {
      m_subdivisionCode = subdivisionCodeNode.GetText();
      m_subdivisionCodeHasBeenSet = true;
    }
  }

  return *this;
}

void GeoLocation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_continentCodeHasBeenSet)
  {
   XmlNode continentCodeNode = parentNode.CreateChildElement("ContinentCode");
   continentCodeNode.SetText(m_continentCode);
  }

  if(m_countryCodeHasBeenSet)
  {
   XmlNode countryCodeNode = parentNode.CreateChildElement("CountryCode");
   countryCodeNode.SetText(m_countryCode);
  }

  if(m_subdivisionCodeHasBeenSet)
  {
   XmlNode subdivisionCodeNode = parentNode.CreateChildElement("SubdivisionCode");
   subdivisionCodeNode.SetText(m_subdivisionCode);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
