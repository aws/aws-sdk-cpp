/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/StartResourceEvaluationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartResourceEvaluationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceDetailsHasBeenSet)
  {
   payload.WithObject("ResourceDetails", m_resourceDetails.Jsonize());

  }

  if(m_evaluationContextHasBeenSet)
  {
   payload.WithObject("EvaluationContext", m_evaluationContext.Jsonize());

  }

  if(m_evaluationModeHasBeenSet)
  {
   payload.WithString("EvaluationMode", EvaluationModeMapper::GetNameForEvaluationMode(m_evaluationMode));
  }

  if(m_evaluationTimeoutHasBeenSet)
  {
   payload.WithInteger("EvaluationTimeout", m_evaluationTimeout);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartResourceEvaluationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.StartResourceEvaluation"));
  return headers;

}




