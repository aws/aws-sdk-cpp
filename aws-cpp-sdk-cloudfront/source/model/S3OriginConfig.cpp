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

S3OriginConfig::S3OriginConfig() : 
    m_originAccessIdentityHasBeenSet(false)
{
}

S3OriginConfig::S3OriginConfig(const XmlNode& xmlNode) : 
    m_originAccessIdentityHasBeenSet(false)
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

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
