/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/StartBatchJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartBatchJobRequest::StartBatchJobRequest() : 
    m_applicationIdHasBeenSet(false),
    m_batchJobIdentifierHasBeenSet(false),
    m_jobParamsHasBeenSet(false)
{
}

Aws::String StartBatchJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_batchJobIdentifierHasBeenSet)
  {
   payload.WithObject("batchJobIdentifier", m_batchJobIdentifier.Jsonize());

  }

  if(m_jobParamsHasBeenSet)
  {
   JsonValue jobParamsJsonMap;
   for(auto& jobParamsItem : m_jobParams)
   {
     jobParamsJsonMap.WithString(jobParamsItem.first, jobParamsItem.second);
   }
   payload.WithObject("jobParams", std::move(jobParamsJsonMap));

  }

  return payload.View().WriteReadable();
}




