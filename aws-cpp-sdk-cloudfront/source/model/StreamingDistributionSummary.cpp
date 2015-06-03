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
#include <aws/cloudfront/model/StreamingDistributionSummary.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

StreamingDistributionSummary::StreamingDistributionSummary() : 
    m_lastModifiedTime(0.0),
    m_enabled(false)
{
}

StreamingDistributionSummary::StreamingDistributionSummary(const XmlNode& xmlNode) : 
    m_lastModifiedTime(0.0),
    m_enabled(false)
{
  *this = xmlNode;
}

StreamingDistributionSummary& StreamingDistributionSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    m_id = StringUtils::Trim(idNode.GetText().c_str());
    XmlNode statusNode = resultNode.FirstChild("Status");
    m_status = StringUtils::Trim(statusNode.GetText().c_str());
    XmlNode lastModifiedTimeNode = resultNode.FirstChild("LastModifiedTime");
    m_lastModifiedTime = StringUtils::ConvertToDouble(StringUtils::Trim(lastModifiedTimeNode.GetText().c_str()).c_str());
    XmlNode domainNameNode = resultNode.FirstChild("DomainName");
    m_domainName = StringUtils::Trim(domainNameNode.GetText().c_str());
    XmlNode s3OriginNode = resultNode.FirstChild("S3Origin");
    m_s3Origin = s3OriginNode;
    XmlNode aliasesNode = resultNode.FirstChild("Aliases");
    m_aliases = aliasesNode;
    XmlNode trustedSignersNode = resultNode.FirstChild("TrustedSigners");
    m_trustedSigners = trustedSignersNode;
    XmlNode commentNode = resultNode.FirstChild("Comment");
    m_comment = StringUtils::Trim(commentNode.GetText().c_str());
    XmlNode priceClassNode = resultNode.FirstChild("PriceClass");
    m_priceClass = PriceClassMapper::GetPriceClassForName(StringUtils::Trim(priceClassNode.GetText().c_str()).c_str());
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(enabledNode.GetText().c_str()).c_str());
  }

  return *this;
}

void StreamingDistributionSummary::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  XmlNode idNode = parentNode.CreateChildElement("Id");
  idNode.SetText(m_id);
  XmlNode statusNode = parentNode.CreateChildElement("Status");
  statusNode.SetText(m_status);
  XmlNode lastModifiedTimeNode = parentNode.CreateChildElement("LastModifiedTime");
  ss << m_lastModifiedTime;
  lastModifiedTimeNode.SetText(ss.str());
  ss.str("");
  XmlNode domainNameNode = parentNode.CreateChildElement("DomainName");
  domainNameNode.SetText(m_domainName);
  XmlNode s3OriginNode = parentNode.CreateChildElement("S3Origin");
  m_s3Origin.AddToNode(s3OriginNode);
  XmlNode aliasesNode = parentNode.CreateChildElement("Aliases");
  m_aliases.AddToNode(aliasesNode);
  XmlNode trustedSignersNode = parentNode.CreateChildElement("TrustedSigners");
  m_trustedSigners.AddToNode(trustedSignersNode);
  XmlNode commentNode = parentNode.CreateChildElement("Comment");
  commentNode.SetText(m_comment);
  XmlNode priceClassNode = parentNode.CreateChildElement("PriceClass");
  priceClassNode.SetText(PriceClassMapper::GetNameForPriceClass(m_priceClass));
  XmlNode enabledNode = parentNode.CreateChildElement("Enabled");
  ss << m_enabled;
  enabledNode.SetText(ss.str());
  ss.str("");
}
