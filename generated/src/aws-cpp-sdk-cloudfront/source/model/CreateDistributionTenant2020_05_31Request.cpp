/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CreateDistributionTenant2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;


Aws::String CreateDistributionTenant2020_05_31Request::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateDistributionTenantRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://cloudfront.amazonaws.com/doc/2020-05-31/");

  Aws::StringStream ss;
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

  if(m_domainsHasBeenSet)
  {
   XmlNode domainsParentNode = parentNode.CreateChildElement("Domains");
   for(const auto& item : m_domains)
   {
     XmlNode domainsNode = domainsParentNode.CreateChildElement("DomainItem");
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

  if(m_managedCertificateRequestHasBeenSet)
  {
   XmlNode managedCertificateRequestNode = parentNode.CreateChildElement("ManagedCertificateRequest");
   m_managedCertificateRequest.AddToNode(managedCertificateRequestNode);
  }

  if(m_enabledHasBeenSet)
  {
   XmlNode enabledNode = parentNode.CreateChildElement("Enabled");
   ss << std::boolalpha << m_enabled;
   enabledNode.SetText(ss.str());
   ss.str("");
  }

  return payloadDoc.ConvertToString();
}


