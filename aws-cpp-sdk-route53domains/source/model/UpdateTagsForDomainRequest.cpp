﻿/*
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

#include <aws/route53domains/model/UpdateTagsForDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTagsForDomainRequest::UpdateTagsForDomainRequest() : 
    m_domainNameHasBeenSet(false),
    m_tagsToUpdateHasBeenSet(false)
{
}

Aws::String UpdateTagsForDomainRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_tagsToUpdateHasBeenSet)
  {
   Array<JsonValue> tagsToUpdateJsonList(m_tagsToUpdate.size());
   for(unsigned tagsToUpdateIndex = 0; tagsToUpdateIndex < tagsToUpdateJsonList.GetLength(); ++tagsToUpdateIndex)
   {
     tagsToUpdateJsonList[tagsToUpdateIndex].AsObject(m_tagsToUpdate[tagsToUpdateIndex].Jsonize());
   }
   payload.WithArray("TagsToUpdate", std::move(tagsToUpdateJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTagsForDomainRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.UpdateTagsForDomain"));
  return headers;

}




