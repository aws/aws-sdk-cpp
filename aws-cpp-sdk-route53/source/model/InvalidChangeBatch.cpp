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

#include <aws/route53/model/InvalidChangeBatch.h>
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

InvalidChangeBatch::InvalidChangeBatch() : 
    m_messagesHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

InvalidChangeBatch::InvalidChangeBatch(const XmlNode& xmlNode) : 
    m_messagesHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = xmlNode;
}

InvalidChangeBatch& InvalidChangeBatch::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode messagesNode = resultNode.FirstChild("messages");
    if(!messagesNode.IsNull())
    {
      XmlNode messagesMember = messagesNode.FirstChild("Message");
      while(!messagesMember.IsNull())
      {
        m_messages.push_back(messagesMember.GetText());
        messagesMember = messagesMember.NextNode("Message");
      }

      m_messagesHasBeenSet = true;
    }
    XmlNode messageNode = resultNode.FirstChild("message");
    if(!messageNode.IsNull())
    {
      m_message = Aws::Utils::Xml::DecodeEscapedXmlText(messageNode.GetText());
      m_messageHasBeenSet = true;
    }
  }

  return *this;
}

void InvalidChangeBatch::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_messagesHasBeenSet)
  {
   XmlNode messagesParentNode = parentNode.CreateChildElement("messages");
   for(const auto& item : m_messages)
   {
     XmlNode messagesNode = messagesParentNode.CreateChildElement("ErrorMessage");
     messagesNode.SetText(item);
   }
  }

  if(m_messageHasBeenSet)
  {
   XmlNode messageNode = parentNode.CreateChildElement("message");
   messageNode.SetText(m_message);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
