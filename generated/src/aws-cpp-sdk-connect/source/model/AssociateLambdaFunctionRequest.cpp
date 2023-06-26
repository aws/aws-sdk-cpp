/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AssociateLambdaFunctionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateLambdaFunctionRequest::AssociateLambdaFunctionRequest() : 
    m_instanceIdHasBeenSet(false),
    m_functionArnHasBeenSet(false)
{
}

Aws::String AssociateLambdaFunctionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_functionArnHasBeenSet)
  {
   payload.WithString("FunctionArn", m_functionArn);

  }

  return payload.View().WriteReadable();
}




