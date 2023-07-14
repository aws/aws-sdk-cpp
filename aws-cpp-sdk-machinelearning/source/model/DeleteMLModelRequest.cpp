/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/DeleteMLModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteMLModelRequest::DeleteMLModelRequest() : 
    m_mLModelIdHasBeenSet(false)
{
}

Aws::String DeleteMLModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mLModelIdHasBeenSet)
  {
   payload.WithString("MLModelId", m_mLModelId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteMLModelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonML_20141212.DeleteMLModel"));
  return headers;

}




