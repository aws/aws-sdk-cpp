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

#include <aws/route53/model/ListGeoLocationsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListGeoLocationsResult::ListGeoLocationsResult() : 
    m_isTruncated(false)
{
}

ListGeoLocationsResult::ListGeoLocationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_isTruncated(false)
{
  *this = result;
}

ListGeoLocationsResult& ListGeoLocationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode geoLocationDetailsListNode = resultNode.FirstChild("GeoLocationDetailsList");
    if(!geoLocationDetailsListNode.IsNull())
    {
      XmlNode geoLocationDetailsListMember = geoLocationDetailsListNode.FirstChild("GeoLocationDetails");
      while(!geoLocationDetailsListMember.IsNull())
      {
        m_geoLocationDetailsList.push_back(geoLocationDetailsListMember);
        geoLocationDetailsListMember = geoLocationDetailsListMember.NextNode("GeoLocationDetails");
      }

    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(isTruncatedNode.GetText().c_str()).c_str());
    }
    XmlNode nextContinentCodeNode = resultNode.FirstChild("NextContinentCode");
    if(!nextContinentCodeNode.IsNull())
    {
      m_nextContinentCode = nextContinentCodeNode.GetText();
    }
    XmlNode nextCountryCodeNode = resultNode.FirstChild("NextCountryCode");
    if(!nextCountryCodeNode.IsNull())
    {
      m_nextCountryCode = nextCountryCodeNode.GetText();
    }
    XmlNode nextSubdivisionCodeNode = resultNode.FirstChild("NextSubdivisionCode");
    if(!nextSubdivisionCodeNode.IsNull())
    {
      m_nextSubdivisionCode = nextSubdivisionCodeNode.GetText();
    }
    XmlNode maxItemsNode = resultNode.FirstChild("MaxItems");
    if(!maxItemsNode.IsNull())
    {
      m_maxItems = maxItemsNode.GetText();
    }
  }

  return *this;
}
