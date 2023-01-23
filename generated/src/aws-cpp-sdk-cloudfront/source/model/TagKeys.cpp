/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/TagKeys.h>
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

TagKeys::TagKeys() : 
    m_itemsHasBeenSet(false)
{
}

TagKeys::TagKeys(const XmlNode& xmlNode) : 
    m_itemsHasBeenSet(false)
{
  *this = xmlNode;
}

TagKeys& TagKeys::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode itemsNode = resultNode.FirstChild("Items");
    if(!itemsNode.IsNull())
    {
      XmlNode itemsMember = itemsNode.FirstChild("Key");
      while(!itemsMember.IsNull())
      {
        m_items.push_back(itemsMember.GetText());
        itemsMember = itemsMember.NextNode("Key");
      }

      m_itemsHasBeenSet = true;
    }
  }

  return *this;
}

void TagKeys::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_itemsHasBeenSet)
  {
   XmlNode itemsParentNode = parentNode.CreateChildElement("Items");
   for(const auto& item : m_items)
   {
     XmlNode itemsNode = itemsParentNode.CreateChildElement("Key");
     itemsNode.SetText(item);
   }
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
