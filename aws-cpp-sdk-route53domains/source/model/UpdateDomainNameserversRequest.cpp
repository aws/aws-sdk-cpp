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
#include <aws/route53domains/model/UpdateDomainNameserversRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDomainNameserversRequest::UpdateDomainNameserversRequest() : 
    m_domainNameHasBeenSet(false),
    m_fIAuthKeyHasBeenSet(false),
    m_nameserversHasBeenSet(false)
{
}

Aws::String UpdateDomainNameserversRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_fIAuthKeyHasBeenSet)
  {
   payload.WithString("FIAuthKey", m_fIAuthKey);

  }

  if(m_nameserversHasBeenSet)
  {
   Array<JsonValue> nameserversJsonList(m_nameservers.size());
   for(unsigned nameserversIndex = 0; nameserversIndex < nameserversJsonList.GetLength(); ++nameserversIndex)
   {
     nameserversJsonList[nameserversIndex].AsObject(m_nameservers[nameserversIndex].Jsonize());
   }
   payload.WithArray("Nameservers", std::move(nameserversJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDomainNameserversRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.UpdateDomainNameservers"));
  return headers;

}



