/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/KeyGroupSummary.h>
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

KeyGroupSummary::KeyGroupSummary() : 
    m_keyGroupHasBeenSet(false)
{
}

KeyGroupSummary::KeyGroupSummary(const XmlNode& xmlNode) : 
    m_keyGroupHasBeenSet(false)
{
  *this = xmlNode;
}

KeyGroupSummary& KeyGroupSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode keyGroupNode = resultNode.FirstChild("KeyGroup");
    if(!keyGroupNode.IsNull())
    {
      m_keyGroup = keyGroupNode;
      m_keyGroupHasBeenSet = true;
    }
  }

  return *this;
}

void KeyGroupSummary::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_keyGroupHasBeenSet)
  {
   XmlNode keyGroupNode = parentNode.CreateChildElement("KeyGroup");
   m_keyGroup.AddToNode(keyGroupNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
