/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchGetBlueprintsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetBlueprintsRequest::BatchGetBlueprintsRequest() : 
    m_namesHasBeenSet(false),
    m_includeBlueprint(false),
    m_includeBlueprintHasBeenSet(false),
    m_includeParameterSpec(false),
    m_includeParameterSpecHasBeenSet(false)
{
}

Aws::String BatchGetBlueprintsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_namesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> namesJsonList(m_names.size());
   for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
   {
     namesJsonList[namesIndex].AsString(m_names[namesIndex]);
   }
   payload.WithArray("Names", std::move(namesJsonList));

  }

  if(m_includeBlueprintHasBeenSet)
  {
   payload.WithBool("IncludeBlueprint", m_includeBlueprint);

  }

  if(m_includeParameterSpecHasBeenSet)
  {
   payload.WithBool("IncludeParameterSpec", m_includeParameterSpec);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetBlueprintsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.BatchGetBlueprints"));
  return headers;

}




