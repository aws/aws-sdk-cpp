﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

S3Origin::S3Origin() : 
    m_domainNameHasBeenSet(false),
    m_originAccessIdentityHasBeenSet(false)
{
}

S3Origin::S3Origin(const XmlNode& xmlNode) : 
    m_domainNameHasBeenSet(false),
    m_originAccessIdentityHasBeenSet(false)
{
  *this = xmlNode;
}

S3Origin& S3Origin::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode domainNameNode = resultNode.FirstChild("DomainName");
    if(!domainNameNode.IsNull())
    {
      m_domainName = StringUtils::Trim(domainNameNode.GetText().c_str());
      m_domainNameHasBeenSet = true;
    }
    XmlNode originAccessIdentityNode = resultNode.FirstChild("OriginAccessIdentity");
    if(!originAccessIdentityNode.IsNull())
    {
      m_originAccessIdentity = StringUtils::Trim(originAccessIdentityNode.GetText().c_str());
      m_originAccessIdentityHasBeenSet = true;
    }
  }

  return *this;
}

void S3Origin::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_domainNameHasBeenSet)
  {
   XmlNode domainNameNode = parentNode.CreateChildElement("DomainName");
   domainNameNode.SetText(m_domainName);
  }

  if(m_originAccessIdentityHasBeenSet)
  {
   XmlNode originAccessIdentityNode = parentNode.CreateChildElement("OriginAccessIdentity");
   originAccessIdentityNode.SetText(m_originAccessIdentity);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
