/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/EvaluateCodeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EvaluateCodeRequest::EvaluateCodeRequest() : 
    m_runtimeHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_functionHasBeenSet(false)
{
}

Aws::String EvaluateCodeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_runtimeHasBeenSet)
  {
   payload.WithObject("runtime", m_runtime.Jsonize());

  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_contextHasBeenSet)
  {
   payload.WithString("context", m_context);

  }

  if(m_functionHasBeenSet)
  {
   payload.WithString("function", m_function);

  }

  return payload.View().WriteReadable();
}




