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
#include <aws/route53domains/model/GetDomainSuggestionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDomainSuggestionsRequest::GetDomainSuggestionsRequest() : 
    m_domainNameHasBeenSet(false),
    m_suggestionCount(0),
    m_suggestionCountHasBeenSet(false),
    m_onlyAvailable(false),
    m_onlyAvailableHasBeenSet(false)
{
}

Aws::String GetDomainSuggestionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_suggestionCountHasBeenSet)
  {
   payload.WithInteger("SuggestionCount", m_suggestionCount);

  }

  if(m_onlyAvailableHasBeenSet)
  {
   payload.WithBool("OnlyAvailable", m_onlyAvailable);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection GetDomainSuggestionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.GetDomainSuggestions"));
  return headers;

}



