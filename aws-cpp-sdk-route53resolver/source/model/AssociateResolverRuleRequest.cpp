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

#include <aws/route53resolver/model/AssociateResolverRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateResolverRuleRequest::AssociateResolverRuleRequest() : 
    m_resolverRuleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_vPCIdHasBeenSet(false)
{
}

Aws::String AssociateResolverRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resolverRuleIdHasBeenSet)
  {
   payload.WithString("ResolverRuleId", m_resolverRuleId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_vPCIdHasBeenSet)
  {
   payload.WithString("VPCId", m_vPCId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateResolverRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.AssociateResolverRule"));
  return headers;

}




