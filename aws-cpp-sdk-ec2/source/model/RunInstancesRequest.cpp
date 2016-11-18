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
#include <aws/ec2/model/RunInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

RunInstancesRequest::RunInstancesRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_minCount(0),
    m_minCountHasBeenSet(false),
    m_maxCount(0),
    m_maxCountHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_kernelIdHasBeenSet(false),
    m_ramdiskIdHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_monitoringHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_disableApiTermination(false),
    m_disableApiTerminationHasBeenSet(false),
    m_instanceInitiatedShutdownBehavior(ShutdownBehavior::NOT_SET),
    m_instanceInitiatedShutdownBehaviorHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_additionalInfoHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_iamInstanceProfileHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false)
{
}

Aws::String RunInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RunInstances&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
  }

  if(m_imageIdHasBeenSet)
  {
    ss << "ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_minCountHasBeenSet)
  {
    ss << "MinCount=" << m_minCount << "&";
  }

  if(m_maxCountHasBeenSet)
  {
    ss << "MaxCount=" << m_maxCount << "&";
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
      ss << "SecurityGroup." << securityGroupsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      securityGroupsCount++;
    }
  }

  if(m_securityGroupIdsHasBeenSet)
  {
    unsigned securityGroupIdsCount = 1;
    for(auto& item : m_securityGroupIds)
    {
      ss << "SecurityGroupId." << securityGroupIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      securityGroupIdsCount++;
    }
  }

  if(m_userDataHasBeenSet)
  {
    ss << "UserData=" << StringUtils::URLEncode(m_userData.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
    ss << "InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }

  if(m_placementHasBeenSet)
  {
    m_placement.OutputToStream(ss, "Placement");
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
      item.OutputToStream(ss, "BlockDeviceMapping.", blockDeviceMappingsCount, "");
      blockDeviceMappingsCount++;
    }
  }

  if(m_monitoringHasBeenSet)
  {
    m_monitoring.OutputToStream(ss, "Monitoring");
  }

  if(m_subnetIdHasBeenSet)
  {
    ss << "SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_disableApiTerminationHasBeenSet)
  {
    ss << "DisableApiTermination=" << m_disableApiTermination << "&";
  }

  if(m_instanceInitiatedShutdownBehaviorHasBeenSet)
  {
    ss << "InstanceInitiatedShutdownBehavior=" << ShutdownBehaviorMapper::GetNameForShutdownBehavior(m_instanceInitiatedShutdownBehavior) << "&";
  }

  if(m_privateIpAddressHasBeenSet)
  {
    ss << "PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_additionalInfoHasBeenSet)
  {
    ss << "AdditionalInfo=" << StringUtils::URLEncode(m_additionalInfo.c_str()) << "&";
  }

  if(m_networkInterfacesHasBeenSet)
  {
    unsigned networkInterfacesCount = 1;
    for(auto& item : m_networkInterfaces)
    {
      item.OutputToStream(ss, "NetworkInterface.", networkInterfacesCount, "");
      networkInterfacesCount++;
    }
  }

  if(m_iamInstanceProfileHasBeenSet)
  {
    m_iamInstanceProfile.OutputToStream(ss, "IamInstanceProfile");
  }

  if(m_ebsOptimizedHasBeenSet)
  {
    ss << "EbsOptimized=" << m_ebsOptimized << "&";
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

