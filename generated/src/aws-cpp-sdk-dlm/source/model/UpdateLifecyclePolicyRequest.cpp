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
    m_policyDetailsHasBeenSet(false)
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

  return payload.View().WriteReadable();
}




