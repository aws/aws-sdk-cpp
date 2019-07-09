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

#include <aws/route53/model/TrafficPolicySummary.h>
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

TrafficPolicySummary::TrafficPolicySummary() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(RRType::NOT_SET),
    m_typeHasBeenSet(false),
    m_latestVersion(0),
    m_latestVersionHasBeenSet(false),
    m_trafficPolicyCount(0),
    m_trafficPolicyCountHasBeenSet(false)
{
}

TrafficPolicySummary::TrafficPolicySummary(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(RRType::NOT_SET),
    m_typeHasBeenSet(false),
    m_latestVersion(0),
    m_latestVersionHasBeenSet(false),
    m_trafficPolicyCount(0),
    m_trafficPolicyCountHasBeenSet(false)
{
  *this = xmlNode;
}

TrafficPolicySummary& TrafficPolicySummary::operator =(const XmlNode& xmlNode)
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
    XmlNode latestVersionNode = resultNode.FirstChild("LatestVersion");
    if(!latestVersionNode.IsNull())
    {
      m_latestVersion = StringUtils::ConvertToInt32(StringUtils::Trim(latestVersionNode.GetText().c_str()).c_str());
      m_latestVersionHasBeenSet = true;
    }
    XmlNode trafficPolicyCountNode = resultNode.FirstChild("TrafficPolicyCount");
    if(!trafficPolicyCountNode.IsNull())
    {
      m_trafficPolicyCount = StringUtils::ConvertToInt32(StringUtils::Trim(trafficPolicyCountNode.GetText().c_str()).c_str());
      m_trafficPolicyCountHasBeenSet = true;
    }
  }

  return *this;
}

void TrafficPolicySummary::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

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

  if(m_latestVersionHasBeenSet)
  {
   XmlNode latestVersionNode = parentNode.CreateChildElement("LatestVersion");
   ss << m_latestVersion;
   latestVersionNode.SetText(ss.str());
   ss.str("");
  }

  if(m_trafficPolicyCountHasBeenSet)
  {
   XmlNode trafficPolicyCountNode = parentNode.CreateChildElement("TrafficPolicyCount");
   ss << m_trafficPolicyCount;
   trafficPolicyCountNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
