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

#include <aws/route53/model/ResourceRecordSet.h>
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

ResourceRecordSet::ResourceRecordSet() : 
    m_nameHasBeenSet(false),
    m_type(RRType::NOT_SET),
    m_typeHasBeenSet(false),
    m_setIdentifierHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false),
    m_region(ResourceRecordSetRegion::NOT_SET),
    m_regionHasBeenSet(false),
    m_geoLocationHasBeenSet(false),
    m_failover(ResourceRecordSetFailover::NOT_SET),
    m_failoverHasBeenSet(false),
    m_multiValueAnswer(false),
    m_multiValueAnswerHasBeenSet(false),
    m_tTL(0),
    m_tTLHasBeenSet(false),
    m_resourceRecordsHasBeenSet(false),
    m_aliasTargetHasBeenSet(false),
    m_healthCheckIdHasBeenSet(false),
    m_trafficPolicyInstanceIdHasBeenSet(false)
{
}

ResourceRecordSet::ResourceRecordSet(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_type(RRType::NOT_SET),
    m_typeHasBeenSet(false),
    m_setIdentifierHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false),
    m_region(ResourceRecordSetRegion::NOT_SET),
    m_regionHasBeenSet(false),
    m_geoLocationHasBeenSet(false),
    m_failover(ResourceRecordSetFailover::NOT_SET),
    m_failoverHasBeenSet(false),
    m_multiValueAnswer(false),
    m_multiValueAnswerHasBeenSet(false),
    m_tTL(0),
    m_tTLHasBeenSet(false),
    m_resourceRecordsHasBeenSet(false),
    m_aliasTargetHasBeenSet(false),
    m_healthCheckIdHasBeenSet(false),
    m_trafficPolicyInstanceIdHasBeenSet(false)
{
  *this = xmlNode;
}

ResourceRecordSet& ResourceRecordSet::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = nameNode.GetText();
      m_nameHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = RRTypeMapper::GetRRTypeForName(StringUtils::Trim(typeNode.GetText().c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode setIdentifierNode = resultNode.FirstChild("SetIdentifier");
    if(!setIdentifierNode.IsNull())
    {
      m_setIdentifier = setIdentifierNode.GetText();
      m_setIdentifierHasBeenSet = true;
    }
    XmlNode weightNode = resultNode.FirstChild("Weight");
    if(!weightNode.IsNull())
    {
      m_weight = StringUtils::ConvertToInt64(StringUtils::Trim(weightNode.GetText().c_str()).c_str());
      m_weightHasBeenSet = true;
    }
    XmlNode regionNode = resultNode.FirstChild("Region");
    if(!regionNode.IsNull())
    {
      m_region = ResourceRecordSetRegionMapper::GetResourceRecordSetRegionForName(StringUtils::Trim(regionNode.GetText().c_str()).c_str());
      m_regionHasBeenSet = true;
    }
    XmlNode geoLocationNode = resultNode.FirstChild("GeoLocation");
    if(!geoLocationNode.IsNull())
    {
      m_geoLocation = geoLocationNode;
      m_geoLocationHasBeenSet = true;
    }
    XmlNode failoverNode = resultNode.FirstChild("Failover");
    if(!failoverNode.IsNull())
    {
      m_failover = ResourceRecordSetFailoverMapper::GetResourceRecordSetFailoverForName(StringUtils::Trim(failoverNode.GetText().c_str()).c_str());
      m_failoverHasBeenSet = true;
    }
    XmlNode multiValueAnswerNode = resultNode.FirstChild("MultiValueAnswer");
    if(!multiValueAnswerNode.IsNull())
    {
      m_multiValueAnswer = StringUtils::ConvertToBool(StringUtils::Trim(multiValueAnswerNode.GetText().c_str()).c_str());
      m_multiValueAnswerHasBeenSet = true;
    }
    XmlNode tTLNode = resultNode.FirstChild("TTL");
    if(!tTLNode.IsNull())
    {
      m_tTL = StringUtils::ConvertToInt64(StringUtils::Trim(tTLNode.GetText().c_str()).c_str());
      m_tTLHasBeenSet = true;
    }
    XmlNode resourceRecordsNode = resultNode.FirstChild("ResourceRecords");
    if(!resourceRecordsNode.IsNull())
    {
      XmlNode resourceRecordsMember = resourceRecordsNode.FirstChild("ResourceRecord");
      while(!resourceRecordsMember.IsNull())
      {
        m_resourceRecords.push_back(resourceRecordsMember);
        resourceRecordsMember = resourceRecordsMember.NextNode("ResourceRecord");
      }

      m_resourceRecordsHasBeenSet = true;
    }
    XmlNode aliasTargetNode = resultNode.FirstChild("AliasTarget");
    if(!aliasTargetNode.IsNull())
    {
      m_aliasTarget = aliasTargetNode;
      m_aliasTargetHasBeenSet = true;
    }
    XmlNode healthCheckIdNode = resultNode.FirstChild("HealthCheckId");
    if(!healthCheckIdNode.IsNull())
    {
      m_healthCheckId = healthCheckIdNode.GetText();
      m_healthCheckIdHasBeenSet = true;
    }
    XmlNode trafficPolicyInstanceIdNode = resultNode.FirstChild("TrafficPolicyInstanceId");
    if(!trafficPolicyInstanceIdNode.IsNull())
    {
      m_trafficPolicyInstanceId = trafficPolicyInstanceIdNode.GetText();
      m_trafficPolicyInstanceIdHasBeenSet = true;
    }
  }

  return *this;
}

void ResourceRecordSet::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_typeHasBeenSet)
  {
   XmlNode typeNode = parentNode.CreateChildElement("Type");
   typeNode.SetText(RRTypeMapper::GetNameForRRType(m_type));
  }

  if(m_setIdentifierHasBeenSet)
  {
   XmlNode setIdentifierNode = parentNode.CreateChildElement("SetIdentifier");
   setIdentifierNode.SetText(m_setIdentifier);
  }

  if(m_weightHasBeenSet)
  {
   XmlNode weightNode = parentNode.CreateChildElement("Weight");
   ss << m_weight;
   weightNode.SetText(ss.str());
   ss.str("");
  }

  if(m_regionHasBeenSet)
  {
   XmlNode regionNode = parentNode.CreateChildElement("Region");
   regionNode.SetText(ResourceRecordSetRegionMapper::GetNameForResourceRecordSetRegion(m_region));
  }

  if(m_geoLocationHasBeenSet)
  {
   XmlNode geoLocationNode = parentNode.CreateChildElement("GeoLocation");
   m_geoLocation.AddToNode(geoLocationNode);
  }

  if(m_failoverHasBeenSet)
  {
   XmlNode failoverNode = parentNode.CreateChildElement("Failover");
   failoverNode.SetText(ResourceRecordSetFailoverMapper::GetNameForResourceRecordSetFailover(m_failover));
  }

  if(m_multiValueAnswerHasBeenSet)
  {
   XmlNode multiValueAnswerNode = parentNode.CreateChildElement("MultiValueAnswer");
   ss << std::boolalpha << m_multiValueAnswer;
   multiValueAnswerNode.SetText(ss.str());
   ss.str("");
  }

  if(m_tTLHasBeenSet)
  {
   XmlNode tTLNode = parentNode.CreateChildElement("TTL");
   ss << m_tTL;
   tTLNode.SetText(ss.str());
   ss.str("");
  }

  if(m_resourceRecordsHasBeenSet)
  {
   XmlNode resourceRecordsParentNode = parentNode.CreateChildElement("ResourceRecords");
   for(const auto& item : m_resourceRecords)
   {
     XmlNode resourceRecordsNode = resourceRecordsParentNode.CreateChildElement("ResourceRecord");
     item.AddToNode(resourceRecordsNode);
   }
  }

  if(m_aliasTargetHasBeenSet)
  {
   XmlNode aliasTargetNode = parentNode.CreateChildElement("AliasTarget");
   m_aliasTarget.AddToNode(aliasTargetNode);
  }

  if(m_healthCheckIdHasBeenSet)
  {
   XmlNode healthCheckIdNode = parentNode.CreateChildElement("HealthCheckId");
   healthCheckIdNode.SetText(m_healthCheckId);
  }

  if(m_trafficPolicyInstanceIdHasBeenSet)
  {
   XmlNode trafficPolicyInstanceIdNode = parentNode.CreateChildElement("TrafficPolicyInstanceId");
   trafficPolicyInstanceIdNode.SetText(m_trafficPolicyInstanceId);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
