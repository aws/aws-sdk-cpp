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

#include <aws/cloudfront/model/StreamingDistributionSummary.h>
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

StreamingDistributionSummary::StreamingDistributionSummary() : 
    m_idHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_s3OriginHasBeenSet(false),
    m_aliasesHasBeenSet(false),
    m_trustedSignersHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_priceClass(PriceClass::NOT_SET),
    m_priceClassHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

StreamingDistributionSummary::StreamingDistributionSummary(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_s3OriginHasBeenSet(false),
    m_aliasesHasBeenSet(false),
    m_trustedSignersHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_priceClass(PriceClass::NOT_SET),
    m_priceClassHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = xmlNode;
}

StreamingDistributionSummary& StreamingDistributionSummary::operator =(const XmlNode& xmlNode)
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
    XmlNode aRNNode = resultNode.FirstChild("ARN");
    if(!aRNNode.IsNull())
    {
      m_aRN = aRNNode.GetText();
      m_aRNHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
      m_statusHasBeenSet = true;
    }
    XmlNode lastModifiedTimeNode = resultNode.FirstChild("LastModifiedTime");
    if(!lastModifiedTimeNode.IsNull())
    {
      m_lastModifiedTime = DateTime(StringUtils::Trim(lastModifiedTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_lastModifiedTimeHasBeenSet = true;
    }
    XmlNode domainNameNode = resultNode.FirstChild("DomainName");
    if(!domainNameNode.IsNull())
    {
      m_domainName = domainNameNode.GetText();
      m_domainNameHasBeenSet = true;
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
    XmlNode trustedSignersNode = resultNode.FirstChild("TrustedSigners");
    if(!trustedSignersNode.IsNull())
    {
      m_trustedSigners = trustedSignersNode;
      m_trustedSignersHasBeenSet = true;
    }
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = commentNode.GetText();
      m_commentHasBeenSet = true;
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

void StreamingDistributionSummary::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_aRNHasBeenSet)
  {
   XmlNode aRNNode = parentNode.CreateChildElement("ARN");
   aRNNode.SetText(m_aRN);
  }

  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(m_status);
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   XmlNode lastModifiedTimeNode = parentNode.CreateChildElement("LastModifiedTime");
   lastModifiedTimeNode.SetText(m_lastModifiedTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_domainNameHasBeenSet)
  {
   XmlNode domainNameNode = parentNode.CreateChildElement("DomainName");
   domainNameNode.SetText(m_domainName);
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

  if(m_trustedSignersHasBeenSet)
  {
   XmlNode trustedSignersNode = parentNode.CreateChildElement("TrustedSigners");
   m_trustedSigners.AddToNode(trustedSignersNode);
  }

  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
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
