/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CloudFrontOriginAccessIdentity.h>
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

CloudFrontOriginAccessIdentity::CloudFrontOriginAccessIdentity() : 
    m_idHasBeenSet(false),
    m_s3CanonicalUserIdHasBeenSet(false),
    m_cloudFrontOriginAccessIdentityConfigHasBeenSet(false)
{
}

CloudFrontOriginAccessIdentity::CloudFrontOriginAccessIdentity(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_s3CanonicalUserIdHasBeenSet(false),
    m_cloudFrontOriginAccessIdentityConfigHasBeenSet(false)
{
  *this = xmlNode;
}

CloudFrontOriginAccessIdentity& CloudFrontOriginAccessIdentity::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = Aws::Utils::Xml::DecodeEscapedXmlText(idNode.GetText());
      m_idHasBeenSet = true;
    }
    XmlNode s3CanonicalUserIdNode = resultNode.FirstChild("S3CanonicalUserId");
    if(!s3CanonicalUserIdNode.IsNull())
    {
      m_s3CanonicalUserId = Aws::Utils::Xml::DecodeEscapedXmlText(s3CanonicalUserIdNode.GetText());
      m_s3CanonicalUserIdHasBeenSet = true;
    }
    XmlNode cloudFrontOriginAccessIdentityConfigNode = resultNode.FirstChild("CloudFrontOriginAccessIdentityConfig");
    if(!cloudFrontOriginAccessIdentityConfigNode.IsNull())
    {
      m_cloudFrontOriginAccessIdentityConfig = cloudFrontOriginAccessIdentityConfigNode;
      m_cloudFrontOriginAccessIdentityConfigHasBeenSet = true;
    }
  }

  return *this;
}

void CloudFrontOriginAccessIdentity::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_s3CanonicalUserIdHasBeenSet)
  {
   XmlNode s3CanonicalUserIdNode = parentNode.CreateChildElement("S3CanonicalUserId");
   s3CanonicalUserIdNode.SetText(m_s3CanonicalUserId);
  }

  if(m_cloudFrontOriginAccessIdentityConfigHasBeenSet)
  {
   XmlNode cloudFrontOriginAccessIdentityConfigNode = parentNode.CreateChildElement("CloudFrontOriginAccessIdentityConfig");
   m_cloudFrontOriginAccessIdentityConfig.AddToNode(cloudFrontOriginAccessIdentityConfigNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
