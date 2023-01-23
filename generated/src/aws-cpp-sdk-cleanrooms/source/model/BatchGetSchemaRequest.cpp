/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/BatchGetSchemaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetSchemaRequest::BatchGetSchemaRequest() : 
    m_collaborationIdentifierHasBeenSet(false),
    m_namesHasBeenSet(false)
{
}

Aws::String BatchGetSchemaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_namesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> namesJsonList(m_names.size());
   for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
   {
     namesJsonList[namesIndex].AsString(m_names[namesIndex]);
   }
   payload.WithArray("names", std::move(namesJsonList));

  }

  return payload.View().WriteReadable();
}




