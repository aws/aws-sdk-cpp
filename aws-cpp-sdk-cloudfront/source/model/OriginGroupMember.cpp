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

#include <aws/cloudfront/model/OriginGroupMember.h>
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

OriginGroupMember::OriginGroupMember() : 
    m_originIdHasBeenSet(false)
{
}

OriginGroupMember::OriginGroupMember(const XmlNode& xmlNode) : 
    m_originIdHasBeenSet(false)
{
  *this = xmlNode;
}

OriginGroupMember& OriginGroupMember::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode originIdNode = resultNode.FirstChild("OriginId");
    if(!originIdNode.IsNull())
    {
      m_originId = originIdNode.GetText();
      m_originIdHasBeenSet = true;
    }
  }

  return *this;
}

void OriginGroupMember::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_originIdHasBeenSet)
  {
   XmlNode originIdNode = parentNode.CreateChildElement("OriginId");
   originIdNode.SetText(m_originId);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
