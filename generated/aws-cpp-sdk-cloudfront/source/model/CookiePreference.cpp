/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
      m_forward = ItemSelectionMapper::GetItemSelectionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(forwardNode.GetText()).c_str()).c_str());
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
