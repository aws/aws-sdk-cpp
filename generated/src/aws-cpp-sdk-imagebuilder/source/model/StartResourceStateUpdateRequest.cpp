/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/StartResourceStateUpdateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartResourceStateUpdateRequest::StartResourceStateUpdateRequest() : 
    m_resourceArnHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_executionRoleHasBeenSet(false),
    m_includeResourcesHasBeenSet(false),
    m_exclusionRulesHasBeenSet(false),
    m_updateAtHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String StartResourceStateUpdateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithObject("state", m_state.Jsonize());

  }

  if(m_executionRoleHasBeenSet)
  {
   payload.WithString("executionRole", m_executionRole);

  }

  if(m_includeResourcesHasBeenSet)
  {
   payload.WithObject("includeResources", m_includeResources.Jsonize());

  }

  if(m_exclusionRulesHasBeenSet)
  {
   payload.WithObject("exclusionRules", m_exclusionRules.Jsonize());

  }

  if(m_updateAtHasBeenSet)
  {
   payload.WithDouble("updateAt", m_updateAt.SecondsWithMSPrecision());
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




