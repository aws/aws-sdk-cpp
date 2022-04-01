/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/UpdateResolverDnssecConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateResolverDnssecConfigRequest::UpdateResolverDnssecConfigRequest() : 
    m_resourceIdHasBeenSet(false),
    m_validation(Validation::NOT_SET),
    m_validationHasBeenSet(false)
{
}

Aws::String UpdateResolverDnssecConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_validationHasBeenSet)
  {
   payload.WithString("Validation", ValidationMapper::GetNameForValidation(m_validation));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateResolverDnssecConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.UpdateResolverDnssecConfig"));
  return headers;

}




