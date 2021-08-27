/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DescribeBatchInferenceJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeBatchInferenceJobRequest::DescribeBatchInferenceJobRequest() : 
    m_batchInferenceJobArnHasBeenSet(false)
{
}

Aws::String DescribeBatchInferenceJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_batchInferenceJobArnHasBeenSet)
  {
   payload.WithString("batchInferenceJobArn", m_batchInferenceJobArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeBatchInferenceJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.DescribeBatchInferenceJob"));
  return headers;

}




