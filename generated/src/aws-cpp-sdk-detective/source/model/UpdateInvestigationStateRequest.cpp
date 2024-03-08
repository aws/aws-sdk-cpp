/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/UpdateInvestigationStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Detective::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateInvestigationStateRequest::UpdateInvestigationStateRequest() : 
    m_graphArnHasBeenSet(false),
    m_investigationIdHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false)
{
}

Aws::String UpdateInvestigationStateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_graphArnHasBeenSet)
  {
   payload.WithString("GraphArn", m_graphArn);

  }

  if(m_investigationIdHasBeenSet)
  {
   payload.WithString("InvestigationId", m_investigationId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", StateMapper::GetNameForState(m_state));
  }

  return payload.View().WriteReadable();
}




