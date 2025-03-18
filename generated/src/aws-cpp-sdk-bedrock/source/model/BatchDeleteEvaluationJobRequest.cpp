/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/BatchDeleteEvaluationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchDeleteEvaluationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jobIdentifiersJsonList(m_jobIdentifiers.size());
   for(unsigned jobIdentifiersIndex = 0; jobIdentifiersIndex < jobIdentifiersJsonList.GetLength(); ++jobIdentifiersIndex)
   {
     jobIdentifiersJsonList[jobIdentifiersIndex].AsString(m_jobIdentifiers[jobIdentifiersIndex]);
   }
   payload.WithArray("jobIdentifiers", std::move(jobIdentifiersJsonList));

  }

  return payload.View().WriteReadable();
}




