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

#include <aws/cloudfront/model/Origin.h>
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

Origin::Origin() : 
    m_idHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_originPathHasBeenSet(false),
    m_customHeadersHasBeenSet(false),
    m_s3OriginConfigHasBeenSet(false),
    m_customOriginConfigHasBeenSet(false)
{
}

Origin::Origin(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_originPathHasBeenSet(false),
    m_customHeadersHasBeenSet(false),
    m_s3OriginConfigHasBeenSet(false),
    m_customOriginConfigHasBeenSet(false)
{
  *this = xmlNode;
}

Origin& Origin::operator =(const XmlNode& xmlNode)
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
    XmlNode domainNameNode = resultNode.FirstChild("DomainName");
    if(!domainNameNode.IsNull())
    {
      m_domainName = domainNameNode.GetText();
      m_domainNameHasBeenSet = true;
    }
    XmlNode originPathNode = resultNode.FirstChild("OriginPath");
    if(!originPathNode.IsNull())
    {
      m_originPath = originPathNode.GetText();
      m_originPathHasBeenSet = true;
    }
    XmlNode customHeadersNode = resultNode.FirstChild("CustomHeaders");
    if(!customHeadersNode.IsNull())
    {
      m_customHeaders = customHeadersNode;
      m_customHeadersHasBeenSet = true;
    }
    XmlNode s3OriginConfigNode = resultNode.FirstChild("S3OriginConfig");
    if(!s3OriginConfigNode.IsNull())
    {
      m_s3OriginConfig = s3OriginConfigNode;
      m_s3OriginConfigHasBeenSet = true;
    }
    XmlNode customOriginConfigNode = resultNode.FirstChild("CustomOriginConfig");
    if(!customOriginConfigNode.IsNull())
    {
      m_customOriginConfig = customOriginConfigNode;
      m_customOriginConfigHasBeenSet = true;
    }
  }

  return *this;
}

void Origin::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_domainNameHasBeenSet)
  {
   XmlNode domainNameNode = parentNode.CreateChildElement("DomainName");
   domainNameNode.SetText(m_domainName);
  }

  if(m_originPathHasBeenSet)
  {
   XmlNode originPathNode = parentNode.CreateChildElement("OriginPath");
   originPathNode.SetText(m_originPath);
  }

  if(m_customHeadersHasBeenSet)
  {
   XmlNode customHeadersNode = parentNode.CreateChildElement("CustomHeaders");
   m_customHeaders.AddToNode(customHeadersNode);
  }

  if(m_s3OriginConfigHasBeenSet)
  {
   XmlNode s3OriginConfigNode = parentNode.CreateChildElement("S3OriginConfig");
   m_s3OriginConfig.AddToNode(s3OriginConfigNode);
  }

  if(m_customOriginConfigHasBeenSet)
  {
   XmlNode customOriginConfigNode = parentNode.CreateChildElement("CustomOriginConfig");
   m_customOriginConfig.AddToNode(customOriginConfigNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
