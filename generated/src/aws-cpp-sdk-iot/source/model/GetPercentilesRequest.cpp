/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/GetPercentilesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPercentilesRequest::GetPercentilesRequest() : 
    m_indexNameHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_aggregationFieldHasBeenSet(false),
    m_queryVersionHasBeenSet(false),
    m_percentsHasBeenSet(false)
{
}

Aws::String GetPercentilesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("indexName", m_indexName);

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("queryString", m_queryString);

  }

  if(m_aggregationFieldHasBeenSet)
  {
   payload.WithString("aggregationField", m_aggregationField);

  }

  if(m_queryVersionHasBeenSet)
  {
   payload.WithString("queryVersion", m_queryVersion);

  }

  if(m_percentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> percentsJsonList(m_percents.size());
   for(unsigned percentsIndex = 0; percentsIndex < percentsJsonList.GetLength(); ++percentsIndex)
   {
     percentsJsonList[percentsIndex].AsDouble(m_percents[percentsIndex]);
   }
   payload.WithArray("percents", std::move(percentsJsonList));

  }

  return payload.View().WriteReadable();
}




