/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/DomainConflict.h>
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

DomainConflict::DomainConflict(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DomainConflict& DomainConflict::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode domainNode = resultNode.FirstChild("Domain");
    if(!domainNode.IsNull())
    {
      m_domain = Aws::Utils::Xml::DecodeEscapedXmlText(domainNode.GetText());
      m_domainHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("ResourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = DistributionResourceTypeMapper::GetDistributionResourceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText()).c_str()));
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode resourceIdNode = resultNode.FirstChild("ResourceId");
    if(!resourceIdNode.IsNull())
    {
      m_resourceId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceIdNode.GetText());
      m_resourceIdHasBeenSet = true;
    }
    XmlNode accountIdNode = resultNode.FirstChild("AccountId");
    if(!accountIdNode.IsNull())
    {
      m_accountId = Aws::Utils::Xml::DecodeEscapedXmlText(accountIdNode.GetText());
      m_accountIdHasBeenSet = true;
    }
  }

  return *this;
}

void DomainConflict::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_domainHasBeenSet)
  {
   XmlNode domainNode = parentNode.CreateChildElement("Domain");
   domainNode.SetText(m_domain);
  }

  if(m_resourceTypeHasBeenSet)
  {
   XmlNode resourceTypeNode = parentNode.CreateChildElement("ResourceType");
   resourceTypeNode.SetText(DistributionResourceTypeMapper::GetNameForDistributionResourceType(m_resourceType));
  }

  if(m_resourceIdHasBeenSet)
  {
   XmlNode resourceIdNode = parentNode.CreateChildElement("ResourceId");
   resourceIdNode.SetText(m_resourceId);
  }

  if(m_accountIdHasBeenSet)
  {
   XmlNode accountIdNode = parentNode.CreateChildElement("AccountId");
   accountIdNode.SetText(m_accountId);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
