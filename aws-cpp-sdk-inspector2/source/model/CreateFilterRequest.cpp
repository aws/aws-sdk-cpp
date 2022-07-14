/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CreateFilterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFilterRequest::CreateFilterRequest() : 
    m_action(FilterAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_filterCriteriaHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateFilterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", FilterActionMapper::GetNameForFilterAction(m_action));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_filterCriteriaHasBeenSet)
  {
   payload.WithObject("filterCriteria", m_filterCriteria.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

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




