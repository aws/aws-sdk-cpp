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

#include <aws/athena/model/BatchGetNamedQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetNamedQueryRequest::BatchGetNamedQueryRequest() : 
    m_namedQueryIdsHasBeenSet(false)
{
}

Aws::String BatchGetNamedQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_namedQueryIdsHasBeenSet)
  {
   Array<JsonValue> namedQueryIdsJsonList(m_namedQueryIds.size());
   for(unsigned namedQueryIdsIndex = 0; namedQueryIdsIndex < namedQueryIdsJsonList.GetLength(); ++namedQueryIdsIndex)
   {
     namedQueryIdsJsonList[namedQueryIdsIndex].AsString(m_namedQueryIds[namedQueryIdsIndex]);
   }
   payload.WithArray("NamedQueryIds", std::move(namedQueryIdsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetNamedQueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.BatchGetNamedQuery"));
  return headers;

}




