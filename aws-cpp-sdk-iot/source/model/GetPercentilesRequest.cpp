/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> percentsJsonList(m_percents.size());
   for(unsigned percentsIndex = 0; percentsIndex < percentsJsonList.GetLength(); ++percentsIndex)
   {
     percentsJsonList[percentsIndex].AsDouble(m_percents[percentsIndex]);
   }
   payload.WithArray("percents", std::move(percentsJsonList));

  }

  return payload.View().WriteReadable();
}




