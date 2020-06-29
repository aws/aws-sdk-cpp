/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeleteCodeRepositoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteCodeRepositoryRequest::DeleteCodeRepositoryRequest() : 
    m_codeRepositoryNameHasBeenSet(false)
{
}

Aws::String DeleteCodeRepositoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_codeRepositoryNameHasBeenSet)
  {
   payload.WithString("CodeRepositoryName", m_codeRepositoryName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteCodeRepositoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteCodeRepository"));
  return headers;

}




