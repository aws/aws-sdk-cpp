/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/PutIntegrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutIntegrationRequest::PutIntegrationRequest() : 
    m_domainNameHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_objectTypeNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_flowDefinitionHasBeenSet(false)
{
}

Aws::String PutIntegrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_uriHasBeenSet)
  {
   payload.WithString("Uri", m_uri);

  }

  if(m_objectTypeNameHasBeenSet)
  {
   payload.WithString("ObjectTypeName", m_objectTypeName);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_flowDefinitionHasBeenSet)
  {
   payload.WithObject("FlowDefinition", m_flowDefinition.Jsonize());

  }

  return payload.View().WriteReadable();
}




