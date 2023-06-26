/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/RealtimeLogConfigs.h>
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

RealtimeLogConfigs::RealtimeLogConfigs() : 
    m_maxItems(0),
    m_maxItemsHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_isTruncated(false),
    m_isTruncatedHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_nextMarkerHasBeenSet(false)
{
}

RealtimeLogConfigs::RealtimeLogConfigs(const XmlNode& xmlNode) : 
    m_maxItems(0),
    m_maxItemsHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_isTruncated(false),
    m_isTruncatedHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_nextMarkerHasBeenSet(false)
{
  *this = xmlNode;
}

RealtimeLogConfigs& RealtimeLogConfigs::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode maxItemsNode = resultNode.FirstChild("MaxItems");
    if(!maxItemsNode.IsNull())
    {
      m_maxItems = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxItemsNode.GetText()).c_str()).c_str());
      m_maxItemsHasBeenSet = true;
    }
    XmlNode itemsNode = resultNode.FirstChild("Items");
    if(!itemsNode.IsNull())
    {
      XmlNode itemsMember = itemsNode.FirstChild("member");
      while(!itemsMember.IsNull())
      {
        m_items.push_back(itemsMember);
        itemsMember = itemsMember.NextNode("member");
      }

      m_itemsHasBeenSet = true;
    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isTruncatedNode.GetText()).c_str()).c_str());
      m_isTruncatedHasBeenSet = true;
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
    XmlNode nextMarkerNode = resultNode.FirstChild("NextMarker");
    if(!nextMarkerNode.IsNull())
    {
      m_nextMarker = Aws::Utils::Xml::DecodeEscapedXmlText(nextMarkerNode.GetText());
      m_nextMarkerHasBeenSet = true;
    }
  }

  return *this;
}

void RealtimeLogConfigs::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_maxItemsHasBeenSet)
  {
   XmlNode maxItemsNode = parentNode.CreateChildElement("MaxItems");
   ss << m_maxItems;
   maxItemsNode.SetText(ss.str());
   ss.str("");
  }

  if(m_itemsHasBeenSet)
  {
   XmlNode itemsParentNode = parentNode.CreateChildElement("Items");
   for(const auto& item : m_items)
   {
     XmlNode itemsNode = itemsParentNode.CreateChildElement("RealtimeLogConfig");
     item.AddToNode(itemsNode);
   }
  }

  if(m_isTruncatedHasBeenSet)
  {
   XmlNode isTruncatedNode = parentNode.CreateChildElement("IsTruncated");
   ss << std::boolalpha << m_isTruncated;
   isTruncatedNode.SetText(ss.str());
   ss.str("");
  }

  if(m_markerHasBeenSet)
  {
   XmlNode markerNode = parentNode.CreateChildElement("Marker");
   markerNode.SetText(m_marker);
  }

  if(m_nextMarkerHasBeenSet)
  {
   XmlNode nextMarkerNode = parentNode.CreateChildElement("NextMarker");
   nextMarkerNode.SetText(m_nextMarker);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
