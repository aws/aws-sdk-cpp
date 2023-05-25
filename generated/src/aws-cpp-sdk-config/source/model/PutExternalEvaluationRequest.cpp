/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/PutExternalEvaluationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutExternalEvaluationRequest::PutExternalEvaluationRequest() : 
    m_configRuleNameHasBeenSet(false),
    m_externalEvaluationHasBeenSet(false)
{
}

Aws::String PutExternalEvaluationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configRuleNameHasBeenSet)
  {
   payload.WithString("ConfigRuleName", m_configRuleName);

  }

  if(m_externalEvaluationHasBeenSet)
  {
   payload.WithObject("ExternalEvaluation", m_externalEvaluation.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutExternalEvaluationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.PutExternalEvaluation"));
  return headers;

}




