/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudfront/model/CookiePreference.h>
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

CookiePreference::CookiePreference() : 
    m_forward(ItemSelection::NOT_SET),
    m_forwardHasBeenSet(false),
    m_whitelistedNamesHasBeenSet(false)
{
}

CookiePreference::CookiePreference(const XmlNode& xmlNode) : 
    m_forward(ItemSelection::NOT_SET),
    m_forwardHasBeenSet(false),
    m_whitelistedNamesHasBeenSet(false)
{
  *this = xmlNode;
}

CookiePreference& CookiePreference::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode forwardNode = resultNode.FirstChild("Forward");
    if(!forwardNode.IsNull())
    {
      m_forward = ItemSelectionMapper::GetItemSelectionForName(StringUtils::Trim(forwardNode.GetText().c_str()).c_str());
      m_forwardHasBeenSet = true;
    }
    XmlNode whitelistedNamesNode = resultNode.FirstChild("WhitelistedNames");
    if(!whitelistedNamesNode.IsNull())
    {
      m_whitelistedNames = whitelistedNamesNode;
      m_whitelistedNamesHasBeenSet = true;
    }
  }

  return *this;
}

void CookiePreference::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_forwardHasBeenSet)
  {
   XmlNode forwardNode = parentNode.CreateChildElement("Forward");
   forwardNode.SetText(ItemSelectionMapper::GetNameForItemSelection(m_forward));
  }

  if(m_whitelistedNamesHasBeenSet)
  {
   XmlNode whitelistedNamesNode = parentNode.CreateChildElement("WhitelistedNames");
   m_whitelistedNames.AddToNode(whitelistedNamesNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
