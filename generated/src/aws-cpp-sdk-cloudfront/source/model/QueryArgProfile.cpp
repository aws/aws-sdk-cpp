/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/QueryArgProfile.h>
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

QueryArgProfile::QueryArgProfile() : 
    m_queryArgHasBeenSet(false),
    m_profileIdHasBeenSet(false)
{
}

QueryArgProfile::QueryArgProfile(const XmlNode& xmlNode) : 
    m_queryArgHasBeenSet(false),
    m_profileIdHasBeenSet(false)
{
  *this = xmlNode;
}

QueryArgProfile& QueryArgProfile::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode queryArgNode = resultNode.FirstChild("QueryArg");
    if(!queryArgNode.IsNull())
    {
      m_queryArg = Aws::Utils::Xml::DecodeEscapedXmlText(queryArgNode.GetText());
      m_queryArgHasBeenSet = true;
    }
    XmlNode profileIdNode = resultNode.FirstChild("ProfileId");
    if(!profileIdNode.IsNull())
    {
      m_profileId = Aws::Utils::Xml::DecodeEscapedXmlText(profileIdNode.GetText());
      m_profileIdHasBeenSet = true;
    }
  }

  return *this;
}

void QueryArgProfile::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_queryArgHasBeenSet)
  {
   XmlNode queryArgNode = parentNode.CreateChildElement("QueryArg");
   queryArgNode.SetText(m_queryArg);
  }

  if(m_profileIdHasBeenSet)
  {
   XmlNode profileIdNode = parentNode.CreateChildElement("ProfileId");
   profileIdNode.SetText(m_profileId);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
