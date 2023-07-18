/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/CreateReadinessCheckRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateReadinessCheckRequest::CreateReadinessCheckRequest() : 
    m_readinessCheckNameHasBeenSet(false),
    m_resourceSetNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateReadinessCheckRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_readinessCheckNameHasBeenSet)
  {
   payload.WithString("readinessCheckName", m_readinessCheckName);

  }

  if(m_resourceSetNameHasBeenSet)
  {
   payload.WithString("resourceSetName", m_resourceSetName);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




