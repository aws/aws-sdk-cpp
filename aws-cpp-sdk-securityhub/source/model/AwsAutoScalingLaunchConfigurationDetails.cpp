/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAutoScalingLaunchConfigurationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsAutoScalingLaunchConfigurationDetails::AwsAutoScalingLaunchConfigurationDetails() : 
    m_associatePublicIpAddress(false),
    m_associatePublicIpAddressHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_classicLinkVpcIdHasBeenSet(false),
    m_classicLinkVpcSecurityGroupsHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_iamInstanceProfileHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceMonitoringHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_kernelIdHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_launchConfigurationNameHasBeenSet(false),
    m_placementTenancyHasBeenSet(false),
    m_ramdiskIdHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_spotPriceHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_metadataOptionsHasBeenSet(false)
{
}

AwsAutoScalingLaunchConfigurationDetails::AwsAutoScalingLaunchConfigurationDetails(JsonView jsonValue) : 
    m_associatePublicIpAddress(false),
    m_associatePublicIpAddressHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_classicLinkVpcIdHasBeenSet(false),
    m_classicLinkVpcSecurityGroupsHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_iamInstanceProfileHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceMonitoringHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_kernelIdHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_launchConfigurationNameHasBeenSet(false),
    m_placementTenancyHasBeenSet(false),
    m_ramdiskIdHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_spotPriceHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_metadataOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAutoScalingLaunchConfigurationDetails& AwsAutoScalingLaunchConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssociatePublicIpAddress"))
  {
    m_associatePublicIpAddress = jsonValue.GetBool("AssociatePublicIpAddress");

    m_associatePublicIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BlockDeviceMappings"))
  {
    Aws::Utils::Array<JsonView> blockDeviceMappingsJsonList = jsonValue.GetArray("BlockDeviceMappings");
    for(unsigned blockDeviceMappingsIndex = 0; blockDeviceMappingsIndex < blockDeviceMappingsJsonList.GetLength(); ++blockDeviceMappingsIndex)
    {
      m_blockDeviceMappings.push_back(blockDeviceMappingsJsonList[blockDeviceMappingsIndex].AsObject());
    }
    m_blockDeviceMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClassicLinkVpcId"))
  {
    m_classicLinkVpcId = jsonValue.GetString("ClassicLinkVpcId");

    m_classicLinkVpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClassicLinkVpcSecurityGroups"))
  {
    Aws::Utils::Array<JsonView> classicLinkVpcSecurityGroupsJsonList = jsonValue.GetArray("ClassicLinkVpcSecurityGroups");
    for(unsigned classicLinkVpcSecurityGroupsIndex = 0; classicLinkVpcSecurityGroupsIndex < classicLinkVpcSecurityGroupsJsonList.GetLength(); ++classicLinkVpcSecurityGroupsIndex)
    {
      m_classicLinkVpcSecurityGroups.push_back(classicLinkVpcSecurityGroupsJsonList[classicLinkVpcSecurityGroupsIndex].AsString());
    }
    m_classicLinkVpcSecurityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetString("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsOptimized"))
  {
    m_ebsOptimized = jsonValue.GetBool("EbsOptimized");

    m_ebsOptimizedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamInstanceProfile"))
  {
    m_iamInstanceProfile = jsonValue.GetString("IamInstanceProfile");

    m_iamInstanceProfileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageId"))
  {
    m_imageId = jsonValue.GetString("ImageId");

    m_imageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceMonitoring"))
  {
    m_instanceMonitoring = jsonValue.GetObject("InstanceMonitoring");

    m_instanceMonitoringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KernelId"))
  {
    m_kernelId = jsonValue.GetString("KernelId");

    m_kernelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyName"))
  {
    m_keyName = jsonValue.GetString("KeyName");

    m_keyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchConfigurationName"))
  {
    m_launchConfigurationName = jsonValue.GetString("LaunchConfigurationName");

    m_launchConfigurationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlacementTenancy"))
  {
    m_placementTenancy = jsonValue.GetString("PlacementTenancy");

    m_placementTenancyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RamdiskId"))
  {
    m_ramdiskId = jsonValue.GetString("RamdiskId");

    m_ramdiskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("SecurityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpotPrice"))
  {
    m_spotPrice = jsonValue.GetString("SpotPrice");

    m_spotPriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserData"))
  {
    m_userData = jsonValue.GetString("UserData");

    m_userDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetadataOptions"))
  {
    m_metadataOptions = jsonValue.GetObject("MetadataOptions");

    m_metadataOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAutoScalingLaunchConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_associatePublicIpAddressHasBeenSet)
  {
   payload.WithBool("AssociatePublicIpAddress", m_associatePublicIpAddress);

  }

  if(m_blockDeviceMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockDeviceMappingsJsonList(m_blockDeviceMappings.size());
   for(unsigned blockDeviceMappingsIndex = 0; blockDeviceMappingsIndex < blockDeviceMappingsJsonList.GetLength(); ++blockDeviceMappingsIndex)
   {
     blockDeviceMappingsJsonList[blockDeviceMappingsIndex].AsObject(m_blockDeviceMappings[blockDeviceMappingsIndex].Jsonize());
   }
   payload.WithArray("BlockDeviceMappings", std::move(blockDeviceMappingsJsonList));

  }

  if(m_classicLinkVpcIdHasBeenSet)
  {
   payload.WithString("ClassicLinkVpcId", m_classicLinkVpcId);

  }

  if(m_classicLinkVpcSecurityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> classicLinkVpcSecurityGroupsJsonList(m_classicLinkVpcSecurityGroups.size());
   for(unsigned classicLinkVpcSecurityGroupsIndex = 0; classicLinkVpcSecurityGroupsIndex < classicLinkVpcSecurityGroupsJsonList.GetLength(); ++classicLinkVpcSecurityGroupsIndex)
   {
     classicLinkVpcSecurityGroupsJsonList[classicLinkVpcSecurityGroupsIndex].AsString(m_classicLinkVpcSecurityGroups[classicLinkVpcSecurityGroupsIndex]);
   }
   payload.WithArray("ClassicLinkVpcSecurityGroups", std::move(classicLinkVpcSecurityGroupsJsonList));

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithString("CreatedTime", m_createdTime);

  }

  if(m_ebsOptimizedHasBeenSet)
  {
   payload.WithBool("EbsOptimized", m_ebsOptimized);

  }

  if(m_iamInstanceProfileHasBeenSet)
  {
   payload.WithString("IamInstanceProfile", m_iamInstanceProfile);

  }

  if(m_imageIdHasBeenSet)
  {
   payload.WithString("ImageId", m_imageId);

  }

  if(m_instanceMonitoringHasBeenSet)
  {
   payload.WithObject("InstanceMonitoring", m_instanceMonitoring.Jsonize());

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_kernelIdHasBeenSet)
  {
   payload.WithString("KernelId", m_kernelId);

  }

  if(m_keyNameHasBeenSet)
  {
   payload.WithString("KeyName", m_keyName);

  }

  if(m_launchConfigurationNameHasBeenSet)
  {
   payload.WithString("LaunchConfigurationName", m_launchConfigurationName);

  }

  if(m_placementTenancyHasBeenSet)
  {
   payload.WithString("PlacementTenancy", m_placementTenancy);

  }

  if(m_ramdiskIdHasBeenSet)
  {
   payload.WithString("RamdiskId", m_ramdiskId);

  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("SecurityGroups", std::move(securityGroupsJsonList));

  }

  if(m_spotPriceHasBeenSet)
  {
   payload.WithString("SpotPrice", m_spotPrice);

  }

  if(m_userDataHasBeenSet)
  {
   payload.WithString("UserData", m_userData);

  }

  if(m_metadataOptionsHasBeenSet)
  {
   payload.WithObject("MetadataOptions", m_metadataOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
