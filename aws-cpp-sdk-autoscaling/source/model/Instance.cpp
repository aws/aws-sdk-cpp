﻿/*
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
#include <aws/autoscaling/model/Instance.h>
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

Instance::Instance() : 
    m_instanceIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_lifecycleState(LifecycleState::NOT_SET),
    m_lifecycleStateHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_launchConfigurationNameHasBeenSet(false),
    m_protectedFromScaleIn(false),
    m_protectedFromScaleInHasBeenSet(false)
{
}

Instance::Instance(const XmlNode& xmlNode) : 
    m_instanceIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_lifecycleState(LifecycleState::NOT_SET),
    m_lifecycleStateHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_launchConfigurationNameHasBeenSet(false),
    m_protectedFromScaleIn(false),
    m_protectedFromScaleInHasBeenSet(false)
{
  *this = xmlNode;
}

Instance& Instance::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdNode = resultNode.FirstChild("InstanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = StringUtils::Trim(instanceIdNode.GetText().c_str());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("AvailabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = StringUtils::Trim(availabilityZoneNode.GetText().c_str());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode lifecycleStateNode = resultNode.FirstChild("LifecycleState");
    if(!lifecycleStateNode.IsNull())
    {
      m_lifecycleState = LifecycleStateMapper::GetLifecycleStateForName(StringUtils::Trim(lifecycleStateNode.GetText().c_str()).c_str());
      m_lifecycleStateHasBeenSet = true;
    }
    XmlNode healthStatusNode = resultNode.FirstChild("HealthStatus");
    if(!healthStatusNode.IsNull())
    {
      m_healthStatus = StringUtils::Trim(healthStatusNode.GetText().c_str());
      m_healthStatusHasBeenSet = true;
    }
    XmlNode launchConfigurationNameNode = resultNode.FirstChild("LaunchConfigurationName");
    if(!launchConfigurationNameNode.IsNull())
    {
      m_launchConfigurationName = StringUtils::Trim(launchConfigurationNameNode.GetText().c_str());
      m_launchConfigurationNameHasBeenSet = true;
    }
    XmlNode protectedFromScaleInNode = resultNode.FirstChild("ProtectedFromScaleIn");
    if(!protectedFromScaleInNode.IsNull())
    {
      m_protectedFromScaleIn = StringUtils::ConvertToBool(StringUtils::Trim(protectedFromScaleInNode.GetText().c_str()).c_str());
      m_protectedFromScaleInHasBeenSet = true;
    }
  }

  return *this;
}

void Instance::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_lifecycleStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".LifecycleState=" << LifecycleStateMapper::GetNameForLifecycleState(m_lifecycleState) << "&";
  }

  if(m_healthStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".HealthStatus=" << StringUtils::URLEncode(m_healthStatus.c_str()) << "&";
  }

  if(m_launchConfigurationNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".LaunchConfigurationName=" << StringUtils::URLEncode(m_launchConfigurationName.c_str()) << "&";
  }

  if(m_protectedFromScaleInHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProtectedFromScaleIn=" << m_protectedFromScaleIn << "&";
  }

}

void Instance::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_lifecycleStateHasBeenSet)
  {
      oStream << location << ".LifecycleState=" << LifecycleStateMapper::GetNameForLifecycleState(m_lifecycleState) << "&";
  }
  if(m_healthStatusHasBeenSet)
  {
      oStream << location << ".HealthStatus=" << StringUtils::URLEncode(m_healthStatus.c_str()) << "&";
  }
  if(m_launchConfigurationNameHasBeenSet)
  {
      oStream << location << ".LaunchConfigurationName=" << StringUtils::URLEncode(m_launchConfigurationName.c_str()) << "&";
  }
  if(m_protectedFromScaleInHasBeenSet)
  {
      oStream << location << ".ProtectedFromScaleIn=" << m_protectedFromScaleIn << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
