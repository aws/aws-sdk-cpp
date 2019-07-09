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
      m_comment = commentNode.GetText();
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
