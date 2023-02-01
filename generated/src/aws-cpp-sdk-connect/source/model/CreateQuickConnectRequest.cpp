/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateQuickConnectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateQuickConnectRequest::CreateQuickConnectRequest() : 
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_quickConnectConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateQuickConnectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_quickConnectConfigHasBeenSet)
  {
   payload.WithObject("QuickConnectConfig", m_quickConnectConfig.Jsonize());

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




