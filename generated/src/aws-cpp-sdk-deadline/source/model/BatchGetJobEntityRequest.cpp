/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/BatchGetJobEntityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetJobEntityRequest::BatchGetJobEntityRequest() : 
    m_farmIdHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_identifiersHasBeenSet(false),
    m_workerIdHasBeenSet(false)
{
}

Aws::String BatchGetJobEntityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> identifiersJsonList(m_identifiers.size());
   for(unsigned identifiersIndex = 0; identifiersIndex < identifiersJsonList.GetLength(); ++identifiersIndex)
   {
     identifiersJsonList[identifiersIndex].AsObject(m_identifiers[identifiersIndex].Jsonize());
   }
   payload.WithArray("identifiers", std::move(identifiersJsonList));

  }

  return payload.View().WriteReadable();
}




