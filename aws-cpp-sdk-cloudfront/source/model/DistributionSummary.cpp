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

#include <aws/cloudfront/model/DistributionSummary.h>
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

DistributionSummary::DistributionSummary() : 
    m_idHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_aliasesHasBeenSet(false),
    m_originsHasBeenSet(false),
    m_originGroupsHasBeenSet(false),
    m_defaultCacheBehaviorHasBeenSet(false),
    m_cacheBehaviorsHasBeenSet(false),
    m_customErrorResponsesHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_priceClass(PriceClass::NOT_SET),
    m_priceClassHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_viewerCertificateHasBeenSet(false),
    m_restrictionsHasBeenSet(false),
    m_webACLIdHasBeenSet(false),
    m_httpVersion(HttpVersion::NOT_SET),
    m_httpVersionHasBeenSet(false),
    m_isIPV6Enabled(false),
    m_isIPV6EnabledHasBeenSet(false),
    m_aliasICPRecordalsHasBeenSet(false)
{
}

DistributionSummary::DistributionSummary(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_aliasesHasBeenSet(false),
    m_originsHasBeenSet(false),
    m_originGroupsHasBeenSet(false),
    m_defaultCacheBehaviorHasBeenSet(false),
    m_cacheBehaviorsHasBeenSet(false),
    m_customErrorResponsesHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_priceClass(PriceClass::NOT_SET),
    m_priceClassHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_viewerCertificateHasBeenSet(false),
    m_restrictionsHasBeenSet(false),
    m_webACLIdHasBeenSet(false),
    m_httpVersion(HttpVersion::NOT_SET),
    m_httpVersionHasBeenSet(false),
    m_isIPV6Enabled(false),
    m_isIPV6EnabledHasBeenSet(false),
    m_aliasICPRecordalsHasBeenSet(false)
{
  *this = xmlNode;
}

DistributionSummary& DistributionSummary::operator =(const XmlNode& xmlNode)
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
    XmlNode aliasesNode = resultNode.FirstChild("Aliases");
    if(!aliasesNode.IsNull())
    {
      m_aliases = aliasesNode;
      m_aliasesHasBeenSet = true;
    }
    XmlNode originsNode = resultNode.FirstChild("Origins");
    if(!originsNode.IsNull())
    {
      m_origins = originsNode;
      m_originsHasBeenSet = true;
    }
    XmlNode originGroupsNode = resultNode.FirstChild("OriginGroups");
    if(!originGroupsNode.IsNull())
    {
      m_originGroups = originGroupsNode;
      m_originGroupsHasBeenSet = true;
    }
    XmlNode defaultCacheBehaviorNode = resultNode.FirstChild("DefaultCacheBehavior");
    if(!defaultCacheBehaviorNode.IsNull())
    {
      m_defaultCacheBehavior = defaultCacheBehaviorNode;
      m_defaultCacheBehaviorHasBeenSet = true;
    }
    XmlNode cacheBehaviorsNode = resultNode.FirstChild("CacheBehaviors");
    if(!cacheBehaviorsNode.IsNull())
    {
      m_cacheBehaviors = cacheBehaviorsNode;
      m_cacheBehaviorsHasBeenSet = true;
    }
    XmlNode customErrorResponsesNode = resultNode.FirstChild("CustomErrorResponses");
    if(!customErrorResponsesNode.IsNull())
    {
      m_customErrorResponses = customErrorResponsesNode;
      m_customErrorResponsesHasBeenSet = true;
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
    XmlNode viewerCertificateNode = resultNode.FirstChild("ViewerCertificate");
    if(!viewerCertificateNode.IsNull())
    {
      m_viewerCertificate = viewerCertificateNode;
      m_viewerCertificateHasBeenSet = true;
    }
    XmlNode restrictionsNode = resultNode.FirstChild("Restrictions");
    if(!restrictionsNode.IsNull())
    {
      m_restrictions = restrictionsNode;
      m_restrictionsHasBeenSet = true;
    }
    XmlNode webACLIdNode = resultNode.FirstChild("WebACLId");
    if(!webACLIdNode.IsNull())
    {
      m_webACLId = webACLIdNode.GetText();
      m_webACLIdHasBeenSet = true;
    }
    XmlNode httpVersionNode = resultNode.FirstChild("HttpVersion");
    if(!httpVersionNode.IsNull())
    {
      m_httpVersion = HttpVersionMapper::GetHttpVersionForName(StringUtils::Trim(httpVersionNode.GetText().c_str()).c_str());
      m_httpVersionHasBeenSet = true;
    }
    XmlNode isIPV6EnabledNode = resultNode.FirstChild("IsIPV6Enabled");
    if(!isIPV6EnabledNode.IsNull())
    {
      m_isIPV6Enabled = StringUtils::ConvertToBool(StringUtils::Trim(isIPV6EnabledNode.GetText().c_str()).c_str());
      m_isIPV6EnabledHasBeenSet = true;
    }
    XmlNode aliasICPRecordalsNode = resultNode.FirstChild("AliasICPRecordals");
    if(!aliasICPRecordalsNode.IsNull())
    {
      XmlNode aliasICPRecordalsMember = aliasICPRecordalsNode.FirstChild("AliasICPRecordal");
      while(!aliasICPRecordalsMember.IsNull())
      {
        m_aliasICPRecordals.push_back(aliasICPRecordalsMember);
        aliasICPRecordalsMember = aliasICPRecordalsMember.NextNode("AliasICPRecordal");
      }

      m_aliasICPRecordalsHasBeenSet = true;
    }
  }

  return *this;
}

void DistributionSummary::AddToNode(XmlNode& parentNode) const
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

  if(m_aliasesHasBeenSet)
  {
   XmlNode aliasesNode = parentNode.CreateChildElement("Aliases");
   m_aliases.AddToNode(aliasesNode);
  }

  if(m_originsHasBeenSet)
  {
   XmlNode originsNode = parentNode.CreateChildElement("Origins");
   m_origins.AddToNode(originsNode);
  }

  if(m_originGroupsHasBeenSet)
  {
   XmlNode originGroupsNode = parentNode.CreateChildElement("OriginGroups");
   m_originGroups.AddToNode(originGroupsNode);
  }

  if(m_defaultCacheBehaviorHasBeenSet)
  {
   XmlNode defaultCacheBehaviorNode = parentNode.CreateChildElement("DefaultCacheBehavior");
   m_defaultCacheBehavior.AddToNode(defaultCacheBehaviorNode);
  }

  if(m_cacheBehaviorsHasBeenSet)
  {
   XmlNode cacheBehaviorsNode = parentNode.CreateChildElement("CacheBehaviors");
   m_cacheBehaviors.AddToNode(cacheBehaviorsNode);
  }

  if(m_customErrorResponsesHasBeenSet)
  {
   XmlNode customErrorResponsesNode = parentNode.CreateChildElement("CustomErrorResponses");
   m_customErrorResponses.AddToNode(customErrorResponsesNode);
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

  if(m_viewerCertificateHasBeenSet)
  {
   XmlNode viewerCertificateNode = parentNode.CreateChildElement("ViewerCertificate");
   m_viewerCertificate.AddToNode(viewerCertificateNode);
  }

  if(m_restrictionsHasBeenSet)
  {
   XmlNode restrictionsNode = parentNode.CreateChildElement("Restrictions");
   m_restrictions.AddToNode(restrictionsNode);
  }

  if(m_webACLIdHasBeenSet)
  {
   XmlNode webACLIdNode = parentNode.CreateChildElement("WebACLId");
   webACLIdNode.SetText(m_webACLId);
  }

  if(m_httpVersionHasBeenSet)
  {
   XmlNode httpVersionNode = parentNode.CreateChildElement("HttpVersion");
   httpVersionNode.SetText(HttpVersionMapper::GetNameForHttpVersion(m_httpVersion));
  }

  if(m_isIPV6EnabledHasBeenSet)
  {
   XmlNode isIPV6EnabledNode = parentNode.CreateChildElement("IsIPV6Enabled");
   ss << std::boolalpha << m_isIPV6Enabled;
   isIPV6EnabledNode.SetText(ss.str());
   ss.str("");
  }

  if(m_aliasICPRecordalsHasBeenSet)
  {
   XmlNode aliasICPRecordalsParentNode = parentNode.CreateChildElement("AliasICPRecordals");
   for(const auto& item : m_aliasICPRecordals)
   {
     XmlNode aliasICPRecordalsNode = aliasICPRecordalsParentNode.CreateChildElement("AliasICPRecordal");
     item.AddToNode(aliasICPRecordalsNode);
   }
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
