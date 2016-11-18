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
#include <aws/autoscaling/model/CreateLaunchConfigurationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

CreateLaunchConfigurationRequest::CreateLaunchConfigurationRequest() : 
    m_launchConfigurationNameHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_classicLinkVPCIdHasBeenSet(false),
    m_classicLinkVPCSecurityGroupsHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_kernelIdHasBeenSet(false),
    m_ramdiskIdHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_instanceMonitoringHasBeenSet(false),
    m_spotPriceHasBeenSet(false),
    m_iamInstanceProfileHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_associatePublicIpAddress(false),
    m_associatePublicIpAddressHasBeenSet(false),
    m_placementTenancyHasBeenSet(false)
{
}

Aws::String CreateLaunchConfigurationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateLaunchConfiguration&";
  if(m_launchConfigurationNameHasBeenSet)
  {
    ss << "LaunchConfigurationName=" << StringUtils::URLEncode(m_launchConfigurationName.c_str()) << "&";
  }

  if(m_imageIdHasBeenSet)
  {
    ss << "ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_keyNameHasBeenSet)
  {
    ss << "KeyName=" << StringUtils::URLEncode(m_keyName.c_str()) << "&";
  }

  if(m_securityGroupsHasBeenSet)
  {
    unsigned securityGroupsCount = 1;
    for(auto& item : m_securityGroups)
    {
      ss << "SecurityGroups.member." << securityGroupsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      securityGroupsCount++;
    }
  }

  if(m_classicLinkVPCIdHasBeenSet)
  {
    ss << "ClassicLinkVPCId=" << StringUtils::URLEncode(m_classicLinkVPCId.c_str()) << "&";
  }

  if(m_classicLinkVPCSecurityGroupsHasBeenSet)
  {
    unsigned classicLinkVPCSecurityGroupsCount = 1;
    for(auto& item : m_classicLinkVPCSecurityGroups)
    {
      ss << "ClassicLinkVPCSecurityGroups.member." << classicLinkVPCSecurityGroupsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      classicLinkVPCSecurityGroupsCount++;
    }
  }

  if(m_userDataHasBeenSet)
  {
    ss << "UserData=" << StringUtils::URLEncode(m_userData.c_str()) << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
    ss << "InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_kernelIdHasBeenSet)
  {
    ss << "KernelId=" << StringUtils::URLEncode(m_kernelId.c_str()) << "&";
  }

  if(m_ramdiskIdHasBeenSet)
  {
    ss << "RamdiskId=" << StringUtils::URLEncode(m_ramdiskId.c_str()) << "&";
  }

  if(m_blockDeviceMappingsHasBeenSet)
  {
    unsigned blockDeviceMappingsCount = 1;
    for(auto& item : m_blockDeviceMappings)
    {
      item.OutputToStream(ss, "BlockDeviceMappings.member.", blockDeviceMappingsCount, "");
      blockDeviceMappingsCount++;
    }
  }

  if(m_instanceMonitoringHasBeenSet)
  {
    m_instanceMonitoring.OutputToStream(ss, "InstanceMonitoring");
  }

  if(m_spotPriceHasBeenSet)
  {
    ss << "SpotPrice=" << StringUtils::URLEncode(m_spotPrice.c_str()) << "&";
  }

  if(m_iamInstanceProfileHasBeenSet)
  {
    ss << "IamInstanceProfile=" << StringUtils::URLEncode(m_iamInstanceProfile.c_str()) << "&";
  }

  if(m_ebsOptimizedHasBeenSet)
  {
    ss << "EbsOptimized=" << m_ebsOptimized << "&";
  }

  if(m_associatePublicIpAddressHasBeenSet)
  {
    ss << "AssociatePublicIpAddress=" << m_associatePublicIpAddress << "&";
  }

  if(m_placementTenancyHasBeenSet)
  {
    ss << "PlacementTenancy=" << StringUtils::URLEncode(m_placementTenancy.c_str()) << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}

