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

#include <aws/route53/model/GeoLocationDetails.h>
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

GeoLocationDetails::GeoLocationDetails() : 
    m_continentCodeHasBeenSet(false),
    m_continentNameHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_countryNameHasBeenSet(false),
    m_subdivisionCodeHasBeenSet(false),
    m_subdivisionNameHasBeenSet(false)
{
}

GeoLocationDetails::GeoLocationDetails(const XmlNode& xmlNode) : 
    m_continentCodeHasBeenSet(false),
    m_continentNameHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_countryNameHasBeenSet(false),
    m_subdivisionCodeHasBeenSet(false),
    m_subdivisionNameHasBeenSet(false)
{
  *this = xmlNode;
}

GeoLocationDetails& GeoLocationDetails::operator =(const XmlNode& xmlNode)
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
    XmlNode continentNameNode = resultNode.FirstChild("ContinentName");
    if(!continentNameNode.IsNull())
    {
      m_continentName = continentNameNode.GetText();
      m_continentNameHasBeenSet = true;
    }
    XmlNode countryCodeNode = resultNode.FirstChild("CountryCode");
    if(!countryCodeNode.IsNull())
    {
      m_countryCode = countryCodeNode.GetText();
      m_countryCodeHasBeenSet = true;
    }
    XmlNode countryNameNode = resultNode.FirstChild("CountryName");
    if(!countryNameNode.IsNull())
    {
      m_countryName = countryNameNode.GetText();
      m_countryNameHasBeenSet = true;
    }
    XmlNode subdivisionCodeNode = resultNode.FirstChild("SubdivisionCode");
    if(!subdivisionCodeNode.IsNull())
    {
      m_subdivisionCode = subdivisionCodeNode.GetText();
      m_subdivisionCodeHasBeenSet = true;
    }
    XmlNode subdivisionNameNode = resultNode.FirstChild("SubdivisionName");
    if(!subdivisionNameNode.IsNull())
    {
      m_subdivisionName = subdivisionNameNode.GetText();
      m_subdivisionNameHasBeenSet = true;
    }
  }

  return *this;
}

void GeoLocationDetails::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_continentCodeHasBeenSet)
  {
   XmlNode continentCodeNode = parentNode.CreateChildElement("ContinentCode");
   continentCodeNode.SetText(m_continentCode);
  }

  if(m_continentNameHasBeenSet)
  {
   XmlNode continentNameNode = parentNode.CreateChildElement("ContinentName");
   continentNameNode.SetText(m_continentName);
  }

  if(m_countryCodeHasBeenSet)
  {
   XmlNode countryCodeNode = parentNode.CreateChildElement("CountryCode");
   countryCodeNode.SetText(m_countryCode);
  }

  if(m_countryNameHasBeenSet)
  {
   XmlNode countryNameNode = parentNode.CreateChildElement("CountryName");
   countryNameNode.SetText(m_countryName);
  }

  if(m_subdivisionCodeHasBeenSet)
  {
   XmlNode subdivisionCodeNode = parentNode.CreateChildElement("SubdivisionCode");
   subdivisionCodeNode.SetText(m_subdivisionCode);
  }

  if(m_subdivisionNameHasBeenSet)
  {
   XmlNode subdivisionNameNode = parentNode.CreateChildElement("SubdivisionName");
   subdivisionNameNode.SetText(m_subdivisionName);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
