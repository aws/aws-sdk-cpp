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

#include <aws/cloudfront/model/CloudFrontOriginAccessIdentitySummary.h>
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

CloudFrontOriginAccessIdentitySummary::CloudFrontOriginAccessIdentitySummary() : 
    m_idHasBeenSet(false),
    m_s3CanonicalUserIdHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

CloudFrontOriginAccessIdentitySummary::CloudFrontOriginAccessIdentitySummary(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_s3CanonicalUserIdHasBeenSet(false),
    m_commentHasBeenSet(false)
{
  *this = xmlNode;
}

CloudFrontOriginAccessIdentitySummary& CloudFrontOriginAccessIdentitySummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = idNode.GetText();
      m_idHasBeenSet = true;
    }
    XmlNode s3CanonicalUserIdNode = resultNode.FirstChild("S3CanonicalUserId");
    if(!s3CanonicalUserIdNode.IsNull())
    {
      m_s3CanonicalUserId = s3CanonicalUserIdNode.GetText();
      m_s3CanonicalUserIdHasBeenSet = true;
    }
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = commentNode.GetText();
      m_commentHasBeenSet = true;
    }
  }

  return *this;
}

void CloudFrontOriginAccessIdentitySummary::AddToNode(XmlNode& parentNode) const
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

  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
