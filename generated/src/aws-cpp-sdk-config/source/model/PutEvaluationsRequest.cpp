/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/PutEvaluationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutEvaluationsRequest::PutEvaluationsRequest() : 
    m_evaluationsHasBeenSet(false),
    m_resultTokenHasBeenSet(false),
    m_testMode(false),
    m_testModeHasBeenSet(false)
{
}

Aws::String PutEvaluationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_evaluationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> evaluationsJsonList(m_evaluations.size());
   for(unsigned evaluationsIndex = 0; evaluationsIndex < evaluationsJsonList.GetLength(); ++evaluationsIndex)
   {
     evaluationsJsonList[evaluationsIndex].AsObject(m_evaluations[evaluationsIndex].Jsonize());
   }
   payload.WithArray("Evaluations", std::move(evaluationsJsonList));

  }

  if(m_resultTokenHasBeenSet)
  {
   payload.WithString("ResultToken", m_resultToken);

  }

  if(m_testModeHasBeenSet)
  {
   payload.WithBool("TestMode", m_testMode);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutEvaluationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.PutEvaluations"));
  return headers;

}




