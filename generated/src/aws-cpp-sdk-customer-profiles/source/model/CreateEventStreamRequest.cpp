/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/CreateEventStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEventStreamRequest::CreateEventStreamRequest() : 
    m_domainNameHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_eventStreamNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateEventStreamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_uriHasBeenSet)
  {
   payload.WithString("Uri", m_uri);

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

  return payload.View().WriteReadable();
}




