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
#include <aws/opsworks/model/Instance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

Instance::Instance() : 
    m_agentVersionHasBeenSet(false),
    m_amiIdHasBeenSet(false),
    m_architecture(Architecture::NOT_SET),
    m_architectureHasBeenSet(false),
    m_autoScalingType(AutoScalingType::NOT_SET),
    m_autoScalingTypeHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_ec2InstanceIdHasBeenSet(false),
    m_ecsClusterArnHasBeenSet(false),
    m_ecsContainerInstanceArnHasBeenSet(false),
    m_elasticIpHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_infrastructureClassHasBeenSet(false),
    m_installUpdatesOnBoot(false),
    m_installUpdatesOnBootHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceProfileArnHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_lastServiceErrorIdHasBeenSet(false),
    m_layerIdsHasBeenSet(false),
    m_osHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_privateDnsHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_publicDnsHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_registeredByHasBeenSet(false),
    m_reportedAgentVersionHasBeenSet(false),
    m_reportedOsHasBeenSet(false),
    m_rootDeviceType(RootDeviceType::NOT_SET),
    m_rootDeviceTypeHasBeenSet(false),
    m_rootDeviceVolumeIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_sshHostDsaKeyFingerprintHasBeenSet(false),
    m_sshHostRsaKeyFingerprintHasBeenSet(false),
    m_sshKeyNameHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_tenancyHasBeenSet(false),
    m_virtualizationType(VirtualizationType::NOT_SET),
    m_virtualizationTypeHasBeenSet(false)
{
}

Instance::Instance(const JsonValue& jsonValue) : 
    m_agentVersionHasBeenSet(false),
    m_amiIdHasBeenSet(false),
    m_architecture(Architecture::NOT_SET),
    m_architectureHasBeenSet(false),
    m_autoScalingType(AutoScalingType::NOT_SET),
    m_autoScalingTypeHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_ec2InstanceIdHasBeenSet(false),
    m_ecsClusterArnHasBeenSet(false),
    m_ecsContainerInstanceArnHasBeenSet(false),
    m_elasticIpHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_infrastructureClassHasBeenSet(false),
    m_installUpdatesOnBoot(false),
    m_installUpdatesOnBootHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceProfileArnHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_lastServiceErrorIdHasBeenSet(false),
    m_layerIdsHasBeenSet(false),
    m_osHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_privateDnsHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_publicDnsHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_registeredByHasBeenSet(false),
    m_reportedAgentVersionHasBeenSet(false),
    m_reportedOsHasBeenSet(false),
    m_rootDeviceType(RootDeviceType::NOT_SET),
    m_rootDeviceTypeHasBeenSet(false),
    m_rootDeviceVolumeIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_sshHostDsaKeyFingerprintHasBeenSet(false),
    m_sshHostRsaKeyFingerprintHasBeenSet(false),
    m_sshKeyNameHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_tenancyHasBeenSet(false),
    m_virtualizationType(VirtualizationType::NOT_SET),
    m_virtualizationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Instance& Instance::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AgentVersion"))
  {
    m_agentVersion = jsonValue.GetString("AgentVersion");

    m_agentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AmiId"))
  {
    m_amiId = jsonValue.GetString("AmiId");

    m_amiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Architecture"))
  {
    m_architecture = ArchitectureMapper::GetArchitectureForName(jsonValue.GetString("Architecture"));

    m_architectureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoScalingType"))
  {
    m_autoScalingType = AutoScalingTypeMapper::GetAutoScalingTypeForName(jsonValue.GetString("AutoScalingType"));

    m_autoScalingTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BlockDeviceMappings"))
  {
    Array<JsonValue> blockDeviceMappingsJsonList = jsonValue.GetArray("BlockDeviceMappings");
    for(unsigned blockDeviceMappingsIndex = 0; blockDeviceMappingsIndex < blockDeviceMappingsJsonList.GetLength(); ++blockDeviceMappingsIndex)
    {
      m_blockDeviceMappings.push_back(blockDeviceMappingsJsonList[blockDeviceMappingsIndex].AsObject());
    }
    m_blockDeviceMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsOptimized"))
  {
    m_ebsOptimized = jsonValue.GetBool("EbsOptimized");

    m_ebsOptimizedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ec2InstanceId"))
  {
    m_ec2InstanceId = jsonValue.GetString("Ec2InstanceId");

    m_ec2InstanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EcsClusterArn"))
  {
    m_ecsClusterArn = jsonValue.GetString("EcsClusterArn");

    m_ecsClusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EcsContainerInstanceArn"))
  {
    m_ecsContainerInstanceArn = jsonValue.GetString("EcsContainerInstanceArn");

    m_ecsContainerInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ElasticIp"))
  {
    m_elasticIp = jsonValue.GetString("ElasticIp");

    m_elasticIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Hostname"))
  {
    m_hostname = jsonValue.GetString("Hostname");

    m_hostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InfrastructureClass"))
  {
    m_infrastructureClass = jsonValue.GetString("InfrastructureClass");

    m_infrastructureClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstallUpdatesOnBoot"))
  {
    m_installUpdatesOnBoot = jsonValue.GetBool("InstallUpdatesOnBoot");

    m_installUpdatesOnBootHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceProfileArn"))
  {
    m_instanceProfileArn = jsonValue.GetString("InstanceProfileArn");

    m_instanceProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastServiceErrorId"))
  {
    m_lastServiceErrorId = jsonValue.GetString("LastServiceErrorId");

    m_lastServiceErrorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LayerIds"))
  {
    Array<JsonValue> layerIdsJsonList = jsonValue.GetArray("LayerIds");
    for(unsigned layerIdsIndex = 0; layerIdsIndex < layerIdsJsonList.GetLength(); ++layerIdsIndex)
    {
      m_layerIds.push_back(layerIdsJsonList[layerIdsIndex].AsString());
    }
    m_layerIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Os"))
  {
    m_os = jsonValue.GetString("Os");

    m_osHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Platform"))
  {
    m_platform = jsonValue.GetString("Platform");

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateDns"))
  {
    m_privateDns = jsonValue.GetString("PrivateDns");

    m_privateDnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateIp"))
  {
    m_privateIp = jsonValue.GetString("PrivateIp");

    m_privateIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublicDns"))
  {
    m_publicDns = jsonValue.GetString("PublicDns");

    m_publicDnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublicIp"))
  {
    m_publicIp = jsonValue.GetString("PublicIp");

    m_publicIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegisteredBy"))
  {
    m_registeredBy = jsonValue.GetString("RegisteredBy");

    m_registeredByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportedAgentVersion"))
  {
    m_reportedAgentVersion = jsonValue.GetString("ReportedAgentVersion");

    m_reportedAgentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportedOs"))
  {
    m_reportedOs = jsonValue.GetObject("ReportedOs");

    m_reportedOsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RootDeviceType"))
  {
    m_rootDeviceType = RootDeviceTypeMapper::GetRootDeviceTypeForName(jsonValue.GetString("RootDeviceType"));

    m_rootDeviceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RootDeviceVolumeId"))
  {
    m_rootDeviceVolumeId = jsonValue.GetString("RootDeviceVolumeId");

    m_rootDeviceVolumeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroupIds"))
  {
    Array<JsonValue> securityGroupIdsJsonList = jsonValue.GetArray("SecurityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SshHostDsaKeyFingerprint"))
  {
    m_sshHostDsaKeyFingerprint = jsonValue.GetString("SshHostDsaKeyFingerprint");

    m_sshHostDsaKeyFingerprintHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SshHostRsaKeyFingerprint"))
  {
    m_sshHostRsaKeyFingerprint = jsonValue.GetString("SshHostRsaKeyFingerprint");

    m_sshHostRsaKeyFingerprintHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SshKeyName"))
  {
    m_sshKeyName = jsonValue.GetString("SshKeyName");

    m_sshKeyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackId"))
  {
    m_stackId = jsonValue.GetString("StackId");

    m_stackIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tenancy"))
  {
    m_tenancy = jsonValue.GetString("Tenancy");

    m_tenancyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VirtualizationType"))
  {
    m_virtualizationType = VirtualizationTypeMapper::GetVirtualizationTypeForName(jsonValue.GetString("VirtualizationType"));

    m_virtualizationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Instance::Jsonize() const
{
  JsonValue payload;

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("AgentVersion", m_agentVersion);

  }

  if(m_amiIdHasBeenSet)
  {
   payload.WithString("AmiId", m_amiId);

  }

  if(m_architectureHasBeenSet)
  {
   payload.WithString("Architecture", ArchitectureMapper::GetNameForArchitecture(m_architecture));
  }

  if(m_autoScalingTypeHasBeenSet)
  {
   payload.WithString("AutoScalingType", AutoScalingTypeMapper::GetNameForAutoScalingType(m_autoScalingType));
  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_blockDeviceMappingsHasBeenSet)
  {
   Array<JsonValue> blockDeviceMappingsJsonList(m_blockDeviceMappings.size());
   for(unsigned blockDeviceMappingsIndex = 0; blockDeviceMappingsIndex < blockDeviceMappingsJsonList.GetLength(); ++blockDeviceMappingsIndex)
   {
     blockDeviceMappingsJsonList[blockDeviceMappingsIndex].AsObject(m_blockDeviceMappings[blockDeviceMappingsIndex].Jsonize());
   }
   payload.WithArray("BlockDeviceMappings", std::move(blockDeviceMappingsJsonList));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt);

  }

  if(m_ebsOptimizedHasBeenSet)
  {
   payload.WithBool("EbsOptimized", m_ebsOptimized);

  }

  if(m_ec2InstanceIdHasBeenSet)
  {
   payload.WithString("Ec2InstanceId", m_ec2InstanceId);

  }

  if(m_ecsClusterArnHasBeenSet)
  {
   payload.WithString("EcsClusterArn", m_ecsClusterArn);

  }

  if(m_ecsContainerInstanceArnHasBeenSet)
  {
   payload.WithString("EcsContainerInstanceArn", m_ecsContainerInstanceArn);

  }

  if(m_elasticIpHasBeenSet)
  {
   payload.WithString("ElasticIp", m_elasticIp);

  }

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("Hostname", m_hostname);

  }

  if(m_infrastructureClassHasBeenSet)
  {
   payload.WithString("InfrastructureClass", m_infrastructureClass);

  }

  if(m_installUpdatesOnBootHasBeenSet)
  {
   payload.WithBool("InstallUpdatesOnBoot", m_installUpdatesOnBoot);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_instanceProfileArnHasBeenSet)
  {
   payload.WithString("InstanceProfileArn", m_instanceProfileArn);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_lastServiceErrorIdHasBeenSet)
  {
   payload.WithString("LastServiceErrorId", m_lastServiceErrorId);

  }

  if(m_layerIdsHasBeenSet)
  {
   Array<JsonValue> layerIdsJsonList(m_layerIds.size());
   for(unsigned layerIdsIndex = 0; layerIdsIndex < layerIdsJsonList.GetLength(); ++layerIdsIndex)
   {
     layerIdsJsonList[layerIdsIndex].AsString(m_layerIds[layerIdsIndex]);
   }
   payload.WithArray("LayerIds", std::move(layerIdsJsonList));

  }

  if(m_osHasBeenSet)
  {
   payload.WithString("Os", m_os);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("Platform", m_platform);

  }

  if(m_privateDnsHasBeenSet)
  {
   payload.WithString("PrivateDns", m_privateDns);

  }

  if(m_privateIpHasBeenSet)
  {
   payload.WithString("PrivateIp", m_privateIp);

  }

  if(m_publicDnsHasBeenSet)
  {
   payload.WithString("PublicDns", m_publicDns);

  }

  if(m_publicIpHasBeenSet)
  {
   payload.WithString("PublicIp", m_publicIp);

  }

  if(m_registeredByHasBeenSet)
  {
   payload.WithString("RegisteredBy", m_registeredBy);

  }

  if(m_reportedAgentVersionHasBeenSet)
  {
   payload.WithString("ReportedAgentVersion", m_reportedAgentVersion);

  }

  if(m_reportedOsHasBeenSet)
  {
   payload.WithObject("ReportedOs", m_reportedOs.Jsonize());

  }

  if(m_rootDeviceTypeHasBeenSet)
  {
   payload.WithString("RootDeviceType", RootDeviceTypeMapper::GetNameForRootDeviceType(m_rootDeviceType));
  }

  if(m_rootDeviceVolumeIdHasBeenSet)
  {
   payload.WithString("RootDeviceVolumeId", m_rootDeviceVolumeId);

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_sshHostDsaKeyFingerprintHasBeenSet)
  {
   payload.WithString("SshHostDsaKeyFingerprint", m_sshHostDsaKeyFingerprint);

  }

  if(m_sshHostRsaKeyFingerprintHasBeenSet)
  {
   payload.WithString("SshHostRsaKeyFingerprint", m_sshHostRsaKeyFingerprint);

  }

  if(m_sshKeyNameHasBeenSet)
  {
   payload.WithString("SshKeyName", m_sshKeyName);

  }

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_tenancyHasBeenSet)
  {
   payload.WithString("Tenancy", m_tenancy);

  }

  if(m_virtualizationTypeHasBeenSet)
  {
   payload.WithString("VirtualizationType", VirtualizationTypeMapper::GetNameForVirtualizationType(m_virtualizationType));
  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws