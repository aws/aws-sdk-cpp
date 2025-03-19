/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

TargetHealthDescription::TargetHealthDescription(const XmlNode& xmlNode)
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
      m_healthCheckPort = Aws::Utils::Xml::DecodeEscapedXmlText(healthCheckPortNode.GetText());
      m_healthCheckPortHasBeenSet = true;
    }
    XmlNode targetHealthNode = resultNode.FirstChild("TargetHealth");
    if(!targetHealthNode.IsNull())
    {
      m_targetHealth = targetHealthNode;
      m_targetHealthHasBeenSet = true;
    }
    XmlNode anomalyDetectionNode = resultNode.FirstChild("AnomalyDetection");
    if(!anomalyDetectionNode.IsNull())
    {
      m_anomalyDetection = anomalyDetectionNode;
      m_anomalyDetectionHasBeenSet = true;
    }
    XmlNode administrativeOverrideNode = resultNode.FirstChild("AdministrativeOverride");
    if(!administrativeOverrideNode.IsNull())
    {
      m_administrativeOverride = administrativeOverrideNode;
      m_administrativeOverrideHasBeenSet = true;
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

  if(m_anomalyDetectionHasBeenSet)
  {
      Aws::StringStream anomalyDetectionLocationAndMemberSs;
      anomalyDetectionLocationAndMemberSs << location << index << locationValue << ".AnomalyDetection";
      m_anomalyDetection.OutputToStream(oStream, anomalyDetectionLocationAndMemberSs.str().c_str());
  }

  if(m_administrativeOverrideHasBeenSet)
  {
      Aws::StringStream administrativeOverrideLocationAndMemberSs;
      administrativeOverrideLocationAndMemberSs << location << index << locationValue << ".AdministrativeOverride";
      m_administrativeOverride.OutputToStream(oStream, administrativeOverrideLocationAndMemberSs.str().c_str());
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
  if(m_anomalyDetectionHasBeenSet)
  {
      Aws::String anomalyDetectionLocationAndMember(location);
      anomalyDetectionLocationAndMember += ".AnomalyDetection";
      m_anomalyDetection.OutputToStream(oStream, anomalyDetectionLocationAndMember.c_str());
  }
  if(m_administrativeOverrideHasBeenSet)
  {
      Aws::String administrativeOverrideLocationAndMember(location);
      administrativeOverrideLocationAndMember += ".AdministrativeOverride";
      m_administrativeOverride.OutputToStream(oStream, administrativeOverrideLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
