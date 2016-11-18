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
#include <aws/opsworks/model/UpdateInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateInstanceRequest::UpdateInstanceRequest() : 
    m_instanceIdHasBeenSet(false),
    m_layerIdsHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_autoScalingType(AutoScalingType::NOT_SET),
    m_autoScalingTypeHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_osHasBeenSet(false),
    m_amiIdHasBeenSet(false),
    m_sshKeyNameHasBeenSet(false),
    m_architecture(Architecture::NOT_SET),
    m_architectureHasBeenSet(false),
    m_installUpdatesOnBoot(false),
    m_installUpdatesOnBootHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_agentVersionHasBeenSet(false)
{
}

Aws::String UpdateInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

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

  if(m_architectureHasBeenSet)
  {
   payload.WithString("Architecture", ArchitectureMapper::GetNameForArchitecture(m_architecture));
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.UpdateInstance"));
  return headers;

}



