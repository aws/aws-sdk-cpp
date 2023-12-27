/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/UpdateLifecyclePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DLM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLifecyclePolicyRequest::UpdateLifecyclePolicyRequest() : 
    m_policyIdHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_state(SettablePolicyStateValues::NOT_SET),
    m_stateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_policyDetailsHasBeenSet(false),
    m_createInterval(0),
    m_createIntervalHasBeenSet(false),
    m_retainInterval(0),
    m_retainIntervalHasBeenSet(false),
    m_copyTags(false),
    m_copyTagsHasBeenSet(false),
    m_extendDeletion(false),
    m_extendDeletionHasBeenSet(false),
    m_crossRegionCopyTargetsHasBeenSet(false),
    m_exclusionsHasBeenSet(false)
{
}

Aws::String UpdateLifecyclePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", SettablePolicyStateValuesMapper::GetNameForSettablePolicyStateValues(m_state));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_policyDetailsHasBeenSet)
  {
   payload.WithObject("PolicyDetails", m_policyDetails.Jsonize());

  }

  if(m_createIntervalHasBeenSet)
  {
   payload.WithInteger("CreateInterval", m_createInterval);

  }

  if(m_retainIntervalHasBeenSet)
  {
   payload.WithInteger("RetainInterval", m_retainInterval);

  }

  if(m_copyTagsHasBeenSet)
  {
   payload.WithBool("CopyTags", m_copyTags);

  }

  if(m_extendDeletionHasBeenSet)
  {
   payload.WithBool("ExtendDeletion", m_extendDeletion);

  }

  if(m_crossRegionCopyTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> crossRegionCopyTargetsJsonList(m_crossRegionCopyTargets.size());
   for(unsigned crossRegionCopyTargetsIndex = 0; crossRegionCopyTargetsIndex < crossRegionCopyTargetsJsonList.GetLength(); ++crossRegionCopyTargetsIndex)
   {
     crossRegionCopyTargetsJsonList[crossRegionCopyTargetsIndex].AsObject(m_crossRegionCopyTargets[crossRegionCopyTargetsIndex].Jsonize());
   }
   payload.WithArray("CrossRegionCopyTargets", std::move(crossRegionCopyTargetsJsonList));

  }

  if(m_exclusionsHasBeenSet)
  {
   payload.WithObject("Exclusions", m_exclusions.Jsonize());

  }

  return payload.View().WriteReadable();
}




