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

#include <aws/route53resolver/model/CreateResolverRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateResolverRuleRequest::CreateResolverRuleRequest() : 
    m_creatorRequestIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleType(RuleTypeOption::NOT_SET),
    m_ruleTypeHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_targetIpsHasBeenSet(false),
    m_resolverEndpointIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateResolverRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ruleTypeHasBeenSet)
  {
   payload.WithString("RuleType", RuleTypeOptionMapper::GetNameForRuleTypeOption(m_ruleType));
  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_targetIpsHasBeenSet)
  {
   Array<JsonValue> targetIpsJsonList(m_targetIps.size());
   for(unsigned targetIpsIndex = 0; targetIpsIndex < targetIpsJsonList.GetLength(); ++targetIpsIndex)
   {
     targetIpsJsonList[targetIpsIndex].AsObject(m_targetIps[targetIpsIndex].Jsonize());
   }
   payload.WithArray("TargetIps", std::move(targetIpsJsonList));

  }

  if(m_resolverEndpointIdHasBeenSet)
  {
   payload.WithString("ResolverEndpointId", m_resolverEndpointId);

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

Aws::Http::HeaderValueCollection CreateResolverRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.CreateResolverRule"));
  return headers;

}




