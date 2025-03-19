/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/CreatePrivacyBudgetTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreatePrivacyBudgetTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoRefreshHasBeenSet)
  {
   payload.WithString("autoRefresh", PrivacyBudgetTemplateAutoRefreshMapper::GetNameForPrivacyBudgetTemplateAutoRefresh(m_autoRefresh));
  }

  if(m_privacyBudgetTypeHasBeenSet)
  {
   payload.WithString("privacyBudgetType", PrivacyBudgetTypeMapper::GetNameForPrivacyBudgetType(m_privacyBudgetType));
  }

  if(m_parametersHasBeenSet)
  {
   payload.WithObject("parameters", m_parameters.Jsonize());

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




