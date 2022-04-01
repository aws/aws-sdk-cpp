/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/AutoScalingInstanceDetails.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

AutoScalingInstanceDetails::AutoScalingInstanceDetails() : 
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_lifecycleStateHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_launchConfigurationNameHasBeenSet(false),
    m_launchTemplateHasBeenSet(false),
    m_protectedFromScaleIn(false),
    m_protectedFromScaleInHasBeenSet(false),
    m_weightedCapacityHasBeenSet(false)
{
}

AutoScalingInstanceDetails::AutoScalingInstanceDetails(const XmlNode& xmlNode) : 
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_lifecycleStateHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_launchConfigurationNameHasBeenSet(false),
    m_launchTemplateHasBeenSet(false),
    m_protectedFromScaleIn(false),
    m_protectedFromScaleInHasBeenSet(false),
    m_weightedCapacityHasBeenSet(false)
{
  *this = xmlNode;
}

AutoScalingInstanceDetails& AutoScalingInstanceDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdNode = resultNode.FirstChild("InstanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("InstanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode autoScalingGroupNameNode = resultNode.FirstChild("AutoScalingGroupName");
    if(!autoScalingGroupNameNode.IsNull())
    {
      m_autoScalingGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(autoScalingGroupNameNode.GetText());
      m_autoScalingGroupNameHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("AvailabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode lifecycleStateNode = resultNode.FirstChild("LifecycleState");
    if(!lifecycleStateNode.IsNull())
    {
      m_lifecycleState = Aws::Utils::Xml::DecodeEscapedXmlText(lifecycleStateNode.GetText());
      m_lifecycleStateHasBeenSet = true;
    }
    XmlNode healthStatusNode = resultNode.FirstChild("HealthStatus");
    if(!healthStatusNode.IsNull())
    {
      m_healthStatus = Aws::Utils::Xml::DecodeEscapedXmlText(healthStatusNode.GetText());
      m_healthStatusHasBeenSet = true;
    }
    XmlNode launchConfigurationNameNode = resultNode.FirstChild("LaunchConfigurationName");
    if(!launchConfigurationNameNode.IsNull())
    {
      m_launchConfigurationName = Aws::Utils::Xml::DecodeEscapedXmlText(launchConfigurationNameNode.GetText());
      m_launchConfigurationNameHasBeenSet = true;
    }
    XmlNode launchTemplateNode = resultNode.FirstChild("LaunchTemplate");
    if(!launchTemplateNode.IsNull())
    {
      m_launchTemplate = launchTemplateNode;
      m_launchTemplateHasBeenSet = true;
    }
    XmlNode protectedFromScaleInNode = resultNode.FirstChild("ProtectedFromScaleIn");
    if(!protectedFromScaleInNode.IsNull())
    {
      m_protectedFromScaleIn = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(protectedFromScaleInNode.GetText()).c_str()).c_str());
      m_protectedFromScaleInHasBeenSet = true;
    }
    XmlNode weightedCapacityNode = resultNode.FirstChild("WeightedCapacity");
    if(!weightedCapacityNode.IsNull())
    {
      m_weightedCapacity = Aws::Utils::Xml::DecodeEscapedXmlText(weightedCapacityNode.GetText());
      m_weightedCapacityHasBeenSet = true;
    }
  }

  return *this;
}

void AutoScalingInstanceDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_autoScalingGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_lifecycleStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".LifecycleState=" << StringUtils::URLEncode(m_lifecycleState.c_str()) << "&";
  }

  if(m_healthStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".HealthStatus=" << StringUtils::URLEncode(m_healthStatus.c_str()) << "&";
  }

  if(m_launchConfigurationNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".LaunchConfigurationName=" << StringUtils::URLEncode(m_launchConfigurationName.c_str()) << "&";
  }

  if(m_launchTemplateHasBeenSet)
  {
      Aws::StringStream launchTemplateLocationAndMemberSs;
      launchTemplateLocationAndMemberSs << location << index << locationValue << ".LaunchTemplate";
      m_launchTemplate.OutputToStream(oStream, launchTemplateLocationAndMemberSs.str().c_str());
  }

  if(m_protectedFromScaleInHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProtectedFromScaleIn=" << std::boolalpha << m_protectedFromScaleIn << "&";
  }

  if(m_weightedCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".WeightedCapacity=" << StringUtils::URLEncode(m_weightedCapacity.c_str()) << "&";
  }

}

void AutoScalingInstanceDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
  if(m_autoScalingGroupNameHasBeenSet)
  {
      oStream << location << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_lifecycleStateHasBeenSet)
  {
      oStream << location << ".LifecycleState=" << StringUtils::URLEncode(m_lifecycleState.c_str()) << "&";
  }
  if(m_healthStatusHasBeenSet)
  {
      oStream << location << ".HealthStatus=" << StringUtils::URLEncode(m_healthStatus.c_str()) << "&";
  }
  if(m_launchConfigurationNameHasBeenSet)
  {
      oStream << location << ".LaunchConfigurationName=" << StringUtils::URLEncode(m_launchConfigurationName.c_str()) << "&";
  }
  if(m_launchTemplateHasBeenSet)
  {
      Aws::String launchTemplateLocationAndMember(location);
      launchTemplateLocationAndMember += ".LaunchTemplate";
      m_launchTemplate.OutputToStream(oStream, launchTemplateLocationAndMember.c_str());
  }
  if(m_protectedFromScaleInHasBeenSet)
  {
      oStream << location << ".ProtectedFromScaleIn=" << std::boolalpha << m_protectedFromScaleIn << "&";
  }
  if(m_weightedCapacityHasBeenSet)
  {
      oStream << location << ".WeightedCapacity=" << StringUtils::URLEncode(m_weightedCapacity.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
