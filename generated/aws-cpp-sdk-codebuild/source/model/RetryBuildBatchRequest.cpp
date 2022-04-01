/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/RetryBuildBatchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RetryBuildBatchRequest::RetryBuildBatchRequest() : 
    m_idHasBeenSet(false),
    m_idempotencyTokenHasBeenSet(false),
    m_retryType(RetryBuildBatchType::NOT_SET),
    m_retryTypeHasBeenSet(false)
{
}

Aws::String RetryBuildBatchRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("idempotencyToken", m_idempotencyToken);

  }

  if(m_retryTypeHasBeenSet)
  {
   payload.WithString("retryType", RetryBuildBatchTypeMapper::GetNameForRetryBuildBatchType(m_retryType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RetryBuildBatchRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.RetryBuildBatch"));
  return headers;

}




