/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/S3OriginConfig.h>
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

S3OriginConfig::S3OriginConfig(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

S3OriginConfig& S3OriginConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode originAccessIdentityNode = resultNode.FirstChild("OriginAccessIdentity");
    if(!originAccessIdentityNode.IsNull())
    {
      m_originAccessIdentity = Aws::Utils::Xml::DecodeEscapedXmlText(originAccessIdentityNode.GetText());
      m_originAccessIdentityHasBeenSet = true;
    }
    XmlNode originReadTimeoutNode = resultNode.FirstChild("OriginReadTimeout");
    if(!originReadTimeoutNode.IsNull())
    {
      m_originReadTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(originReadTimeoutNode.GetText()).c_str()).c_str());
      m_originReadTimeoutHasBeenSet = true;
    }
  }

  return *this;
}

void S3OriginConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_originAccessIdentityHasBeenSet)
  {
   XmlNode originAccessIdentityNode = parentNode.CreateChildElement("OriginAccessIdentity");
   originAccessIdentityNode.SetText(m_originAccessIdentity);
  }

  if(m_originReadTimeoutHasBeenSet)
  {
   XmlNode originReadTimeoutNode = parentNode.CreateChildElement("OriginReadTimeout");
   ss << m_originReadTimeout;
   originReadTimeoutNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
