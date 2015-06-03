/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CloudFrontOriginAccessIdentitySummary::CloudFrontOriginAccessIdentitySummary()
{
}

CloudFrontOriginAccessIdentitySummary::CloudFrontOriginAccessIdentitySummary(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CloudFrontOriginAccessIdentitySummary& CloudFrontOriginAccessIdentitySummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    m_id = StringUtils::Trim(idNode.GetText().c_str());
    XmlNode s3CanonicalUserIdNode = resultNode.FirstChild("S3CanonicalUserId");
    m_s3CanonicalUserId = StringUtils::Trim(s3CanonicalUserIdNode.GetText().c_str());
    XmlNode commentNode = resultNode.FirstChild("Comment");
    m_comment = StringUtils::Trim(commentNode.GetText().c_str());
  }

  return *this;
}

void CloudFrontOriginAccessIdentitySummary::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  XmlNode idNode = parentNode.CreateChildElement("Id");
  idNode.SetText(m_id);
  XmlNode s3CanonicalUserIdNode = parentNode.CreateChildElement("S3CanonicalUserId");
  s3CanonicalUserIdNode.SetText(m_s3CanonicalUserId);
  XmlNode commentNode = parentNode.CreateChildElement("Comment");
  commentNode.SetText(m_comment);
}
