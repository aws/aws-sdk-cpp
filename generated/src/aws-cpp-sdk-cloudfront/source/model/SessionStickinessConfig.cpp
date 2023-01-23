/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/SessionStickinessConfig.h>
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

SessionStickinessConfig::SessionStickinessConfig() : 
    m_idleTTL(0),
    m_idleTTLHasBeenSet(false),
    m_maximumTTL(0),
    m_maximumTTLHasBeenSet(false)
{
}

SessionStickinessConfig::SessionStickinessConfig(const XmlNode& xmlNode) : 
    m_idleTTL(0),
    m_idleTTLHasBeenSet(false),
    m_maximumTTL(0),
    m_maximumTTLHasBeenSet(false)
{
  *this = xmlNode;
}

SessionStickinessConfig& SessionStickinessConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idleTTLNode = resultNode.FirstChild("IdleTTL");
    if(!idleTTLNode.IsNull())
    {
      m_idleTTL = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(idleTTLNode.GetText()).c_str()).c_str());
      m_idleTTLHasBeenSet = true;
    }
    XmlNode maximumTTLNode = resultNode.FirstChild("MaximumTTL");
    if(!maximumTTLNode.IsNull())
    {
      m_maximumTTL = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumTTLNode.GetText()).c_str()).c_str());
      m_maximumTTLHasBeenSet = true;
    }
  }

  return *this;
}

void SessionStickinessConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idleTTLHasBeenSet)
  {
   XmlNode idleTTLNode = parentNode.CreateChildElement("IdleTTL");
   ss << m_idleTTL;
   idleTTLNode.SetText(ss.str());
   ss.str("");
  }

  if(m_maximumTTLHasBeenSet)
  {
   XmlNode maximumTTLNode = parentNode.CreateChildElement("MaximumTTL");
   ss << m_maximumTTL;
   maximumTTLNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
