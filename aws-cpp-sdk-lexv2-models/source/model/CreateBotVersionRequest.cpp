/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CreateBotVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBotVersionRequest::CreateBotVersionRequest() : 
    m_botIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_botVersionLocaleSpecificationHasBeenSet(false)
{
}

Aws::String CreateBotVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_botVersionLocaleSpecificationHasBeenSet)
  {
   JsonValue botVersionLocaleSpecificationJsonMap;
   for(auto& botVersionLocaleSpecificationItem : m_botVersionLocaleSpecification)
   {
     botVersionLocaleSpecificationJsonMap.WithObject(botVersionLocaleSpecificationItem.first, botVersionLocaleSpecificationItem.second.Jsonize());
   }
   payload.WithObject("botVersionLocaleSpecification", std::move(botVersionLocaleSpecificationJsonMap));

  }

  return payload.View().WriteReadable();
}




