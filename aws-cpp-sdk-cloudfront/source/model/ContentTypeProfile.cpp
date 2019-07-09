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

#include <aws/cloudfront/model/ContentTypeProfile.h>
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

ContentTypeProfile::ContentTypeProfile() : 
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false),
    m_profileIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
}

ContentTypeProfile::ContentTypeProfile(const XmlNode& xmlNode) : 
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false),
    m_profileIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
  *this = xmlNode;
}

ContentTypeProfile& ContentTypeProfile::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode formatNode = resultNode.FirstChild("Format");
    if(!formatNode.IsNull())
    {
      m_format = FormatMapper::GetFormatForName(StringUtils::Trim(formatNode.GetText().c_str()).c_str());
      m_formatHasBeenSet = true;
    }
    XmlNode profileIdNode = resultNode.FirstChild("ProfileId");
    if(!profileIdNode.IsNull())
    {
      m_profileId = profileIdNode.GetText();
      m_profileIdHasBeenSet = true;
    }
    XmlNode contentTypeNode = resultNode.FirstChild("ContentType");
    if(!contentTypeNode.IsNull())
    {
      m_contentType = contentTypeNode.GetText();
      m_contentTypeHasBeenSet = true;
    }
  }

  return *this;
}

void ContentTypeProfile::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_formatHasBeenSet)
  {
   XmlNode formatNode = parentNode.CreateChildElement("Format");
   formatNode.SetText(FormatMapper::GetNameForFormat(m_format));
  }

  if(m_profileIdHasBeenSet)
  {
   XmlNode profileIdNode = parentNode.CreateChildElement("ProfileId");
   profileIdNode.SetText(m_profileId);
  }

  if(m_contentTypeHasBeenSet)
  {
   XmlNode contentTypeNode = parentNode.CreateChildElement("ContentType");
   contentTypeNode.SetText(m_contentType);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
