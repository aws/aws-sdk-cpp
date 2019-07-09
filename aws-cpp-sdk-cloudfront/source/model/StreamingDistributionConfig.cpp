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

#include <aws/cloudfront/model/StreamingDistributionConfig.h>
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

StreamingDistributionConfig::StreamingDistributionConfig() : 
    m_callerReferenceHasBeenSet(false),
    m_s3OriginHasBeenSet(false),
    m_aliasesHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_loggingHasBeenSet(false),
    m_trustedSignersHasBeenSet(false),
    m_priceClass(PriceClass::NOT_SET),
    m_priceClassHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

StreamingDistributionConfig::StreamingDistributionConfig(const XmlNode& xmlNode) : 
    m_callerReferenceHasBeenSet(false),
    m_s3OriginHasBeenSet(false),
    m_aliasesHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_loggingHasBeenSet(false),
    m_trustedSignersHasBeenSet(false),
    m_priceClass(PriceClass::NOT_SET),
    m_priceClassHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = xmlNode;
}

StreamingDistributionConfig& StreamingDistributionConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode callerReferenceNode = resultNode.FirstChild("CallerReference");
    if(!callerReferenceNode.IsNull())
    {
      m_callerReference = callerReferenceNode.GetText();
      m_callerReferenceHasBeenSet = true;
    }
    XmlNode s3OriginNode = resultNode.FirstChild("S3Origin");
    if(!s3OriginNode.IsNull())
    {
      m_s3Origin = s3OriginNode;
      m_s3OriginHasBeenSet = true;
    }
    XmlNode aliasesNode = resultNode.FirstChild("Aliases");
    if(!aliasesNode.IsNull())
    {
      m_aliases = aliasesNode;
      m_aliasesHasBeenSet = true;
    }
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = commentNode.GetText();
      m_commentHasBeenSet = true;
    }
    XmlNode loggingNode = resultNode.FirstChild("Logging");
    if(!loggingNode.IsNull())
    {
      m_logging = loggingNode;
      m_loggingHasBeenSet = true;
    }
    XmlNode trustedSignersNode = resultNode.FirstChild("TrustedSigners");
    if(!trustedSignersNode.IsNull())
    {
      m_trustedSigners = trustedSignersNode;
      m_trustedSignersHasBeenSet = true;
    }
    XmlNode priceClassNode = resultNode.FirstChild("PriceClass");
    if(!priceClassNode.IsNull())
    {
      m_priceClass = PriceClassMapper::GetPriceClassForName(StringUtils::Trim(priceClassNode.GetText().c_str()).c_str());
      m_priceClassHasBeenSet = true;
    }
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(enabledNode.GetText().c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
  }

  return *this;
}

void StreamingDistributionConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_callerReferenceHasBeenSet)
  {
   XmlNode callerReferenceNode = parentNode.CreateChildElement("CallerReference");
   callerReferenceNode.SetText(m_callerReference);
  }

  if(m_s3OriginHasBeenSet)
  {
   XmlNode s3OriginNode = parentNode.CreateChildElement("S3Origin");
   m_s3Origin.AddToNode(s3OriginNode);
  }

  if(m_aliasesHasBeenSet)
  {
   XmlNode aliasesNode = parentNode.CreateChildElement("Aliases");
   m_aliases.AddToNode(aliasesNode);
  }

  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

  if(m_loggingHasBeenSet)
  {
   XmlNode loggingNode = parentNode.CreateChildElement("Logging");
   m_logging.AddToNode(loggingNode);
  }

  if(m_trustedSignersHasBeenSet)
  {
   XmlNode trustedSignersNode = parentNode.CreateChildElement("TrustedSigners");
   m_trustedSigners.AddToNode(trustedSignersNode);
  }

  if(m_priceClassHasBeenSet)
  {
   XmlNode priceClassNode = parentNode.CreateChildElement("PriceClass");
   priceClassNode.SetText(PriceClassMapper::GetNameForPriceClass(m_priceClass));
  }

  if(m_enabledHasBeenSet)
  {
   XmlNode enabledNode = parentNode.CreateChildElement("Enabled");
   ss << std::boolalpha << m_enabled;
   enabledNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
