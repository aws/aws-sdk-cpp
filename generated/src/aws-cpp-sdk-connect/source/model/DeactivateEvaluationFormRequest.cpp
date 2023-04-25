/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DeactivateEvaluationFormRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeactivateEvaluationFormRequest::DeactivateEvaluationFormRequest() : 
    m_instanceIdHasBeenSet(false),
    m_evaluationFormIdHasBeenSet(false),
    m_evaluationFormVersion(0),
    m_evaluationFormVersionHasBeenSet(false)
{
}

Aws::String DeactivateEvaluationFormRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_evaluationFormVersionHasBeenSet)
  {
   payload.WithInteger("EvaluationFormVersion", m_evaluationFormVersion);

  }

  return payload.View().WriteReadable();
}




