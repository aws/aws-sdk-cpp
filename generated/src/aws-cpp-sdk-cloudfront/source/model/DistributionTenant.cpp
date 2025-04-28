/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/DistributionTenant.h>
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

DistributionTenant::DistributionTenant(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DistributionTenant& DistributionTenant::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = Aws::Utils::Xml::DecodeEscapedXmlText(idNode.GetText());
      m_idHasBeenSet = true;
    }
    XmlNode distributionIdNode = resultNode.FirstChild("DistributionId");
    if(!distributionIdNode.IsNull())
    {
      m_distributionId = Aws::Utils::Xml::DecodeEscapedXmlText(distributionIdNode.GetText());
      m_distributionIdHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if(!arnNode.IsNull())
    {
      m_arn = Aws::Utils::Xml::DecodeEscapedXmlText(arnNode.GetText());
      m_arnHasBeenSet = true;
    }
    XmlNode domainsNode = resultNode.FirstChild("Domains");
    if(!domainsNode.IsNull())
    {
      XmlNode domainsMember = domainsNode.FirstChild("member");
      m_domainsHasBeenSet = !domainsMember.IsNull();
      while(!domainsMember.IsNull())
      {
        m_domains.push_back(domainsMember);
        domainsMember = domainsMember.NextNode("member");
      }

      m_domainsHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      m_tags = tagsNode;
      m_tagsHasBeenSet = true;
    }
    XmlNode customizationsNode = resultNode.FirstChild("Customizations");
    if(!customizationsNode.IsNull())
    {
      m_customizations = customizationsNode;
      m_customizationsHasBeenSet = true;
    }
    XmlNode parametersNode = resultNode.FirstChild("Parameters");
    if(!parametersNode.IsNull())
    {
      XmlNode parametersMember = parametersNode.FirstChild("member");
      m_parametersHasBeenSet = !parametersMember.IsNull();
      while(!parametersMember.IsNull())
      {
        m_parameters.push_back(parametersMember);
        parametersMember = parametersMember.NextNode("member");
      }

      m_parametersHasBeenSet = true;
    }
    XmlNode connectionGroupIdNode = resultNode.FirstChild("ConnectionGroupId");
    if(!connectionGroupIdNode.IsNull())
    {
      m_connectionGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(connectionGroupIdNode.GetText());
      m_connectionGroupIdHasBeenSet = true;
    }
    XmlNode createdTimeNode = resultNode.FirstChild("CreatedTime");
    if(!createdTimeNode.IsNull())
    {
      m_createdTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdTimeHasBeenSet = true;
    }
    XmlNode lastModifiedTimeNode = resultNode.FirstChild("LastModifiedTime");
    if(!lastModifiedTimeNode.IsNull())
    {
      m_lastModifiedTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastModifiedTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastModifiedTimeHasBeenSet = true;
    }
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void DistributionTenant::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_distributionIdHasBeenSet)
  {
   XmlNode distributionIdNode = parentNode.CreateChildElement("DistributionId");
   distributionIdNode.SetText(m_distributionId);
  }

  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_arnHasBeenSet)
  {
   XmlNode arnNode = parentNode.CreateChildElement("Arn");
   arnNode.SetText(m_arn);
  }

  if(m_domainsHasBeenSet)
  {
   XmlNode domainsParentNode = parentNode.CreateChildElement("Domains");
   for(const auto& item : m_domains)
   {
     XmlNode domainsNode = domainsParentNode.CreateChildElement("DomainResult");
     item.AddToNode(domainsNode);
   }
  }

  if(m_tagsHasBeenSet)
  {
   XmlNode tagsNode = parentNode.CreateChildElement("Tags");
   m_tags.AddToNode(tagsNode);
  }

  if(m_customizationsHasBeenSet)
  {
   XmlNode customizationsNode = parentNode.CreateChildElement("Customizations");
   m_customizations.AddToNode(customizationsNode);
  }

  if(m_parametersHasBeenSet)
  {
   XmlNode parametersParentNode = parentNode.CreateChildElement("Parameters");
   for(const auto& item : m_parameters)
   {
     XmlNode parametersNode = parametersParentNode.CreateChildElement("Parameter");
     item.AddToNode(parametersNode);
   }
  }

  if(m_connectionGroupIdHasBeenSet)
  {
   XmlNode connectionGroupIdNode = parentNode.CreateChildElement("ConnectionGroupId");
   connectionGroupIdNode.SetText(m_connectionGroupId);
  }

  if(m_createdTimeHasBeenSet)
  {
   XmlNode createdTimeNode = parentNode.CreateChildElement("CreatedTime");
   createdTimeNode.SetText(m_createdTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   XmlNode lastModifiedTimeNode = parentNode.CreateChildElement("LastModifiedTime");
   lastModifiedTimeNode.SetText(m_lastModifiedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_enabledHasBeenSet)
  {
   XmlNode enabledNode = parentNode.CreateChildElement("Enabled");
   ss << std::boolalpha << m_enabled;
   enabledNode.SetText(ss.str());
   ss.str("");
  }

  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(m_status);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
