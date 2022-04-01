/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeleteModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteModelRequest::DeleteModelRequest() : 
    m_modelNameHasBeenSet(false)
{
}

Aws::String DeleteModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteModelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteModel"));
  return headers;

}




