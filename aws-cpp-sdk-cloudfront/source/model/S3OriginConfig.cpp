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
      m_originAccessIdentity = originAccessIdentityNode.GetText();
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
