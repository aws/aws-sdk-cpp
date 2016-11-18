/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/route53/model/UpdateHealthCheckRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

UpdateHealthCheckRequest::UpdateHealthCheckRequest() : 
    m_healthCheckIdHasBeenSet(false),
    m_healthCheckVersion(0),
    m_healthCheckVersionHasBeenSet(false),
    m_iPAddressHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_resourcePathHasBeenSet(false),
    m_fullyQualifiedDomainNameHasBeenSet(false),
    m_searchStringHasBeenSet(false),
    m_failureThreshold(0),
    m_failureThresholdHasBeenSet(false),
    m_inverted(false),
    m_invertedHasBeenSet(false),
    m_healthThreshold(0),
    m_healthThresholdHasBeenSet(false),
    m_childHealthChecksHasBeenSet(false),
    m_enableSNI(false),
    m_enableSNIHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_alarmIdentifierHasBeenSet(false),
    m_insufficientDataHealthStatus(InsufficientDataHealthStatus::NOT_SET),
    m_insufficientDataHealthStatusHasBeenSet(false)
{
}

Aws::String UpdateHealthCheckRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("UpdateHealthCheckRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
  if(m_healthCheckVersionHasBeenSet)
  {
   XmlNode healthCheckVersionNode = parentNode.CreateChildElement("HealthCheckVersion");
  ss << m_healthCheckVersion;
   healthCheckVersionNode.SetText(ss.str());
  ss.str("");
  }

  if(m_iPAddressHasBeenSet)
  {
   XmlNode iPAddressNode = parentNode.CreateChildElement("IPAddress");
   iPAddressNode.SetText(m_iPAddress);
  }

  if(m_portHasBeenSet)
  {
   XmlNode portNode = parentNode.CreateChildElement("Port");
  ss << m_port;
   portNode.SetText(ss.str());
  ss.str("");
  }

  if(m_resourcePathHasBeenSet)
  {
   XmlNode resourcePathNode = parentNode.CreateChildElement("ResourcePath");
   resourcePathNode.SetText(m_resourcePath);
  }

  if(m_fullyQualifiedDomainNameHasBeenSet)
  {
   XmlNode fullyQualifiedDomainNameNode = parentNode.CreateChildElement("FullyQualifiedDomainName");
   fullyQualifiedDomainNameNode.SetText(m_fullyQualifiedDomainName);
  }

  if(m_searchStringHasBeenSet)
  {
   XmlNode searchStringNode = parentNode.CreateChildElement("SearchString");
   searchStringNode.SetText(m_searchString);
  }

  if(m_failureThresholdHasBeenSet)
  {
   XmlNode failureThresholdNode = parentNode.CreateChildElement("FailureThreshold");
  ss << m_failureThreshold;
   failureThresholdNode.SetText(ss.str());
  ss.str("");
  }

  if(m_invertedHasBeenSet)
  {
   XmlNode invertedNode = parentNode.CreateChildElement("Inverted");
  ss << m_inverted;
   invertedNode.SetText(ss.str());
  ss.str("");
  }

  if(m_healthThresholdHasBeenSet)
  {
   XmlNode healthThresholdNode = parentNode.CreateChildElement("HealthThreshold");
  ss << m_healthThreshold;
   healthThresholdNode.SetText(ss.str());
  ss.str("");
  }

  if(m_childHealthChecksHasBeenSet)
  {
   XmlNode childHealthChecksParentNode = parentNode.CreateChildElement("ChildHealthChecks");
   for(const auto& item : m_childHealthChecks)
   {
     XmlNode childHealthChecksNode = childHealthChecksParentNode.CreateChildElement("HealthCheckId");
     childHealthChecksNode.SetText(item);
   }
  }

  if(m_enableSNIHasBeenSet)
  {
   XmlNode enableSNINode = parentNode.CreateChildElement("EnableSNI");
  ss << m_enableSNI;
   enableSNINode.SetText(ss.str());
  ss.str("");
  }

  if(m_regionsHasBeenSet)
  {
   XmlNode regionsParentNode = parentNode.CreateChildElement("Regions");
   for(const auto& item : m_regions)
   {
     XmlNode regionsNode = regionsParentNode.CreateChildElement("HealthCheckRegion");
     regionsNode.SetText(HealthCheckRegionMapper::GetNameForHealthCheckRegion(item));
   }
  }

  if(m_alarmIdentifierHasBeenSet)
  {
   XmlNode alarmIdentifierNode = parentNode.CreateChildElement("AlarmIdentifier");
   m_alarmIdentifier.AddToNode(alarmIdentifierNode);
  }

  if(m_insufficientDataHealthStatusHasBeenSet)
  {
   XmlNode insufficientDataHealthStatusNode = parentNode.CreateChildElement("InsufficientDataHealthStatus");
   insufficientDataHealthStatusNode.SetText(InsufficientDataHealthStatusMapper::GetNameForInsufficientDataHealthStatus(m_insufficientDataHealthStatus));
  }

  return payloadDoc.ConvertToString();
}


