/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ContinuousDeploymentPolicyList.h>
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

ContinuousDeploymentPolicyList::ContinuousDeploymentPolicyList() : 
    m_nextMarkerHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

ContinuousDeploymentPolicyList::ContinuousDeploymentPolicyList(const XmlNode& xmlNode) : 
    m_nextMarkerHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
  *this = xmlNode;
}

ContinuousDeploymentPolicyList& ContinuousDeploymentPolicyList::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nextMarkerNode = resultNode.FirstChild("NextMarker");
    if(!nextMarkerNode.IsNull())
    {
      m_nextMarker = Aws::Utils::Xml::DecodeEscapedXmlText(nextMarkerNode.GetText());
      m_nextMarkerHasBeenSet = true;
    }
    XmlNode maxItemsNode = resultNode.FirstChild("MaxItems");
    if(!maxItemsNode.IsNull())
    {
      m_maxItems = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxItemsNode.GetText()).c_str()).c_str());
      m_maxItemsHasBeenSet = true;
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
      XmlNode itemsMember = itemsNode.FirstChild("ContinuousDeploymentPolicySummary");
      while(!itemsMember.IsNull())
      {
        m_items.push_back(itemsMember);
        itemsMember = itemsMember.NextNode("ContinuousDeploymentPolicySummary");
      }

      m_itemsHasBeenSet = true;
    }
  }

  return *this;
}

void ContinuousDeploymentPolicyList::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_nextMarkerHasBeenSet)
  {
   XmlNode nextMarkerNode = parentNode.CreateChildElement("NextMarker");
   nextMarkerNode.SetText(m_nextMarker);
  }

  if(m_maxItemsHasBeenSet)
  {
   XmlNode maxItemsNode = parentNode.CreateChildElement("MaxItems");
   ss << m_maxItems;
   maxItemsNode.SetText(ss.str());
   ss.str("");
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
     XmlNode itemsNode = itemsParentNode.CreateChildElement("ContinuousDeploymentPolicySummary");
     item.AddToNode(itemsNode);
   }
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
