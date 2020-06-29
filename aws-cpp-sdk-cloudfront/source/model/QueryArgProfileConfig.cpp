/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/QueryArgProfileConfig.h>
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

QueryArgProfileConfig::QueryArgProfileConfig() : 
    m_forwardWhenQueryArgProfileIsUnknown(false),
    m_forwardWhenQueryArgProfileIsUnknownHasBeenSet(false),
    m_queryArgProfilesHasBeenSet(false)
{
}

QueryArgProfileConfig::QueryArgProfileConfig(const XmlNode& xmlNode) : 
    m_forwardWhenQueryArgProfileIsUnknown(false),
    m_forwardWhenQueryArgProfileIsUnknownHasBeenSet(false),
    m_queryArgProfilesHasBeenSet(false)
{
  *this = xmlNode;
}

QueryArgProfileConfig& QueryArgProfileConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode forwardWhenQueryArgProfileIsUnknownNode = resultNode.FirstChild("ForwardWhenQueryArgProfileIsUnknown");
    if(!forwardWhenQueryArgProfileIsUnknownNode.IsNull())
    {
      m_forwardWhenQueryArgProfileIsUnknown = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(forwardWhenQueryArgProfileIsUnknownNode.GetText()).c_str()).c_str());
      m_forwardWhenQueryArgProfileIsUnknownHasBeenSet = true;
    }
    XmlNode queryArgProfilesNode = resultNode.FirstChild("QueryArgProfiles");
    if(!queryArgProfilesNode.IsNull())
    {
      m_queryArgProfiles = queryArgProfilesNode;
      m_queryArgProfilesHasBeenSet = true;
    }
  }

  return *this;
}

void QueryArgProfileConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_forwardWhenQueryArgProfileIsUnknownHasBeenSet)
  {
   XmlNode forwardWhenQueryArgProfileIsUnknownNode = parentNode.CreateChildElement("ForwardWhenQueryArgProfileIsUnknown");
   ss << std::boolalpha << m_forwardWhenQueryArgProfileIsUnknown;
   forwardWhenQueryArgProfileIsUnknownNode.SetText(ss.str());
   ss.str("");
  }

  if(m_queryArgProfilesHasBeenSet)
  {
   XmlNode queryArgProfilesNode = parentNode.CreateChildElement("QueryArgProfiles");
   m_queryArgProfiles.AddToNode(queryArgProfilesNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
