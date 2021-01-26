/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ContentTypeProfileConfig.h>
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

ContentTypeProfileConfig::ContentTypeProfileConfig() : 
    m_forwardWhenContentTypeIsUnknown(false),
    m_forwardWhenContentTypeIsUnknownHasBeenSet(false),
    m_contentTypeProfilesHasBeenSet(false)
{
}

ContentTypeProfileConfig::ContentTypeProfileConfig(const XmlNode& xmlNode) : 
    m_forwardWhenContentTypeIsUnknown(false),
    m_forwardWhenContentTypeIsUnknownHasBeenSet(false),
    m_contentTypeProfilesHasBeenSet(false)
{
  *this = xmlNode;
}

ContentTypeProfileConfig& ContentTypeProfileConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode forwardWhenContentTypeIsUnknownNode = resultNode.FirstChild("ForwardWhenContentTypeIsUnknown");
    if(!forwardWhenContentTypeIsUnknownNode.IsNull())
    {
      m_forwardWhenContentTypeIsUnknown = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(forwardWhenContentTypeIsUnknownNode.GetText()).c_str()).c_str());
      m_forwardWhenContentTypeIsUnknownHasBeenSet = true;
    }
    XmlNode contentTypeProfilesNode = resultNode.FirstChild("ContentTypeProfiles");
    if(!contentTypeProfilesNode.IsNull())
    {
      m_contentTypeProfiles = contentTypeProfilesNode;
      m_contentTypeProfilesHasBeenSet = true;
    }
  }

  return *this;
}

void ContentTypeProfileConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_forwardWhenContentTypeIsUnknownHasBeenSet)
  {
   XmlNode forwardWhenContentTypeIsUnknownNode = parentNode.CreateChildElement("ForwardWhenContentTypeIsUnknown");
   ss << std::boolalpha << m_forwardWhenContentTypeIsUnknown;
   forwardWhenContentTypeIsUnknownNode.SetText(ss.str());
   ss.str("");
  }

  if(m_contentTypeProfilesHasBeenSet)
  {
   XmlNode contentTypeProfilesNode = parentNode.CreateChildElement("ContentTypeProfiles");
   m_contentTypeProfiles.AddToNode(contentTypeProfilesNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
