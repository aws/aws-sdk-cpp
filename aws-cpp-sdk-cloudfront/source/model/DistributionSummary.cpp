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
#include <aws/cloudfront/model/DistributionSummary.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

DistributionSummary::DistributionSummary() : 
    m_lastModifiedTime(0.0),
    m_enabled(false)
{
}

DistributionSummary::DistributionSummary(const XmlNode& xmlNode) : 
    m_lastModifiedTime(0.0),
    m_enabled(false)
{
  *this = xmlNode;
}

DistributionSummary& DistributionSummary::operator =(const XmlNode& xmlNode)
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
    XmlNode aliasesNode = resultNode.FirstChild("Aliases");
    m_aliases = aliasesNode;
    XmlNode originsNode = resultNode.FirstChild("Origins");
    m_origins = originsNode;
    XmlNode defaultCacheBehaviorNode = resultNode.FirstChild("DefaultCacheBehavior");
    m_defaultCacheBehavior = defaultCacheBehaviorNode;
    XmlNode cacheBehaviorsNode = resultNode.FirstChild("CacheBehaviors");
    m_cacheBehaviors = cacheBehaviorsNode;
    XmlNode customErrorResponsesNode = resultNode.FirstChild("CustomErrorResponses");
    m_customErrorResponses = customErrorResponsesNode;
    XmlNode commentNode = resultNode.FirstChild("Comment");
    m_comment = StringUtils::Trim(commentNode.GetText().c_str());
    XmlNode priceClassNode = resultNode.FirstChild("PriceClass");
    m_priceClass = PriceClassMapper::GetPriceClassForName(StringUtils::Trim(priceClassNode.GetText().c_str()).c_str());
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(enabledNode.GetText().c_str()).c_str());
    XmlNode viewerCertificateNode = resultNode.FirstChild("ViewerCertificate");
    m_viewerCertificate = viewerCertificateNode;
    XmlNode restrictionsNode = resultNode.FirstChild("Restrictions");
    m_restrictions = restrictionsNode;
  }

  return *this;
}

void DistributionSummary::AddToNode(XmlNode& parentNode) const
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
  XmlNode aliasesNode = parentNode.CreateChildElement("Aliases");
  m_aliases.AddToNode(aliasesNode);
  XmlNode originsNode = parentNode.CreateChildElement("Origins");
  m_origins.AddToNode(originsNode);
  XmlNode defaultCacheBehaviorNode = parentNode.CreateChildElement("DefaultCacheBehavior");
  m_defaultCacheBehavior.AddToNode(defaultCacheBehaviorNode);
  XmlNode cacheBehaviorsNode = parentNode.CreateChildElement("CacheBehaviors");
  m_cacheBehaviors.AddToNode(cacheBehaviorsNode);
  XmlNode customErrorResponsesNode = parentNode.CreateChildElement("CustomErrorResponses");
  m_customErrorResponses.AddToNode(customErrorResponsesNode);
  XmlNode commentNode = parentNode.CreateChildElement("Comment");
  commentNode.SetText(m_comment);
  XmlNode priceClassNode = parentNode.CreateChildElement("PriceClass");
  priceClassNode.SetText(PriceClassMapper::GetNameForPriceClass(m_priceClass));
  XmlNode enabledNode = parentNode.CreateChildElement("Enabled");
  ss << m_enabled;
  enabledNode.SetText(ss.str());
  ss.str("");
  XmlNode viewerCertificateNode = parentNode.CreateChildElement("ViewerCertificate");
  m_viewerCertificate.AddToNode(viewerCertificateNode);
  XmlNode restrictionsNode = parentNode.CreateChildElement("Restrictions");
  m_restrictions.AddToNode(restrictionsNode);
}
