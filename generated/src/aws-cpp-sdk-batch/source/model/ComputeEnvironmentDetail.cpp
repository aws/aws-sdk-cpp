/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ComputeEnvironmentDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

ComputeEnvironmentDetail::ComputeEnvironmentDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputeEnvironmentDetail& ComputeEnvironmentDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("computeEnvironmentName"))
  {
    m_computeEnvironmentName = jsonValue.GetString("computeEnvironmentName");
    m_computeEnvironmentNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computeEnvironmentArn"))
  {
    m_computeEnvironmentArn = jsonValue.GetString("computeEnvironmentArn");
    m_computeEnvironmentArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unmanagedvCpus"))
  {
    m_unmanagedvCpus = jsonValue.GetInteger("unmanagedvCpus");
    m_unmanagedvCpusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ecsClusterArn"))
  {
    m_ecsClusterArn = jsonValue.GetString("ecsClusterArn");
    m_ecsClusterArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = CETypeMapper::GetCETypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = CEStateMapper::GetCEStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = CEStatusMapper::GetCEStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computeResources"))
  {
    m_computeResources = jsonValue.GetObject("computeResources");
    m_computeResourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceRole"))
  {
    m_serviceRole = jsonValue.GetString("serviceRole");
    m_serviceRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatePolicy"))
  {
    m_updatePolicy = jsonValue.GetObject("updatePolicy");
    m_updatePolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eksConfiguration"))
  {
    m_eksConfiguration = jsonValue.GetObject("eksConfiguration");
    m_eksConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("containerOrchestrationType"))
  {
    m_containerOrchestrationType = OrchestrationTypeMapper::GetOrchestrationTypeForName(jsonValue.GetString("containerOrchestrationType"));
    m_containerOrchestrationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("uuid"))
  {
    m_uuid = jsonValue.GetString("uuid");
    m_uuidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("context"))
  {
    m_context = jsonValue.GetString("context");
    m_contextHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeEnvironmentDetail::Jsonize() const
{
  JsonValue payload;

  if(m_computeEnvironmentNameHasBeenSet)
  {
   payload.WithString("computeEnvironmentName", m_computeEnvironmentName);

  }

  if(m_computeEnvironmentArnHasBeenSet)
  {
   payload.WithString("computeEnvironmentArn", m_computeEnvironmentArn);

  }

  if(m_unmanagedvCpusHasBeenSet)
  {
   payload.WithInteger("unmanagedvCpus", m_unmanagedvCpus);

  }

  if(m_ecsClusterArnHasBeenSet)
  {
   payload.WithString("ecsClusterArn", m_ecsClusterArn);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CETypeMapper::GetNameForCEType(m_type));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", CEStateMapper::GetNameForCEState(m_state));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CEStatusMapper::GetNameForCEStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_computeResourcesHasBeenSet)
  {
   payload.WithObject("computeResources", m_computeResources.Jsonize());

  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("serviceRole", m_serviceRole);

  }

  if(m_updatePolicyHasBeenSet)
  {
   payload.WithObject("updatePolicy", m_updatePolicy.Jsonize());

  }

  if(m_eksConfigurationHasBeenSet)
  {
   payload.WithObject("eksConfiguration", m_eksConfiguration.Jsonize());

  }

  if(m_containerOrchestrationTypeHasBeenSet)
  {
   payload.WithString("containerOrchestrationType", OrchestrationTypeMapper::GetNameForOrchestrationType(m_containerOrchestrationType));
  }

  if(m_uuidHasBeenSet)
  {
   payload.WithString("uuid", m_uuid);

  }

  if(m_contextHasBeenSet)
  {
   payload.WithString("context", m_context);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
