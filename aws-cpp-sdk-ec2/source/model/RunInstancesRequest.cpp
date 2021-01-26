/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RunInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

RunInstancesRequest::RunInstancesRequest() : 
    m_blockDeviceMappingsHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_ipv6AddressCount(0),
    m_ipv6AddressCountHasBeenSet(false),
    m_ipv6AddressesHasBeenSet(false),
    m_kernelIdHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_maxCount(0),
    m_maxCountHasBeenSet(false),
    m_minCount(0),
    m_minCountHasBeenSet(false),
    m_monitoringHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_ramdiskIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_additionalInfoHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_disableApiTermination(false),
    m_disableApiTerminationHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_iamInstanceProfileHasBeenSet(false),
    m_instanceInitiatedShutdownBehavior(ShutdownBehavior::NOT_SET),
    m_instanceInitiatedShutdownBehaviorHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_elasticGpuSpecificationHasBeenSet(false),
    m_elasticInferenceAcceleratorsHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_launchTemplateHasBeenSet(false),
    m_instanceMarketOptionsHasBeenSet(false),
    m_creditSpecificationHasBeenSet(false),
    m_cpuOptionsHasBeenSet(false),
    m_capacityReservationSpecificationHasBeenSet(false),
    m_hibernationOptionsHasBeenSet(false),
    m_licenseSpecificationsHasBeenSet(false),
    m_metadataOptionsHasBeenSet(false),
    m_enclaveOptionsHasBeenSet(false)
{
}

Aws::String RunInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RunInstances&";
  if(m_blockDeviceMappingsHasBeenSet)
  {
    unsigned blockDeviceMappingsCount = 1;
    for(auto& item : m_blockDeviceMappings)
    {
      item.OutputToStream(ss, "BlockDeviceMapping.", blockDeviceMappingsCount, "");
      blockDeviceMappingsCount++;
    }
  }

  if(m_imageIdHasBeenSet)
  {
    ss << "ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
    ss << "InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }

  if(m_ipv6AddressCountHasBeenSet)
  {
    ss << "Ipv6AddressCount=" << m_ipv6AddressCount << "&";
  }

  if(m_ipv6AddressesHasBeenSet)
  {
    unsigned ipv6AddressesCount = 1;
    for(auto& item : m_ipv6Addresses)
    {
      item.OutputToStream(ss, "Ipv6Address.", ipv6AddressesCount, "");
      ipv6AddressesCount++;
    }
  }

  if(m_kernelIdHasBeenSet)
  {
    ss << "KernelId=" << StringUtils::URLEncode(m_kernelId.c_str()) << "&";
  }

  if(m_keyNameHasBeenSet)
  {
    ss << "KeyName=" << StringUtils::URLEncode(m_keyName.c_str()) << "&";
  }

  if(m_maxCountHasBeenSet)
  {
    ss << "MaxCount=" << m_maxCount << "&";
  }

  if(m_minCountHasBeenSet)
  {
    ss << "MinCount=" << m_minCount << "&";
  }

  if(m_monitoringHasBeenSet)
  {
    m_monitoring.OutputToStream(ss, "Monitoring");
  }

  if(m_placementHasBeenSet)
  {
    m_placement.OutputToStream(ss, "Placement");
  }

  if(m_ramdiskIdHasBeenSet)
  {
    ss << "RamdiskId=" << StringUtils::URLEncode(m_ramdiskId.c_str()) << "&";
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

  if(m_subnetIdHasBeenSet)
  {
    ss << "SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_userDataHasBeenSet)
  {
    ss << "UserData=" << StringUtils::URLEncode(m_userData.c_str()) << "&";
  }

  if(m_additionalInfoHasBeenSet)
  {
    ss << "AdditionalInfo=" << StringUtils::URLEncode(m_additionalInfo.c_str()) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_disableApiTerminationHasBeenSet)
  {
    ss << "DisableApiTermination=" << std::boolalpha << m_disableApiTermination << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_ebsOptimizedHasBeenSet)
  {
    ss << "EbsOptimized=" << std::boolalpha << m_ebsOptimized << "&";
  }

  if(m_iamInstanceProfileHasBeenSet)
  {
    m_iamInstanceProfile.OutputToStream(ss, "IamInstanceProfile");
  }

  if(m_instanceInitiatedShutdownBehaviorHasBeenSet)
  {
    ss << "InstanceInitiatedShutdownBehavior=" << ShutdownBehaviorMapper::GetNameForShutdownBehavior(m_instanceInitiatedShutdownBehavior) << "&";
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

  if(m_privateIpAddressHasBeenSet)
  {
    ss << "PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }

  if(m_elasticGpuSpecificationHasBeenSet)
  {
    unsigned elasticGpuSpecificationCount = 1;
    for(auto& item : m_elasticGpuSpecification)
    {
      item.OutputToStream(ss, "ElasticGpuSpecification.", elasticGpuSpecificationCount, "");
      elasticGpuSpecificationCount++;
    }
  }

  if(m_elasticInferenceAcceleratorsHasBeenSet)
  {
    unsigned elasticInferenceAcceleratorsCount = 1;
    for(auto& item : m_elasticInferenceAccelerators)
    {
      item.OutputToStream(ss, "ElasticInferenceAccelerator.", elasticInferenceAcceleratorsCount, "");
      elasticInferenceAcceleratorsCount++;
    }
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if(m_launchTemplateHasBeenSet)
  {
    m_launchTemplate.OutputToStream(ss, "LaunchTemplate");
  }

  if(m_instanceMarketOptionsHasBeenSet)
  {
    m_instanceMarketOptions.OutputToStream(ss, "InstanceMarketOptions");
  }

  if(m_creditSpecificationHasBeenSet)
  {
    m_creditSpecification.OutputToStream(ss, "CreditSpecification");
  }

  if(m_cpuOptionsHasBeenSet)
  {
    m_cpuOptions.OutputToStream(ss, "CpuOptions");
  }

  if(m_capacityReservationSpecificationHasBeenSet)
  {
    m_capacityReservationSpecification.OutputToStream(ss, "CapacityReservationSpecification");
  }

  if(m_hibernationOptionsHasBeenSet)
  {
    m_hibernationOptions.OutputToStream(ss, "HibernationOptions");
  }

  if(m_licenseSpecificationsHasBeenSet)
  {
    unsigned licenseSpecificationsCount = 1;
    for(auto& item : m_licenseSpecifications)
    {
      item.OutputToStream(ss, "LicenseSpecification.", licenseSpecificationsCount, "");
      licenseSpecificationsCount++;
    }
  }

  if(m_metadataOptionsHasBeenSet)
  {
    m_metadataOptions.OutputToStream(ss, "MetadataOptions");
  }

  if(m_enclaveOptionsHasBeenSet)
  {
    m_enclaveOptions.OutputToStream(ss, "EnclaveOptions");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  RunInstancesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
