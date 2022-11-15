/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   Aws::Utils::Array<JsonValue> tagsToUpdateJsonList(m_tagsToUpdate.size());
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




