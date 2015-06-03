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
#include <aws/cloudfront/model/S3Origin.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

S3Origin::S3Origin()
{
}

S3Origin::S3Origin(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

S3Origin& S3Origin::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode domainNameNode = resultNode.FirstChild("DomainName");
    m_domainName = StringUtils::Trim(domainNameNode.GetText().c_str());
    XmlNode originAccessIdentityNode = resultNode.FirstChild("OriginAccessIdentity");
    m_originAccessIdentity = StringUtils::Trim(originAccessIdentityNode.GetText().c_str());
  }

  return *this;
}

void S3Origin::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  XmlNode domainNameNode = parentNode.CreateChildElement("DomainName");
  domainNameNode.SetText(m_domainName);
  XmlNode originAccessIdentityNode = parentNode.CreateChildElement("OriginAccessIdentity");
  originAccessIdentityNode.SetText(m_originAccessIdentity);
}
