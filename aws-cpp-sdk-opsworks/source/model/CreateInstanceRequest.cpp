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
#include <aws/opsworks/model/CreateInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateInstanceRequest::CreateInstanceRequest() : 
    m_stackIdHasBeenSet(false),
    m_layerIdsHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_autoScalingType(AutoScalingType::NOT_SET),
    m_autoScalingTypeHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_osHasBeenSet(false),
    m_amiIdHasBeenSet(false),
    m_sshKeyNameHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_virtualizationTypeHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_architecture(Architecture::NOT_SET),
    m_architectureHasBeenSet(false),
    m_rootDeviceType(RootDeviceType::NOT_SET),
    m_rootDeviceTypeHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_installUpdatesOnBoot(false),
    m_installUpdatesOnBootHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_tenancyHasBeenSet(false)
{
}

Aws::String CreateInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

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

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_autoScalingTypeHasBeenSet)
  {
   payload.WithString("AutoScalingType", AutoScalingTypeMapper::GetNameForAutoScalingType(m_autoScalingType));
  }

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("Hostname", m_hostname);

  }

  if(m_osHasBeenSet)
  {
   payload.WithString("Os", m_os);

  }

  if(m_amiIdHasBeenSet)
  {
   payload.WithString("AmiId", m_amiId);

  }

  if(m_sshKeyNameHasBeenSet)
  {
   payload.WithString("SshKeyName", m_sshKeyName);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_virtualizationTypeHasBeenSet)
  {
   payload.WithString("VirtualizationType", m_virtualizationType);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_architectureHasBeenSet)
  {
   payload.WithString("Architecture", ArchitectureMapper::GetNameForArchitecture(m_architecture));
  }

  if(m_rootDeviceTypeHasBeenSet)
  {
   payload.WithString("RootDeviceType", RootDeviceTypeMapper::GetNameForRootDeviceType(m_rootDeviceType));
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

  if(m_installUpdatesOnBootHasBeenSet)
  {
   payload.WithBool("InstallUpdatesOnBoot", m_installUpdatesOnBoot);

  }

  if(m_ebsOptimizedHasBeenSet)
  {
   payload.WithBool("EbsOptimized", m_ebsOptimized);

  }

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("AgentVersion", m_agentVersion);

  }

  if(m_tenancyHasBeenSet)
  {
   payload.WithString("Tenancy", m_tenancy);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.CreateInstance"));
  return headers;

}



