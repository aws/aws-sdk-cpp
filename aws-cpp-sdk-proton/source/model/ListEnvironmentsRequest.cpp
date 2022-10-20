/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ListEnvironmentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListEnvironmentsRequest::ListEnvironmentsRequest() : 
    m_environmentTemplatesHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListEnvironmentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_environmentTemplatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentTemplatesJsonList(m_environmentTemplates.size());
   for(unsigned environmentTemplatesIndex = 0; environmentTemplatesIndex < environmentTemplatesJsonList.GetLength(); ++environmentTemplatesIndex)
   {
     environmentTemplatesJsonList[environmentTemplatesIndex].AsObject(m_environmentTemplates[environmentTemplatesIndex].Jsonize());
   }
   payload.WithArray("environmentTemplates", std::move(environmentTemplatesJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListEnvironmentsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.ListEnvironments"));
  return headers;

}




