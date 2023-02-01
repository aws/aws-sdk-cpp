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

StartResourceEvaluationRequest::StartResourceEvaluationRequest() : 
    m_resourceDetailsHasBeenSet(false),
    m_evaluationContextHasBeenSet(false),
    m_evaluationMode(EvaluationMode::NOT_SET),
    m_evaluationModeHasBeenSet(false),
    m_evaluationTimeout(0),
    m_evaluationTimeoutHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

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




