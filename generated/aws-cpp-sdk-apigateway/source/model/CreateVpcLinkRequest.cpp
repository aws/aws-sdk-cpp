﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CreateVpcLinkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateVpcLinkRequest::CreateVpcLinkRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_targetArnsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateVpcLinkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_targetArnsHasBeenSet)
  {
   Array<JsonValue> targetArnsJsonList(m_targetArns.size());
   for(unsigned targetArnsIndex = 0; targetArnsIndex < targetArnsJsonList.GetLength(); ++targetArnsIndex)
   {
     targetArnsJsonList[targetArnsIndex].AsString(m_targetArns[targetArnsIndex]);
   }
   payload.WithArray("targetArns", std::move(targetArnsJsonList));

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




