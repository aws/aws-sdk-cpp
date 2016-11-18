/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/route53domains/model/DeleteTagsForDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTagsForDomainRequest::DeleteTagsForDomainRequest() : 
    m_domainNameHasBeenSet(false),
    m_tagsToDeleteHasBeenSet(false)
{
}

Aws::String DeleteTagsForDomainRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_tagsToDeleteHasBeenSet)
  {
   Array<JsonValue> tagsToDeleteJsonList(m_tagsToDelete.size());
   for(unsigned tagsToDeleteIndex = 0; tagsToDeleteIndex < tagsToDeleteJsonList.GetLength(); ++tagsToDeleteIndex)
   {
     tagsToDeleteJsonList[tagsToDeleteIndex].AsString(m_tagsToDelete[tagsToDeleteIndex]);
   }
   payload.WithArray("TagsToDelete", std::move(tagsToDeleteJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteTagsForDomainRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.DeleteTagsForDomain"));
  return headers;

}



