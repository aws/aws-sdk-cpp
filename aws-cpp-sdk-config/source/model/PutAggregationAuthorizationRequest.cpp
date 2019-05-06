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

#include <aws/config/model/PutAggregationAuthorizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAggregationAuthorizationRequest::PutAggregationAuthorizationRequest() : 
    m_authorizedAccountIdHasBeenSet(false),
    m_authorizedAwsRegionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String PutAggregationAuthorizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authorizedAccountIdHasBeenSet)
  {
   payload.WithString("AuthorizedAccountId", m_authorizedAccountId);

  }

  if(m_authorizedAwsRegionHasBeenSet)
  {
   payload.WithString("AuthorizedAwsRegion", m_authorizedAwsRegion);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutAggregationAuthorizationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.PutAggregationAuthorization"));
  return headers;

}




