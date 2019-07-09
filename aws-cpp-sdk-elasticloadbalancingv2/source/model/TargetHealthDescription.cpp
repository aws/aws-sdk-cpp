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

#include <aws/elasticloadbalancingv2/model/TargetHealthDescription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

TargetHealthDescription::TargetHealthDescription() : 
    m_targetHasBeenSet(false),
    m_healthCheckPortHasBeenSet(false),
    m_targetHealthHasBeenSet(false)
{
}

TargetHealthDescription::TargetHealthDescription(const XmlNode& xmlNode) : 
    m_targetHasBeenSet(false),
    m_healthCheckPortHasBeenSet(false),
    m_targetHealthHasBeenSet(false)
{
  *this = xmlNode;
}

TargetHealthDescription& TargetHealthDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode targetNode = resultNode.FirstChild("Target");
    if(!targetNode.IsNull())
    {
      m_target = targetNode;
      m_targetHasBeenSet = true;
    }
    XmlNode healthCheckPortNode = resultNode.FirstChild("HealthCheckPort");
    if(!healthCheckPortNode.IsNull())
    {
      m_healthCheckPort = healthCheckPortNode.GetText();
      m_healthCheckPortHasBeenSet = true;
    }
    XmlNode targetHealthNode = resultNode.FirstChild("TargetHealth");
    if(!targetHealthNode.IsNull())
    {
      m_targetHealth = targetHealthNode;
      m_targetHealthHasBeenSet = true;
    }
  }

  return *this;
}

void TargetHealthDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_targetHasBeenSet)
  {
      Aws::StringStream targetLocationAndMemberSs;
      targetLocationAndMemberSs << location << index << locationValue << ".Target";
      m_target.OutputToStream(oStream, targetLocationAndMemberSs.str().c_str());
  }

  if(m_healthCheckPortHasBeenSet)
  {
      oStream << location << index << locationValue << ".HealthCheckPort=" << StringUtils::URLEncode(m_healthCheckPort.c_str()) << "&";
  }

  if(m_targetHealthHasBeenSet)
  {
      Aws::StringStream targetHealthLocationAndMemberSs;
      targetHealthLocationAndMemberSs << location << index << locationValue << ".TargetHealth";
      m_targetHealth.OutputToStream(oStream, targetHealthLocationAndMemberSs.str().c_str());
  }

}

void TargetHealthDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_targetHasBeenSet)
  {
      Aws::String targetLocationAndMember(location);
      targetLocationAndMember += ".Target";
      m_target.OutputToStream(oStream, targetLocationAndMember.c_str());
  }
  if(m_healthCheckPortHasBeenSet)
  {
      oStream << location << ".HealthCheckPort=" << StringUtils::URLEncode(m_healthCheckPort.c_str()) << "&";
  }
  if(m_targetHealthHasBeenSet)
  {
      Aws::String targetHealthLocationAndMember(location);
      targetHealthLocationAndMember += ".TargetHealth";
      m_targetHealth.OutputToStream(oStream, targetHealthLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
