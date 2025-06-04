/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/ListEnvironmentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListEnvironmentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_stateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stateJsonList(m_state.size());
   for(unsigned stateIndex = 0; stateIndex < stateJsonList.GetLength(); ++stateIndex)
   {
     stateJsonList[stateIndex].AsString(EnvironmentStateMapper::GetNameForEnvironmentState(m_state[stateIndex]));
   }
   payload.WithArray("state", std::move(stateJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListEnvironmentsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonElasticVMwareService.ListEnvironments"));
  return headers;

}




