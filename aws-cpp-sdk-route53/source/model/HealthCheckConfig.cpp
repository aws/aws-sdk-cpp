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

#include <aws/route53/model/HealthCheckConfig.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53
{
namespace Model
{

HealthCheckConfig::HealthCheckConfig() : 
    m_iPAddressHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_type(HealthCheckType::NOT_SET),
    m_typeHasBeenSet(false),
    m_resourcePathHasBeenSet(false),
    m_fullyQualifiedDomainNameHasBeenSet(false),
    m_searchStringHasBeenSet(false),
    m_requestInterval(0),
    m_requestIntervalHasBeenSet(false),
    m_failureThreshold(0),
    m_failureThresholdHasBeenSet(false),
    m_measureLatency(false),
    m_measureLatencyHasBeenSet(false),
    m_inverted(false),
    m_invertedHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false),
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

HealthCheckConfig::HealthCheckConfig(const XmlNode& xmlNode) : 
    m_iPAddressHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_type(HealthCheckType::NOT_SET),
    m_typeHasBeenSet(false),
    m_resourcePathHasBeenSet(false),
    m_fullyQualifiedDomainNameHasBeenSet(false),
    m_searchStringHasBeenSet(false),
    m_requestInterval(0),
    m_requestIntervalHasBeenSet(false),
    m_failureThreshold(0),
    m_failureThresholdHasBeenSet(false),
    m_measureLatency(false),
    m_measureLatencyHasBeenSet(false),
    m_inverted(false),
    m_invertedHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false),
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
  *this = xmlNode;
}

HealthCheckConfig& HealthCheckConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode iPAddressNode = resultNode.FirstChild("IPAddress");
    if(!iPAddressNode.IsNull())
    {
      m_iPAddress = iPAddressNode.GetText();
      m_iPAddressHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(portNode.GetText().c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = HealthCheckTypeMapper::GetHealthCheckTypeForName(StringUtils::Trim(typeNode.GetText().c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode resourcePathNode = resultNode.FirstChild("ResourcePath");
    if(!resourcePathNode.IsNull())
    {
      m_resourcePath = resourcePathNode.GetText();
      m_resourcePathHasBeenSet = true;
    }
    XmlNode fullyQualifiedDomainNameNode = resultNode.FirstChild("FullyQualifiedDomainName");
    if(!fullyQualifiedDomainNameNode.IsNull())
    {
      m_fullyQualifiedDomainName = fullyQualifiedDomainNameNode.GetText();
      m_fullyQualifiedDomainNameHasBeenSet = true;
    }
    XmlNode searchStringNode = resultNode.FirstChild("SearchString");
    if(!searchStringNode.IsNull())
    {
      m_searchString = searchStringNode.GetText();
      m_searchStringHasBeenSet = true;
    }
    XmlNode requestIntervalNode = resultNode.FirstChild("RequestInterval");
    if(!requestIntervalNode.IsNull())
    {
      m_requestInterval = StringUtils::ConvertToInt32(StringUtils::Trim(requestIntervalNode.GetText().c_str()).c_str());
      m_requestIntervalHasBeenSet = true;
    }
    XmlNode failureThresholdNode = resultNode.FirstChild("FailureThreshold");
    if(!failureThresholdNode.IsNull())
    {
      m_failureThreshold = StringUtils::ConvertToInt32(StringUtils::Trim(failureThresholdNode.GetText().c_str()).c_str());
      m_failureThresholdHasBeenSet = true;
    }
    XmlNode measureLatencyNode = resultNode.FirstChild("MeasureLatency");
    if(!measureLatencyNode.IsNull())
    {
      m_measureLatency = StringUtils::ConvertToBool(StringUtils::Trim(measureLatencyNode.GetText().c_str()).c_str());
      m_measureLatencyHasBeenSet = true;
    }
    XmlNode invertedNode = resultNode.FirstChild("Inverted");
    if(!invertedNode.IsNull())
    {
      m_inverted = StringUtils::ConvertToBool(StringUtils::Trim(invertedNode.GetText().c_str()).c_str());
      m_invertedHasBeenSet = true;
    }
    XmlNode disabledNode = resultNode.FirstChild("Disabled");
    if(!disabledNode.IsNull())
    {
      m_disabled = StringUtils::ConvertToBool(StringUtils::Trim(disabledNode.GetText().c_str()).c_str());
      m_disabledHasBeenSet = true;
    }
    XmlNode healthThresholdNode = resultNode.FirstChild("HealthThreshold");
    if(!healthThresholdNode.IsNull())
    {
      m_healthThreshold = StringUtils::ConvertToInt32(StringUtils::Trim(healthThresholdNode.GetText().c_str()).c_str());
      m_healthThresholdHasBeenSet = true;
    }
    XmlNode childHealthChecksNode = resultNode.FirstChild("ChildHealthChecks");
    if(!childHealthChecksNode.IsNull())
    {
      XmlNode childHealthChecksMember = childHealthChecksNode.FirstChild("ChildHealthCheck");
      while(!childHealthChecksMember.IsNull())
      {
        m_childHealthChecks.push_back(childHealthChecksMember.GetText());
        childHealthChecksMember = childHealthChecksMember.NextNode("ChildHealthCheck");
      }

      m_childHealthChecksHasBeenSet = true;
    }
    XmlNode enableSNINode = resultNode.FirstChild("EnableSNI");
    if(!enableSNINode.IsNull())
    {
      m_enableSNI = StringUtils::ConvertToBool(StringUtils::Trim(enableSNINode.GetText().c_str()).c_str());
      m_enableSNIHasBeenSet = true;
    }
    XmlNode regionsNode = resultNode.FirstChild("Regions");
    if(!regionsNode.IsNull())
    {
      XmlNode regionsMember = regionsNode.FirstChild("Region");
      while(!regionsMember.IsNull())
      {
        m_regions.push_back(HealthCheckRegionMapper::GetHealthCheckRegionForName(StringUtils::Trim(regionsMember.GetText().c_str())));
        regionsMember = regionsMember.NextNode("Region");
      }

      m_regionsHasBeenSet = true;
    }
    XmlNode alarmIdentifierNode = resultNode.FirstChild("AlarmIdentifier");
    if(!alarmIdentifierNode.IsNull())
    {
      m_alarmIdentifier = alarmIdentifierNode;
      m_alarmIdentifierHasBeenSet = true;
    }
    XmlNode insufficientDataHealthStatusNode = resultNode.FirstChild("InsufficientDataHealthStatus");
    if(!insufficientDataHealthStatusNode.IsNull())
    {
      m_insufficientDataHealthStatus = InsufficientDataHealthStatusMapper::GetInsufficientDataHealthStatusForName(StringUtils::Trim(insufficientDataHealthStatusNode.GetText().c_str()).c_str());
      m_insufficientDataHealthStatusHasBeenSet = true;
    }
  }

  return *this;
}

void HealthCheckConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
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

  if(m_typeHasBeenSet)
  {
   XmlNode typeNode = parentNode.CreateChildElement("Type");
   typeNode.SetText(HealthCheckTypeMapper::GetNameForHealthCheckType(m_type));
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

  if(m_requestIntervalHasBeenSet)
  {
   XmlNode requestIntervalNode = parentNode.CreateChildElement("RequestInterval");
   ss << m_requestInterval;
   requestIntervalNode.SetText(ss.str());
   ss.str("");
  }

  if(m_failureThresholdHasBeenSet)
  {
   XmlNode failureThresholdNode = parentNode.CreateChildElement("FailureThreshold");
   ss << m_failureThreshold;
   failureThresholdNode.SetText(ss.str());
   ss.str("");
  }

  if(m_measureLatencyHasBeenSet)
  {
   XmlNode measureLatencyNode = parentNode.CreateChildElement("MeasureLatency");
   ss << std::boolalpha << m_measureLatency;
   measureLatencyNode.SetText(ss.str());
   ss.str("");
  }

  if(m_invertedHasBeenSet)
  {
   XmlNode invertedNode = parentNode.CreateChildElement("Inverted");
   ss << std::boolalpha << m_inverted;
   invertedNode.SetText(ss.str());
   ss.str("");
  }

  if(m_disabledHasBeenSet)
  {
   XmlNode disabledNode = parentNode.CreateChildElement("Disabled");
   ss << std::boolalpha << m_disabled;
   disabledNode.SetText(ss.str());
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
   ss << std::boolalpha << m_enableSNI;
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

}

} // namespace Model
} // namespace Route53
} // namespace Aws
