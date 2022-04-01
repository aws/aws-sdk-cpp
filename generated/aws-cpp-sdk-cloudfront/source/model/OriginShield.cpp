/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginShield.h>
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

OriginShield::OriginShield() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_originShieldRegionHasBeenSet(false)
{
}

OriginShield::OriginShield(const XmlNode& xmlNode) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_originShieldRegionHasBeenSet(false)
{
  *this = xmlNode;
}

OriginShield& OriginShield::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode originShieldRegionNode = resultNode.FirstChild("OriginShieldRegion");
    if(!originShieldRegionNode.IsNull())
    {
      m_originShieldRegion = Aws::Utils::Xml::DecodeEscapedXmlText(originShieldRegionNode.GetText());
      m_originShieldRegionHasBeenSet = true;
    }
  }

  return *this;
}

void OriginShield::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_enabledHasBeenSet)
  {
   XmlNode enabledNode = parentNode.CreateChildElement("Enabled");
   ss << std::boolalpha << m_enabled;
   enabledNode.SetText(ss.str());
   ss.str("");
  }

  if(m_originShieldRegionHasBeenSet)
  {
   XmlNode originShieldRegionNode = parentNode.CreateChildElement("OriginShieldRegion");
   originShieldRegionNode.SetText(m_originShieldRegion);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
