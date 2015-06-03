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
#include <aws/cloudfront/model/CloudFrontOriginAccessIdentityList.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CloudFrontOriginAccessIdentityList::CloudFrontOriginAccessIdentityList() : 
    m_nextMarkerHasBeenSet(false),
    m_maxItems(0),
    m_isTruncated(false),
    m_quantity(0),
    m_itemsHasBeenSet(false)
{
}

CloudFrontOriginAccessIdentityList::CloudFrontOriginAccessIdentityList(const XmlNode& xmlNode) : 
    m_nextMarkerHasBeenSet(false),
    m_maxItems(0),
    m_isTruncated(false),
    m_quantity(0),
    m_itemsHasBeenSet(false)
{
  *this = xmlNode;
}

CloudFrontOriginAccessIdentityList& CloudFrontOriginAccessIdentityList::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    m_marker = StringUtils::Trim(markerNode.GetText().c_str());
    XmlNode nextMarkerNode = resultNode.FirstChild("NextMarker");
    if(!nextMarkerNode.IsNull())
    {
      m_nextMarker = StringUtils::Trim(nextMarkerNode.GetText().c_str());
      m_nextMarkerHasBeenSet = true;
    }
    XmlNode maxItemsNode = resultNode.FirstChild("MaxItems");
    m_maxItems = StringUtils::ConvertToInt32(StringUtils::Trim(maxItemsNode.GetText().c_str()).c_str());
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(isTruncatedNode.GetText().c_str()).c_str());
    XmlNode quantityNode = resultNode.FirstChild("Quantity");
    m_quantity = StringUtils::ConvertToInt32(StringUtils::Trim(quantityNode.GetText().c_str()).c_str());
    XmlNode cloudFrontOriginAccessIdentitySummaryNode = resultNode.FirstChild("CloudFrontOriginAccessIdentitySummary");
    if(!cloudFrontOriginAccessIdentitySummaryNode.IsNull())
    {
      while(!cloudFrontOriginAccessIdentitySummaryNode.IsNull())
      {
        m_items.push_back(cloudFrontOriginAccessIdentitySummaryNode);
        cloudFrontOriginAccessIdentitySummaryNode = cloudFrontOriginAccessIdentitySummaryNode.NextNode("CloudFrontOriginAccessIdentitySummary");
      }

      m_itemsHasBeenSet = true;
    }
  }

  return *this;
}

void CloudFrontOriginAccessIdentityList::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  XmlNode markerNode = parentNode.CreateChildElement("Marker");
  markerNode.SetText(m_marker);
  if(m_nextMarkerHasBeenSet)
  {
   XmlNode nextMarkerNode = parentNode.CreateChildElement("NextMarker");
   nextMarkerNode.SetText(m_nextMarker);
  }

  XmlNode maxItemsNode = parentNode.CreateChildElement("MaxItems");
  ss << m_maxItems;
  maxItemsNode.SetText(ss.str());
  ss.str("");
  XmlNode isTruncatedNode = parentNode.CreateChildElement("IsTruncated");
  ss << m_isTruncated;
  isTruncatedNode.SetText(ss.str());
  ss.str("");
  XmlNode quantityNode = parentNode.CreateChildElement("Quantity");
  ss << m_quantity;
  quantityNode.SetText(ss.str());
  ss.str("");
  if(m_itemsHasBeenSet)
  {
   for(const auto& item : m_items)
   {
     XmlNode itemsNode = parentNode.CreateChildElement("CloudFrontOriginAccessIdentitySummary");
     item.AddToNode(itemsNode);
   }
  }

}
