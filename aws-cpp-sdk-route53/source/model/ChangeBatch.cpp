/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ChangeBatch.h>
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

ChangeBatch::ChangeBatch() : 
    m_commentHasBeenSet(false),
    m_changesHasBeenSet(false)
{
}

ChangeBatch::ChangeBatch(const XmlNode& xmlNode) : 
    m_commentHasBeenSet(false),
    m_changesHasBeenSet(false)
{
  *this = xmlNode;
}

ChangeBatch& ChangeBatch::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = Aws::Utils::Xml::DecodeEscapedXmlText(commentNode.GetText());
      m_commentHasBeenSet = true;
    }
    XmlNode changesNode = resultNode.FirstChild("Changes");
    if(!changesNode.IsNull())
    {
      XmlNode changesMember = changesNode.FirstChild("Change");
      while(!changesMember.IsNull())
      {
        m_changes.push_back(changesMember);
        changesMember = changesMember.NextNode("Change");
      }

      m_changesHasBeenSet = true;
    }
  }

  return *this;
}

void ChangeBatch::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

  if(m_changesHasBeenSet)
  {
   XmlNode changesParentNode = parentNode.CreateChildElement("Changes");
   for(const auto& item : m_changes)
   {
     XmlNode changesNode = changesParentNode.CreateChildElement("Change");
     item.AddToNode(changesNode);
   }
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
